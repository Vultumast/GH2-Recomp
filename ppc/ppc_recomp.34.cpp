#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821BFFA0"))) PPC_WEAK_FUNC(sub_821BFFA0);
PPC_FUNC_IMPL(__imp__sub_821BFFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-17660(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17660);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_821BFFD4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821bfffc
	if (cr6.eq) goto loc_821BFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bee50
	sub_821BEE50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x821bffd4
	goto loc_821BFFD4;
loc_821BFFFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821BFFA8"))) PPC_WEAK_FUNC(sub_821BFFA8);
PPC_FUNC_IMPL(__imp__sub_821BFFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_821BFFD4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821bfffc
	if (cr6.eq) goto loc_821BFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bee50
	sub_821BEE50(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x821bffd4
	goto loc_821BFFD4;
loc_821BFFFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C0008"))) PPC_WEAK_FUNC(sub_821C0008);
PPC_FUNC_IMPL(__imp__sub_821C0008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-17660(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17660);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x821bfae8
	sub_821BFAE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0010"))) PPC_WEAK_FUNC(sub_821C0010);
PPC_FUNC_IMPL(__imp__sub_821C0010) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x821bfae8
	sub_821BFAE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821C0040"))) PPC_WEAK_FUNC(sub_821C0040);
PPC_FUNC_IMPL(__imp__sub_821C0040) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-17400(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17400);
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
	// beq cr6,0x821c00cc
	if (cr6.eq) goto loc_821C00CC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,-17464
	r11.s64 = r11.s64 + -17464;
	// addi r10,r10,-17476
	ctx.r10.s64 = ctx.r10.s64 + -17476;
	// addi r9,r9,-17484
	ctx.r9.s64 = ctx.r9.s64 + -17484;
	// addi r3,r30,288
	ctx.r3.s64 = r30.s64 + 288;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,336(r30)
	PPC_STORE_U32(r30.u32 + 336, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,332
	r11.s64 = r30.s64 + 332;
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
loc_821C00CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r28,r30,36
	r28.s64 = r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-17524
	r11.s64 = r11.s64 + -17524;
	// addi r10,r10,-17532
	ctx.r10.s64 = ctx.r10.s64 + -17532;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,-17596
	ctx.r9.s64 = ctx.r9.s64 + -17596;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r8,-17604
	ctx.r8.s64 = ctx.r8.s64 + -17604;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-284
	ctx.r10.s64 = r11.s64 + -284;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-328
	ctx.r10.s64 = r11.s64 + -328;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r29.u32);
	// stw r29,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r29.u32);
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,236
	r28.s64 = r30.s64 + 236;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82126aa8
	sub_82126AA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,248
	r11.s64 = r30.s64 + 248;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
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
	// addi r28,r30,256
	r28.s64 = r30.s64 + 256;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82126c30
	sub_82126C30(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18660
	r11.s64 = r11.s64 + -18660;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r29,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r29.u32);
	// stw r29,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r29.u32);
	// stw r10,276(r30)
	PPC_STORE_U32(r30.u32 + 276, ctx.r10.u32);
	// stw r29,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C0048"))) PPC_WEAK_FUNC(sub_821C0048);
PPC_FUNC_IMPL(__imp__sub_821C0048) {
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
	// beq cr6,0x821c00cc
	if (cr6.eq) goto loc_821C00CC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,-17464
	r11.s64 = r11.s64 + -17464;
	// addi r10,r10,-17476
	ctx.r10.s64 = ctx.r10.s64 + -17476;
	// addi r9,r9,-17484
	ctx.r9.s64 = ctx.r9.s64 + -17484;
	// addi r3,r30,288
	ctx.r3.s64 = r30.s64 + 288;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,336(r30)
	PPC_STORE_U32(r30.u32 + 336, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,332
	r11.s64 = r30.s64 + 332;
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
loc_821C00CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r28,r30,36
	r28.s64 = r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-17524
	r11.s64 = r11.s64 + -17524;
	// addi r10,r10,-17532
	ctx.r10.s64 = ctx.r10.s64 + -17532;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,-17596
	ctx.r9.s64 = ctx.r9.s64 + -17596;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r8,r8,-17604
	ctx.r8.s64 = ctx.r8.s64 + -17604;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-284
	ctx.r10.s64 = r11.s64 + -284;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-328
	ctx.r10.s64 = r11.s64 + -328;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r29,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r29.u32);
	// stw r29,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r29.u32);
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,236
	r28.s64 = r30.s64 + 236;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82126aa8
	sub_82126AA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,8860
	r11.s64 = r11.s64 + 8860;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r11,r30,248
	r11.s64 = r30.s64 + 248;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
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
	// addi r28,r30,256
	r28.s64 = r30.s64 + 256;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82126c30
	sub_82126C30(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-18660
	r11.s64 = r11.s64 + -18660;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r29,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r29.u32);
	// stw r29,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r29.u32);
	// stw r10,276(r30)
	PPC_STORE_U32(r30.u32 + 276, ctx.r10.u32);
	// stw r29,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C01FC"))) PPC_WEAK_FUNC(sub_821C01FC);
PPC_FUNC_IMPL(__imp__sub_821C01FC) {
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
	// beq 0x821c0230
	if (cr0.eq) goto loc_821C0230;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,288
	ctx.r3.s64 = r11.s64 + 288;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_821C0230:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0240"))) PPC_WEAK_FUNC(sub_821C0240);
PPC_FUNC_IMPL(__imp__sub_821C0240) {
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
	// addi r3,r11,220
	ctx.r3.s64 = r11.s64 + 220;
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

__attribute__((alias("__imp__sub_821C026C"))) PPC_WEAK_FUNC(sub_821C026C);
PPC_FUNC_IMPL(__imp__sub_821C026C) {
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
	// addi r3,r11,216
	ctx.r3.s64 = r11.s64 + 216;
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

__attribute__((alias("__imp__sub_821C0298"))) PPC_WEAK_FUNC(sub_821C0298);
PPC_FUNC_IMPL(__imp__sub_821C0298) {
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
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C02C4"))) PPC_WEAK_FUNC(sub_821C02C4);
PPC_FUNC_IMPL(__imp__sub_821C02C4) {
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
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
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

__attribute__((alias("__imp__sub_821C02F0"))) PPC_WEAK_FUNC(sub_821C02F0);
PPC_FUNC_IMPL(__imp__sub_821C02F0) {
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
	// addi r3,r11,248
	ctx.r3.s64 = r11.s64 + 248;
	// bl 0x821beec0
	sub_821BEEC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C031C"))) PPC_WEAK_FUNC(sub_821C031C);
PPC_FUNC_IMPL(__imp__sub_821C031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0320"))) PPC_WEAK_FUNC(sub_821C0320);
PPC_FUNC_IMPL(__imp__sub_821C0320) {
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
	// bl 0x821405c8
	sub_821405C8(ctx, base);
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

__attribute__((alias("__imp__sub_821C0350"))) PPC_WEAK_FUNC(sub_821C0350);
PPC_FUNC_IMPL(__imp__sub_821C0350) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-248
	ctx.r3.s64 = ctx.r3.s64 + -248;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0358"))) PPC_WEAK_FUNC(sub_821C0358);
PPC_FUNC_IMPL(__imp__sub_821C0358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821c11b8
	sub_821C11B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0364"))) PPC_WEAK_FUNC(sub_821C0364);
PPC_FUNC_IMPL(__imp__sub_821C0364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0368"))) PPC_WEAK_FUNC(sub_821C0368);
PPC_FUNC_IMPL(__imp__sub_821C0368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821c0350
	sub_821C0350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0374"))) PPC_WEAK_FUNC(sub_821C0374);
PPC_FUNC_IMPL(__imp__sub_821C0374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0378"))) PPC_WEAK_FUNC(sub_821C0378);
PPC_FUNC_IMPL(__imp__sub_821C0378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821c0320
	sub_821C0320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0384"))) PPC_WEAK_FUNC(sub_821C0384);
PPC_FUNC_IMPL(__imp__sub_821C0384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0388"))) PPC_WEAK_FUNC(sub_821C0388);
PPC_FUNC_IMPL(__imp__sub_821C0388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821bc288
	sub_821BC288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0394"))) PPC_WEAK_FUNC(sub_821C0394);
PPC_FUNC_IMPL(__imp__sub_821C0394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0398"))) PPC_WEAK_FUNC(sub_821C0398);
PPC_FUNC_IMPL(__imp__sub_821C0398) {
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
	// lwz r16,-17320(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17320);
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
	// lwz r11,10944(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10944);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821c041c
	if (!cr0.eq) goto loc_821C041C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10944, r11.u32);
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
	// bl 0x821405c8
	sub_821405C8(ctx, base);
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
	// stw r3,10940(r27)
	PPC_STORE_U32(r27.u32 + 10940, ctx.r3.u32);
	// b 0x821c0420
	goto loc_821C0420;
loc_821C041C:
	// lwz r3,10940(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 10940);
loc_821C0420:
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
	// beq 0x821c045c
	if (cr0.eq) goto loc_821C045C;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821c04d8
	goto loc_821C04D8;
loc_821C045C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821c04bc
	if (!cr0.eq) goto loc_821C04BC;
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c0480
	if (!cr0.eq) goto loc_821C0480;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c0490
	goto loc_821C0490;
loc_821C0480:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
loc_821C0490:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-284
	ctx.r4.s64 = r11.s64 + -284;
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
loc_821C04BC:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821C04D8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821C03A0"))) PPC_WEAK_FUNC(sub_821C03A0);
PPC_FUNC_IMPL(__imp__sub_821C03A0) {
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
	// lwz r11,10944(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10944);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821c041c
	if (!cr0.eq) goto loc_821C041C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10944, r11.u32);
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
	// bl 0x821405c8
	sub_821405C8(ctx, base);
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
	// stw r3,10940(r27)
	PPC_STORE_U32(r27.u32 + 10940, ctx.r3.u32);
	// b 0x821c0420
	goto loc_821C0420;
loc_821C041C:
	// lwz r3,10940(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 10940);
loc_821C0420:
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
	// beq 0x821c045c
	if (cr0.eq) goto loc_821C045C;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821c04d8
	goto loc_821C04D8;
loc_821C045C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821c04bc
	if (!cr0.eq) goto loc_821C04BC;
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c0480
	if (!cr0.eq) goto loc_821C0480;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c0490
	goto loc_821C0490;
loc_821C0480:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
loc_821C0490:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-284
	ctx.r4.s64 = r11.s64 + -284;
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
loc_821C04BC:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821C04D8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821C04E4"))) PPC_WEAK_FUNC(sub_821C04E4);
PPC_FUNC_IMPL(__imp__sub_821C04E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10944
	r11.s64 = r11.s64 + 10944;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10944
	ctx.r10.s64 = ctx.r10.s64 + 10944;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C050C"))) PPC_WEAK_FUNC(sub_821C050C);
PPC_FUNC_IMPL(__imp__sub_821C050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0510"))) PPC_WEAK_FUNC(sub_821C0510);
PPC_FUNC_IMPL(__imp__sub_821C0510) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0518"))) PPC_WEAK_FUNC(sub_821C0518);
PPC_FUNC_IMPL(__imp__sub_821C0518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821c03a0
	sub_821C03A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0524"))) PPC_WEAK_FUNC(sub_821C0524);
PPC_FUNC_IMPL(__imp__sub_821C0524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0528"))) PPC_WEAK_FUNC(sub_821C0528);
PPC_FUNC_IMPL(__imp__sub_821C0528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821bda58
	sub_821BDA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0534"))) PPC_WEAK_FUNC(sub_821C0534);
PPC_FUNC_IMPL(__imp__sub_821C0534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0538"))) PPC_WEAK_FUNC(sub_821C0538);
PPC_FUNC_IMPL(__imp__sub_821C0538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821bf3b8
	sub_821BF3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0544"))) PPC_WEAK_FUNC(sub_821C0544);
PPC_FUNC_IMPL(__imp__sub_821C0544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0548"))) PPC_WEAK_FUNC(sub_821C0548);
PPC_FUNC_IMPL(__imp__sub_821C0548) {
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
	// lwz r16,-17208(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17208);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-17524
	r11.s64 = r11.s64 + -17524;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r30,-252
	r28.s64 = r30.s64 + -252;
	// addi r10,r10,-17532
	ctx.r10.s64 = ctx.r10.s64 + -17532;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,-288(r30)
	PPC_STORE_U32(r30.u32 + -288, r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// addi r9,r9,-17596
	ctx.r9.s64 = ctx.r9.s64 + -17596;
	// addi r8,r8,-17604
	ctx.r8.s64 = ctx.r8.s64 + -17604;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-284(r11)
	PPC_STORE_U32(r11.u32 + -284, ctx.r9.u32);
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-284(r11)
	PPC_STORE_U32(r11.u32 + -284, ctx.r8.u32);
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-284
	ctx.r10.s64 = r11.s64 + -284;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-288(r11)
	PPC_STORE_U32(r11.u32 + -288, ctx.r10.u32);
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-328
	ctx.r10.s64 = r11.s64 + -328;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-288(r11)
	PPC_STORE_U32(r11.u32 + -288, ctx.r10.u32);
	// lwz r29,-20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x821c05f8
	if (cr0.eq) goto loc_821C05F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bcd70
	sub_821BCD70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821C05F8:
	// li r27,0
	r27.s64 = 0;
	// lwz r29,-8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r27,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r27.u32);
	// beq 0x821c0620
	if (cr0.eq) goto loc_821C0620;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C0620:
	// stw r27,-8(r30)
	PPC_STORE_U32(r30.u32 + -8, r27.u32);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x821bde98
	sub_821BDE98(ctx, base);
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// bl 0x821266e8
	sub_821266E8(ctx, base);
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
	// addi r29,r30,-72
	r29.s64 = r30.s64 + -72;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821c0664
	if (cr6.eq) goto loc_821C0664;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
loc_821C0664:
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c0670
	if (!cr0.eq) goto loc_821C0670;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_821C0670:
	// addi r3,r28,184
	ctx.r3.s64 = r28.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821C0550"))) PPC_WEAK_FUNC(sub_821C0550);
PPC_FUNC_IMPL(__imp__sub_821C0550) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-17524
	r11.s64 = r11.s64 + -17524;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r30,-252
	r28.s64 = r30.s64 + -252;
	// addi r10,r10,-17532
	ctx.r10.s64 = ctx.r10.s64 + -17532;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,-288(r30)
	PPC_STORE_U32(r30.u32 + -288, r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// addi r9,r9,-17596
	ctx.r9.s64 = ctx.r9.s64 + -17596;
	// addi r8,r8,-17604
	ctx.r8.s64 = ctx.r8.s64 + -17604;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-284(r11)
	PPC_STORE_U32(r11.u32 + -284, ctx.r9.u32);
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-284(r11)
	PPC_STORE_U32(r11.u32 + -284, ctx.r8.u32);
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-284
	ctx.r10.s64 = r11.s64 + -284;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-288(r11)
	PPC_STORE_U32(r11.u32 + -288, ctx.r10.u32);
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-328
	ctx.r10.s64 = r11.s64 + -328;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-288(r11)
	PPC_STORE_U32(r11.u32 + -288, ctx.r10.u32);
	// lwz r29,-20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x821c05f8
	if (cr0.eq) goto loc_821C05F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bcd70
	sub_821BCD70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821C05F8:
	// li r27,0
	r27.s64 = 0;
	// lwz r29,-8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r27,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r27.u32);
	// beq 0x821c0620
	if (cr0.eq) goto loc_821C0620;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C0620:
	// stw r27,-8(r30)
	PPC_STORE_U32(r30.u32 + -8, r27.u32);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x821bde98
	sub_821BDE98(ctx, base);
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// bl 0x821266e8
	sub_821266E8(ctx, base);
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
	// addi r29,r30,-72
	r29.s64 = r30.s64 + -72;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821c0664
	if (cr6.eq) goto loc_821C0664;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
loc_821C0664:
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c0670
	if (!cr0.eq) goto loc_821C0670;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_821C0670:
	// addi r3,r28,184
	ctx.r3.s64 = r28.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821C0680"))) PPC_WEAK_FUNC(sub_821C0680);
PPC_FUNC_IMPL(__imp__sub_821C0680) {
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
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addic. r11,r11,-288
	xer.ca = r11.u32 > 287;
	r11.s64 = r11.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c06b0
	if (cr0.eq) goto loc_821C06B0;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r11,r11,-288
	r11.s64 = r11.s64 + -288;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x821c06b8
	goto loc_821C06B8;
loc_821C06B0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_821C06B8:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
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

__attribute__((alias("__imp__sub_821C06D4"))) PPC_WEAK_FUNC(sub_821C06D4);
PPC_FUNC_IMPL(__imp__sub_821C06D4) {
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
	// addi r11,r11,-288
	r11.s64 = r11.s64 + -288;
	// addi r3,r11,216
	ctx.r3.s64 = r11.s64 + 216;
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

__attribute__((alias("__imp__sub_821C0704"))) PPC_WEAK_FUNC(sub_821C0704);
PPC_FUNC_IMPL(__imp__sub_821C0704) {
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
	// addi r11,r11,-288
	r11.s64 = r11.s64 + -288;
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0734"))) PPC_WEAK_FUNC(sub_821C0734);
PPC_FUNC_IMPL(__imp__sub_821C0734) {
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
	// addi r11,r11,-288
	r11.s64 = r11.s64 + -288;
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
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

__attribute__((alias("__imp__sub_821C0764"))) PPC_WEAK_FUNC(sub_821C0764);
PPC_FUNC_IMPL(__imp__sub_821C0764) {
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
	// addi r11,r11,-288
	r11.s64 = r11.s64 + -288;
	// addi r3,r11,248
	ctx.r3.s64 = r11.s64 + 248;
	// bl 0x821beec0
	sub_821BEEC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0794"))) PPC_WEAK_FUNC(sub_821C0794);
PPC_FUNC_IMPL(__imp__sub_821C0794) {
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
	// addi r11,r11,-288
	r11.s64 = r11.s64 + -288;
	// addi r3,r11,256
	ctx.r3.s64 = r11.s64 + 256;
	// bl 0x82126e70
	sub_82126E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C07C4"))) PPC_WEAK_FUNC(sub_821C07C4);
PPC_FUNC_IMPL(__imp__sub_821C07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C07C8"))) PPC_WEAK_FUNC(sub_821C07C8);
PPC_FUNC_IMPL(__imp__sub_821C07C8) {
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
	// beq cr6,0x821c081c
	if (cr6.eq) goto loc_821C081C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x821c0808
	if (cr6.lt) goto loc_821C0808;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821be6c0
	sub_821BE6C0(ctx, base);
	// b 0x821c081c
	goto loc_821C081C;
loc_821C0808:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x821bfbf0
	sub_821BFBF0(ctx, base);
loc_821C081C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C082C"))) PPC_WEAK_FUNC(sub_821C082C);
PPC_FUNC_IMPL(__imp__sub_821C082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0830"))) PPC_WEAK_FUNC(sub_821C0830);
PPC_FUNC_IMPL(__imp__sub_821C0830) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// beq cr6,0x821c08e4
	if (cr6.eq) goto loc_821C08E4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x821c0888
	goto loc_821C0888;
loc_821C085C:
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821c08a0
	if (cr0.eq) goto loc_821C08A0;
	// lbz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stb r9,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r9.u8);
loc_821C0888:
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
	// bne 0x821c085c
	if (!cr0.eq) goto loc_821C085C;
loc_821C08A0:
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821c08d0
	if (cr0.eq) goto loc_821C08D0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821be648
	sub_821BE648(ctx, base);
	// b 0x821c08e4
	goto loc_821C08E4;
loc_821C08D0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bfa08
	sub_821BFA08(ctx, base);
loc_821C08E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_821C08FC"))) PPC_WEAK_FUNC(sub_821C08FC);
PPC_FUNC_IMPL(__imp__sub_821C08FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0900"))) PPC_WEAK_FUNC(sub_821C0900);
PPC_FUNC_IMPL(__imp__sub_821C0900) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x821c0958
	if (!cr6.lt) goto loc_821C0958;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x821bef30
	sub_821BEF30(ctx, base);
	// b 0x821c0970
	goto loc_821C0970;
loc_821C0958:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x821bf1b0
	sub_821BF1B0(ctx, base);
loc_821C0970:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x821c0988
	goto loc_821C0988;
loc_821C0978:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_821C0988:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821c0978
	if (!cr6.eq) goto loc_821C0978;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C09A0"))) PPC_WEAK_FUNC(sub_821C09A0);
PPC_FUNC_IMPL(__imp__sub_821C09A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x821c09f8
	if (!cr6.lt) goto loc_821C09F8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x821bf0b8
	sub_821BF0B8(ctx, base);
	// b 0x821c0a10
	goto loc_821C0A10;
loc_821C09F8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x821bf210
	sub_821BF210(ctx, base);
loc_821C0A10:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x821c0a28
	goto loc_821C0A28;
loc_821C0A18:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_821C0A28:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821c0a18
	if (!cr6.eq) goto loc_821C0A18;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C0A40"))) PPC_WEAK_FUNC(sub_821C0A40);
PPC_FUNC_IMPL(__imp__sub_821C0A40) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-17096(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17096);
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
	// bl 0x821bf028
	sub_821BF028(ctx, base);
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r29,80
	ctx.r4.s64 = r29.s64 + 80;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// bl 0x821bf900
	sub_821BF900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C0A48"))) PPC_WEAK_FUNC(sub_821C0A48);
PPC_FUNC_IMPL(__imp__sub_821C0A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x821bf028
	sub_821BF028(ctx, base);
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r29,80
	ctx.r4.s64 = r29.s64 + 80;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// bl 0x821bf900
	sub_821BF900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C0A98"))) PPC_WEAK_FUNC(sub_821C0A98);
PPC_FUNC_IMPL(__imp__sub_821C0A98) {
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
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0AC0"))) PPC_WEAK_FUNC(sub_821C0AC0);
PPC_FUNC_IMPL(__imp__sub_821C0AC0) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r26,4(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(r25.u32, r29.u32, xer);
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x821c0ba4
	if (cr6.eq) goto loc_821C0BA4;
	// subf r27,r29,r25
	r27.s64 = r25.s64 - r29.s64;
loc_821C0AF4:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// beq cr6,0x821c0b48
	if (cr6.eq) goto loc_821C0B48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bed70
	sub_821BED70(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821c0b38
	if (cr6.eq) goto loc_821C0B38;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r27,r31
	r11.u64 = r27.u64 + r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_821C0B38:
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x821c0af4
	if (!cr6.eq) goto loc_821C0AF4;
loc_821C0B48:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x821c0ba4
	if (cr6.eq) goto loc_821C0BA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bfae8
	sub_821BFAE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x821c0bb0
	goto loc_821C0BB0;
loc_821C0B68:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821bed70
	sub_821BED70(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821c0b9c
	if (cr6.eq) goto loc_821C0B9C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_821C0B9C:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
loc_821C0BA4:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x821c0b68
	if (!cr6.eq) goto loc_821C0B68;
loc_821C0BB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821bfb40
	sub_821BFB40(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r30,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821C0BCC"))) PPC_WEAK_FUNC(sub_821C0BCC);
PPC_FUNC_IMPL(__imp__sub_821C0BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0BD0"))) PPC_WEAK_FUNC(sub_821C0BD0);
PPC_FUNC_IMPL(__imp__sub_821C0BD0) {
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
	// lwz r16,-17040(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17040);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x821c0c18
	if (cr6.lt) goto loc_821C0C18;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821c0c1c
	if (cr6.lt) goto loc_821C0C1C;
loc_821C0C18:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_821C0C1C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c0c74
	if (cr0.eq) goto loc_821C0C74;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821be908
	sub_821BE908(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// bl 0x821c0bd8
	sub_821C0BD8(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c0cf0
	if (cr6.eq) goto loc_821C0CF0;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x821c0cf0
	goto loc_821C0CF0;
loc_821C0C74:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r26,r25,12
	r26.s64 = r25.s64 * 12;
	// addi r30,r11,-12
	r30.s64 = r11.s64 + -12;
	// add r28,r26,r30
	r28.u64 = r26.u64 + r30.u64;
	// b 0x821c0cc8
	goto loc_821C0CC8;
loc_821C0C88:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x821c0cb4
	if (cr6.eq) goto loc_821C0CB4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
loc_821C0CB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bed70
	sub_821BED70(ctx, base);
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// addi r28,r28,-12
	r28.s64 = r28.s64 + -12;
loc_821C0CC8:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bge cr6,0x821c0c88
	if (!cr6.lt) goto loc_821C0C88;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821bffa8
	sub_821BFFA8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821C0CF0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821C0BD8"))) PPC_WEAK_FUNC(sub_821C0BD8);
PPC_FUNC_IMPL(__imp__sub_821C0BD8) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x821c0c18
	if (cr6.lt) goto loc_821C0C18;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821c0c1c
	if (cr6.lt) goto loc_821C0C1C;
loc_821C0C18:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_821C0C1C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c0c74
	if (cr0.eq) goto loc_821C0C74;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821be908
	sub_821BE908(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// bl 0x821c0bd8
	sub_821C0BD8(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c0cf0
	if (cr6.eq) goto loc_821C0CF0;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x821c0cf0
	goto loc_821C0CF0;
loc_821C0C74:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r26,r25,12
	r26.s64 = r25.s64 * 12;
	// addi r30,r11,-12
	r30.s64 = r11.s64 + -12;
	// add r28,r26,r30
	r28.u64 = r26.u64 + r30.u64;
	// b 0x821c0cc8
	goto loc_821C0CC8;
loc_821C0C88:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x821c0cb4
	if (cr6.eq) goto loc_821C0CB4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
loc_821C0CB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bed70
	sub_821BED70(ctx, base);
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// addi r28,r28,-12
	r28.s64 = r28.s64 + -12;
loc_821C0CC8:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bge cr6,0x821c0c88
	if (!cr6.lt) goto loc_821C0C88;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821bffa8
	sub_821BFFA8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821C0CF0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821C0CF8"))) PPC_WEAK_FUNC(sub_821C0CF8);
PPC_FUNC_IMPL(__imp__sub_821C0CF8) {
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
	// bl 0x826a4840
	sub_826A4840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0D20"))) PPC_WEAK_FUNC(sub_821C0D20);
PPC_FUNC_IMPL(__imp__sub_821C0D20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x821bfa70
	sub_821BFA70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,12
	r11.s64 = 12;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
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

__attribute__((alias("__imp__sub_821C0D84"))) PPC_WEAK_FUNC(sub_821C0D84);
PPC_FUNC_IMPL(__imp__sub_821C0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0D88"))) PPC_WEAK_FUNC(sub_821C0D88);
PPC_FUNC_IMPL(__imp__sub_821C0D88) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16952(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16952);
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
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x821bde40
	sub_821BDE40(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x821c0dc8
	goto loc_821C0DC8;
loc_821C0DC4:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_821C0DC8:
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
	// bne 0x821c0dc4
	if (!cr0.eq) goto loc_821C0DC4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c0dfc
	if (cr6.eq) goto loc_821C0DFC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C0DFC:
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

__attribute__((alias("__imp__sub_821C0D90"))) PPC_WEAK_FUNC(sub_821C0D90);
PPC_FUNC_IMPL(__imp__sub_821C0D90) {
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
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x821bde40
	sub_821BDE40(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x821c0dc8
	goto loc_821C0DC8;
loc_821C0DC4:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_821C0DC8:
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
	// bne 0x821c0dc4
	if (!cr0.eq) goto loc_821C0DC4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c0dfc
	if (cr6.eq) goto loc_821C0DFC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C0DFC:
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

__attribute__((alias("__imp__sub_821C0E14"))) PPC_WEAK_FUNC(sub_821C0E14);
PPC_FUNC_IMPL(__imp__sub_821C0E14) {
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
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0E3C"))) PPC_WEAK_FUNC(sub_821C0E3C);
PPC_FUNC_IMPL(__imp__sub_821C0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0E40"))) PPC_WEAK_FUNC(sub_821C0E40);
PPC_FUNC_IMPL(__imp__sub_821C0E40) {
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
	// beq cr6,0x821c0e90
	if (cr6.eq) goto loc_821C0E90;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821c0e80
	if (cr0.eq) goto loc_821C0E80;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// lhz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// sth r10,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r10.u16);
loc_821C0E80:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x821c0ea4
	goto loc_821C0EA4;
loc_821C0E90:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x821bfbf0
	sub_821BFBF0(ctx, base);
loc_821C0EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0EB4"))) PPC_WEAK_FUNC(sub_821C0EB4);
PPC_FUNC_IMPL(__imp__sub_821C0EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0EB8"))) PPC_WEAK_FUNC(sub_821C0EB8);
PPC_FUNC_IMPL(__imp__sub_821C0EB8) {
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
	// lwz r16,-16888(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16888);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x821bfa70
	sub_821BFA70(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821c0f24
	if (cr0.eq) goto loc_821C0F24;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C0F24:
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

__attribute__((alias("__imp__sub_821C0EC0"))) PPC_WEAK_FUNC(sub_821C0EC0);
PPC_FUNC_IMPL(__imp__sub_821C0EC0) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x821bfa70
	sub_821BFA70(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821c0f24
	if (cr0.eq) goto loc_821C0F24;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C0F24:
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

__attribute__((alias("__imp__sub_821C0F3C"))) PPC_WEAK_FUNC(sub_821C0F3C);
PPC_FUNC_IMPL(__imp__sub_821C0F3C) {
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
	// bl 0x8213a768
	sub_8213A768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0F64"))) PPC_WEAK_FUNC(sub_821C0F64);
PPC_FUNC_IMPL(__imp__sub_821C0F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0F68"))) PPC_WEAK_FUNC(sub_821C0F68);
PPC_FUNC_IMPL(__imp__sub_821C0F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16824(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16824);
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821c0f98
	if (cr6.eq) goto loc_821C0F98;
	// bl 0x821c0a48
	sub_821C0A48(ctx, base);
loc_821C0F98:
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

__attribute__((alias("__imp__sub_821C0F70"))) PPC_WEAK_FUNC(sub_821C0F70);
PPC_FUNC_IMPL(__imp__sub_821C0F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821c0f98
	if (cr6.eq) goto loc_821C0F98;
	// bl 0x821c0a48
	sub_821C0A48(ctx, base);
loc_821C0F98:
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

__attribute__((alias("__imp__sub_821C0FAC"))) PPC_WEAK_FUNC(sub_821C0FAC);
PPC_FUNC_IMPL(__imp__sub_821C0FAC) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_821C0FD8"))) PPC_WEAK_FUNC(sub_821C0FD8);
PPC_FUNC_IMPL(__imp__sub_821C0FD8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x821c1010
	if (cr6.eq) goto loc_821C1010;
loc_821C0FFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821c0ffc
	if (!cr6.eq) goto loc_821C0FFC;
loc_821C1010:
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

__attribute__((alias("__imp__sub_821C1028"))) PPC_WEAK_FUNC(sub_821C1028);
PPC_FUNC_IMPL(__imp__sub_821C1028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r16,-16724(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16724);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcdc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x821c1088
	if (cr6.lt) goto loc_821C1088;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_821C1088:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r23,r30,8
	r23.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r22,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r22.u32);
	// bl 0x821bc690
	sub_821BC690(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x826a52e0
	sub_826A52E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x821c1100
	if (!cr6.eq) goto loc_821C1100;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x821bede0
	sub_821BEDE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// b 0x821c1118
	goto loc_821C1118;
loc_821C1100:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821bffa8
	sub_821BFFA8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821C1118:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c114c
	if (!cr0.eq) goto loc_821C114C;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x826a52e0
	sub_826A52E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821C114C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c0d20
	sub_821C0D20(ctx, base);
	// mulli r11,r22,12
	r11.s64 = r22.s64 * 12;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_821C1030"))) PPC_WEAK_FUNC(sub_821C1030);
PPC_FUNC_IMPL(__imp__sub_821C1030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcdc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x821c1088
	if (cr6.lt) goto loc_821C1088;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_821C1088:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r23,r30,8
	r23.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r22,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r22.u32);
	// bl 0x821bc690
	sub_821BC690(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x826a52e0
	sub_826A52E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x821c1100
	if (!cr6.eq) goto loc_821C1100;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x821bede0
	sub_821BEDE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// b 0x821c1118
	goto loc_821C1118;
loc_821C1100:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821bffa8
	sub_821BFFA8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821C1118:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c114c
	if (!cr0.eq) goto loc_821C114C;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x826a52e0
	sub_826A52E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821C114C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c0d20
	sub_821C0D20(ctx, base);
	// mulli r11,r22,12
	r11.s64 = r22.s64 * 12;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_821C1170"))) PPC_WEAK_FUNC(sub_821C1170);
PPC_FUNC_IMPL(__imp__sub_821C1170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,-16724(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16724);
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bfae8
	sub_821BFAE8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-288
	r30.s64 = ctx.r3.s64 + -288;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,288
	r31.s64 = r30.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c0550
	sub_821C0550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c11f0
	if (cr0.eq) goto loc_821C11F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821C11F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C1178"))) PPC_WEAK_FUNC(sub_821C1178);
PPC_FUNC_IMPL(__imp__sub_821C1178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
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
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bfae8
	sub_821BFAE8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_821C11B8"))) PPC_WEAK_FUNC(sub_821C11B8);
PPC_FUNC_IMPL(__imp__sub_821C11B8) {
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
	// addi r30,r3,-288
	r30.s64 = ctx.r3.s64 + -288;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,288
	r31.s64 = r30.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c0550
	sub_821C0550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c11f0
	if (cr0.eq) goto loc_821C11F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821C11F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C11FC"))) PPC_WEAK_FUNC(sub_821C11FC);
PPC_FUNC_IMPL(__imp__sub_821C11FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1200"))) PPC_WEAK_FUNC(sub_821C1200);
PPC_FUNC_IMPL(__imp__sub_821C1200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16640(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16640);
	// mflr r12
	// bl 0x8239bcd8
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8239d5e4
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,264(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 264);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bne cr6,0x821c1804
	if (!cr6.eq) goto loc_821C1804;
	// rlwinm. r11,r30,0,24,24
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c1804
	if (!cr0.eq) goto loc_821C1804;
	// rlwinm. r11,r30,0,26,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1804
	if (cr0.eq) goto loc_821C1804;
	// addi r21,r22,248
	r21.s64 = r22.s64 + 248;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x821bde98
	sub_821BDE98(ctx, base);
	// addi r29,r22,224
	r29.s64 = r22.s64 + 224;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r4,220(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 220);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r5,r11,r9
	ctx.r5.s32 = r11.s32 / ctx.r9.s32;
	// bl 0x821bc230
	sub_821BC230(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1294
	if (cr0.eq) goto loc_821C1294;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// b 0x821c140c
	goto loc_821C140C;
loc_821C1294:
	// rlwinm. r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1428
	if (cr0.eq) goto loc_821C1428;
	// li r20,0
	r20.s64 = 0;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,228(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// sth r7,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r7.u16);
	// sth r6,80(r31)
	PPC_STORE_U16(r31.u32 + 80, ctx.r6.u16);
	// beq cr6,0x821c1408
	if (cr6.eq) goto loc_821C1408;
	// addi r27,r28,2
	r27.s64 = r28.s64 + 2;
loc_821C12C8:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// mr r11,r27
	r11.u64 = r27.u64;
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x821c12e0
	if (cr6.lt) goto loc_821C12E0;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_821C12E0:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// blt cr6,0x821c12f4
	if (cr6.lt) goto loc_821C12F4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
loc_821C12F4:
	// addi r30,r27,2
	r30.s64 = r27.s64 + 2;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x821c130c
	if (!cr6.lt) goto loc_821C130C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_821C130C:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// sth r6,80(r31)
	PPC_STORE_U16(r31.u32 + 80, ctx.r6.u16);
	// blt cr6,0x821c1324
	if (cr6.lt) goto loc_821C1324;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_821C1324:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x821c1338
	if (cr6.lt) goto loc_821C1338;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
loc_821C1338:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x821c1348
	if (!cr6.lt) goto loc_821C1348;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_821C1348:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// subf r11,r7,r10
	r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// sth r7,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r7.u16);
	// bl 0x821bc230
	sub_821BC230(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c13f0
	if (!cr0.eq) goto loc_821C13F0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x821c13a4
	if (cr6.lt) goto loc_821C13A4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_821C13A4:
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x821c13b8
	if (cr6.lt) goto loc_821C13B8;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_821C13B8:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// sth r6,80(r31)
	PPC_STORE_U16(r31.u32 + 80, ctx.r6.u16);
	// blt cr6,0x821c13d0
	if (cr6.lt) goto loc_821C13D0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_821C13D0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x821c13e0
	if (cr6.lt) goto loc_821C13E0;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_821C13E0:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// sth r7,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r7.u16);
	// b 0x821c13f4
	goto loc_821C13F4;
loc_821C13F0:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_821C13F4:
	// lwz r11,228(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// addi r28,r28,6
	r28.s64 = r28.s64 + 6;
	// addi r27,r27,6
	r27.s64 = r27.s64 + 6;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x821c12c8
	if (!cr6.eq) goto loc_821C12C8;
loc_821C1408:
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
loc_821C140C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// b 0x821c1804
	goto loc_821C1804;
loc_821C1428:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10928
	r28.s64 = r11.s64 + 10928;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x821bef30
	sub_821BEF30(ctx, base);
	// li r20,0
	r20.s64 = 0;
	// stw r20,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r20.u32);
	// stw r20,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r20.u32);
	// stw r20,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r20.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r24,r20
	r24.u64 = r20.u64;
	// lfs f28,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f31,f28
	f31.f64 = f28.f64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// fmr f30,f28
	f30.f64 = f28.f64;
	// fmr f29,f28
	f29.f64 = f28.f64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c17b0
	if (!cr0.eq) goto loc_821C17B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f27.f64 = double(temp.f32);
loc_821C1488:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r30,4
	r30.s64 = 4;
	// lwz r27,228(r22)
	r27.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// fmr f10,f28
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f28.f64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r26,4(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r23,r11
	r23.u64 = r11.u64;
	// cmplw cr6,r4,r27
	cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, xer);
	// beq cr6,0x821c1640
	if (cr6.eq) goto loc_821C1640;
	// subf r11,r6,r26
	r11.s64 = r26.s64 - ctx.r6.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r25,r11,-1
	r25.s64 = r11.s64 + -1;
loc_821C14BC:
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x821c14e8
	if (cr0.lt) goto loc_821C14E8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_821C14D0:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c15cc
	if (cr6.eq) goto loc_821C15CC;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x821c14d0
	if (!cr0.lt) goto loc_821C14D0;
loc_821C14E8:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_821C14EC:
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x821c1518
	if (cr0.lt) goto loc_821C1518;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_821C1500:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c15d4
	if (cr6.eq) goto loc_821C15D4;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x821c1500
	if (!cr0.lt) goto loc_821C1500;
loc_821C1518:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_821C151C:
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x821c1548
	if (cr0.lt) goto loc_821C1548;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_821C1530:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c154c
	if (cr6.eq) goto loc_821C154C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x821c1530
	if (!cr0.lt) goto loc_821C1530;
loc_821C1548:
	// li r11,-1
	r11.s64 = -1;
loc_821C154C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, r30.s32, xer);
	// bge cr6,0x821c15dc
	if (!cr6.lt) goto loc_821C15DC;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x821bd128
	sub_821BD128(ctx, base);
	// lfs f13,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - f29.f64));
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f11
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f10,f0
	ctx.f10.f64 = double(float(sqrt(f0.f64)));
	// b 0x821c1634
	goto loc_821C1634;
loc_821C15CC:
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// b 0x821c14ec
	goto loc_821C14EC;
loc_821C15D4:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// b 0x821c151c
	goto loc_821C151C;
loc_821C15DC:
	// bne cr6,0x821c1634
	if (!cr6.eq) goto loc_821C1634;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821bd128
	sub_821BD128(ctx, base);
	// lfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - f29.f64));
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// stfs f12,144(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f11
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// bge cr6,0x821c1634
	if (!cr6.lt) goto loc_821C1634;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_821C1634:
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// cmplw cr6,r4,r27
	cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, xer);
	// bne cr6,0x821c14bc
	if (!cr6.eq) goto loc_821C14BC;
loc_821C1640:
	// subf r11,r6,r26
	r11.s64 = r26.s64 - ctx.r6.s64;
	// addi r5,r24,1
	ctx.r5.s64 = r24.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x821bc230
	sub_821BC230(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c1698
	if (!cr0.eq) goto loc_821C1698;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bef30
	sub_821BEF30(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stb r24,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r24.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// lwz r26,4(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r24,r20
	r24.u64 = r20.u64;
loc_821C1698:
	// mr r30,r23
	r30.u64 = r23.u64;
	// li r27,3
	r27.s64 = 3;
loc_821C16A0:
	// subf r11,r6,r26
	r11.s64 = r26.s64 - ctx.r6.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x821c16d4
	if (cr0.lt) goto loc_821C16D4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_821C16BC:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c16d8
	if (cr6.eq) goto loc_821C16D8;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x821c16bc
	if (!cr0.lt) goto loc_821C16BC;
loc_821C16D4:
	// li r11,-1
	r11.s64 = -1;
loc_821C16D8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x821c176c
	if (!cr6.lt) goto loc_821C176C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821beec8
	sub_821BEEC8(ctx, base);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r26,4(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// fmr f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f28.f64;
	// fmr f12,f28
	ctx.f12.f64 = f28.f64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// fmr f11,f28
	ctx.f11.f64 = f28.f64;
	// cmplw cr6,r6,r26
	cr6.compare<uint32_t>(ctx.r6.u32, r26.u32, xer);
	// beq cr6,0x821c1740
	if (cr6.eq) goto loc_821C1740;
	// lwz r9,216(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 216);
loc_821C1710:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 + ctx.f11.f64));
	// bne cr6,0x821c1710
	if (!cr6.eq) goto loc_821C1710;
loc_821C1740:
	// subf r11,r6,r26
	r11.s64 = r26.s64 - ctx.r6.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,96(r31)
	PPC_STORE_U64(r31.u32 + 96, r11.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f0,f27,f0
	f0.f64 = double(float(f27.f64 / f0.f64));
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f29,f11,f0
	f29.f64 = double(float(ctx.f11.f64 * f0.f64));
loc_821C176C:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x821c16a0
	if (!cr0.eq) goto loc_821C16A0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821c0e40
	sub_821C0E40(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bdc58
	sub_821BDC58(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1488
	if (cr0.eq) goto loc_821C1488;
loc_821C17B0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stb r24,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r24.u8);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r9,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
loc_821C1804:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8239d630
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_821C1208"))) PPC_WEAK_FUNC(sub_821C1208);
PPC_FUNC_IMPL(__imp__sub_821C1208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8239d5e4
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,264(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 264);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bne cr6,0x821c1804
	if (!cr6.eq) goto loc_821C1804;
	// rlwinm. r11,r30,0,24,24
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c1804
	if (!cr0.eq) goto loc_821C1804;
	// rlwinm. r11,r30,0,26,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1804
	if (cr0.eq) goto loc_821C1804;
	// addi r21,r22,248
	r21.s64 = r22.s64 + 248;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x821bde98
	sub_821BDE98(ctx, base);
	// addi r29,r22,224
	r29.s64 = r22.s64 + 224;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r4,220(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 220);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r5,r11,r9
	ctx.r5.s32 = r11.s32 / ctx.r9.s32;
	// bl 0x821bc230
	sub_821BC230(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1294
	if (cr0.eq) goto loc_821C1294;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// b 0x821c140c
	goto loc_821C140C;
loc_821C1294:
	// rlwinm. r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1428
	if (cr0.eq) goto loc_821C1428;
	// li r20,0
	r20.s64 = 0;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,228(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// sth r7,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r7.u16);
	// sth r6,80(r31)
	PPC_STORE_U16(r31.u32 + 80, ctx.r6.u16);
	// beq cr6,0x821c1408
	if (cr6.eq) goto loc_821C1408;
	// addi r27,r28,2
	r27.s64 = r28.s64 + 2;
loc_821C12C8:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// mr r11,r27
	r11.u64 = r27.u64;
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x821c12e0
	if (cr6.lt) goto loc_821C12E0;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_821C12E0:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// blt cr6,0x821c12f4
	if (cr6.lt) goto loc_821C12F4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
loc_821C12F4:
	// addi r30,r27,2
	r30.s64 = r27.s64 + 2;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x821c130c
	if (!cr6.lt) goto loc_821C130C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_821C130C:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// sth r6,80(r31)
	PPC_STORE_U16(r31.u32 + 80, ctx.r6.u16);
	// blt cr6,0x821c1324
	if (cr6.lt) goto loc_821C1324;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_821C1324:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x821c1338
	if (cr6.lt) goto loc_821C1338;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
loc_821C1338:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x821c1348
	if (!cr6.lt) goto loc_821C1348;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_821C1348:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// subf r11,r7,r10
	r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// sth r7,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r7.u16);
	// bl 0x821bc230
	sub_821BC230(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c13f0
	if (!cr0.eq) goto loc_821C13F0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x821c13a4
	if (cr6.lt) goto loc_821C13A4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_821C13A4:
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x821c13b8
	if (cr6.lt) goto loc_821C13B8;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_821C13B8:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// sth r6,80(r31)
	PPC_STORE_U16(r31.u32 + 80, ctx.r6.u16);
	// blt cr6,0x821c13d0
	if (cr6.lt) goto loc_821C13D0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_821C13D0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x821c13e0
	if (cr6.lt) goto loc_821C13E0;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_821C13E0:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// sth r7,84(r31)
	PPC_STORE_U16(r31.u32 + 84, ctx.r7.u16);
	// b 0x821c13f4
	goto loc_821C13F4;
loc_821C13F0:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_821C13F4:
	// lwz r11,228(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// addi r28,r28,6
	r28.s64 = r28.s64 + 6;
	// addi r27,r27,6
	r27.s64 = r27.s64 + 6;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x821c12c8
	if (!cr6.eq) goto loc_821C12C8;
loc_821C1408:
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
loc_821C140C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// b 0x821c1804
	goto loc_821C1804;
loc_821C1428:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10928
	r28.s64 = r11.s64 + 10928;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x821bef30
	sub_821BEF30(ctx, base);
	// li r20,0
	r20.s64 = 0;
	// stw r20,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r20.u32);
	// stw r20,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r20.u32);
	// stw r20,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r20.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r24,r20
	r24.u64 = r20.u64;
	// lfs f28,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f31,f28
	f31.f64 = f28.f64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// fmr f30,f28
	f30.f64 = f28.f64;
	// fmr f29,f28
	f29.f64 = f28.f64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c17b0
	if (!cr0.eq) goto loc_821C17B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f27.f64 = double(temp.f32);
loc_821C1488:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r30,4
	r30.s64 = 4;
	// lwz r27,228(r22)
	r27.u64 = PPC_LOAD_U32(r22.u32 + 228);
	// fmr f10,f28
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f28.f64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r26,4(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r23,r11
	r23.u64 = r11.u64;
	// cmplw cr6,r4,r27
	cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, xer);
	// beq cr6,0x821c1640
	if (cr6.eq) goto loc_821C1640;
	// subf r11,r6,r26
	r11.s64 = r26.s64 - ctx.r6.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r25,r11,-1
	r25.s64 = r11.s64 + -1;
loc_821C14BC:
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x821c14e8
	if (cr0.lt) goto loc_821C14E8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_821C14D0:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c15cc
	if (cr6.eq) goto loc_821C15CC;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x821c14d0
	if (!cr0.lt) goto loc_821C14D0;
loc_821C14E8:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_821C14EC:
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x821c1518
	if (cr0.lt) goto loc_821C1518;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_821C1500:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c15d4
	if (cr6.eq) goto loc_821C15D4;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x821c1500
	if (!cr0.lt) goto loc_821C1500;
loc_821C1518:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_821C151C:
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x821c1548
	if (cr0.lt) goto loc_821C1548;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_821C1530:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c154c
	if (cr6.eq) goto loc_821C154C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x821c1530
	if (!cr0.lt) goto loc_821C1530;
loc_821C1548:
	// li r11,-1
	r11.s64 = -1;
loc_821C154C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, r30.s32, xer);
	// bge cr6,0x821c15dc
	if (!cr6.lt) goto loc_821C15DC;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x821bd128
	sub_821BD128(ctx, base);
	// lfs f13,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - f29.f64));
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f11
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f10,f0
	ctx.f10.f64 = double(float(sqrt(f0.f64)));
	// b 0x821c1634
	goto loc_821C1634;
loc_821C15CC:
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// b 0x821c14ec
	goto loc_821C14EC;
loc_821C15D4:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// b 0x821c151c
	goto loc_821C151C;
loc_821C15DC:
	// bne cr6,0x821c1634
	if (!cr6.eq) goto loc_821C1634;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821bd128
	sub_821BD128(ctx, base);
	// lfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - f29.f64));
	// lfs f0,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// stfs f12,144(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f11
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// bge cr6,0x821c1634
	if (!cr6.lt) goto loc_821C1634;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_821C1634:
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// cmplw cr6,r4,r27
	cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, xer);
	// bne cr6,0x821c14bc
	if (!cr6.eq) goto loc_821C14BC;
loc_821C1640:
	// subf r11,r6,r26
	r11.s64 = r26.s64 - ctx.r6.s64;
	// addi r5,r24,1
	ctx.r5.s64 = r24.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x821bc230
	sub_821BC230(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c1698
	if (!cr0.eq) goto loc_821C1698;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bef30
	sub_821BEF30(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stb r24,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r24.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// lwz r26,4(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r24,r20
	r24.u64 = r20.u64;
loc_821C1698:
	// mr r30,r23
	r30.u64 = r23.u64;
	// li r27,3
	r27.s64 = 3;
loc_821C16A0:
	// subf r11,r6,r26
	r11.s64 = r26.s64 - ctx.r6.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x821c16d4
	if (cr0.lt) goto loc_821C16D4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_821C16BC:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c16d8
	if (cr6.eq) goto loc_821C16D8;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x821c16bc
	if (!cr0.lt) goto loc_821C16BC;
loc_821C16D4:
	// li r11,-1
	r11.s64 = -1;
loc_821C16D8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x821c176c
	if (!cr6.lt) goto loc_821C176C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821beec8
	sub_821BEEC8(ctx, base);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r26,4(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// fmr f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f28.f64;
	// fmr f12,f28
	ctx.f12.f64 = f28.f64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// fmr f11,f28
	ctx.f11.f64 = f28.f64;
	// cmplw cr6,r6,r26
	cr6.compare<uint32_t>(ctx.r6.u32, r26.u32, xer);
	// beq cr6,0x821c1740
	if (cr6.eq) goto loc_821C1740;
	// lwz r9,216(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 216);
loc_821C1710:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 + ctx.f11.f64));
	// bne cr6,0x821c1710
	if (!cr6.eq) goto loc_821C1710;
loc_821C1740:
	// subf r11,r6,r26
	r11.s64 = r26.s64 - ctx.r6.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,96(r31)
	PPC_STORE_U64(r31.u32 + 96, r11.u64);
	// lfd f0,96(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f0,f27,f0
	f0.f64 = double(float(f27.f64 / f0.f64));
	// fmuls f31,f0,f13
	f31.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f29,f11,f0
	f29.f64 = double(float(ctx.f11.f64 * f0.f64));
loc_821C176C:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x821c16a0
	if (!cr0.eq) goto loc_821C16A0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821c0e40
	sub_821C0E40(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bdc58
	sub_821BDC58(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1488
	if (cr0.eq) goto loc_821C1488;
loc_821C17B0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stb r24,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r24.u8);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r9,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
loc_821C1804:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8239d630
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_821C1814"))) PPC_WEAK_FUNC(sub_821C1814);
PPC_FUNC_IMPL(__imp__sub_821C1814) {
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
	// bl 0x821bfb98
	sub_821BFB98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C183C"))) PPC_WEAK_FUNC(sub_821C183C);
PPC_FUNC_IMPL(__imp__sub_821C183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1840"))) PPC_WEAK_FUNC(sub_821C1840);
PPC_FUNC_IMPL(__imp__sub_821C1840) {
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
	// li r8,6
	ctx.r8.s64 = 6;
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
	// bge cr6,0x821c1890
	if (!cr6.lt) goto loc_821C1890;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c18a4
	if (cr6.eq) goto loc_821C18A4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821be3d8
	sub_821BE3D8(ctx, base);
	// b 0x821c18a4
	goto loc_821C18A4;
loc_821C1890:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x821c07c8
	sub_821C07C8(ctx, base);
loc_821C18A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C18B4"))) PPC_WEAK_FUNC(sub_821C18B4);
PPC_FUNC_IMPL(__imp__sub_821C18B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C18B8"))) PPC_WEAK_FUNC(sub_821C18B8);
PPC_FUNC_IMPL(__imp__sub_821C18B8) {
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
	// lwz r16,-16568(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16568);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x821bff30
	sub_821BFF30(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821c1920
	if (cr0.eq) goto loc_821C1920;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C1920:
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

__attribute__((alias("__imp__sub_821C18C0"))) PPC_WEAK_FUNC(sub_821C18C0);
PPC_FUNC_IMPL(__imp__sub_821C18C0) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x821bff30
	sub_821BFF30(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821c1920
	if (cr0.eq) goto loc_821C1920;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C1920:
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

__attribute__((alias("__imp__sub_821C1938"))) PPC_WEAK_FUNC(sub_821C1938);
PPC_FUNC_IMPL(__imp__sub_821C1938) {
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
	// bl 0x821fed98
	sub_821FED98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C1960"))) PPC_WEAK_FUNC(sub_821C1960);
PPC_FUNC_IMPL(__imp__sub_821C1960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16460(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16460);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821bc440
	sub_821BC440(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x821c0f70
	sub_821C0F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C1968"))) PPC_WEAK_FUNC(sub_821C1968);
PPC_FUNC_IMPL(__imp__sub_821C1968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821bc440
	sub_821BC440(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x821c0f70
	sub_821C0F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C19B4"))) PPC_WEAK_FUNC(sub_821C19B4);
PPC_FUNC_IMPL(__imp__sub_821C19B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16460(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16460);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_821C19BC"))) PPC_WEAK_FUNC(sub_821C19BC);
PPC_FUNC_IMPL(__imp__sub_821C19BC) {
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
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821C19E8"))) PPC_WEAK_FUNC(sub_821C19E8);
PPC_FUNC_IMPL(__imp__sub_821C19E8) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r11.u16);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r11.u16);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// bl 0x821c1840
	sub_821C1840(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821c1a3c
	goto loc_821C1A3C;
loc_821C1A30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821bc1b0
	sub_821BC1B0(ctx, base);
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
loc_821C1A3C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x821c1a30
	if (!cr6.eq) goto loc_821C1A30;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C1A54"))) PPC_WEAK_FUNC(sub_821C1A54);
PPC_FUNC_IMPL(__imp__sub_821C1A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1A58"))) PPC_WEAK_FUNC(sub_821C1A58);
PPC_FUNC_IMPL(__imp__sub_821C1A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-16356(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16356);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_821C1A8C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821c1ab4
	if (cr6.eq) goto loc_821C1AB4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf9a0
	sub_821BF9A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x821c1a8c
	goto loc_821C1A8C;
loc_821C1AB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C1A60"))) PPC_WEAK_FUNC(sub_821C1A60);
PPC_FUNC_IMPL(__imp__sub_821C1A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_821C1A8C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821c1ab4
	if (cr6.eq) goto loc_821C1AB4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bf9a0
	sub_821BF9A0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x821c1a8c
	goto loc_821C1A8C;
loc_821C1AB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C1AC0"))) PPC_WEAK_FUNC(sub_821C1AC0);
PPC_FUNC_IMPL(__imp__sub_821C1AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,-16356(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16356);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x821c0fd8
	sub_821C0FD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16296(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16296);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x821c1b34
	if (cr6.lt) goto loc_821C1B34;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821c1b38
	if (cr6.lt) goto loc_821C1B38;
loc_821C1B34:
	// li r11,0
	r11.s64 = 0;
loc_821C1B38:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1b8c
	if (cr0.eq) goto loc_821C1B8C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821be908
	sub_821BE908(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c1030
	sub_821C1030(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c1ba4
	if (cr6.eq) goto loc_821C1BA4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x821c1ba4
	goto loc_821C1BA4;
loc_821C1B8C:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c1030
	sub_821C1030(ctx, base);
loc_821C1BA4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821C1AC8"))) PPC_WEAK_FUNC(sub_821C1AC8);
PPC_FUNC_IMPL(__imp__sub_821C1AC8) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x821c0fd8
	sub_821C0FD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821C1AF8"))) PPC_WEAK_FUNC(sub_821C1AF8);
PPC_FUNC_IMPL(__imp__sub_821C1AF8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x821c1b34
	if (cr6.lt) goto loc_821C1B34;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821c1b38
	if (cr6.lt) goto loc_821C1B38;
loc_821C1B34:
	// li r11,0
	r11.s64 = 0;
loc_821C1B38:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1b8c
	if (cr0.eq) goto loc_821C1B8C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821be908
	sub_821BE908(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c1030
	sub_821C1030(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c1ba4
	if (cr6.eq) goto loc_821C1BA4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x821c1ba4
	goto loc_821C1BA4;
loc_821C1B8C:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c1030
	sub_821C1030(ctx, base);
loc_821C1BA4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821C1BAC"))) PPC_WEAK_FUNC(sub_821C1BAC);
PPC_FUNC_IMPL(__imp__sub_821C1BAC) {
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
	// bl 0x826a4840
	sub_826A4840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C1BD4"))) PPC_WEAK_FUNC(sub_821C1BD4);
PPC_FUNC_IMPL(__imp__sub_821C1BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1BD8"))) PPC_WEAK_FUNC(sub_821C1BD8);
PPC_FUNC_IMPL(__imp__sub_821C1BD8) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r31.u16);
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r31.u16);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,224
	ctx.r3.s64 = r11.s64 + 224;
	// bl 0x821c1840
	sub_821C1840(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C1C50"))) PPC_WEAK_FUNC(sub_821C1C50);
PPC_FUNC_IMPL(__imp__sub_821C1C50) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-16224(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16224);
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x821bdd90
	sub_821BDD90(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821c1a60
	sub_821C1A60(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C1C58"))) PPC_WEAK_FUNC(sub_821C1C58);
PPC_FUNC_IMPL(__imp__sub_821C1C58) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x821bdd90
	sub_821BDD90(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821c1a60
	sub_821C1A60(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C1CA4"))) PPC_WEAK_FUNC(sub_821C1CA4);
PPC_FUNC_IMPL(__imp__sub_821C1CA4) {
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
	// bl 0x821fed98
	sub_821FED98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C1CCC"))) PPC_WEAK_FUNC(sub_821C1CCC);
PPC_FUNC_IMPL(__imp__sub_821C1CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1CD0"))) PPC_WEAK_FUNC(sub_821C1CD0);
PPC_FUNC_IMPL(__imp__sub_821C1CD0) {
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
	// bl 0x821c1968
	sub_821C1968(ctx, base);
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

__attribute__((alias("__imp__sub_821C1D34"))) PPC_WEAK_FUNC(sub_821C1D34);
PPC_FUNC_IMPL(__imp__sub_821C1D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1D38"))) PPC_WEAK_FUNC(sub_821C1D38);
PPC_FUNC_IMPL(__imp__sub_821C1D38) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16128(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16128);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// stw r23,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r23.u32);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// bl 0x821be5c8
	sub_821BE5C8(ctx, base);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// ld r11,136(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 136);
	// std r11,128(r31)
	PPC_STORE_U64(r31.u32 + 128, r11.u64);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// ld r11,136(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 136);
	// std r11,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r11.u64);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// bl 0x821c1c58
	sub_821C1C58(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821c1ec4
	if (!cr0.gt) goto loc_821C1EC4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_821C1DFC:
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwzx r11,r5,r10
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x821c1ea8
	if (!cr6.eq) goto loc_821C1EA8;
	// stwx r8,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lwz r10,220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x821c1ea8
	if (!cr6.lt) goto loc_821C1EA8;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// addi r7,r3,64
	ctx.r7.s64 = ctx.r3.s64 + 64;
loc_821C1E30:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// lwz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x821c1e78
	if (!cr6.eq) goto loc_821C1E78;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c1e78
	if (!cr6.eq) goto loc_821C1E78;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x821c1e7c
	if (cr6.eq) goto loc_821C1E7C;
loc_821C1E78:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_821C1E7C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1e8c
	if (cr0.eq) goto loc_821C1E8C;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stwx r8,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r8.u32);
loc_821C1E8C:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x821c1e30
	if (cr6.lt) goto loc_821C1E30;
loc_821C1EA8:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x821c1dfc
	if (cr6.lt) goto loc_821C1DFC;
loc_821C1EC4:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// lwz r30,224(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// b 0x821c1fc0
	goto loc_821C1FC0;
loc_821C1ED0:
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r27,r8,r10
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r26,r9,r10
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r28,r27,3,0,28
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r28,r26,3,0,28
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
loc_821C1FC0:
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821c1ed0
	if (!cr6.eq) goto loc_821C1ED0;
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821c201c
	if (!cr0.gt) goto loc_821C201C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_821C1FE4:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x821bf740
	sub_821BF740(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x821bdf48
	sub_821BDF48(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x821c1fe4
	if (cr6.lt) goto loc_821C1FE4;
loc_821C201C:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821c214c
	if (!cr0.gt) goto loc_821C214C;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 144);
loc_821C2038:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r7
	ctx.r5.u64 = r11.u64 + ctx.r7.u64;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x821c20f8
	goto loc_821C20F8;
loc_821C204C:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x821c2114
	if (cr0.eq) goto loc_821C2114;
loc_821C2080:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x821c20a4
	goto loc_821C20A4;
loc_821C2088:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// beq cr6,0x821c20a0
	if (cr6.eq) goto loc_821C20A0;
	// lwz r28,8(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r8,r28
	cr6.compare<int32_t>(ctx.r8.s32, r28.s32, xer);
	// beq cr6,0x821c20c0
	if (cr6.eq) goto loc_821C20C0;
loc_821C20A0:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_821C20A4:
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x821c2088
	if (!cr0.eq) goto loc_821C2088;
	// b 0x821c20c4
	goto loc_821C20C4;
loc_821C20C0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_821C20C4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x821c2080
	if (!cr0.eq) goto loc_821C2080;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x821c2114
	if (cr6.lt) goto loc_821C2114;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_821C20F8:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x821c204c
	if (!cr0.eq) goto loc_821C204C;
	// b 0x821c2134
	goto loc_821C2134;
loc_821C2114:
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 144);
loc_821C2134:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x821c2038
	if (cr6.lt) goto loc_821C2038;
loc_821C214C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821c21c0
	if (!cr0.gt) goto loc_821C21C0;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_821C2174:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x821bc5e0
	sub_821BC5E0(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821c2190
	goto loc_821C2190;
loc_821C218C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_821C2190:
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
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
	// bne 0x821c218c
	if (!cr0.eq) goto loc_821C218C;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x821c2174
	if (cr6.lt) goto loc_821C2174;
loc_821C21C0:
	// stw r25,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r25.u32);
	// stw r25,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r25.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821c18c0
	sub_821C18C0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c2200
	if (cr6.eq) goto loc_821C2200;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C2200:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821C1D40"))) PPC_WEAK_FUNC(sub_821C1D40);
PPC_FUNC_IMPL(__imp__sub_821C1D40) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// stw r23,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r23.u32);
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// bl 0x821be5c8
	sub_821BE5C8(ctx, base);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// ld r11,136(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 136);
	// std r11,128(r31)
	PPC_STORE_U64(r31.u32 + 128, r11.u64);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// ld r11,136(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 136);
	// std r11,136(r31)
	PPC_STORE_U64(r31.u32 + 136, r11.u64);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// lwz r4,220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// bl 0x821c1c58
	sub_821C1C58(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821c1ec4
	if (!cr0.gt) goto loc_821C1EC4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_821C1DFC:
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwzx r11,r5,r10
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x821c1ea8
	if (!cr6.eq) goto loc_821C1EA8;
	// stwx r8,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lwz r10,220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x821c1ea8
	if (!cr6.lt) goto loc_821C1EA8;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// addi r7,r3,64
	ctx.r7.s64 = ctx.r3.s64 + 64;
loc_821C1E30:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// lwz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r11,r9,r3
	r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x821c1e78
	if (!cr6.eq) goto loc_821C1E78;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c1e78
	if (!cr6.eq) goto loc_821C1E78;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x821c1e7c
	if (cr6.eq) goto loc_821C1E7C;
loc_821C1E78:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_821C1E7C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c1e8c
	if (cr0.eq) goto loc_821C1E8C;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stwx r8,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r8.u32);
loc_821C1E8C:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x821c1e30
	if (cr6.lt) goto loc_821C1E30;
loc_821C1EA8:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x821c1dfc
	if (cr6.lt) goto loc_821C1DFC;
loc_821C1EC4:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// lwz r30,224(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// b 0x821c1fc0
	goto loc_821C1FC0;
loc_821C1ED0:
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r27,r8,r10
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r26,r9,r10
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r28,r27,3,0,28
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r28,r26,3,0,28
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
loc_821C1FC0:
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821c1ed0
	if (!cr6.eq) goto loc_821C1ED0;
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821c201c
	if (!cr0.gt) goto loc_821C201C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_821C1FE4:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x821bf740
	sub_821BF740(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x821bdf48
	sub_821BDF48(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x821c1fe4
	if (cr6.lt) goto loc_821C1FE4;
loc_821C201C:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821c214c
	if (!cr0.gt) goto loc_821C214C;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 144);
loc_821C2038:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r7
	ctx.r5.u64 = r11.u64 + ctx.r7.u64;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x821c20f8
	goto loc_821C20F8;
loc_821C204C:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x821c2114
	if (cr0.eq) goto loc_821C2114;
loc_821C2080:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x821c20a4
	goto loc_821C20A4;
loc_821C2088:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// beq cr6,0x821c20a0
	if (cr6.eq) goto loc_821C20A0;
	// lwz r28,8(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r8,r28
	cr6.compare<int32_t>(ctx.r8.s32, r28.s32, xer);
	// beq cr6,0x821c20c0
	if (cr6.eq) goto loc_821C20C0;
loc_821C20A0:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_821C20A4:
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x821c2088
	if (!cr0.eq) goto loc_821C2088;
	// b 0x821c20c4
	goto loc_821C20C4;
loc_821C20C0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_821C20C4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x821c2080
	if (!cr0.eq) goto loc_821C2080;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x821c2114
	if (cr6.lt) goto loc_821C2114;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_821C20F8:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x821c204c
	if (!cr0.eq) goto loc_821C204C;
	// b 0x821c2134
	goto loc_821C2134;
loc_821C2114:
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 144);
loc_821C2134:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x821c2038
	if (cr6.lt) goto loc_821C2038;
loc_821C214C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821c21c0
	if (!cr0.gt) goto loc_821C21C0;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_821C2174:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x821bc5e0
	sub_821BC5E0(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821c2190
	goto loc_821C2190;
loc_821C218C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_821C2190:
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
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
	// bne 0x821c218c
	if (!cr0.eq) goto loc_821C218C;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x821c2174
	if (cr6.lt) goto loc_821C2174;
loc_821C21C0:
	// stw r25,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r25.u32);
	// stw r25,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r25.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821c18c0
	sub_821C18C0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c2200
	if (cr6.eq) goto loc_821C2200;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C2200:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821C220C"))) PPC_WEAK_FUNC(sub_821C220C);
PPC_FUNC_IMPL(__imp__sub_821C220C) {
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
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
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

__attribute__((alias("__imp__sub_821C2234"))) PPC_WEAK_FUNC(sub_821C2234);
PPC_FUNC_IMPL(__imp__sub_821C2234) {
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

__attribute__((alias("__imp__sub_821C225C"))) PPC_WEAK_FUNC(sub_821C225C);
PPC_FUNC_IMPL(__imp__sub_821C225C) {
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

__attribute__((alias("__imp__sub_821C2284"))) PPC_WEAK_FUNC(sub_821C2284);
PPC_FUNC_IMPL(__imp__sub_821C2284) {
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
	// bl 0x821c18c0
	sub_821C18C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C22AC"))) PPC_WEAK_FUNC(sub_821C22AC);
PPC_FUNC_IMPL(__imp__sub_821C22AC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c22dc
	if (cr0.eq) goto loc_821C22DC;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_821C22DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C22EC"))) PPC_WEAK_FUNC(sub_821C22EC);
PPC_FUNC_IMPL(__imp__sub_821C22EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C22F0"))) PPC_WEAK_FUNC(sub_821C22F0);
PPC_FUNC_IMPL(__imp__sub_821C22F0) {
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
	// b 0x821c2324
	goto loc_821C2324;
loc_821C2308:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C2324:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821c2308
	if (!cr6.eq) goto loc_821C2308;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C233C"))) PPC_WEAK_FUNC(sub_821C233C);
PPC_FUNC_IMPL(__imp__sub_821C233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2340"))) PPC_WEAK_FUNC(sub_821C2340);
PPC_FUNC_IMPL(__imp__sub_821C2340) {
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
	// beq cr6,0x821c2394
	if (cr6.eq) goto loc_821C2394;
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
	// blt cr6,0x821c2380
	if (cr6.lt) goto loc_821C2380;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821c0bd8
	sub_821C0BD8(ctx, base);
	// b 0x821c2394
	goto loc_821C2394;
loc_821C2380:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x821c1af8
	sub_821C1AF8(ctx, base);
loc_821C2394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C23A4"))) PPC_WEAK_FUNC(sub_821C23A4);
PPC_FUNC_IMPL(__imp__sub_821C23A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C23A8"))) PPC_WEAK_FUNC(sub_821C23A8);
PPC_FUNC_IMPL(__imp__sub_821C23A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x821c22f0
	sub_821C22F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C23AC"))) PPC_WEAK_FUNC(sub_821C23AC);
PPC_FUNC_IMPL(__imp__sub_821C23AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C23B0"))) PPC_WEAK_FUNC(sub_821C23B0);
PPC_FUNC_IMPL(__imp__sub_821C23B0) {
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
	// li r8,12
	ctx.r8.s64 = 12;
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
	// bge cr6,0x821c2400
	if (!cr6.lt) goto loc_821C2400;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x821c2414
	if (cr6.eq) goto loc_821C2414;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821c0ac0
	sub_821C0AC0(ctx, base);
	// b 0x821c2414
	goto loc_821C2414;
loc_821C2400:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x821c2340
	sub_821C2340(ctx, base);
loc_821C2414:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C2424"))) PPC_WEAK_FUNC(sub_821C2424);
PPC_FUNC_IMPL(__imp__sub_821C2424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2428"))) PPC_WEAK_FUNC(sub_821C2428);
PPC_FUNC_IMPL(__imp__sub_821C2428) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15968(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15968);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// beq cr6,0x821c2464
	if (cr6.eq) goto loc_821C2464;
	// bl 0x821c2430
	sub_821C2430(ctx, base);
	// b 0x821c2808
	goto loc_821C2808;
loc_821C2464:
	// addi r26,r29,280
	r26.s64 = r29.s64 + 280;
	// stw r4,276(r29)
	PPC_STORE_U32(r29.u32 + 276, ctx.r4.u32);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x821c248c
	if (cr0.eq) goto loc_821C248C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C248C:
	// lwz r11,220(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 220);
	// li r27,0
	r27.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2808
	if (!cr0.eq) goto loc_821C2808;
	// lwz r11,224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2808
	if (!cr0.eq) goto loc_821C2808;
	// lwz r11,276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 276);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x821c2638
	if (!cr6.eq) goto loc_821C2638;
	// addi r30,r29,216
	r30.s64 = r29.s64 + 216;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821c24f4
	goto loc_821C24F4;
loc_821C24D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8226ac18
	sub_8226AC18(ctx, base);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
loc_821C24F4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x821c24d4
	if (!cr6.eq) goto loc_821C24D4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r28,r11,-18832
	r28.s64 = r11.s64 + -18832;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c253c
	if (cr0.eq) goto loc_821C253C;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// b 0x821c2540
	goto loc_821C2540;
loc_821C253C:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_821C2540:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lfs f29,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f29.f64 = double(temp.f32);
	// lfs f30,-25364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	f30.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_821C2560:
	// stfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// ble cr6,0x821c257c
	if (!cr6.gt) goto loc_821C257C;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x821c2580
	goto loc_821C2580;
loc_821C257C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_821C2580:
	// li r11,3
	r11.s64 = 3;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// divw r11,r29,r11
	r11.s32 = r29.s32 / r11.s32;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r31,208
	r11.s64 = r31.s64 + 208;
	// bgt cr6,0x821c25ac
	if (cr6.gt) goto loc_821C25AC;
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
loc_821C25AC:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fnmadds f0,f10,f0,f13
	f0.f64 = double(float(-(ctx.f10.f64 * f0.f64 + ctx.f13.f64)));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bne cr6,0x821c25f4
	if (!cr6.eq) goto loc_821C25F4;
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// b 0x821c2628
	goto loc_821C2628;
loc_821C25F4:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c261c
	if (cr0.eq) goto loc_821C261C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// b 0x821c2620
	goto loc_821C2620;
loc_821C261C:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_821C2620:
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
loc_821C2628:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// blt cr6,0x821c2560
	if (cr6.lt) goto loc_821C2560;
	// b 0x821c2808
	goto loc_821C2808;
loc_821C2638:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821c2808
	if (!cr6.eq) goto loc_821C2808;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
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
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// lwz r9,224(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// li r11,6
	r11.s64 = 6;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x821c2714
	if (cr0.lt) goto loc_821C2714;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// mulli r28,r30,6
	r28.s64 = r30.s64 * 6;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_821C2688:
	// lwz r10,224(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// std r27,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r27.u64);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r8,r9,6
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rotlwi r9,r7,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// stw r27,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r27.u32);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + r11.u64;
	// stw r27,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r27.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// stw r27,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r27.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// std r7,192(r31)
	PPC_STORE_U64(r31.u32 + 192, ctx.r7.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8226c520
	sub_8226C520(ctx, base);
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x821c1cd0
	sub_821C1CD0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r28,r28,-6
	r28.s64 = r28.s64 + -6;
	// bge 0x821c2688
	if (!cr0.lt) goto loc_821C2688;
loc_821C2714:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8226d500
	sub_8226D500(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2750
	if (!cr0.eq) goto loc_821C2750;
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x821c274c
	if (cr0.eq) goto loc_821C274C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C274C:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_821C2750:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821c27d8
	if (cr6.eq) goto loc_821C27D8;
	// addi r28,r29,216
	r28.s64 = r29.s64 + 216;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x821c2788
	goto loc_821C2788;
loc_821C2768:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8226ac18
	sub_8226AC18(ctx, base);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
loc_821C2788:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821c2768
	if (!cr6.eq) goto loc_821C2768;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x8226cc78
	sub_8226CC78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c27d8
	if (!cr0.eq) goto loc_821C27D8;
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x821c27d4
	if (cr0.eq) goto loc_821C27D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C27D4:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_821C27D8:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c27fc
	if (cr0.eq) goto loc_821C27FC;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// bl 0x8226b6c0
	sub_8226B6C0(ctx, base);
	// b 0x821c2800
	goto loc_821C2800;
loc_821C27FC:
	// stw r27,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r27.u32);
loc_821C2800:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
loc_821C2808:
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821C2430"))) PPC_WEAK_FUNC(sub_821C2430);
PPC_FUNC_IMPL(__imp__sub_821C2430) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// beq cr6,0x821c2464
	if (cr6.eq) goto loc_821C2464;
	// bl 0x821c2430
	sub_821C2430(ctx, base);
	// b 0x821c2808
	goto loc_821C2808;
loc_821C2464:
	// addi r26,r29,280
	r26.s64 = r29.s64 + 280;
	// stw r4,276(r29)
	PPC_STORE_U32(r29.u32 + 276, ctx.r4.u32);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x821c248c
	if (cr0.eq) goto loc_821C248C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C248C:
	// lwz r11,220(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 220);
	// li r27,0
	r27.s64 = 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2808
	if (!cr0.eq) goto loc_821C2808;
	// lwz r11,224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2808
	if (!cr0.eq) goto loc_821C2808;
	// lwz r11,276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 276);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x821c2638
	if (!cr6.eq) goto loc_821C2638;
	// addi r30,r29,216
	r30.s64 = r29.s64 + 216;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821c24f4
	goto loc_821C24F4;
loc_821C24D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8226ac18
	sub_8226AC18(ctx, base);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
loc_821C24F4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x821c24d4
	if (!cr6.eq) goto loc_821C24D4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r28,r11,-18832
	r28.s64 = r11.s64 + -18832;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c253c
	if (cr0.eq) goto loc_821C253C;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// b 0x821c2540
	goto loc_821C2540;
loc_821C253C:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_821C2540:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lfs f29,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f29.f64 = double(temp.f32);
	// lfs f30,-25364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	f30.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_821C2560:
	// stfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// ble cr6,0x821c257c
	if (!cr6.gt) goto loc_821C257C;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x821c2580
	goto loc_821C2580;
loc_821C257C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_821C2580:
	// li r11,3
	r11.s64 = 3;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// divw r11,r29,r11
	r11.s32 = r29.s32 / r11.s32;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r31,208
	r11.s64 = r31.s64 + 208;
	// bgt cr6,0x821c25ac
	if (cr6.gt) goto loc_821C25AC;
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
loc_821C25AC:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fnmadds f0,f10,f0,f13
	f0.f64 = double(float(-(ctx.f10.f64 * f0.f64 + ctx.f13.f64)));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bne cr6,0x821c25f4
	if (!cr6.eq) goto loc_821C25F4;
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// b 0x821c2628
	goto loc_821C2628;
loc_821C25F4:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c261c
	if (cr0.eq) goto loc_821C261C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// b 0x821c2620
	goto loc_821C2620;
loc_821C261C:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_821C2620:
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
loc_821C2628:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// blt cr6,0x821c2560
	if (cr6.lt) goto loc_821C2560;
	// b 0x821c2808
	goto loc_821C2808;
loc_821C2638:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821c2808
	if (!cr6.eq) goto loc_821C2808;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
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
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// lwz r9,224(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// li r11,6
	r11.s64 = 6;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x821c2714
	if (cr0.lt) goto loc_821C2714;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// mulli r28,r30,6
	r28.s64 = r30.s64 * 6;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_821C2688:
	// lwz r10,224(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// std r27,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r27.u64);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r8,r9,6
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// rotlwi r9,r7,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// ld r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// stw r27,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r27.u32);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + r11.u64;
	// stw r27,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r27.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// stw r27,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r27.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// std r7,192(r31)
	PPC_STORE_U64(r31.u32 + 192, ctx.r7.u64);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8226c520
	sub_8226C520(ctx, base);
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x821c1cd0
	sub_821C1CD0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r28,r28,-6
	r28.s64 = r28.s64 + -6;
	// bge 0x821c2688
	if (!cr0.lt) goto loc_821C2688;
loc_821C2714:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8226d500
	sub_8226D500(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2750
	if (!cr0.eq) goto loc_821C2750;
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x821c274c
	if (cr0.eq) goto loc_821C274C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C274C:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_821C2750:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821c27d8
	if (cr6.eq) goto loc_821C27D8;
	// addi r28,r29,216
	r28.s64 = r29.s64 + 216;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x821c2788
	goto loc_821C2788;
loc_821C2768:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8226ac18
	sub_8226AC18(ctx, base);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
loc_821C2788:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821c2768
	if (!cr6.eq) goto loc_821C2768;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x8226cc78
	sub_8226CC78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c27d8
	if (!cr0.eq) goto loc_821C27D8;
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x821c27d4
	if (cr0.eq) goto loc_821C27D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C27D4:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_821C27D8:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c27fc
	if (cr0.eq) goto loc_821C27FC;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// bl 0x8226b6c0
	sub_8226B6C0(ctx, base);
	// b 0x821c2800
	goto loc_821C2800;
loc_821C27FC:
	// stw r27,276(r29)
	PPC_STORE_U32(r29.u32 + 276, r27.u32);
loc_821C2800:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821c22f0
	sub_821C22F0(ctx, base);
loc_821C2808:
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821C281C"))) PPC_WEAK_FUNC(sub_821C281C);
PPC_FUNC_IMPL(__imp__sub_821C281C) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821c23a8
	sub_821C23A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C2844"))) PPC_WEAK_FUNC(sub_821C2844);
PPC_FUNC_IMPL(__imp__sub_821C2844) {
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
	// bl 0x821c0d90
	sub_821C0D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C286C"))) PPC_WEAK_FUNC(sub_821C286C);
PPC_FUNC_IMPL(__imp__sub_821C286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2870"))) PPC_WEAK_FUNC(sub_821C2870);
PPC_FUNC_IMPL(__imp__sub_821C2870) {
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
	// lwz r16,-15872(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15872);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-248
	ctx.r3.s64 = r30.s64 + -248;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2116
	ctx.r6.s64 = r11.s64 + 2116;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x821c2a00
	if (cr0.eq) goto loc_821C2A00;
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// lwz r4,244(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 244);
	// bl 0x82126b38
	sub_82126B38(ctx, base);
	// lwz r11,272(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 272);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bne cr6,0x821c297c
	if (!cr6.eq) goto loc_821C297C;
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r11.u32);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x821c2988
	if (!cr6.eq) goto loc_821C2988;
loc_821C2920:
	// addi r27,r30,-288
	r27.s64 = r30.s64 + -288;
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// addi r4,r11,216
	ctx.r4.s64 = r11.s64 + 216;
	// bl 0x821bbf80
	sub_821BBF80(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// addi r4,r11,224
	ctx.r4.s64 = r11.s64 + 224;
	// bl 0x821bfdb0
	sub_821BFDB0(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// addi r4,r11,248
	ctx.r4.s64 = r11.s64 + 248;
	// bl 0x821c0830
	sub_821C0830(ctx, base);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x821c2994
	if (cr6.eq) goto loc_821C2994;
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// bl 0x821c2430
	sub_821C2430(ctx, base);
	// b 0x821c2994
	goto loc_821C2994;
loc_821C297C:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// stw r11,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r11.u32);
	// bne cr6,0x821c2920
	if (!cr6.eq) goto loc_821C2920;
loc_821C2988:
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// lwz r4,264(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
loc_821C2994:
	// lwz r28,-20(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x821c29b0
	if (cr0.eq) goto loc_821C29B0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bcd70
	sub_821BCD70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821C29B0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r11.u32);
	// lwz r11,268(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821c2a00
	if (cr6.eq) goto loc_821C2A00;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-18816
	ctx.r4.s64 = r11.s64 + -18816;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c29f0
	if (cr0.eq) goto loc_821C29F0;
	// addi r4,r30,-288
	ctx.r4.s64 = r30.s64 + -288;
	// bl 0x821bd7e8
	sub_821BD7E8(ctx, base);
	// b 0x821c29f4
	goto loc_821C29F4;
loc_821C29F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C29F4:
	// stw r3,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, ctx.r3.u32);
	// lwz r4,268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 268);
	// bl 0x821be328
	sub_821BE328(ctx, base);
loc_821C2A00:
	// addi r3,r30,-288
	ctx.r3.s64 = r30.s64 + -288;
	// li r4,191
	ctx.r4.s64 = 191;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821C2878"))) PPC_WEAK_FUNC(sub_821C2878);
PPC_FUNC_IMPL(__imp__sub_821C2878) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-248
	ctx.r3.s64 = r30.s64 + -248;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2116
	ctx.r6.s64 = r11.s64 + 2116;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x821c2a00
	if (cr0.eq) goto loc_821C2A00;
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// lwz r4,244(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 244);
	// bl 0x82126b38
	sub_82126B38(ctx, base);
	// lwz r11,272(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 272);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bne cr6,0x821c297c
	if (!cr6.eq) goto loc_821C297C;
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r11.u32);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x821c2988
	if (!cr6.eq) goto loc_821C2988;
loc_821C2920:
	// addi r27,r30,-288
	r27.s64 = r30.s64 + -288;
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// addi r4,r11,216
	ctx.r4.s64 = r11.s64 + 216;
	// bl 0x821bbf80
	sub_821BBF80(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// addi r4,r11,224
	ctx.r4.s64 = r11.s64 + 224;
	// bl 0x821bfdb0
	sub_821BFDB0(ctx, base);
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// addi r4,r11,248
	ctx.r4.s64 = r11.s64 + 248;
	// bl 0x821c0830
	sub_821C0830(ctx, base);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x821c2994
	if (cr6.eq) goto loc_821C2994;
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// bl 0x821c2430
	sub_821C2430(ctx, base);
	// b 0x821c2994
	goto loc_821C2994;
loc_821C297C:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// stw r11,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r11.u32);
	// bne cr6,0x821c2920
	if (!cr6.eq) goto loc_821C2920;
loc_821C2988:
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// lwz r4,264(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
loc_821C2994:
	// lwz r28,-20(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x821c29b0
	if (cr0.eq) goto loc_821C29B0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bcd70
	sub_821BCD70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821C29B0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r11.u32);
	// lwz r11,268(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821c2a00
	if (cr6.eq) goto loc_821C2A00;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-18816
	ctx.r4.s64 = r11.s64 + -18816;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c29f0
	if (cr0.eq) goto loc_821C29F0;
	// addi r4,r30,-288
	ctx.r4.s64 = r30.s64 + -288;
	// bl 0x821bd7e8
	sub_821BD7E8(ctx, base);
	// b 0x821c29f4
	goto loc_821C29F4;
loc_821C29F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C29F4:
	// stw r3,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, ctx.r3.u32);
	// lwz r4,268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 268);
	// bl 0x821be328
	sub_821BE328(ctx, base);
loc_821C2A00:
	// addi r3,r30,-288
	ctx.r3.s64 = r30.s64 + -288;
	// li r4,191
	ctx.r4.s64 = 191;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821C2A20"))) PPC_WEAK_FUNC(sub_821C2A20);
PPC_FUNC_IMPL(__imp__sub_821C2A20) {
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

__attribute__((alias("__imp__sub_821C2A48"))) PPC_WEAK_FUNC(sub_821C2A48);
PPC_FUNC_IMPL(__imp__sub_821C2A48) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c2430
	sub_821C2430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C2A94"))) PPC_WEAK_FUNC(sub_821C2A94);
PPC_FUNC_IMPL(__imp__sub_821C2A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2A98"))) PPC_WEAK_FUNC(sub_821C2A98);
PPC_FUNC_IMPL(__imp__sub_821C2A98) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15800(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15800);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x821c23b0
	sub_821C23B0(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x821c2b10
	if (cr6.eq) goto loc_821C2B10;
loc_821C2AF4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821c0900
	sub_821C0900(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821c2af4
	if (!cr6.eq) goto loc_821C2AF4;
loc_821C2B10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C2AA0"))) PPC_WEAK_FUNC(sub_821C2AA0);
PPC_FUNC_IMPL(__imp__sub_821C2AA0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x821c23b0
	sub_821C23B0(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x821c2b10
	if (cr6.eq) goto loc_821C2B10;
loc_821C2AF4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821c0900
	sub_821C0900(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821c2af4
	if (!cr6.eq) goto loc_821C2AF4;
loc_821C2B10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C2B1C"))) PPC_WEAK_FUNC(sub_821C2B1C);
PPC_FUNC_IMPL(__imp__sub_821C2B1C) {
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
	// bl 0x826a4840
	sub_826A4840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C2B44"))) PPC_WEAK_FUNC(sub_821C2B44);
PPC_FUNC_IMPL(__imp__sub_821C2B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2B48"))) PPC_WEAK_FUNC(sub_821C2B48);
PPC_FUNC_IMPL(__imp__sub_821C2B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821c2878
	sub_821C2878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C2B54"))) PPC_WEAK_FUNC(sub_821C2B54);
PPC_FUNC_IMPL(__imp__sub_821C2B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C2B58"))) PPC_WEAK_FUNC(sub_821C2B58);
PPC_FUNC_IMPL(__imp__sub_821C2B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15608(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15608);
	// mflr r12
	// bl 0x8239bcd8
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-640
	r31.s64 = ctx.r1.s64 + -640;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r22,r11,10916
	r22.s64 = r11.s64 + 10916;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r10,9652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9652);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x821c37a0
	if (cr6.gt) goto loc_821C37A0;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// ble cr6,0x821c2bcc
	if (!cr6.gt) goto loc_821C2BCC;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_821C2BCC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-248
	ctx.r3.s64 = r30.s64 + -248;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// bge cr6,0x821c2c54
	if (!cr6.lt) goto loc_821C2C54;
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2c04
	if (!cr0.eq) goto loc_821C2C04;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2c14
	goto loc_821C2C14;
loc_821C2C04:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2C14:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r20,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r20.u32);
	// stw r20,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r20.u32);
	// addi r10,r10,-16220
	ctx.r10.s64 = ctx.r10.s64 + -16220;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// stw r20,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r20.u32);
	// stw r10,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,268
	ctx.r4.s64 = r31.s64 + 268;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821be530
	sub_821BE530(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82158d48
	sub_82158D48(ctx, base);
loc_821C2C54:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bge cr6,0x821c2cc8
	if (!cr6.lt) goto loc_821C2CC8;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,172
	ctx.r4.s64 = r31.s64 + 172;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821c2cc4
	if (cr6.eq) goto loc_821C2CC4;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x821c2cc4
	if (cr6.eq) goto loc_821C2CC4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x821c2cac
	if (!cr6.eq) goto loc_821C2CAC;
	// li r27,2
	r27.s64 = 2;
	// b 0x821c2cc8
	goto loc_821C2CC8;
loc_821C2CAC:
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x821c2cbc
	if (!cr6.eq) goto loc_821C2CBC;
	// li r27,3
	r27.s64 = 3;
	// b 0x821c2cc8
	goto loc_821C2CC8;
loc_821C2CBC:
	// li r27,1
	r27.s64 = 1;
	// b 0x821c2cc8
	goto loc_821C2CC8;
loc_821C2CC4:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_821C2CC8:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x821c2ce4
	if (!cr6.lt) goto loc_821C2CE4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821C2CE4:
	// addi r28,r30,-52
	r28.s64 = r30.s64 + -52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82127898
	sub_82127898(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addic. r11,r11,-27
	xer.ca = r11.u32 > 26;
	r11.s64 = r11.s64 + -27;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2d4c
	if (!cr0.eq) goto loc_821C2D4C;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,384
	ctx.r4.s64 = r31.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821c2d4c
	if (!cr0.eq) goto loc_821C2D4C;
	// lbz r11,384(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 384);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821c2d4c
	if (cr0.eq) goto loc_821C2D4C;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,-256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -256);
	// bl 0x821ecbb0
	sub_821ECBB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126b38
	sub_82126B38(ctx, base);
loc_821C2D4C:
	// addi r28,r30,-32
	r28.s64 = r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// lwz r11,-24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821c2d74
	if (!cr0.eq) goto loc_821C2D74;
	// addi r4,r30,-288
	ctx.r4.s64 = r30.s64 + -288;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
loc_821C2D74:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bge cr6,0x821c2db4
	if (!cr6.lt) goto loc_821C2DB4;
	// lwz r10,-44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821c2db4
	if (cr0.eq) goto loc_821C2DB4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x821c2da0
	if (cr6.eq) goto loc_821C2DA0;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x821c2db4
	if (cr0.eq) goto loc_821C2DB4;
loc_821C2DA0:
	// lwz r11,260(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// stw r27,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, r27.u32);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, r11.u32);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2DB4:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bge cr6,0x821c2e08
	if (!cr6.lt) goto loc_821C2E08;
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2dcc
	if (!cr0.eq) goto loc_821C2DCC;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2ddc
	goto loc_821C2DDC;
loc_821C2DCC:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2DDC:
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// stw r20,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r20.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-18660
	r11.s64 = r11.s64 + -18660;
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2E08:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// addi r25,r10,-20968
	r25.s64 = ctx.r10.s64 + -20968;
	// bge cr6,0x821c2e84
	if (!cr6.lt) goto loc_821C2E84;
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2e28
	if (!cr0.eq) goto loc_821C2E28;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2e38
	goto loc_821C2E38;
loc_821C2E28:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2E38:
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r20,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r20.u32);
	// stw r25,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r25.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r28,r30,-252
	r28.s64 = r30.s64 + -252;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821afaa0
	sub_821AFAA0(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2E84:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// bge cr6,0x821c2f10
	if (!cr6.lt) goto loc_821C2F10;
	// addic. r10,r30,-288
	xer.ca = r30.u32 > 287;
	ctx.r10.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821c2e9c
	if (!cr0.eq) goto loc_821C2E9C;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2eac
	goto loc_821C2EAC;
loc_821C2E9C:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2EAC:
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r20,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r20.u32);
	// stw r25,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r25.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x821c2ec8
	if (!cr6.eq) goto loc_821C2EC8;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2ed8
	goto loc_821C2ED8;
loc_821C2EC8:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2ED8:
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r20,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r20.u32);
	// stw r25,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r25.u32);
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r31,192
	r28.s64 = r31.s64 + 192;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2F10:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x821c2f28
	if (!cr6.lt) goto loc_821C2F28;
	// addi r4,r31,368
	ctx.r4.s64 = r31.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2F28:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// lfs f31,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// bge cr6,0x821c2f7c
	if (!cr6.lt) goto loc_821C2F7C;
	// addi r4,r31,304
	ctx.r4.s64 = r31.s64 + 304;
	// stfs f31,320(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 320, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r10,r30,-276
	ctx.r10.s64 = r30.s64 + -276;
	// addi r11,r31,304
	r11.s64 = r31.s64 + 304;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_821C2F64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821c2f64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821C2F64;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2F7C:
	// addi r10,r11,-5
	ctx.r10.s64 = r11.s64 + -5;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgt cr6,0x821c2f98
	if (cr6.gt) goto loc_821C2F98;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2F98:
	// addi r10,r11,-6
	ctx.r10.s64 = r11.s64 + -6;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bgt cr6,0x821c2fd4
	if (cr6.gt) goto loc_821C2FD4;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = r31.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2FD4:
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// ble cr6,0x821c2ff0
	if (!cr6.gt) goto loc_821C2FF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x821c3018
	goto loc_821C3018;
loc_821C2FF0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// ble cr6,0x821c301c
	if (!cr6.gt) goto loc_821C301C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// stw r11,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r11.u32);
loc_821C3018:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C301C:
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// ble cr6,0x821c3038
	if (!cr6.gt) goto loc_821C3038;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-12
	ctx.r4.s64 = r30.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C3038:
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// ble cr6,0x821c3078
	if (!cr6.gt) goto loc_821C3078;
	// addi r28,r30,-8
	r28.s64 = r30.s64 + -8;
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x821c3064
	if (cr0.eq) goto loc_821C3064;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C3064:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r20,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r20.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226ab80
	sub_8226AB80(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C3078:
	// addic. r10,r11,-7
	xer.ca = r11.u32 > 6;
	ctx.r10.s64 = r11.s64 + -7;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821c3090
	if (!cr0.eq) goto loc_821C3090;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C3090:
	// addi r11,r11,-9
	r11.s64 = r11.s64 + -9;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x821c30ac
	if (cr6.gt) goto loc_821C30AC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,284
	ctx.r4.s64 = r31.s64 + 284;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821C30AC:
	// addi r26,r30,-72
	r26.s64 = r30.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r28,r30,-64
	r28.s64 = r30.s64 + -64;
	// bl 0x821bcf90
	sub_821BCF90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821c19e8
	sub_821C19E8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x821c3124
	if (cr6.gt) goto loc_821C3124;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821c3124
	if (cr6.eq) goto loc_821C3124;
loc_821C30F4:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,156
	ctx.r4.s64 = r31.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bne 0x821c30f4
	if (!cr0.eq) goto loc_821C30F4;
loc_821C3124:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r21,63
	r21.s64 = 63;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bgt cr6,0x821c3228
	if (cr6.gt) goto loc_821C3228;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// ble cr6,0x821c321c
	if (!cr6.gt) goto loc_821C321C;
	// addi r28,r30,-40
	r28.s64 = r30.s64 + -40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bde98
	sub_821BDE98(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821c3234
	if (cr6.eq) goto loc_821C3234;
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
loc_821C316C:
	// stw r20,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r20.u32);
	// stw r20,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r20.u32);
	// stw r20,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r20.u32);
	// stw r20,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r20.u32);
	// stw r20,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r20.u32);
	// stw r20,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r20.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r27,r31,136
	r27.s64 = r31.s64 + 136;
	// bl 0x821c0900
	sub_821C0900(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821c09a0
	sub_821C09A0(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c31e8
	if (cr6.eq) goto loc_821C31E8;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C31E8:
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c3208
	if (cr6.eq) goto loc_821C3208;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C3208:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bne 0x821c316c
	if (!cr0.eq) goto loc_821C316C;
	// b 0x821c3234
	goto loc_821C3234;
loc_821C321C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// ble cr6,0x821c3238
	if (!cr6.gt) goto loc_821C3238;
loc_821C3228:
	// addi r4,r30,-40
	ctx.r4.s64 = r30.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bf6c0
	sub_821BF6C0(ctx, base);
loc_821C3234:
	// li r21,191
	r21.s64 = 191;
loc_821C3238:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// ble cr6,0x821c35e4
	if (!cr6.gt) goto loc_821C35E4;
	// addic. r27,r30,-288
	xer.ca = r30.u32 > 287;
	r27.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x821c3254
	if (!cr0.eq) goto loc_821C3254;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c3264
	goto loc_821C3264;
loc_821C3254:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C3264:
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r20,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r20.u32);
	// stw r25,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r25.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// lwz r28,-20(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x821c3298
	if (cr0.eq) goto loc_821C3298;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bcd70
	sub_821BCD70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821C3298:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r20,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r20.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821c35dc
	if (cr6.eq) goto loc_821C35DC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-18816
	ctx.r4.s64 = r11.s64 + -18816;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c32d4
	if (cr0.eq) goto loc_821C32D4;
	// addi r4,r30,-288
	ctx.r4.s64 = r30.s64 + -288;
	// bl 0x821bd7e8
	sub_821BD7E8(ctx, base);
	// b 0x821c32d8
	goto loc_821C32D8;
loc_821C32D4:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_821C32D8:
	// stw r3,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, ctx.r3.u32);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// ble cr6,0x821c3478
	if (!cr6.gt) goto loc_821C3478;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// addi r28,r11,36
	r28.s64 = r11.s64 + 36;
	// addi r27,r11,24
	r27.s64 = r11.s64 + 24;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,48
	r28.s64 = r11.s64 + 48;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// addi r25,r28,16
	r25.s64 = r28.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,112
	r28.s64 = r11.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// addi r25,r28,16
	r25.s64 = r28.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,176
	r28.s64 = r11.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// addi r25,r28,16
	r25.s64 = r28.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,240
	r28.s64 = r11.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// addi r25,r28,16
	r25.s64 = r28.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bge cr6,0x821c35dc
	if (!cr6.lt) goto loc_821C35DC;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x821c35dc
	if (cr6.eq) goto loc_821C35DC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r10,40
	r11.s64 = ctx.r10.s64 + 40;
	// lfs f11,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
loc_821C342C:
	// lfs f12,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// stfs f0,-8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x821c342c
	if (!cr6.eq) goto loc_821C342C;
	// b 0x821c35dc
	goto loc_821C35DC;
loc_821C3478:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821c348c
	if (!cr6.eq) goto loc_821C348C;
	// lwz r4,-236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -236);
	// b 0x821c349c
	goto loc_821C349C;
loc_821C348C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r4,r30,-252
	ctx.r4.s64 = r30.s64 + -252;
	// bne cr6,0x821c349c
	if (!cr6.eq) goto loc_821C349C;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_821C349C:
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lfs f30,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f30.f64 = double(temp.f32);
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
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// addi r28,r11,112
	r28.s64 = r11.s64 + 112;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r25,r28,32
	r25.s64 = r28.s64 + 32;
	// addi r24,r28,16
	r24.s64 = r28.s64 + 16;
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
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r11,176
	r28.s64 = r11.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r25,r28,32
	r25.s64 = r28.s64 + 32;
	// addi r24,r28,16
	r24.s64 = r28.s64 + 16;
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
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x821c35dc
	if (cr6.eq) goto loc_821C35DC;
	// addi r10,r11,40
	ctx.r10.s64 = r11.s64 + 40;
loc_821C359C:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// fsubs f12,f30,f13
	ctx.f12.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f31,4(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x821c359c
	if (!cr6.eq) goto loc_821C359C;
loc_821C35DC:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
loc_821C35E4:
	// addi r23,r30,-288
	r23.s64 = r30.s64 + -288;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821bd000
	sub_821BD000(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c36d8
	if (cr0.eq) goto loc_821C36D8;
	// addi r25,r30,-40
	r25.s64 = r30.s64 + -40;
	// lwz r27,0(r25)
	r27.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r27,r25
	r11.s64 = r25.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821c36d8
	if (cr0.eq) goto loc_821C36D8;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r26,r11,10920
	r26.s64 = r11.s64 + 10920;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r24,r11,-18804
	r24.s64 = r11.s64 + -18804;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
loc_821C362C:
	// addi r6,r31,336
	ctx.r6.s64 = r31.s64 + 336;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x821bdd28
	sub_821BDD28(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r28,r11,8
	r28.s64 = r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r5,r4
	r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r4,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r4.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r27,r25
	r11.s64 = r25.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821c362c
	if (!cr0.eq) goto loc_821C362C;
loc_821C36D8:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x821c3708
	if (cr6.gt) goto loc_821C3708;
	// stw r20,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r20.u32);
	// stw r20,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r20.u32);
	// stw r20,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r20.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c2aa0
	sub_821C2AA0(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821c0ec0
	sub_821C0EC0(ctx, base);
loc_821C3708:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821c3760
	if (!cr6.eq) goto loc_821C3760;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,260
	ctx.r4.s64 = r31.s64 + 260;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,280
	ctx.r4.s64 = r31.s64 + 280;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,276
	ctx.r4.s64 = r31.s64 + 276;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821C3760:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// bne cr6,0x821c3788
	if (!cr6.eq) goto loc_821C3788;
	// lwz r11,-24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// addi r10,r30,-288
	ctx.r10.s64 = r30.s64 + -288;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x821c3788
	if (!cr6.eq) goto loc_821C3788;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// bl 0x821c2430
	sub_821C2430(ctx, base);
loc_821C3788:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821C37A0:
	// addi r1,r31,640
	ctx.r1.s64 = r31.s64 + 640;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_821C2B60"))) PPC_WEAK_FUNC(sub_821C2B60);
PPC_FUNC_IMPL(__imp__sub_821C2B60) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// addi r31,r1,-640
	r31.s64 = ctx.r1.s64 + -640;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r22,r11,10916
	r22.s64 = r11.s64 + 10916;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r10,9652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9652);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x821c37a0
	if (cr6.gt) goto loc_821C37A0;
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// ble cr6,0x821c2bcc
	if (!cr6.gt) goto loc_821C2BCC;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = r11.s64 + -284;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_821C2BCC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,-248
	ctx.r3.s64 = r30.s64 + -248;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// bge cr6,0x821c2c54
	if (!cr6.lt) goto loc_821C2C54;
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2c04
	if (!cr0.eq) goto loc_821C2C04;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2c14
	goto loc_821C2C14;
loc_821C2C04:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2C14:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r20,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r20.u32);
	// stw r20,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r20.u32);
	// addi r10,r10,-16220
	ctx.r10.s64 = ctx.r10.s64 + -16220;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// stw r20,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r20.u32);
	// stw r10,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,268
	ctx.r4.s64 = r31.s64 + 268;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821be530
	sub_821BE530(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82158d48
	sub_82158D48(ctx, base);
loc_821C2C54:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bge cr6,0x821c2cc8
	if (!cr6.lt) goto loc_821C2CC8;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,172
	ctx.r4.s64 = r31.s64 + 172;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821c2cc4
	if (cr6.eq) goto loc_821C2CC4;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x821c2cc4
	if (cr6.eq) goto loc_821C2CC4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x821c2cac
	if (!cr6.eq) goto loc_821C2CAC;
	// li r27,2
	r27.s64 = 2;
	// b 0x821c2cc8
	goto loc_821C2CC8;
loc_821C2CAC:
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x821c2cbc
	if (!cr6.eq) goto loc_821C2CBC;
	// li r27,3
	r27.s64 = 3;
	// b 0x821c2cc8
	goto loc_821C2CC8;
loc_821C2CBC:
	// li r27,1
	r27.s64 = 1;
	// b 0x821c2cc8
	goto loc_821C2CC8;
loc_821C2CC4:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_821C2CC8:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x821c2ce4
	if (!cr6.lt) goto loc_821C2CE4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821C2CE4:
	// addi r28,r30,-52
	r28.s64 = r30.s64 + -52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82127898
	sub_82127898(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addic. r11,r11,-27
	xer.ca = r11.u32 > 26;
	r11.s64 = r11.s64 + -27;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2d4c
	if (!cr0.eq) goto loc_821C2D4C;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,384
	ctx.r4.s64 = r31.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821c2d4c
	if (!cr0.eq) goto loc_821C2D4C;
	// lbz r11,384(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 384);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821c2d4c
	if (cr0.eq) goto loc_821C2D4C;
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,-256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -256);
	// bl 0x821ecbb0
	sub_821ECBB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126b38
	sub_82126B38(ctx, base);
loc_821C2D4C:
	// addi r28,r30,-32
	r28.s64 = r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// lwz r11,-24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821c2d74
	if (!cr0.eq) goto loc_821C2D74;
	// addi r4,r30,-288
	ctx.r4.s64 = r30.s64 + -288;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
loc_821C2D74:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bge cr6,0x821c2db4
	if (!cr6.lt) goto loc_821C2DB4;
	// lwz r10,-44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -44);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821c2db4
	if (cr0.eq) goto loc_821C2DB4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x821c2da0
	if (cr6.eq) goto loc_821C2DA0;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x821c2db4
	if (cr0.eq) goto loc_821C2DB4;
loc_821C2DA0:
	// lwz r11,260(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// stw r27,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, r27.u32);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, r11.u32);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2DB4:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bge cr6,0x821c2e08
	if (!cr6.lt) goto loc_821C2E08;
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2dcc
	if (!cr0.eq) goto loc_821C2DCC;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2ddc
	goto loc_821C2DDC;
loc_821C2DCC:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2DDC:
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// stw r20,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r20.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-18660
	r11.s64 = r11.s64 + -18660;
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2E08:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// addi r25,r10,-20968
	r25.s64 = ctx.r10.s64 + -20968;
	// bge cr6,0x821c2e84
	if (!cr6.lt) goto loc_821C2E84;
	// addic. r11,r30,-288
	xer.ca = r30.u32 > 287;
	r11.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821c2e28
	if (!cr0.eq) goto loc_821C2E28;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2e38
	goto loc_821C2E38;
loc_821C2E28:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2E38:
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r20,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r20.u32);
	// stw r25,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r25.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r28,r30,-252
	r28.s64 = r30.s64 + -252;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821afaa0
	sub_821AFAA0(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2E84:
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// bge cr6,0x821c2f10
	if (!cr6.lt) goto loc_821C2F10;
	// addic. r10,r30,-288
	xer.ca = r30.u32 > 287;
	ctx.r10.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821c2e9c
	if (!cr0.eq) goto loc_821C2E9C;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2eac
	goto loc_821C2EAC;
loc_821C2E9C:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2EAC:
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r20,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r20.u32);
	// stw r25,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r25.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x821c2ec8
	if (!cr6.eq) goto loc_821C2EC8;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c2ed8
	goto loc_821C2ED8;
loc_821C2EC8:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C2ED8:
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r20,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r20.u32);
	// stw r25,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r25.u32);
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r31,192
	r28.s64 = r31.s64 + 192;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2F10:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x821c2f28
	if (!cr6.lt) goto loc_821C2F28;
	// addi r4,r31,368
	ctx.r4.s64 = r31.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2F28:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// lfs f31,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// bge cr6,0x821c2f7c
	if (!cr6.lt) goto loc_821C2F7C;
	// addi r4,r31,304
	ctx.r4.s64 = r31.s64 + 304;
	// stfs f31,320(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 320, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r10,r30,-276
	ctx.r10.s64 = r30.s64 + -276;
	// addi r11,r31,304
	r11.s64 = r31.s64 + 304;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_821C2F64:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821c2f64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821C2F64;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2F7C:
	// addi r10,r11,-5
	ctx.r10.s64 = r11.s64 + -5;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgt cr6,0x821c2f98
	if (cr6.gt) goto loc_821C2F98;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2F98:
	// addi r10,r11,-6
	ctx.r10.s64 = r11.s64 + -6;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bgt cr6,0x821c2fd4
	if (cr6.gt) goto loc_821C2FD4;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,336
	ctx.r4.s64 = r31.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C2FD4:
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// ble cr6,0x821c2ff0
	if (!cr6.gt) goto loc_821C2FF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x821c3018
	goto loc_821C3018;
loc_821C2FF0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// ble cr6,0x821c301c
	if (!cr6.gt) goto loc_821C301C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// stw r11,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r11.u32);
loc_821C3018:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C301C:
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// ble cr6,0x821c3038
	if (!cr6.gt) goto loc_821C3038;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-12
	ctx.r4.s64 = r30.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C3038:
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// ble cr6,0x821c3078
	if (!cr6.gt) goto loc_821C3078;
	// addi r28,r30,-8
	r28.s64 = r30.s64 + -8;
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x821c3064
	if (cr0.eq) goto loc_821C3064;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821bbd00
	sub_821BBD00(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821C3064:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r20,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r20.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226ab80
	sub_8226AB80(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C3078:
	// addic. r10,r11,-7
	xer.ca = r11.u32 > 6;
	ctx.r10.s64 = r11.s64 + -7;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821c3090
	if (!cr0.eq) goto loc_821C3090;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_821C3090:
	// addi r11,r11,-9
	r11.s64 = r11.s64 + -9;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x821c30ac
	if (cr6.gt) goto loc_821C30AC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,284
	ctx.r4.s64 = r31.s64 + 284;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821C30AC:
	// addi r26,r30,-72
	r26.s64 = r30.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r28,r30,-64
	r28.s64 = r30.s64 + -64;
	// bl 0x821bcf90
	sub_821BCF90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821c19e8
	sub_821C19E8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x821c3124
	if (cr6.gt) goto loc_821C3124;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821c3124
	if (cr6.eq) goto loc_821C3124;
loc_821C30F4:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,156
	ctx.r4.s64 = r31.s64 + 156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bne 0x821c30f4
	if (!cr0.eq) goto loc_821C30F4;
loc_821C3124:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r21,63
	r21.s64 = 63;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// bgt cr6,0x821c3228
	if (cr6.gt) goto loc_821C3228;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpwi cr6,r11,21
	cr6.compare<int32_t>(r11.s32, 21, xer);
	// ble cr6,0x821c321c
	if (!cr6.gt) goto loc_821C321C;
	// addi r28,r30,-40
	r28.s64 = r30.s64 + -40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bde98
	sub_821BDE98(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821c3234
	if (cr6.eq) goto loc_821C3234;
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
loc_821C316C:
	// stw r20,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r20.u32);
	// stw r20,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r20.u32);
	// stw r20,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r20.u32);
	// stw r20,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r20.u32);
	// stw r20,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r20.u32);
	// stw r20,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r20.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r27,r31,136
	r27.s64 = r31.s64 + 136;
	// bl 0x821c0900
	sub_821C0900(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821c09a0
	sub_821C09A0(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// bl 0x821bdcc0
	sub_821BDCC0(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c31e8
	if (cr6.eq) goto loc_821C31E8;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C31E8:
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821c3208
	if (cr6.eq) goto loc_821C3208;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821C3208:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bne 0x821c316c
	if (!cr0.eq) goto loc_821C316C;
	// b 0x821c3234
	goto loc_821C3234;
loc_821C321C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// ble cr6,0x821c3238
	if (!cr6.gt) goto loc_821C3238;
loc_821C3228:
	// addi r4,r30,-40
	ctx.r4.s64 = r30.s64 + -40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821bf6c0
	sub_821BF6C0(ctx, base);
loc_821C3234:
	// li r21,191
	r21.s64 = 191;
loc_821C3238:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// ble cr6,0x821c35e4
	if (!cr6.gt) goto loc_821C35E4;
	// addic. r27,r30,-288
	xer.ca = r30.u32 > 287;
	r27.s64 = r30.s64 + -288;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x821c3254
	if (!cr0.eq) goto loc_821C3254;
	// mr r11,r20
	r11.u64 = r20.u64;
	// b 0x821c3264
	goto loc_821C3264;
loc_821C3254:
	// lwz r11,-284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -284);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-284
	r11.s64 = r11.s64 + -284;
loc_821C3264:
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r20,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r20.u32);
	// stw r25,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r25.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// lwz r28,-20(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x821c3298
	if (cr0.eq) goto loc_821C3298;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821bcd70
	sub_821BCD70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821C3298:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r20,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, r20.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821c35dc
	if (cr6.eq) goto loc_821C35DC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-18816
	ctx.r4.s64 = r11.s64 + -18816;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c32d4
	if (cr0.eq) goto loc_821C32D4;
	// addi r4,r30,-288
	ctx.r4.s64 = r30.s64 + -288;
	// bl 0x821bd7e8
	sub_821BD7E8(ctx, base);
	// b 0x821c32d8
	goto loc_821C32D8;
loc_821C32D4:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_821C32D8:
	// stw r3,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, ctx.r3.u32);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// ble cr6,0x821c3478
	if (!cr6.gt) goto loc_821C3478;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// addi r28,r11,36
	r28.s64 = r11.s64 + 36;
	// addi r27,r11,24
	r27.s64 = r11.s64 + 24;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,48
	r28.s64 = r11.s64 + 48;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// addi r25,r28,16
	r25.s64 = r28.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,112
	r28.s64 = r11.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// addi r25,r28,16
	r25.s64 = r28.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,176
	r28.s64 = r11.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// addi r25,r28,16
	r25.s64 = r28.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,240
	r28.s64 = r11.s64 + 240;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r27,r28,32
	r27.s64 = r28.s64 + 32;
	// addi r25,r28,16
	r25.s64 = r28.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bge cr6,0x821c35dc
	if (!cr6.lt) goto loc_821C35DC;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x821c35dc
	if (cr6.eq) goto loc_821C35DC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r10,40
	r11.s64 = ctx.r10.s64 + 40;
	// lfs f11,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
loc_821C342C:
	// lfs f12,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// stfs f0,-8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x821c342c
	if (!cr6.eq) goto loc_821C342C;
	// b 0x821c35dc
	goto loc_821C35DC;
loc_821C3478:
	// lwz r11,-92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821c348c
	if (!cr6.eq) goto loc_821C348C;
	// lwz r4,-236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -236);
	// b 0x821c349c
	goto loc_821C349C;
loc_821C348C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r4,r30,-252
	ctx.r4.s64 = r30.s64 + -252;
	// bne cr6,0x821c349c
	if (!cr6.eq) goto loc_821C349C;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_821C349C:
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lfs f30,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f30.f64 = double(temp.f32);
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
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// addi r28,r11,112
	r28.s64 = r11.s64 + 112;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r25,r28,32
	r25.s64 = r28.s64 + 32;
	// addi r24,r28,16
	r24.s64 = r28.s64 + 16;
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
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r11,176
	r28.s64 = r11.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r25,r28,32
	r25.s64 = r28.s64 + 32;
	// addi r24,r28,16
	r24.s64 = r28.s64 + 16;
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
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,-20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x821c35dc
	if (cr6.eq) goto loc_821C35DC;
	// addi r10,r11,40
	ctx.r10.s64 = r11.s64 + 40;
loc_821C359C:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// fsubs f12,f30,f13
	ctx.f12.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f31,4(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x821c359c
	if (!cr6.eq) goto loc_821C359C;
loc_821C35DC:
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
loc_821C35E4:
	// addi r23,r30,-288
	r23.s64 = r30.s64 + -288;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821bd000
	sub_821BD000(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c36d8
	if (cr0.eq) goto loc_821C36D8;
	// addi r25,r30,-40
	r25.s64 = r30.s64 + -40;
	// lwz r27,0(r25)
	r27.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r27,r25
	r11.s64 = r25.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821c36d8
	if (cr0.eq) goto loc_821C36D8;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r26,r11,10920
	r26.s64 = r11.s64 + 10920;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r24,r11,-18804
	r24.s64 = r11.s64 + -18804;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
loc_821C362C:
	// addi r6,r31,336
	ctx.r6.s64 = r31.s64 + 336;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x821bdd28
	sub_821BDD28(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r28,r11,8
	r28.s64 = r11.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r5,r4
	r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r4,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r4.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82359250
	sub_82359250(ctx, base);
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r27,r25
	r11.s64 = r25.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821c362c
	if (!cr0.eq) goto loc_821C362C;
loc_821C36D8:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x821c3708
	if (cr6.gt) goto loc_821C3708;
	// stw r20,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r20.u32);
	// stw r20,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r20.u32);
	// stw r20,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r20.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821c2aa0
	sub_821C2AA0(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821c0ec0
	sub_821C0EC0(ctx, base);
loc_821C3708:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821c3760
	if (!cr6.eq) goto loc_821C3760;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,260
	ctx.r4.s64 = r31.s64 + 260;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,280
	ctx.r4.s64 = r31.s64 + 280;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,276
	ctx.r4.s64 = r31.s64 + 276;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821C3760:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// bne cr6,0x821c3788
	if (!cr6.eq) goto loc_821C3788;
	// lwz r11,-24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// addi r10,r30,-288
	ctx.r10.s64 = r30.s64 + -288;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x821c3788
	if (!cr6.eq) goto loc_821C3788;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,-12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// bl 0x821c2430
	sub_821C2430(ctx, base);
loc_821C3788:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821C37A0:
	// addi r1,r31,640
	ctx.r1.s64 = r31.s64 + 640;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_821C37B0"))) PPC_WEAK_FUNC(sub_821C37B0);
PPC_FUNC_IMPL(__imp__sub_821C37B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82158d48
	sub_82158D48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C37D8"))) PPC_WEAK_FUNC(sub_821C37D8);
PPC_FUNC_IMPL(__imp__sub_821C37D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
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

__attribute__((alias("__imp__sub_821C3800"))) PPC_WEAK_FUNC(sub_821C3800);
PPC_FUNC_IMPL(__imp__sub_821C3800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82126e70
	sub_82126E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C3828"))) PPC_WEAK_FUNC(sub_821C3828);
PPC_FUNC_IMPL(__imp__sub_821C3828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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

__attribute__((alias("__imp__sub_821C3850"))) PPC_WEAK_FUNC(sub_821C3850);
PPC_FUNC_IMPL(__imp__sub_821C3850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
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

__attribute__((alias("__imp__sub_821C3878"))) PPC_WEAK_FUNC(sub_821C3878);
PPC_FUNC_IMPL(__imp__sub_821C3878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
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

__attribute__((alias("__imp__sub_821C38A0"))) PPC_WEAK_FUNC(sub_821C38A0);
PPC_FUNC_IMPL(__imp__sub_821C38A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
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

__attribute__((alias("__imp__sub_821C38C8"))) PPC_WEAK_FUNC(sub_821C38C8);
PPC_FUNC_IMPL(__imp__sub_821C38C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_821C38F0"))) PPC_WEAK_FUNC(sub_821C38F0);
PPC_FUNC_IMPL(__imp__sub_821C38F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_821C3918"))) PPC_WEAK_FUNC(sub_821C3918);
PPC_FUNC_IMPL(__imp__sub_821C3918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
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

__attribute__((alias("__imp__sub_821C3940"))) PPC_WEAK_FUNC(sub_821C3940);
PPC_FUNC_IMPL(__imp__sub_821C3940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x826a4840
	sub_826A4840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C3968"))) PPC_WEAK_FUNC(sub_821C3968);
PPC_FUNC_IMPL(__imp__sub_821C3968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
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

__attribute__((alias("__imp__sub_821C3990"))) PPC_WEAK_FUNC(sub_821C3990);
PPC_FUNC_IMPL(__imp__sub_821C3990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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

__attribute__((alias("__imp__sub_821C39B8"))) PPC_WEAK_FUNC(sub_821C39B8);
PPC_FUNC_IMPL(__imp__sub_821C39B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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

__attribute__((alias("__imp__sub_821C39E0"))) PPC_WEAK_FUNC(sub_821C39E0);
PPC_FUNC_IMPL(__imp__sub_821C39E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
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

__attribute__((alias("__imp__sub_821C3A08"))) PPC_WEAK_FUNC(sub_821C3A08);
PPC_FUNC_IMPL(__imp__sub_821C3A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821c0ec0
	sub_821C0EC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C3A30"))) PPC_WEAK_FUNC(sub_821C3A30);
PPC_FUNC_IMPL(__imp__sub_821C3A30) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-15008(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -15008);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r29,-32136
	r29.s64 = -2106064896;
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10996
	r28.s64 = r11.s64 + 10996;
	// bne 0x821c3aa0
	if (!cr0.eq) goto loc_821C3AA0;
	// ori r11,r30,1
	r11.u64 = r30.u64 | 1;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15260
	ctx.r4.s64 = r11.s64 + -15260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3AA0:
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
	// beq 0x821c3afc
	if (cr0.eq) goto loc_821C3AFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821c1d40
	sub_821C1D40(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3af8
	if (cr6.eq) goto loc_821C3AF8;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
loc_821C3AF0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821c41ec
	goto loc_821C41EC;
loc_821C3AF8:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3AFC:
	// rlwinm. r11,r30,0,30,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10992
	r28.s64 = r11.s64 + 10992;
	// bne 0x821c3b28
	if (!cr0.eq) goto loc_821C3B28;
	// ori r11,r30,2
	r11.u64 = r30.u64 | 2;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15272
	ctx.r4.s64 = r11.s64 + -15272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3B28:
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
	// beq 0x821c3b80
	if (cr0.eq) goto loc_821C3B80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821bdb88
	sub_821BDB88(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3b7c
	if (cr6.eq) goto loc_821C3B7C;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3B7C:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3B80:
	// rlwinm. r11,r30,0,29,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10988
	r28.s64 = r11.s64 + 10988;
	// bne 0x821c3bac
	if (!cr0.eq) goto loc_821C3BAC;
	// ori r11,r30,4
	r11.u64 = r30.u64 | 4;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15280
	ctx.r4.s64 = r11.s64 + -15280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3BAC:
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
	// beq 0x821c3c00
	if (cr0.eq) goto loc_821C3C00;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821bd328
	sub_821BD328(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3c00
	if (cr6.eq) goto loc_821C3C00;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3C00:
	// rlwinm. r11,r30,0,28,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10984
	r28.s64 = r11.s64 + 10984;
	// bne 0x821c3c2c
	if (!cr0.eq) goto loc_821C3C2C;
	// ori r11,r30,8
	r11.u64 = r30.u64 | 8;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15292
	ctx.r4.s64 = r11.s64 + -15292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3C2C:
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
	// beq 0x821c3c84
	if (cr0.eq) goto loc_821C3C84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821c2a48
	sub_821C2A48(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3c80
	if (cr6.eq) goto loc_821C3C80;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3C80:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3C84:
	// rlwinm. r11,r30,0,27,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10980
	r28.s64 = r11.s64 + 10980;
	// bne 0x821c3cb0
	if (!cr0.eq) goto loc_821C3CB0;
	// ori r11,r30,16
	r11.u64 = r30.u64 | 16;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15300
	ctx.r4.s64 = r11.s64 + -15300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3CB0:
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
	// beq 0x821c3d08
	if (cr0.eq) goto loc_821C3D08;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821bdc08
	sub_821BDC08(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3d04
	if (cr6.eq) goto loc_821C3D04;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3D04:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3D08:
	// rlwinm. r11,r30,0,26,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10976
	r28.s64 = r11.s64 + 10976;
	// bne 0x821c3d34
	if (!cr0.eq) goto loc_821C3D34;
	// ori r11,r30,32
	r11.u64 = r30.u64 | 32;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-28408
	ctx.r4.s64 = r11.s64 + -28408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3D34:
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
	// beq 0x821c3d8c
	if (cr0.eq) goto loc_821C3D8C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821bd348
	sub_821BD348(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3d88
	if (cr6.eq) goto loc_821C3D88;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3D88:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3D8C:
	// rlwinm. r11,r30,0,25,25
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10972
	r28.s64 = r11.s64 + 10972;
	// bne 0x821c3db8
	if (!cr0.eq) goto loc_821C3DB8;
	// ori r11,r30,64
	r11.u64 = r30.u64 | 64;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15316
	ctx.r4.s64 = r11.s64 + -15316;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3DB8:
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
	// beq 0x821c3e10
	if (cr0.eq) goto loc_821C3E10;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x821c1bd8
	sub_821C1BD8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3e0c
	if (cr6.eq) goto loc_821C3E0C;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3E0C:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3E10:
	// rlwinm. r11,r30,0,24,24
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10968
	r28.s64 = r11.s64 + 10968;
	// bne 0x821c3e3c
	if (!cr0.eq) goto loc_821C3E3C;
	// ori r11,r30,128
	r11.u64 = r30.u64 | 128;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15328
	ctx.r4.s64 = r11.s64 + -15328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3E3C:
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
	// beq 0x821c3e94
	if (cr0.eq) goto loc_821C3E94;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bd3a0
	sub_821BD3A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3e90
	if (cr6.eq) goto loc_821C3E90;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3E90:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3E94:
	// rlwinm. r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10964
	r28.s64 = r11.s64 + 10964;
	// bne 0x821c3ec0
	if (!cr0.eq) goto loc_821C3EC0;
	// ori r11,r30,256
	r11.u64 = r30.u64 | 256;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15340
	ctx.r4.s64 = r11.s64 + -15340;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3EC0:
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
	// beq 0x821c3f14
	if (cr0.eq) goto loc_821C3F14;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821bd2e8
	sub_821BD2E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3f14
	if (cr6.eq) goto loc_821C3F14;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3F14:
	// rlwinm. r11,r30,0,22,22
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10960
	r28.s64 = r11.s64 + 10960;
	// bne 0x821c3f40
	if (!cr0.eq) goto loc_821C3F40;
	// ori r11,r30,512
	r11.u64 = r30.u64 | 512;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15352
	ctx.r4.s64 = r11.s64 + -15352;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3F40:
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
	// beq 0x821c3f94
	if (cr0.eq) goto loc_821C3F94;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821bd300
	sub_821BD300(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3f94
	if (cr6.eq) goto loc_821C3F94;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3F94:
	// rlwinm. r11,r30,0,21,21
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10956
	r28.s64 = r11.s64 + 10956;
	// bne 0x821c3fc0
	if (!cr0.eq) goto loc_821C3FC0;
	// ori r11,r30,1024
	r11.u64 = r30.u64 | 1024;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15368
	ctx.r4.s64 = r11.s64 + -15368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3FC0:
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
	// beq 0x821c4014
	if (cr0.eq) goto loc_821C4014;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821bd3f0
	sub_821BD3F0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4014
	if (cr6.eq) goto loc_821C4014;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4014:
	// rlwinm. r11,r30,0,20,20
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10952
	r28.s64 = r11.s64 + 10952;
	// bne 0x821c4040
	if (!cr0.eq) goto loc_821C4040;
	// ori r11,r30,2048
	r11.u64 = r30.u64 | 2048;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15384
	ctx.r4.s64 = r11.s64 + -15384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C4040:
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
	// beq 0x821c4098
	if (cr0.eq) goto loc_821C4098;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821bd298
	sub_821BD298(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4094
	if (cr6.eq) goto loc_821C4094;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4094:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C4098:
	// rlwinm. r11,r30,0,19,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10948
	r28.s64 = r11.s64 + 10948;
	// bne 0x821c40c0
	if (!cr0.eq) goto loc_821C40C0;
	// ori r11,r30,4096
	r11.u64 = r30.u64 | 4096;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15400
	ctx.r4.s64 = r11.s64 + -15400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821C40C0:
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
	// beq 0x821c4114
	if (cr0.eq) goto loc_821C4114;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821bd1c8
	sub_821BD1C8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4114
	if (cr6.eq) goto loc_821C4114;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4114:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-248
	ctx.r4.s64 = r26.s64 + -248;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4154
	if (cr6.eq) goto loc_821C4154;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4154:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-68
	ctx.r4.s64 = r26.s64 + -68;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4194
	if (cr6.eq) goto loc_821C4194;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4194:
	// lwz r11,-284(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -284);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-284
	ctx.r4.s64 = r11.s64 + -284;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c41e0
	if (cr6.eq) goto loc_821C41E0;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C41E0:
	// li r11,6
	r11.s64 = 6;
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_821C41EC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821C3A38"))) PPC_WEAK_FUNC(sub_821C3A38);
PPC_FUNC_IMPL(__imp__sub_821C3A38) {
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
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r29,-32136
	r29.s64 = -2106064896;
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10996
	r28.s64 = r11.s64 + 10996;
	// bne 0x821c3aa0
	if (!cr0.eq) goto loc_821C3AA0;
	// ori r11,r30,1
	r11.u64 = r30.u64 | 1;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15260
	ctx.r4.s64 = r11.s64 + -15260;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3AA0:
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
	// beq 0x821c3afc
	if (cr0.eq) goto loc_821C3AFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821c1d40
	sub_821C1D40(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3af8
	if (cr6.eq) goto loc_821C3AF8;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
loc_821C3AF0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821c41ec
	goto loc_821C41EC;
loc_821C3AF8:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3AFC:
	// rlwinm. r11,r30,0,30,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10992
	r28.s64 = r11.s64 + 10992;
	// bne 0x821c3b28
	if (!cr0.eq) goto loc_821C3B28;
	// ori r11,r30,2
	r11.u64 = r30.u64 | 2;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15272
	ctx.r4.s64 = r11.s64 + -15272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3B28:
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
	// beq 0x821c3b80
	if (cr0.eq) goto loc_821C3B80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821bdb88
	sub_821BDB88(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3b7c
	if (cr6.eq) goto loc_821C3B7C;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3B7C:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3B80:
	// rlwinm. r11,r30,0,29,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10988
	r28.s64 = r11.s64 + 10988;
	// bne 0x821c3bac
	if (!cr0.eq) goto loc_821C3BAC;
	// ori r11,r30,4
	r11.u64 = r30.u64 | 4;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15280
	ctx.r4.s64 = r11.s64 + -15280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3BAC:
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
	// beq 0x821c3c00
	if (cr0.eq) goto loc_821C3C00;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821bd328
	sub_821BD328(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3c00
	if (cr6.eq) goto loc_821C3C00;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3C00:
	// rlwinm. r11,r30,0,28,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10984
	r28.s64 = r11.s64 + 10984;
	// bne 0x821c3c2c
	if (!cr0.eq) goto loc_821C3C2C;
	// ori r11,r30,8
	r11.u64 = r30.u64 | 8;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15292
	ctx.r4.s64 = r11.s64 + -15292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3C2C:
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
	// beq 0x821c3c84
	if (cr0.eq) goto loc_821C3C84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821c2a48
	sub_821C2A48(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3c80
	if (cr6.eq) goto loc_821C3C80;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3C80:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3C84:
	// rlwinm. r11,r30,0,27,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10980
	r28.s64 = r11.s64 + 10980;
	// bne 0x821c3cb0
	if (!cr0.eq) goto loc_821C3CB0;
	// ori r11,r30,16
	r11.u64 = r30.u64 | 16;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15300
	ctx.r4.s64 = r11.s64 + -15300;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3CB0:
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
	// beq 0x821c3d08
	if (cr0.eq) goto loc_821C3D08;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x821bdc08
	sub_821BDC08(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3d04
	if (cr6.eq) goto loc_821C3D04;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3D04:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3D08:
	// rlwinm. r11,r30,0,26,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10976
	r28.s64 = r11.s64 + 10976;
	// bne 0x821c3d34
	if (!cr0.eq) goto loc_821C3D34;
	// ori r11,r30,32
	r11.u64 = r30.u64 | 32;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-28408
	ctx.r4.s64 = r11.s64 + -28408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3D34:
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
	// beq 0x821c3d8c
	if (cr0.eq) goto loc_821C3D8C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821bd348
	sub_821BD348(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3d88
	if (cr6.eq) goto loc_821C3D88;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3D88:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3D8C:
	// rlwinm. r11,r30,0,25,25
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10972
	r28.s64 = r11.s64 + 10972;
	// bne 0x821c3db8
	if (!cr0.eq) goto loc_821C3DB8;
	// ori r11,r30,64
	r11.u64 = r30.u64 | 64;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15316
	ctx.r4.s64 = r11.s64 + -15316;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3DB8:
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
	// beq 0x821c3e10
	if (cr0.eq) goto loc_821C3E10;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x821c1bd8
	sub_821C1BD8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3e0c
	if (cr6.eq) goto loc_821C3E0C;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3E0C:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3E10:
	// rlwinm. r11,r30,0,24,24
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10968
	r28.s64 = r11.s64 + 10968;
	// bne 0x821c3e3c
	if (!cr0.eq) goto loc_821C3E3C;
	// ori r11,r30,128
	r11.u64 = r30.u64 | 128;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15328
	ctx.r4.s64 = r11.s64 + -15328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3E3C:
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
	// beq 0x821c3e94
	if (cr0.eq) goto loc_821C3E94;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bd3a0
	sub_821BD3A0(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3e90
	if (cr6.eq) goto loc_821C3E90;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3E90:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3E94:
	// rlwinm. r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10964
	r28.s64 = r11.s64 + 10964;
	// bne 0x821c3ec0
	if (!cr0.eq) goto loc_821C3EC0;
	// ori r11,r30,256
	r11.u64 = r30.u64 | 256;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15340
	ctx.r4.s64 = r11.s64 + -15340;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3EC0:
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
	// beq 0x821c3f14
	if (cr0.eq) goto loc_821C3F14;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821bd2e8
	sub_821BD2E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3f14
	if (cr6.eq) goto loc_821C3F14;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3F14:
	// rlwinm. r11,r30,0,22,22
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10960
	r28.s64 = r11.s64 + 10960;
	// bne 0x821c3f40
	if (!cr0.eq) goto loc_821C3F40;
	// ori r11,r30,512
	r11.u64 = r30.u64 | 512;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15352
	ctx.r4.s64 = r11.s64 + -15352;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3F40:
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
	// beq 0x821c3f94
	if (cr0.eq) goto loc_821C3F94;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821bd300
	sub_821BD300(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c3f94
	if (cr6.eq) goto loc_821C3F94;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C3F94:
	// rlwinm. r11,r30,0,21,21
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10956
	r28.s64 = r11.s64 + 10956;
	// bne 0x821c3fc0
	if (!cr0.eq) goto loc_821C3FC0;
	// ori r11,r30,1024
	r11.u64 = r30.u64 | 1024;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15368
	ctx.r4.s64 = r11.s64 + -15368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C3FC0:
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
	// beq 0x821c4014
	if (cr0.eq) goto loc_821C4014;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821bd3f0
	sub_821BD3F0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4014
	if (cr6.eq) goto loc_821C4014;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4014:
	// rlwinm. r11,r30,0,20,20
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10952
	r28.s64 = r11.s64 + 10952;
	// bne 0x821c4040
	if (!cr0.eq) goto loc_821C4040;
	// ori r11,r30,2048
	r11.u64 = r30.u64 | 2048;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15384
	ctx.r4.s64 = r11.s64 + -15384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C4040:
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
	// beq 0x821c4098
	if (cr0.eq) goto loc_821C4098;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821bd298
	sub_821BD298(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4094
	if (cr6.eq) goto loc_821C4094;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4094:
	// lwz r30,11000(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 11000);
loc_821C4098:
	// rlwinm. r11,r30,0,19,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r28,r11,10948
	r28.s64 = r11.s64 + 10948;
	// bne 0x821c40c0
	if (!cr0.eq) goto loc_821C40C0;
	// ori r11,r30,4096
	r11.u64 = r30.u64 | 4096;
	// stw r11,11000(r29)
	PPC_STORE_U32(r29.u32 + 11000, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-15400
	ctx.r4.s64 = r11.s64 + -15400;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821C40C0:
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
	// beq 0x821c4114
	if (cr0.eq) goto loc_821C4114;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-288
	ctx.r4.s64 = r26.s64 + -288;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821bd1c8
	sub_821BD1C8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4114
	if (cr6.eq) goto loc_821C4114;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4114:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-248
	ctx.r4.s64 = r26.s64 + -248;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4154
	if (cr6.eq) goto loc_821C4154;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4154:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-68
	ctx.r4.s64 = r26.s64 + -68;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c4194
	if (cr6.eq) goto loc_821C4194;
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
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C4194:
	// lwz r11,-284(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -284);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-284
	ctx.r4.s64 = r11.s64 + -284;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821c41e0
	if (cr6.eq) goto loc_821C41E0;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c41ec
	if (cr0.eq) goto loc_821C41EC;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// b 0x821c3af0
	goto loc_821C3AF0;
loc_821C41E0:
	// li r11,6
	r11.s64 = 6;
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_821C41EC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821C41F8"))) PPC_WEAK_FUNC(sub_821C41F8);
PPC_FUNC_IMPL(__imp__sub_821C41F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4220"))) PPC_WEAK_FUNC(sub_821C4220);
PPC_FUNC_IMPL(__imp__sub_821C4220) {
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

__attribute__((alias("__imp__sub_821C4248"))) PPC_WEAK_FUNC(sub_821C4248);
PPC_FUNC_IMPL(__imp__sub_821C4248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4270"))) PPC_WEAK_FUNC(sub_821C4270);
PPC_FUNC_IMPL(__imp__sub_821C4270) {
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

__attribute__((alias("__imp__sub_821C4298"))) PPC_WEAK_FUNC(sub_821C4298);
PPC_FUNC_IMPL(__imp__sub_821C4298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C42C0"))) PPC_WEAK_FUNC(sub_821C42C0);
PPC_FUNC_IMPL(__imp__sub_821C42C0) {
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

__attribute__((alias("__imp__sub_821C42E8"))) PPC_WEAK_FUNC(sub_821C42E8);
PPC_FUNC_IMPL(__imp__sub_821C42E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4310"))) PPC_WEAK_FUNC(sub_821C4310);
PPC_FUNC_IMPL(__imp__sub_821C4310) {
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

__attribute__((alias("__imp__sub_821C4338"))) PPC_WEAK_FUNC(sub_821C4338);
PPC_FUNC_IMPL(__imp__sub_821C4338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4360"))) PPC_WEAK_FUNC(sub_821C4360);
PPC_FUNC_IMPL(__imp__sub_821C4360) {
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

__attribute__((alias("__imp__sub_821C4388"))) PPC_WEAK_FUNC(sub_821C4388);
PPC_FUNC_IMPL(__imp__sub_821C4388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C43B0"))) PPC_WEAK_FUNC(sub_821C43B0);
PPC_FUNC_IMPL(__imp__sub_821C43B0) {
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

__attribute__((alias("__imp__sub_821C43D8"))) PPC_WEAK_FUNC(sub_821C43D8);
PPC_FUNC_IMPL(__imp__sub_821C43D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4400"))) PPC_WEAK_FUNC(sub_821C4400);
PPC_FUNC_IMPL(__imp__sub_821C4400) {
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

__attribute__((alias("__imp__sub_821C4428"))) PPC_WEAK_FUNC(sub_821C4428);
PPC_FUNC_IMPL(__imp__sub_821C4428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4450"))) PPC_WEAK_FUNC(sub_821C4450);
PPC_FUNC_IMPL(__imp__sub_821C4450) {
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

__attribute__((alias("__imp__sub_821C4478"))) PPC_WEAK_FUNC(sub_821C4478);
PPC_FUNC_IMPL(__imp__sub_821C4478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C44A0"))) PPC_WEAK_FUNC(sub_821C44A0);
PPC_FUNC_IMPL(__imp__sub_821C44A0) {
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

__attribute__((alias("__imp__sub_821C44C8"))) PPC_WEAK_FUNC(sub_821C44C8);
PPC_FUNC_IMPL(__imp__sub_821C44C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C44F0"))) PPC_WEAK_FUNC(sub_821C44F0);
PPC_FUNC_IMPL(__imp__sub_821C44F0) {
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

__attribute__((alias("__imp__sub_821C4518"))) PPC_WEAK_FUNC(sub_821C4518);
PPC_FUNC_IMPL(__imp__sub_821C4518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4540"))) PPC_WEAK_FUNC(sub_821C4540);
PPC_FUNC_IMPL(__imp__sub_821C4540) {
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

__attribute__((alias("__imp__sub_821C4568"))) PPC_WEAK_FUNC(sub_821C4568);
PPC_FUNC_IMPL(__imp__sub_821C4568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4590"))) PPC_WEAK_FUNC(sub_821C4590);
PPC_FUNC_IMPL(__imp__sub_821C4590) {
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

__attribute__((alias("__imp__sub_821C45B8"))) PPC_WEAK_FUNC(sub_821C45B8);
PPC_FUNC_IMPL(__imp__sub_821C45B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11000
	r11.s64 = r11.s64 + 11000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11000
	ctx.r10.s64 = ctx.r10.s64 + 11000;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C45E0"))) PPC_WEAK_FUNC(sub_821C45E0);
PPC_FUNC_IMPL(__imp__sub_821C45E0) {
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

__attribute__((alias("__imp__sub_821C4608"))) PPC_WEAK_FUNC(sub_821C4608);
PPC_FUNC_IMPL(__imp__sub_821C4608) {
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

__attribute__((alias("__imp__sub_821C4630"))) PPC_WEAK_FUNC(sub_821C4630);
PPC_FUNC_IMPL(__imp__sub_821C4630) {
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

__attribute__((alias("__imp__sub_821C4658"))) PPC_WEAK_FUNC(sub_821C4658);
PPC_FUNC_IMPL(__imp__sub_821C4658) {
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

__attribute__((alias("__imp__sub_821C4680"))) PPC_WEAK_FUNC(sub_821C4680);
PPC_FUNC_IMPL(__imp__sub_821C4680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821c2b60
	sub_821C2B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C468C"))) PPC_WEAK_FUNC(sub_821C468C);
PPC_FUNC_IMPL(__imp__sub_821C468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4690"))) PPC_WEAK_FUNC(sub_821C4690);
PPC_FUNC_IMPL(__imp__sub_821C4690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821c3a38
	sub_821C3A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C469C"))) PPC_WEAK_FUNC(sub_821C469C);
PPC_FUNC_IMPL(__imp__sub_821C469C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C46A0"))) PPC_WEAK_FUNC(sub_821C46A0);
PPC_FUNC_IMPL(__imp__sub_821C46A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f13,f9,f13,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f0,f0,f11,f3
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 - ctx.f3.f64));
	// fmsubs f12,f12,f10,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f4.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f13,f7,f12,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f6,f0,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f13.f64));
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x821c4700
	if (cr6.lt) goto loc_821C4700;
	// li r11,0
	r11.s64 = 0;
loc_821C4700:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4708"))) PPC_WEAK_FUNC(sub_821C4708);
PPC_FUNC_IMPL(__imp__sub_821C4708) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f0,f9,f0,f13
	f0.f64 = double(float(ctx.f9.f64 * f0.f64 - ctx.f13.f64));
	// fnmsubs f0,f8,f12,f0
	f0.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - f0.f64)));
	// fnmsubs f1,f7,f11,f0
	ctx.f1.f64 = double(float(-(ctx.f7.f64 * ctx.f11.f64 - f0.f64)));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x821c476c
	if (!cr6.gt) goto loc_821C476C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821c4780
	goto loc_821C4780;
loc_821C476C:
	// bl 0x8239ddb8
	sub_8239DDB8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_821C4780:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4790"))) PPC_WEAK_FUNC(sub_821C4790);
PPC_FUNC_IMPL(__imp__sub_821C4790) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c47d4
	if (!cr6.eq) goto loc_821C47D4;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c47d4
	if (!cr6.eq) goto loc_821C47D4;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c47d4
	if (!cr6.eq) goto loc_821C47D4;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x821c47d8
	if (cr6.eq) goto loc_821C47D8;
loc_821C47D4:
	// li r11,0
	r11.s64 = 0;
loc_821C47D8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C47E0"))) PPC_WEAK_FUNC(sub_821C47E0);
PPC_FUNC_IMPL(__imp__sub_821C47E0) {
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
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x821f0e20
	sub_821F0E20(ctx, base);
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

__attribute__((alias("__imp__sub_821C481C"))) PPC_WEAK_FUNC(sub_821C481C);
PPC_FUNC_IMPL(__imp__sub_821C481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4820"))) PPC_WEAK_FUNC(sub_821C4820);
PPC_FUNC_IMPL(__imp__sub_821C4820) {
	PPC_FUNC_PROLOGUE();
	// b 0x821f0e20
	sub_821F0E20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C4824"))) PPC_WEAK_FUNC(sub_821C4824);
PPC_FUNC_IMPL(__imp__sub_821C4824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4828"))) PPC_WEAK_FUNC(sub_821C4828);
PPC_FUNC_IMPL(__imp__sub_821C4828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x821c4880
	if (!cr6.eq) goto loc_821C4880;
	// lhz r11,2(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x821c4858
	if (!cr6.eq) goto loc_821C4858;
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x821c4910
	if (cr6.eq) goto loc_821C4910;
loc_821C4858:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x821c4880
	if (!cr6.eq) goto loc_821C4880;
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x821c4880
	if (!cr6.eq) goto loc_821C4880;
	// lhz r11,2(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x821c4910
	if (cr6.eq) goto loc_821C4910;
loc_821C4880:
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x821c48cc
	if (!cr6.eq) goto loc_821C48CC;
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bne cr6,0x821c48a8
	if (!cr6.eq) goto loc_821C48A8;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x821c4910
	if (cr6.eq) goto loc_821C4910;
loc_821C48A8:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x821c48cc
	if (!cr6.eq) goto loc_821C48CC;
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x821c48cc
	if (!cr6.eq) goto loc_821C48CC;
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// beq cr6,0x821c4910
	if (cr6.eq) goto loc_821C4910;
loc_821C48CC:
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x821c4918
	if (!cr6.eq) goto loc_821C4918;
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x821c48f0
	if (!cr6.eq) goto loc_821C48F0;
	// lhz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x821c4910
	if (cr6.eq) goto loc_821C4910;
loc_821C48F0:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x821c4918
	if (!cr6.eq) goto loc_821C4918;
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x821c4918
	if (!cr6.eq) goto loc_821C4918;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x821c4918
	if (!cr6.eq) goto loc_821C4918;
loc_821C4910:
	// li r11,1
	r11.s64 = 1;
	// b 0x821c491c
	goto loc_821C491C;
loc_821C4918:
	// li r11,0
	r11.s64 = 0;
loc_821C491C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C4924"))) PPC_WEAK_FUNC(sub_821C4924);
PPC_FUNC_IMPL(__imp__sub_821C4924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C4928"))) PPC_WEAK_FUNC(sub_821C4928);
PPC_FUNC_IMPL(__imp__sub_821C4928) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821f3168
	sub_821F3168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C4930"))) PPC_WEAK_FUNC(sub_821C4930);
PPC_FUNC_IMPL(__imp__sub_821C4930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c4990
	if (!cr6.eq) goto loc_821C4990;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
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
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subfc r11,r3,r30
	xer.ca = r30.u32 >= ctx.r3.u32;
	r11.s64 = r30.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// b 0x821c49a4
	goto loc_821C49A4;
loc_821C4990:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821c49a0
	if (cr6.lt) goto loc_821C49A0;
	// li r11,0
	r11.s64 = 0;
loc_821C49A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_821C49A4:
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

__attribute__((alias("__imp__sub_821C49BC"))) PPC_WEAK_FUNC(sub_821C49BC);
PPC_FUNC_IMPL(__imp__sub_821C49BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C49C0"))) PPC_WEAK_FUNC(sub_821C49C0);
PPC_FUNC_IMPL(__imp__sub_821C49C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f10,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f10
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f11,f9,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f13,f11,f10,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + f0.f64));
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x821c4a90
	if (!cr6.lt) goto loc_821C4A90;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821c4a98
	goto loc_821C4A98;
loc_821C4A90:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
loc_821C4A98:
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

__attribute__((alias("__imp__sub_821C4AB0"))) PPC_WEAK_FUNC(sub_821C4AB0);
PPC_FUNC_IMPL(__imp__sub_821C4AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,11556(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// bl 0x821d7030
	sub_821D7030(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x821c4b50
	if (!cr6.gt) goto loc_821C4B50;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,27088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwa r11,60(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 60));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwa r11,64(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821C4B50:
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

__attribute__((alias("__imp__sub_821C4B68"))) PPC_WEAK_FUNC(sub_821C4B68);
PPC_FUNC_IMPL(__imp__sub_821C4B68) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// li r28,8
	r28.s64 = 8;
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f9,200(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
loc_821C4C00:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x821c4c00
	if (!cr0.eq) goto loc_821C4C00;
	// lis r31,-32140
	r31.s64 = -2106327040;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,27088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 27088);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821C4DD8"))) PPC_WEAK_FUNC(sub_821C4DD8);
PPC_FUNC_IMPL(__imp__sub_821C4DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
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
	// bl 0x8239bcf8
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// lis r28,-32140
	r28.s64 = -2106327040;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,27088(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27088);
	// fmadds f0,f0,f31,f11
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmadds f13,f13,f31,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 + ctx.f10.f64));
	// lfs f29,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f29.f64 = double(temp.f32);
	// fmadds f0,f12,f31,f0
	f0.f64 = double(float(ctx.f12.f64 * f31.f64 + f0.f64));
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r3,27088(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27088);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmadds f0,f31,f0,f13
	f0.f64 = double(float(f31.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmadds f0,f12,f31,f0
	f0.f64 = double(float(ctx.f12.f64 * f31.f64 + f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r3,27088(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27088);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fmadds f0,f0,f31,f13
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmadds f0,f12,f31,f0
	f0.f64 = double(float(ctx.f12.f64 * f31.f64 + f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f29,140(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_821C4F60"))) PPC_WEAK_FUNC(sub_821C4F60);
PPC_FUNC_IMPL(__imp__sub_821C4F60) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x821c5008
	if (!cr6.gt) goto loc_821C5008;
	// lis r27,-32140
	r27.s64 = -2106327040;
loc_821C4FA0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lwz r3,27088(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 27088);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
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
	// bne 0x821c4fa0
	if (!cr0.eq) goto loc_821C4FA0;
loc_821C5008:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821C5010"))) PPC_WEAK_FUNC(sub_821C5010);
PPC_FUNC_IMPL(__imp__sub_821C5010) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,11160(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11160);
	// lfs f0,2480(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	f0.f64 = double(temp.f32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r3,r9,11096
	ctx.r3.s64 = ctx.r9.s64 + 11096;
	// bne 0x821c509c
	if (!cr0.eq) goto loc_821C509C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lfs f13,-14512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14512);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,11160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11160, r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,-14516(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14516);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,-14520(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14520);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f12,17416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17416);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_821C509C:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r31,r9,11044
	r31.s64 = ctx.r9.s64 + 11044;
	// bne 0x821c50f8
	if (!cr0.eq) goto loc_821C50F8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11160, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,11012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11012);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f12,-14524(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14524);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f12,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,-14528(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14528);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
loc_821C50F8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821c4f60
	sub_821C4F60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c4f60
	sub_821C4F60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C5124"))) PPC_WEAK_FUNC(sub_821C5124);
PPC_FUNC_IMPL(__imp__sub_821C5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5128"))) PPC_WEAK_FUNC(sub_821C5128);
PPC_FUNC_IMPL(__imp__sub_821C5128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,11556(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,692(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 692);
	f0.f64 = double(temp.f32);
	// lfs f12,696(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 696);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f13,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f12,f13,f0
	f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821d7108
	sub_821D7108(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d7108
	sub_821D7108(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,27088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C51BC"))) PPC_WEAK_FUNC(sub_821C51BC);
PPC_FUNC_IMPL(__imp__sub_821C51BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C51C0"))) PPC_WEAK_FUNC(sub_821C51C0);
PPC_FUNC_IMPL(__imp__sub_821C51C0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821c5128
	sub_821C5128(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c5128
	sub_821C5128(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c5128
	sub_821C5128(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c5128
	sub_821C5128(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C5238"))) PPC_WEAK_FUNC(sub_821C5238);
PPC_FUNC_IMPL(__imp__sub_821C5238) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214f7f0
	sub_8214F7F0(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// li r5,48
	ctx.r5.s64 = 48;
	// fmuls f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C52F4"))) PPC_WEAK_FUNC(sub_821C52F4);
PPC_FUNC_IMPL(__imp__sub_821C52F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C52F8"))) PPC_WEAK_FUNC(sub_821C52F8);
PPC_FUNC_IMPL(__imp__sub_821C52F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f0,f10,f12,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + f0.f64));
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f0,-14508(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14508);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x821c5388
	if (cr6.gt) goto loc_821C5388;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8226af38
	sub_8226AF38(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c5378
	if (cr0.eq) goto loc_821C5378;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_821C5378:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226c740
	sub_8226C740(ctx, base);
loc_821C5388:
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

__attribute__((alias("__imp__sub_821C53A0"))) PPC_WEAK_FUNC(sub_821C53A0);
PPC_FUNC_IMPL(__imp__sub_821C53A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,11020
	r11.s64 = r11.s64 + 11020;
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsubs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// li r11,1
	r11.s64 = 1;
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f0,f10,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + f0.f64));
	// fmadds f13,f9,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x821c540c
	if (cr6.lt) goto loc_821C540C;
	// li r11,0
	r11.s64 = 0;
loc_821C540C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C5414"))) PPC_WEAK_FUNC(sub_821C5414);
PPC_FUNC_IMPL(__imp__sub_821C5414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5418"))) PPC_WEAK_FUNC(sub_821C5418);
PPC_FUNC_IMPL(__imp__sub_821C5418) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-14488
	ctx.r4.s64 = r11.s64 + -14488;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823a12f0
	sub_823A12F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821c5468
	if (cr0.eq) goto loc_821C5468;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14492
	ctx.r4.s64 = r11.s64 + -14492;
	// bl 0x823a12f0
	sub_823A12F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821c5468
	if (cr0.eq) goto loc_821C5468;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c5478
	goto loc_821C5478;
loc_821C5468:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10104
	r11.s64 = r11.s64 + 10104;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_821C5478:
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

__attribute__((alias("__imp__sub_821C5490"))) PPC_WEAK_FUNC(sub_821C5490);
PPC_FUNC_IMPL(__imp__sub_821C5490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x8239d8c0
	sub_8239D8C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x8239df68
	sub_8239DF68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
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

__attribute__((alias("__imp__sub_821C54E4"))) PPC_WEAK_FUNC(sub_821C54E4);
PPC_FUNC_IMPL(__imp__sub_821C54E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C54E8"))) PPC_WEAK_FUNC(sub_821C54E8);
PPC_FUNC_IMPL(__imp__sub_821C54E8) {
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
	// lwz r16,-14456(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14456);
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
	// addi r11,r11,-14480
	r11.s64 = r11.s64 + -14480;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c5530
	if (cr0.eq) goto loc_821C5530;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821C5530:
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

__attribute__((alias("__imp__sub_821C54F0"))) PPC_WEAK_FUNC(sub_821C54F0);
PPC_FUNC_IMPL(__imp__sub_821C54F0) {
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
	// addi r11,r11,-14480
	r11.s64 = r11.s64 + -14480;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821c5530
	if (cr0.eq) goto loc_821C5530;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821C5530:
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

__attribute__((alias("__imp__sub_821C5554"))) PPC_WEAK_FUNC(sub_821C5554);
PPC_FUNC_IMPL(__imp__sub_821C5554) {
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

__attribute__((alias("__imp__sub_821C557C"))) PPC_WEAK_FUNC(sub_821C557C);
PPC_FUNC_IMPL(__imp__sub_821C557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5580"))) PPC_WEAK_FUNC(sub_821C5580);
PPC_FUNC_IMPL(__imp__sub_821C5580) {
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
	// bl 0x821c54f0
	sub_821C54F0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c55b0
	if (cr0.eq) goto loc_821C55B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821C55B0:
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

__attribute__((alias("__imp__sub_821C55CC"))) PPC_WEAK_FUNC(sub_821C55CC);
PPC_FUNC_IMPL(__imp__sub_821C55CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C55D0"))) PPC_WEAK_FUNC(sub_821C55D0);
PPC_FUNC_IMPL(__imp__sub_821C55D0) {
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
	// beq cr6,0x821c5620
	if (cr6.eq) goto loc_821C5620;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821c5608
	if (cr6.eq) goto loc_821C5608;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821C5608:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x821c5620
	if (cr6.eq) goto loc_821C5620;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_821C5620:
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

__attribute__((alias("__imp__sub_821C5638"))) PPC_WEAK_FUNC(sub_821C5638);
PPC_FUNC_IMPL(__imp__sub_821C5638) {
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
	// beq 0x821c5678
	if (cr0.eq) goto loc_821C5678;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,10160
	ctx.r3.s64 = r11.s64 + 10160;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5680
	goto loc_821C5680;
loc_821C5678:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821C5680:
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

__attribute__((alias("__imp__sub_821C569C"))) PPC_WEAK_FUNC(sub_821C569C);
PPC_FUNC_IMPL(__imp__sub_821C569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C56A0"))) PPC_WEAK_FUNC(sub_821C56A0);
PPC_FUNC_IMPL(__imp__sub_821C56A0) {
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
	// beq 0x821c56e0
	if (cr0.eq) goto loc_821C56E0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,10212
	ctx.r3.s64 = r11.s64 + 10212;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c56e8
	goto loc_821C56E8;
loc_821C56E0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821C56E8:
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

__attribute__((alias("__imp__sub_821C5704"))) PPC_WEAK_FUNC(sub_821C5704);
PPC_FUNC_IMPL(__imp__sub_821C5704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5708"))) PPC_WEAK_FUNC(sub_821C5708);
PPC_FUNC_IMPL(__imp__sub_821C5708) {
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
	// beq 0x821c5748
	if (cr0.eq) goto loc_821C5748;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,10268
	ctx.r3.s64 = r11.s64 + 10268;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5750
	goto loc_821C5750;
loc_821C5748:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821C5750:
	// mulli r3,r31,84
	ctx.r3.s64 = r31.s64 * 84;
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

__attribute__((alias("__imp__sub_821C576C"))) PPC_WEAK_FUNC(sub_821C576C);
PPC_FUNC_IMPL(__imp__sub_821C576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5770"))) PPC_WEAK_FUNC(sub_821C5770);
PPC_FUNC_IMPL(__imp__sub_821C5770) {
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
	// beq 0x821c57b0
	if (cr0.eq) goto loc_821C57B0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,10320
	ctx.r3.s64 = r11.s64 + 10320;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c57b8
	goto loc_821C57B8;
loc_821C57B0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821C57B8:
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

__attribute__((alias("__imp__sub_821C57D4"))) PPC_WEAK_FUNC(sub_821C57D4);
PPC_FUNC_IMPL(__imp__sub_821C57D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C57D8"))) PPC_WEAK_FUNC(sub_821C57D8);
PPC_FUNC_IMPL(__imp__sub_821C57D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
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
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82357698
	sub_82357698(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821C5834"))) PPC_WEAK_FUNC(sub_821C5834);
PPC_FUNC_IMPL(__imp__sub_821C5834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5838"))) PPC_WEAK_FUNC(sub_821C5838);
PPC_FUNC_IMPL(__imp__sub_821C5838) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
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
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82357698
	sub_82357698(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// clrlwi r4,r25,24
	ctx.r4.u64 = r25.u32 & 0xFF;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821C58B8"))) PPC_WEAK_FUNC(sub_821C58B8);
PPC_FUNC_IMPL(__imp__sub_821C58B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
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
	// bl 0x82357698
	sub_82357698(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821C5908"))) PPC_WEAK_FUNC(sub_821C5908);
PPC_FUNC_IMPL(__imp__sub_821C5908) {
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
	// bl 0x82357340
	sub_82357340(ctx, base);
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

__attribute__((alias("__imp__sub_821C5964"))) PPC_WEAK_FUNC(sub_821C5964);
PPC_FUNC_IMPL(__imp__sub_821C5964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5968"))) PPC_WEAK_FUNC(sub_821C5968);
PPC_FUNC_IMPL(__imp__sub_821C5968) {
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
	// beq 0x821c59a8
	if (cr0.eq) goto loc_821C59A8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,10376
	ctx.r3.s64 = r11.s64 + 10376;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c59b0
	goto loc_821C59B0;
loc_821C59A8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821C59B0:
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

__attribute__((alias("__imp__sub_821C59CC"))) PPC_WEAK_FUNC(sub_821C59CC);
PPC_FUNC_IMPL(__imp__sub_821C59CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C59D0"))) PPC_WEAK_FUNC(sub_821C59D0);
PPC_FUNC_IMPL(__imp__sub_821C59D0) {
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
	// addi r31,r11,1688
	r31.s64 = r11.s64 + 1688;
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

__attribute__((alias("__imp__sub_821C5A24"))) PPC_WEAK_FUNC(sub_821C5A24);
PPC_FUNC_IMPL(__imp__sub_821C5A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5A28"))) PPC_WEAK_FUNC(sub_821C5A28);
PPC_FUNC_IMPL(__imp__sub_821C5A28) {
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
	// beq 0x821c5a68
	if (cr0.eq) goto loc_821C5A68;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,10404
	ctx.r3.s64 = r11.s64 + 10404;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5a70
	goto loc_821C5A70;
loc_821C5A68:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821C5A70:
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

__attribute__((alias("__imp__sub_821C5A8C"))) PPC_WEAK_FUNC(sub_821C5A8C);
PPC_FUNC_IMPL(__imp__sub_821C5A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5A90"))) PPC_WEAK_FUNC(sub_821C5A90);
PPC_FUNC_IMPL(__imp__sub_821C5A90) {
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
	// beq 0x821c5ad0
	if (cr0.eq) goto loc_821C5AD0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,10428
	ctx.r3.s64 = r11.s64 + 10428;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c5ad8
	goto loc_821C5AD8;
loc_821C5AD0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821C5AD8:
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

__attribute__((alias("__imp__sub_821C5AF4"))) PPC_WEAK_FUNC(sub_821C5AF4);
PPC_FUNC_IMPL(__imp__sub_821C5AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5AF8"))) PPC_WEAK_FUNC(sub_821C5AF8);
PPC_FUNC_IMPL(__imp__sub_821C5AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// b 0x821c5b44
	goto loc_821C5B44;
loc_821C5AFC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c5b30
	if (!cr6.eq) goto loc_821C5B30;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c5b30
	if (!cr6.eq) goto loc_821C5B30;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x821c5b34
	if (cr6.eq) goto loc_821C5B34;
loc_821C5B30:
	// li r11,0
	r11.s64 = 0;
loc_821C5B34:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c5b54
	if (cr0.eq) goto loc_821C5B54;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
loc_821C5B44:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x821c5afc
	if (!cr6.eq) goto loc_821C5AFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821C5B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C5B5C"))) PPC_WEAK_FUNC(sub_821C5B5C);
PPC_FUNC_IMPL(__imp__sub_821C5B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C5B60"))) PPC_WEAK_FUNC(sub_821C5B60);
PPC_FUNC_IMPL(__imp__sub_821C5B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// b 0x821c5b9c
	goto loc_821C5B9C;
loc_821C5B64:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x821c5b88
	if (!cr6.eq) goto loc_821C5B88;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x821c5b8c
	if (cr6.eq) goto loc_821C5B8C;
loc_821C5B88:
	// li r11,0
	r11.s64 = 0;
loc_821C5B8C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821c5bac
	if (cr0.eq) goto loc_821C5BAC;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
loc_821C5B9C:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x821c5b64
	if (!cr6.eq) goto loc_821C5B64;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821C5BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C5BB4"))) PPC_WEAK_FUNC(sub_821C5BB4);
PPC_FUNC_IMPL(__imp__sub_821C5BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

