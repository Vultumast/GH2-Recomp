#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822403D8"))) PPC_WEAK_FUNC(sub_822403D8);
PPC_FUNC_IMPL(__imp__sub_822403D8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// bne cr6,0x82240400
	if (!cr6.eq) goto loc_82240400;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82240410
	goto loc_82240410;
loc_82240400:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82240410:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x8223d688
	sub_8223D688(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82238710
	sub_82238710(ctx, base);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// li r27,132
	r27.s64 = 132;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82240498
	if (cr0.eq) goto loc_82240498;
	// li r28,0
	r28.s64 = 0;
loc_82240464:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x822401d8
	sub_822401D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82240464
	if (!cr6.eq) goto loc_82240464;
loc_82240498:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,144
	ctx.r3.s64 = r30.s64 + 144;
	// bl 0x822401d8
	sub_822401D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822404AC"))) PPC_WEAK_FUNC(sub_822404AC);
PPC_FUNC_IMPL(__imp__sub_822404AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822404B0"))) PPC_WEAK_FUNC(sub_822404B0);
PPC_FUNC_IMPL(__imp__sub_822404B0) {
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
	// li r8,44
	ctx.r8.s64 = 44;
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
	// bge cr6,0x82240500
	if (!cr6.lt) goto loc_82240500;
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82240514
	if (cr6.eq) goto loc_82240514;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x8223c0b0
	sub_8223C0B0(ctx, base);
	// b 0x82240514
	goto loc_82240514;
loc_82240500:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8223fe08
	sub_8223FE08(ctx, base);
loc_82240514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82240524"))) PPC_WEAK_FUNC(sub_82240524);
PPC_FUNC_IMPL(__imp__sub_82240524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240528"))) PPC_WEAK_FUNC(sub_82240528);
PPC_FUNC_IMPL(__imp__sub_82240528) {
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
	// li r8,56
	ctx.r8.s64 = 56;
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
	// bge cr6,0x82240578
	if (!cr6.lt) goto loc_82240578;
	// mulli r11,r11,56
	r11.s64 = r11.s64 * 56;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8224058c
	if (cr6.eq) goto loc_8224058C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x8223c110
	sub_8223C110(ctx, base);
	// b 0x8224058c
	goto loc_8224058C;
loc_82240578:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8223fe70
	sub_8223FE70(ctx, base);
loc_8224058C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224059C"))) PPC_WEAK_FUNC(sub_8224059C);
PPC_FUNC_IMPL(__imp__sub_8224059C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822405A0"))) PPC_WEAK_FUNC(sub_822405A0);
PPC_FUNC_IMPL(__imp__sub_822405A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822404b0
	sub_822404B0(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x822405e8
	goto loc_822405E8;
loc_822405D8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238b30
	sub_82238B30(ctx, base);
	// addi r31,r31,44
	r31.s64 = r31.s64 + 44;
loc_822405E8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x822405d8
	if (!cr6.eq) goto loc_822405D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82240600"))) PPC_WEAK_FUNC(sub_82240600);
PPC_FUNC_IMPL(__imp__sub_82240600) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82240528
	sub_82240528(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82240648
	goto loc_82240648;
loc_82240638:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82238e10
	sub_82238E10(ctx, base);
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
loc_82240648:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82240638
	if (!cr6.eq) goto loc_82240638;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82240660"))) PPC_WEAK_FUNC(sub_82240660);
PPC_FUNC_IMPL(__imp__sub_82240660) {
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
	// b 0x82240698
	goto loc_82240698;
loc_82240680:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-132
	ctx.r3.s64 = r11.s64 + -132;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-132
	r11.s64 = r11.s64 + -132;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82240698:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82240680
	if (!cr0.eq) goto loc_82240680;
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

__attribute__((alias("__imp__sub_822406D0"))) PPC_WEAK_FUNC(sub_822406D0);
PPC_FUNC_IMPL(__imp__sub_822406D0) {
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
	// li r8,44
	ctx.r8.s64 = 44;
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
	// bge cr6,0x82240720
	if (!cr6.lt) goto loc_82240720;
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82240734
	if (cr6.eq) goto loc_82240734;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x8223e1d8
	sub_8223E1D8(ctx, base);
	// b 0x82240734
	goto loc_82240734;
loc_82240720:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x82240250
	sub_82240250(ctx, base);
loc_82240734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82240744"))) PPC_WEAK_FUNC(sub_82240744);
PPC_FUNC_IMPL(__imp__sub_82240744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240748"))) PPC_WEAK_FUNC(sub_82240748);
PPC_FUNC_IMPL(__imp__sub_82240748) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-8488(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -8488);
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x822407c4
	if (!cr6.eq) goto loc_822407C4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
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
	// beq 0x822407bc
	if (cr0.eq) goto loc_822407BC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822407BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224087c
	goto loc_8224087C;
loc_822407C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// blt cr6,0x82240868
	if (cr6.lt) goto loc_82240868;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82240868
	if (!cr0.eq) goto loc_82240868;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x82240818
	if (!cr6.eq) goto loc_82240818;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8223c738
	sub_8223C738(ctx, base);
	// b 0x822407bc
	goto loc_822407BC;
loc_82240818:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x82240860
	if (!cr6.eq) goto loc_82240860;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82240860
	if (cr0.eq) goto loc_82240860;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8221be40
	sub_8221BE40(ctx, base);
	// b 0x822407bc
	goto loc_822407BC;
loc_82240860:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224087c
	goto loc_8224087C;
loc_82240868:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
loc_8224087C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82240750"))) PPC_WEAK_FUNC(sub_82240750);
PPC_FUNC_IMPL(__imp__sub_82240750) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x822407c4
	if (!cr6.eq) goto loc_822407C4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
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
	// beq 0x822407bc
	if (cr0.eq) goto loc_822407BC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822407BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224087c
	goto loc_8224087C;
loc_822407C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// blt cr6,0x82240868
	if (cr6.lt) goto loc_82240868;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82240868
	if (!cr0.eq) goto loc_82240868;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x82240818
	if (!cr6.eq) goto loc_82240818;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8223c738
	sub_8223C738(ctx, base);
	// b 0x822407bc
	goto loc_822407BC;
loc_82240818:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x82240860
	if (!cr6.eq) goto loc_82240860;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82240860
	if (cr0.eq) goto loc_82240860;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8221be40
	sub_8221BE40(ctx, base);
	// b 0x822407bc
	goto loc_822407BC;
loc_82240860:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224087c
	goto loc_8224087C;
loc_82240868:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
loc_8224087C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82240884"))) PPC_WEAK_FUNC(sub_82240884);
PPC_FUNC_IMPL(__imp__sub_82240884) {
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

__attribute__((alias("__imp__sub_822408AC"))) PPC_WEAK_FUNC(sub_822408AC);
PPC_FUNC_IMPL(__imp__sub_822408AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822408B0"))) PPC_WEAK_FUNC(sub_822408B0);
PPC_FUNC_IMPL(__imp__sub_822408B0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-8408(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -8408);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,88(r31)
	PPC_STORE_U8(r31.u32 + 88, ctx.r10.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x822406d0
	sub_822406D0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822408B8"))) PPC_WEAK_FUNC(sub_822408B8);
PPC_FUNC_IMPL(__imp__sub_822408B8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,88(r31)
	PPC_STORE_U8(r31.u32 + 88, ctx.r10.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x822406d0
	sub_822406D0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82240920"))) PPC_WEAK_FUNC(sub_82240920);
PPC_FUNC_IMPL(__imp__sub_82240920) {
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
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
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

__attribute__((alias("__imp__sub_82240948"))) PPC_WEAK_FUNC(sub_82240948);
PPC_FUNC_IMPL(__imp__sub_82240948) {
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
	// bl 0x82239ee8
	sub_82239EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82240970"))) PPC_WEAK_FUNC(sub_82240970);
PPC_FUNC_IMPL(__imp__sub_82240970) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x822409b8
	if (cr6.eq) goto loc_822409B8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,44
	ctx.r9.s64 = 44;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = r11.s32 / ctx.r9.s32;
	// bl 0x822408b8
	sub_822408B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223f560
	sub_8223F560(ctx, base);
loc_822409B8:
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

__attribute__((alias("__imp__sub_822409D0"))) PPC_WEAK_FUNC(sub_822409D0);
PPC_FUNC_IMPL(__imp__sub_822409D0) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8221bea0
	sub_8221BEA0(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82240a20
	goto loc_82240A20;
loc_82240A14:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82359638
	sub_82359638(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82240A20:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82240a14
	if (!cr6.eq) goto loc_82240A14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82240A38"))) PPC_WEAK_FUNC(sub_82240A38);
PPC_FUNC_IMPL(__imp__sub_82240A38) {
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822408b8
	sub_822408B8(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82240a7c
	goto loc_82240A7C;
loc_82240A6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223ade8
	sub_8223ADE8(ctx, base);
	// addi r31,r31,44
	r31.s64 = r31.s64 + 44;
loc_82240A7C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82240a6c
	if (!cr6.eq) goto loc_82240A6C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82240A94"))) PPC_WEAK_FUNC(sub_82240A94);
PPC_FUNC_IMPL(__imp__sub_82240A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240A98"))) PPC_WEAK_FUNC(sub_82240A98);
PPC_FUNC_IMPL(__imp__sub_82240A98) {
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
	// beq cr6,0x82240ad0
	if (cr6.eq) goto loc_82240AD0;
loc_82240ABC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// addi r31,r31,132
	r31.s64 = r31.s64 + 132;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82240abc
	if (!cr6.eq) goto loc_82240ABC;
loc_82240AD0:
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

__attribute__((alias("__imp__sub_82240AE8"))) PPC_WEAK_FUNC(sub_82240AE8);
PPC_FUNC_IMPL(__imp__sub_82240AE8) {
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
	// bl 0x82240660
	sub_82240660(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,132
	r11.s64 = 132;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,132
	ctx.r3.s64 = r11.s64 * 132;
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

__attribute__((alias("__imp__sub_82240B4C"))) PPC_WEAK_FUNC(sub_82240B4C);
PPC_FUNC_IMPL(__imp__sub_82240B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240B50"))) PPC_WEAK_FUNC(sub_82240B50);
PPC_FUNC_IMPL(__imp__sub_82240B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r2{};
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
	// lwz r16,-8300(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -8300);
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_82240B84:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82240bac
	if (cr6.eq) goto loc_82240BAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822400f8
	sub_822400F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,132
	r29.s64 = r29.s64 + 132;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x82240b84
	goto loc_82240B84;
loc_82240BAC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82240B58"))) PPC_WEAK_FUNC(sub_82240B58);
PPC_FUNC_IMPL(__imp__sub_82240B58) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_82240B84:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82240bac
	if (cr6.eq) goto loc_82240BAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822400f8
	sub_822400F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,132
	r29.s64 = r29.s64 + 132;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x82240b84
	goto loc_82240B84;
loc_82240BAC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82240BB8"))) PPC_WEAK_FUNC(sub_82240BB8);
PPC_FUNC_IMPL(__imp__sub_82240BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
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
	// lwz r16,-8300(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -8300);
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
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
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82240970
	sub_82240970(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x8223f0c0
	sub_8223F0C0(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8223f3f0
	sub_8223F3F0(ctx, base);
	// addi r4,r30,60
	ctx.r4.s64 = r30.s64 + 60;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x8223de28
	sub_8223DE28(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8223de28
	sub_8223DE28(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = r30.s64 + 100;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x8223de28
	sub_8223DE28(ctx, base);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,124(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 124);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// lfs f0,128(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 128);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
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

__attribute__((alias("__imp__sub_82240BC0"))) PPC_WEAK_FUNC(sub_82240BC0);
PPC_FUNC_IMPL(__imp__sub_82240BC0) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82240BE8"))) PPC_WEAK_FUNC(sub_82240BE8);
PPC_FUNC_IMPL(__imp__sub_82240BE8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82240970
	sub_82240970(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x8223f0c0
	sub_8223F0C0(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8223f3f0
	sub_8223F3F0(ctx, base);
	// addi r4,r30,60
	ctx.r4.s64 = r30.s64 + 60;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x8223de28
	sub_8223DE28(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8223de28
	sub_8223DE28(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = r30.s64 + 100;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x8223de28
	sub_8223DE28(ctx, base);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,124(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 124);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// lfs f0,128(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 128);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
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

__attribute__((alias("__imp__sub_82240C84"))) PPC_WEAK_FUNC(sub_82240C84);
PPC_FUNC_IMPL(__imp__sub_82240C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240C88"))) PPC_WEAK_FUNC(sub_82240C88);
PPC_FUNC_IMPL(__imp__sub_82240C88) {
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
	// bl 0x82240660
	sub_82240660(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,132
	r11.s64 = 132;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,132
	ctx.r3.s64 = r11.s64 * 132;
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

__attribute__((alias("__imp__sub_82240CEC"))) PPC_WEAK_FUNC(sub_82240CEC);
PPC_FUNC_IMPL(__imp__sub_82240CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82240CF0"))) PPC_WEAK_FUNC(sub_82240CF0);
PPC_FUNC_IMPL(__imp__sub_82240CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r2{};
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
	// lwz r16,-8196(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -8196);
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
loc_82240D24:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82240d4c
	if (cr6.eq) goto loc_82240D4C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822400f8
	sub_822400F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x82240d24
	goto loc_82240D24;
loc_82240D4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82240CF8"))) PPC_WEAK_FUNC(sub_82240CF8);
PPC_FUNC_IMPL(__imp__sub_82240CF8) {
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
loc_82240D24:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82240d4c
	if (cr6.eq) goto loc_82240D4C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822400f8
	sub_822400F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x82240d24
	goto loc_82240D24;
loc_82240D4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82240D58"))) PPC_WEAK_FUNC(sub_82240D58);
PPC_FUNC_IMPL(__imp__sub_82240D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r2{};
	PPCRegister r12{};
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
	// lwz r16,-8196(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -8196);
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
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-8092(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -8092);
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_82240DBC:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82240de4
	if (cr6.eq) goto loc_82240DE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822400f8
	sub_822400F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,132
	r29.s64 = r29.s64 + 132;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x82240dbc
	goto loc_82240DBC;
loc_82240DE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82240D60"))) PPC_WEAK_FUNC(sub_82240D60);
PPC_FUNC_IMPL(__imp__sub_82240D60) {
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
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82240D90"))) PPC_WEAK_FUNC(sub_82240D90);
PPC_FUNC_IMPL(__imp__sub_82240D90) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_82240DBC:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82240de4
	if (cr6.eq) goto loc_82240DE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822400f8
	sub_822400F8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,132
	r29.s64 = r29.s64 + 132;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x82240dbc
	goto loc_82240DBC;
loc_82240DE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82240DF0"))) PPC_WEAK_FUNC(sub_82240DF0);
PPC_FUNC_IMPL(__imp__sub_82240DF0) {
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
	// lwz r16,-8092(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -8092);
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
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
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// bl 0x82240970
	sub_82240970(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x8223f0c0
	sub_8223F0C0(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8223f3f0
	sub_8223F3F0(ctx, base);
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

__attribute__((alias("__imp__sub_82240DF8"))) PPC_WEAK_FUNC(sub_82240DF8);
PPC_FUNC_IMPL(__imp__sub_82240DF8) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82240E20"))) PPC_WEAK_FUNC(sub_82240E20);
PPC_FUNC_IMPL(__imp__sub_82240E20) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// bl 0x82240970
	sub_82240970(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x8223f0c0
	sub_8223F0C0(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x8223f3f0
	sub_8223F3F0(ctx, base);
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

__attribute__((alias("__imp__sub_82240E78"))) PPC_WEAK_FUNC(sub_82240E78);
PPC_FUNC_IMPL(__imp__sub_82240E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r11,r11,132
	r11.s64 = r11.s64 * 132;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82240e20
	sub_82240E20(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82239bb8
	sub_82239BB8(ctx, base);
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

__attribute__((alias("__imp__sub_82240EE0"))) PPC_WEAK_FUNC(sub_82240EE0);
PPC_FUNC_IMPL(__imp__sub_82240EE0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-7984(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7984);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r28,r30,20
	r28.s64 = r30.s64 + 20;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r29,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r29.u32);
	// addi r27,r30,36
	r27.s64 = r30.s64 + 36;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// addi r26,r30,48
	r26.s64 = r30.s64 + 48;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
	// addi r10,r30,60
	ctx.r10.s64 = r30.s64 + 60;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// addi r10,r30,80
	ctx.r10.s64 = r30.s64 + 80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// addi r10,r30,100
	ctx.r10.s64 = r30.s64 + 100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,15860
	ctx.r6.s64 = r11.s64 + 15860;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,120(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// stfs f0,124(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 124, temp.u32);
	// lfs f13,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,128(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 128, temp.u32);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822408b8
	sub_822408B8(ctx, base);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822404b0
	sub_822404B0(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x82240528
	sub_82240528(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lbz r11,14548(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 14548);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82241034
	if (!cr0.eq) goto loc_82241034;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82239d48
	sub_82239D48(ctx, base);
loc_82241034:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82240EE8"))) PPC_WEAK_FUNC(sub_82240EE8);
PPC_FUNC_IMPL(__imp__sub_82240EE8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r28,r30,20
	r28.s64 = r30.s64 + 20;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r29,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r29.u32);
	// addi r27,r30,36
	r27.s64 = r30.s64 + 36;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// addi r26,r30,48
	r26.s64 = r30.s64 + 48;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
	// addi r10,r30,60
	ctx.r10.s64 = r30.s64 + 60;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// addi r10,r30,80
	ctx.r10.s64 = r30.s64 + 80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// addi r10,r30,100
	ctx.r10.s64 = r30.s64 + 100;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,15860
	ctx.r6.s64 = r11.s64 + 15860;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,120(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// stfs f0,124(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 124, temp.u32);
	// lfs f13,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,128(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 128, temp.u32);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822408b8
	sub_822408B8(ctx, base);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822404b0
	sub_822404B0(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x82240528
	sub_82240528(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lbz r11,14548(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 14548);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82241034
	if (!cr0.eq) goto loc_82241034;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82239d48
	sub_82239D48(ctx, base);
loc_82241034:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82241040"))) PPC_WEAK_FUNC(sub_82241040);
PPC_FUNC_IMPL(__imp__sub_82241040) {
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

__attribute__((alias("__imp__sub_82241068"))) PPC_WEAK_FUNC(sub_82241068);
PPC_FUNC_IMPL(__imp__sub_82241068) {
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
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x8223f810
	sub_8223F810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241094"))) PPC_WEAK_FUNC(sub_82241094);
PPC_FUNC_IMPL(__imp__sub_82241094) {
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
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821d0228
	sub_821D0228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822410C0"))) PPC_WEAK_FUNC(sub_822410C0);
PPC_FUNC_IMPL(__imp__sub_822410C0) {
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
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x821a3dd0
	sub_821A3DD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822410EC"))) PPC_WEAK_FUNC(sub_822410EC);
PPC_FUNC_IMPL(__imp__sub_822410EC) {
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
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// bl 0x82120a70
	sub_82120A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241118"))) PPC_WEAK_FUNC(sub_82241118);
PPC_FUNC_IMPL(__imp__sub_82241118) {
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
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
	// bl 0x82120a70
	sub_82120A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241144"))) PPC_WEAK_FUNC(sub_82241144);
PPC_FUNC_IMPL(__imp__sub_82241144) {
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
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// bl 0x82120a70
	sub_82120A70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241170"))) PPC_WEAK_FUNC(sub_82241170);
PPC_FUNC_IMPL(__imp__sub_82241170) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240a38
	sub_82240A38(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822405a0
	sub_822405A0(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240600
	sub_82240600(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,14544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14544);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x822411ec
	if (!cr6.gt) goto loc_822411EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
loc_822411EC:
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

__attribute__((alias("__imp__sub_82241204"))) PPC_WEAK_FUNC(sub_82241204);
PPC_FUNC_IMPL(__imp__sub_82241204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241208"))) PPC_WEAK_FUNC(sub_82241208);
PPC_FUNC_IMPL(__imp__sub_82241208) {
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
	// li r10,44
	ctx.r10.s64 = 44;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x822408b8
	sub_822408B8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-44
	ctx.r3.s64 = r11.s64 + -44;
	// bl 0x8223b3b0
	sub_8223B3B0(ctx, base);
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

__attribute__((alias("__imp__sub_82241268"))) PPC_WEAK_FUNC(sub_82241268);
PPC_FUNC_IMPL(__imp__sub_82241268) {
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
	// lwz r16,-7920(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7920);
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
	// bl 0x82240660
	sub_82240660(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822412d4
	if (cr0.eq) goto loc_822412D4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,132
	ctx.r10.s64 = 132;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,132
	ctx.r3.s64 = r11.s64 * 132;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822412D4:
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

__attribute__((alias("__imp__sub_82241270"))) PPC_WEAK_FUNC(sub_82241270);
PPC_FUNC_IMPL(__imp__sub_82241270) {
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
	// bl 0x82240660
	sub_82240660(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822412d4
	if (cr0.eq) goto loc_822412D4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,132
	ctx.r10.s64 = 132;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,132
	ctx.r3.s64 = r11.s64 * 132;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822412D4:
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

__attribute__((alias("__imp__sub_822412EC"))) PPC_WEAK_FUNC(sub_822412EC);
PPC_FUNC_IMPL(__imp__sub_822412EC) {
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
	// bl 0x8223a238
	sub_8223A238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241314"))) PPC_WEAK_FUNC(sub_82241314);
PPC_FUNC_IMPL(__imp__sub_82241314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241318"))) PPC_WEAK_FUNC(sub_82241318);
PPC_FUNC_IMPL(__imp__sub_82241318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r2{};
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
	// lwz r16,-7812(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7812);
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82239708
	sub_82239708(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82240b58
	sub_82240B58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82241320"))) PPC_WEAK_FUNC(sub_82241320);
PPC_FUNC_IMPL(__imp__sub_82241320) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82239708
	sub_82239708(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82240b58
	sub_82240B58(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8224137C"))) PPC_WEAK_FUNC(sub_8224137C);
PPC_FUNC_IMPL(__imp__sub_8224137C) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-7812(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7812);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r3,r11,132
	ctx.r3.s64 = r11.s64 * 132;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// b 0x82241270
	sub_82241270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241384"))) PPC_WEAK_FUNC(sub_82241384);
PPC_FUNC_IMPL(__imp__sub_82241384) {
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r3,r11,132
	ctx.r3.s64 = r11.s64 * 132;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_822413B0"))) PPC_WEAK_FUNC(sub_822413B0);
PPC_FUNC_IMPL(__imp__sub_822413B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82241270
	sub_82241270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822413B4"))) PPC_WEAK_FUNC(sub_822413B4);
PPC_FUNC_IMPL(__imp__sub_822413B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822413B8"))) PPC_WEAK_FUNC(sub_822413B8);
PPC_FUNC_IMPL(__imp__sub_822413B8) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-7744(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7744);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// bne cr6,0x822413f4
	if (!cr6.eq) goto loc_822413F4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82241404
	goto loc_82241404;
loc_822413F4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82241404:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
	// addi r4,r31,220
	ctx.r4.s64 = r31.s64 + 220;
	// addi r3,r27,32
	ctx.r3.s64 = r27.s64 + 32;
	// bl 0x822309e0
	sub_822309E0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82241434
	if (!cr6.eq) goto loc_82241434;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82241444
	goto loc_82241444;
loc_82241434:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82241444:
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,88(r31)
	PPC_STORE_U8(r31.u32 + 88, ctx.r10.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82232558
	sub_82232558(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8224148c
	if (cr0.eq) goto loc_8224148C;
	// sth r29,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r29.u16);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
loc_8224148C:
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// li r26,132
	r26.s64 = 132;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822414e0
	if (cr0.eq) goto loc_822414E0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_822414AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82241208
	sub_82241208(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x822414ac
	if (!cr6.eq) goto loc_822414AC;
loc_822414E0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r27,116
	ctx.r3.s64 = r27.s64 + 116;
	// bl 0x82241208
	sub_82241208(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822413C0"))) PPC_WEAK_FUNC(sub_822413C0);
PPC_FUNC_IMPL(__imp__sub_822413C0) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// bne cr6,0x822413f4
	if (!cr6.eq) goto loc_822413F4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82241404
	goto loc_82241404;
loc_822413F4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82241404:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
	// addi r4,r31,220
	ctx.r4.s64 = r31.s64 + 220;
	// addi r3,r27,32
	ctx.r3.s64 = r27.s64 + 32;
	// bl 0x822309e0
	sub_822309E0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82241434
	if (!cr6.eq) goto loc_82241434;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82241444
	goto loc_82241444;
loc_82241434:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82241444:
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,88(r31)
	PPC_STORE_U8(r31.u32 + 88, ctx.r10.u8);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82232558
	sub_82232558(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8224148c
	if (cr0.eq) goto loc_8224148C;
	// sth r29,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r29.u16);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
loc_8224148C:
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// li r26,132
	r26.s64 = 132;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822414e0
	if (cr0.eq) goto loc_822414E0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_822414AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82241208
	sub_82241208(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x822414ac
	if (!cr6.eq) goto loc_822414AC;
loc_822414E0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r27,116
	ctx.r3.s64 = r27.s64 + 116;
	// bl 0x82241208
	sub_82241208(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_822414FC"))) PPC_WEAK_FUNC(sub_822414FC);
PPC_FUNC_IMPL(__imp__sub_822414FC) {
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
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
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

__attribute__((alias("__imp__sub_82241524"))) PPC_WEAK_FUNC(sub_82241524);
PPC_FUNC_IMPL(__imp__sub_82241524) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82239ee8
	sub_82239EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224154C"))) PPC_WEAK_FUNC(sub_8224154C);
PPC_FUNC_IMPL(__imp__sub_8224154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241550"))) PPC_WEAK_FUNC(sub_82241550);
PPC_FUNC_IMPL(__imp__sub_82241550) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822415b0
	if (cr0.eq) goto loc_822415B0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82241584:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// beq cr6,0x822415b0
	if (cr6.eq) goto loc_822415B0;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82241584
	if (!cr6.eq) goto loc_82241584;
loc_822415B0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x822415d8
	if (!cr6.eq) goto loc_822415D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822413c0
	sub_822413C0(ctx, base);
loc_822415D8:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// li r27,132
	r27.s64 = 132;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8224163c
	if (cr0.eq) goto loc_8224163C;
	// mulli r28,r30,44
	r28.s64 = r30.s64 * 44;
	// li r30,0
	r30.s64 = 0;
loc_82241600:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x82232558
	sub_82232558(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82241600
	if (!cr6.eq) goto loc_82241600;
loc_8224163C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82241644"))) PPC_WEAK_FUNC(sub_82241644);
PPC_FUNC_IMPL(__imp__sub_82241644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241648"))) PPC_WEAK_FUNC(sub_82241648);
PPC_FUNC_IMPL(__imp__sub_82241648) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// beq cr6,0x8224177c
	if (cr6.eq) goto loc_8224177C;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r30,132
	r30.s64 = 132;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r25,r9,r30
	r25.s32 = ctx.r9.s32 / r30.s32;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x822416b8
	if (!cr6.gt) goto loc_822416B8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82241320
	sub_82241320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82240ae8
	sub_82240AE8(ctx, base);
	// mulli r11,r25,132
	r11.s64 = r25.s64 * 132;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8224176c
	goto loc_8224176C;
loc_822416B8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// blt cr6,0x8224170c
	if (cr6.lt) goto loc_8224170C;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// subf r11,r29,r6
	r11.s64 = ctx.r6.s64 - r29.s64;
	// divw. r30,r11,r30
	r30.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x822416fc
	if (!cr0.gt) goto loc_822416FC;
loc_822416E0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,132
	r29.s64 = r29.s64 + 132;
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
	// bgt 0x822416e0
	if (cr0.gt) goto loc_822416E0;
loc_822416FC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// b 0x8224176c
	goto loc_8224176C;
loc_8224170C:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// mr r27,r11
	r27.u64 = r11.u64;
	// subf r11,r28,r10
	r11.s64 = ctx.r10.s64 - r28.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// divw. r29,r11,r30
	r29.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82241744
	if (!cr0.gt) goto loc_82241744;
loc_82241728:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
	// addi r27,r27,132
	r27.s64 = r27.s64 + 132;
	// bgt 0x82241728
	if (cr0.gt) goto loc_82241728;
loc_82241744:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mulli r11,r11,132
	r11.s64 = r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82240b58
	sub_82240B58(ctx, base);
loc_8224176C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r25,132
	r11.s64 = r25.s64 * 132;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8224177C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82241788"))) PPC_WEAK_FUNC(sub_82241788);
PPC_FUNC_IMPL(__imp__sub_82241788) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r30,132
	r11.s64 = r30.s64 + 132;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x822417d8
	if (cr6.eq) goto loc_822417D8;
	// li r9,132
	ctx.r9.s64 = 132;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// divw. r31,r11,r9
	r31.s32 = r11.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x822417d8
	if (!cr0.gt) goto loc_822417D8;
loc_822417C0:
	// addi r29,r3,132
	r29.s64 = ctx.r3.s64 + 132;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bgt 0x822417c0
	if (cr0.gt) goto loc_822417C0;
loc_822417D8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r11,-132
	ctx.r3.s64 = r11.s64 + -132;
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822417F4"))) PPC_WEAK_FUNC(sub_822417F4);
PPC_FUNC_IMPL(__imp__sub_822417F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822417F8"))) PPC_WEAK_FUNC(sub_822417F8);
PPC_FUNC_IMPL(__imp__sub_822417F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r2{};
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-7628(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7628);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,132
	ctx.r10.s64 = 132;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
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
	// blt cr6,0x82241858
	if (cr6.lt) goto loc_82241858;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82241858:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x82239708
	sub_82239708(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82240d90
	sub_82240D90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x822418c0
	if (!cr6.eq) goto loc_822418C0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82240088
	sub_82240088(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,132
	r29.s64 = r29.s64 + 132;
	// b 0x822418d8
	goto loc_822418D8;
loc_822418C0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82240cf8
	sub_82240CF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822418D8:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82241900
	if (!cr0.eq) goto loc_82241900;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82240d90
	sub_82240D90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82241900:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240c88
	sub_82240C88(ctx, base);
	// mulli r11,r24,132
	r11.s64 = r24.s64 * 132;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82241800"))) PPC_WEAK_FUNC(sub_82241800);
PPC_FUNC_IMPL(__imp__sub_82241800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,132
	ctx.r10.s64 = 132;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
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
	// blt cr6,0x82241858
	if (cr6.lt) goto loc_82241858;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82241858:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x82239708
	sub_82239708(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82240d90
	sub_82240D90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x822418c0
	if (!cr6.eq) goto loc_822418C0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82240088
	sub_82240088(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,132
	r29.s64 = r29.s64 + 132;
	// b 0x822418d8
	goto loc_822418D8;
loc_822418C0:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82240cf8
	sub_82240CF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822418D8:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82241900
	if (!cr0.eq) goto loc_82241900;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82240d90
	sub_82240D90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82241900:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240c88
	sub_82240C88(ctx, base);
	// mulli r11,r24,132
	r11.s64 = r24.s64 * 132;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82241924"))) PPC_WEAK_FUNC(sub_82241924);
PPC_FUNC_IMPL(__imp__sub_82241924) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,-7628(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7628);
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,132
	ctx.r3.s64 = r11.s64 * 132;
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
	// lwz r16,-7544(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7544);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x822419ac
	if (cr6.lt) goto loc_822419AC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822419b0
	if (cr6.lt) goto loc_822419B0;
loc_822419AC:
	// li r11,0
	r11.s64 = 0;
loc_822419B0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822419f4
	if (cr0.eq) goto loc_822419F4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223fee0
	sub_8223FEE0(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82241970
	sub_82241970(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// b 0x82241adc
	goto loc_82241ADC;
loc_822419F4:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,132
	r25.s64 = 132;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r27,r11,r25
	r27.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// ble cr6,0x82241a88
	if (!cr6.gt) goto loc_82241A88;
	// mulli r26,r26,132
	r26.s64 = r26.s64 * 132;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82240d90
	sub_82240D90(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw. r29,r11,r25
	r29.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82241a5c
	if (!cr0.gt) goto loc_82241A5C;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_82241A44:
	// addi r30,r30,-132
	r30.s64 = r30.s64 + -132;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x82241a44
	if (cr0.gt) goto loc_82241A44;
loc_82241A5C:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x82241adc
	if (cr6.eq) goto loc_82241ADC;
loc_82241A6C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82241a6c
	if (!cr6.eq) goto loc_82241A6C;
	// b 0x82241adc
	goto loc_82241ADC;
loc_82241A88:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r4,r27,r26
	ctx.r4.s64 = r26.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240cf8
	sub_82240CF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bl 0x82240d90
	sub_82240D90(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r27,132
	r11.s64 = r27.s64 * 132;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82241ad4
	goto loc_82241AD4;
loc_82241AC4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
loc_82241AD4:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82241ac4
	if (!cr6.eq) goto loc_82241AC4;
loc_82241ADC:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8224192C"))) PPC_WEAK_FUNC(sub_8224192C);
PPC_FUNC_IMPL(__imp__sub_8224192C) {
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,132
	ctx.r3.s64 = r11.s64 * 132;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82241970"))) PPC_WEAK_FUNC(sub_82241970);
PPC_FUNC_IMPL(__imp__sub_82241970) {
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
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x822419ac
	if (cr6.lt) goto loc_822419AC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822419b0
	if (cr6.lt) goto loc_822419B0;
loc_822419AC:
	// li r11,0
	r11.s64 = 0;
loc_822419B0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822419f4
	if (cr0.eq) goto loc_822419F4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223fee0
	sub_8223FEE0(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82241970
	sub_82241970(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// b 0x82241adc
	goto loc_82241ADC;
loc_822419F4:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,132
	r25.s64 = 132;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r27,r11,r25
	r27.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// ble cr6,0x82241a88
	if (!cr6.gt) goto loc_82241A88;
	// mulli r26,r26,132
	r26.s64 = r26.s64 * 132;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82240d90
	sub_82240D90(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw. r29,r11,r25
	r29.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82241a5c
	if (!cr0.gt) goto loc_82241A5C;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_82241A44:
	// addi r30,r30,-132
	r30.s64 = r30.s64 + -132;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x82241a44
	if (cr0.gt) goto loc_82241A44;
loc_82241A5C:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x82241adc
	if (cr6.eq) goto loc_82241ADC;
loc_82241A6C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82241a6c
	if (!cr6.eq) goto loc_82241A6C;
	// b 0x82241adc
	goto loc_82241ADC;
loc_82241A88:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r4,r27,r26
	ctx.r4.s64 = r26.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82240cf8
	sub_82240CF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bl 0x82240d90
	sub_82240D90(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r27,132
	r11.s64 = r27.s64 * 132;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82241ad4
	goto loc_82241AD4;
loc_82241AC4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
loc_82241AD4:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82241ac4
	if (!cr6.eq) goto loc_82241AC4;
loc_82241ADC:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82241AE4"))) PPC_WEAK_FUNC(sub_82241AE4);
PPC_FUNC_IMPL(__imp__sub_82241AE4) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241B0C"))) PPC_WEAK_FUNC(sub_82241B0C);
PPC_FUNC_IMPL(__imp__sub_82241B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241B10"))) PPC_WEAK_FUNC(sub_82241B10);
PPC_FUNC_IMPL(__imp__sub_82241B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-7304(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7304);
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82241b5c
	if (cr6.eq) goto loc_82241B5C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// addi r11,r11,-7360
	r11.s64 = r11.s64 + -7360;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82241B5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-7396
	ctx.r10.s64 = r11.s64 + -7396;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r11,-7460
	ctx.r9.s64 = r11.s64 + -7460;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-192
	ctx.r9.s64 = ctx.r10.s64 + -192;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,44
	r11.s64 = r30.s64 + 44;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,56
	r11.s64 = r30.s64 + 56;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stb r29,68(r30)
	PPC_STORE_U8(r30.u32 + 68, r29.u8);
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// li r11,4
	r11.s64 = 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,96
	r28.s64 = r30.s64 + 96;
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82239120
	sub_82239120(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r8,-10860
	ctx.r8.s64 = ctx.r8.s64 + -10860;
	// addi r11,r30,116
	r11.s64 = r30.s64 + 116;
	// addi r10,r30,132
	ctx.r10.s64 = r30.s64 + 132;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r9,r30,144
	ctx.r9.s64 = r30.s64 + 144;
	// stw r8,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r29,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r29.u8);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r29.u32);
	// stfs f0,168(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// stfs f0,184(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stw r29,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r29.u32);
	// stw r7,176(r30)
	PPC_STORE_U32(r30.u32 + 176, ctx.r7.u32);
	// stb r29,188(r30)
	PPC_STORE_U8(r30.u32 + 188, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82241B18"))) PPC_WEAK_FUNC(sub_82241B18);
PPC_FUNC_IMPL(__imp__sub_82241B18) {
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
	// beq cr6,0x82241b5c
	if (cr6.eq) goto loc_82241B5C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// addi r11,r11,-7360
	r11.s64 = r11.s64 + -7360;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82241B5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-7396
	ctx.r10.s64 = r11.s64 + -7396;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r11,-7460
	ctx.r9.s64 = r11.s64 + -7460;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-192
	ctx.r9.s64 = ctx.r10.s64 + -192;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,44
	r11.s64 = r30.s64 + 44;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,56
	r11.s64 = r30.s64 + 56;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stb r29,68(r30)
	PPC_STORE_U8(r30.u32 + 68, r29.u8);
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
	// lwz r10,18972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18972);
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// li r11,4
	r11.s64 = 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,96
	r28.s64 = r30.s64 + 96;
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82239120
	sub_82239120(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r8,-10860
	ctx.r8.s64 = ctx.r8.s64 + -10860;
	// addi r11,r30,116
	r11.s64 = r30.s64 + 116;
	// addi r10,r30,132
	ctx.r10.s64 = r30.s64 + 132;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r9,r30,144
	ctx.r9.s64 = r30.s64 + 144;
	// stw r8,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r29,112(r30)
	PPC_STORE_U8(r30.u32 + 112, r29.u8);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r29.u32);
	// stfs f0,168(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// stfs f0,184(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// stw r29,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r29.u32);
	// stw r7,176(r30)
	PPC_STORE_U32(r30.u32 + 176, ctx.r7.u32);
	// stb r29,188(r30)
	PPC_STORE_U8(r30.u32 + 188, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82241CC0"))) PPC_WEAK_FUNC(sub_82241CC0);
PPC_FUNC_IMPL(__imp__sub_82241CC0) {
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
	// beq 0x82241cf4
	if (cr0.eq) goto loc_82241CF4;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,196
	ctx.r3.s64 = r11.s64 + 196;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82241CF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241D04"))) PPC_WEAK_FUNC(sub_82241D04);
PPC_FUNC_IMPL(__imp__sub_82241D04) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x822413b0
	sub_822413B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241D30"))) PPC_WEAK_FUNC(sub_82241D30);
PPC_FUNC_IMPL(__imp__sub_82241D30) {
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
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
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

__attribute__((alias("__imp__sub_82241D5C"))) PPC_WEAK_FUNC(sub_82241D5C);
PPC_FUNC_IMPL(__imp__sub_82241D5C) {
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
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
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

__attribute__((alias("__imp__sub_82241D88"))) PPC_WEAK_FUNC(sub_82241D88);
PPC_FUNC_IMPL(__imp__sub_82241D88) {
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
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
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

__attribute__((alias("__imp__sub_82241DB4"))) PPC_WEAK_FUNC(sub_82241DB4);
PPC_FUNC_IMPL(__imp__sub_82241DB4) {
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
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// bl 0x82286230
	sub_82286230(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241DE0"))) PPC_WEAK_FUNC(sub_82241DE0);
PPC_FUNC_IMPL(__imp__sub_82241DE0) {
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
	// bl 0x822242b8
	sub_822242B8(ctx, base);
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

__attribute__((alias("__imp__sub_82241E10"))) PPC_WEAK_FUNC(sub_82241E10);
PPC_FUNC_IMPL(__imp__sub_82241E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241E18"))) PPC_WEAK_FUNC(sub_82241E18);
PPC_FUNC_IMPL(__imp__sub_82241E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82241de0
	sub_82241DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241E24"))) PPC_WEAK_FUNC(sub_82241E24);
PPC_FUNC_IMPL(__imp__sub_82241E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241E28"))) PPC_WEAK_FUNC(sub_82241E28);
PPC_FUNC_IMPL(__imp__sub_82241E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82243e78
	sub_82243E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241E34"))) PPC_WEAK_FUNC(sub_82241E34);
PPC_FUNC_IMPL(__imp__sub_82241E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241E38"))) PPC_WEAK_FUNC(sub_82241E38);
PPC_FUNC_IMPL(__imp__sub_82241E38) {
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
	// lwz r16,-7232(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7232);
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
	// lwz r11,14620(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82241ebc
	if (!cr0.eq) goto loc_82241EBC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14620, r11.u32);
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
	// bl 0x822242b8
	sub_822242B8(ctx, base);
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
	// stw r3,14616(r27)
	PPC_STORE_U32(r27.u32 + 14616, ctx.r3.u32);
	// b 0x82241ec0
	goto loc_82241EC0;
loc_82241EBC:
	// lwz r3,14616(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 14616);
loc_82241EC0:
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
	// beq 0x82241efc
	if (cr0.eq) goto loc_82241EFC;
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82241f78
	goto loc_82241F78;
loc_82241EFC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82241f5c
	if (!cr0.eq) goto loc_82241F5C;
	// addic. r11,r30,-196
	xer.ca = r30.u32 > 195;
	r11.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82241f20
	if (!cr0.eq) goto loc_82241F20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82241f30
	goto loc_82241F30;
loc_82241F20:
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
loc_82241F30:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
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
loc_82241F5C:
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82241F78:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82241E40"))) PPC_WEAK_FUNC(sub_82241E40);
PPC_FUNC_IMPL(__imp__sub_82241E40) {
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
	// lwz r11,14620(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82241ebc
	if (!cr0.eq) goto loc_82241EBC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14620, r11.u32);
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
	// bl 0x822242b8
	sub_822242B8(ctx, base);
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
	// stw r3,14616(r27)
	PPC_STORE_U32(r27.u32 + 14616, ctx.r3.u32);
	// b 0x82241ec0
	goto loc_82241EC0;
loc_82241EBC:
	// lwz r3,14616(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 14616);
loc_82241EC0:
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
	// beq 0x82241efc
	if (cr0.eq) goto loc_82241EFC;
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82241f78
	goto loc_82241F78;
loc_82241EFC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82241f5c
	if (!cr0.eq) goto loc_82241F5C;
	// addic. r11,r30,-196
	xer.ca = r30.u32 > 195;
	r11.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82241f20
	if (!cr0.eq) goto loc_82241F20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82241f30
	goto loc_82241F30;
loc_82241F20:
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
loc_82241F30:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
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
loc_82241F5C:
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82241F78:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82241F84"))) PPC_WEAK_FUNC(sub_82241F84);
PPC_FUNC_IMPL(__imp__sub_82241F84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14620
	r11.s64 = r11.s64 + 14620;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14620
	ctx.r10.s64 = ctx.r10.s64 + 14620;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241FAC"))) PPC_WEAK_FUNC(sub_82241FAC);
PPC_FUNC_IMPL(__imp__sub_82241FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241FB0"))) PPC_WEAK_FUNC(sub_82241FB0);
PPC_FUNC_IMPL(__imp__sub_82241FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82241e40
	sub_82241E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241FBC"))) PPC_WEAK_FUNC(sub_82241FBC);
PPC_FUNC_IMPL(__imp__sub_82241FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241FC0"))) PPC_WEAK_FUNC(sub_82241FC0);
PPC_FUNC_IMPL(__imp__sub_82241FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8223e660
	sub_8223E660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241FCC"))) PPC_WEAK_FUNC(sub_82241FCC);
PPC_FUNC_IMPL(__imp__sub_82241FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241FD0"))) PPC_WEAK_FUNC(sub_82241FD0);
PPC_FUNC_IMPL(__imp__sub_82241FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8223f9e0
	sub_8223F9E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241FDC"))) PPC_WEAK_FUNC(sub_82241FDC);
PPC_FUNC_IMPL(__imp__sub_82241FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241FE0"))) PPC_WEAK_FUNC(sub_82241FE0);
PPC_FUNC_IMPL(__imp__sub_82241FE0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x8223b200
	sub_8223B200(ctx, base);
	// b 0x8224204c
	goto loc_8224204C;
loc_82242010:
	// lwz r29,36(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82242044
	if (!cr6.eq) goto loc_82242044;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822413c0
	sub_822413C0(ctx, base);
loc_82242044:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223b280
	sub_8223B280(ctx, base);
loc_8224204C:
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82242010
	if (!cr6.eq) goto loc_82242010;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82242060"))) PPC_WEAK_FUNC(sub_82242060);
PPC_FUNC_IMPL(__imp__sub_82242060) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x8223b200
	sub_8223B200(ctx, base);
	// b 0x822420cc
	goto loc_822420CC;
loc_82242090:
	// lwz r29,36(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x822420c4
	if (!cr6.eq) goto loc_822420C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822413c0
	sub_822413C0(ctx, base);
loc_822420C4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223b280
	sub_8223B280(ctx, base);
loc_822420CC:
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82242090
	if (!cr6.eq) goto loc_82242090;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x8223b2d8
	sub_8223B2D8(ctx, base);
	// b 0x82242184
	goto loc_82242184;
loc_822420F8:
	// lwz r29,48(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82242128
	if (!cr6.eq) goto loc_82242128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822402b8
	sub_822402B8(ctx, base);
loc_82242128:
	// lwz r29,48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x82242168
	goto loc_82242168;
loc_82242130:
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r30,60(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82239570
	sub_82239570(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x82242164
	if (!cr6.eq) goto loc_82242164;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822403d8
	sub_822403D8(ctx, base);
loc_82242164:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_82242168:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82242130
	if (!cr0.eq) goto loc_82242130;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8223b358
	sub_8223B358(ctx, base);
loc_82242184:
	// lwz r30,140(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x822420f8
	if (!cr6.eq) goto loc_822420F8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82242198"))) PPC_WEAK_FUNC(sub_82242198);
PPC_FUNC_IMPL(__imp__sub_82242198) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82242060
	sub_82242060(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r11,r28,132
	r11.s64 = r28.s64 * 132;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82239d48
	sub_82239D48(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82240e78
	sub_82240E78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82242204"))) PPC_WEAK_FUNC(sub_82242204);
PPC_FUNC_IMPL(__imp__sub_82242204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242208"))) PPC_WEAK_FUNC(sub_82242208);
PPC_FUNC_IMPL(__imp__sub_82242208) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-7088(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -7088);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,14632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14632);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14628
	r29.s64 = ctx.r10.s64 + 14628;
	// bne 0x82242278
	if (!cr0.eq) goto loc_82242278;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14632(r30)
	PPC_STORE_U32(r30.u32 + 14632, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7152
	ctx.r4.s64 = r11.s64 + -7152;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14632);
loc_82242278:
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
	// beq 0x822422d4
	if (cr0.eq) goto loc_822422D4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-196
	ctx.r4.s64 = r27.s64 + -196;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82242198
	sub_82242198(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822422d0
	if (cr6.eq) goto loc_822422D0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822423e8
	if (cr0.eq) goto loc_822423E8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822422C8:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822423e8
	goto loc_822423E8;
loc_822422D0:
	// lwz r11,14632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14632);
loc_822422D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14624
	r29.s64 = ctx.r10.s64 + 14624;
	// bne 0x822422fc
	if (!cr0.eq) goto loc_822422FC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,14632(r30)
	PPC_STORE_U32(r30.u32 + 14632, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7168
	ctx.r4.s64 = r11.s64 + -7168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822422FC:
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
	// beq 0x82242350
	if (cr0.eq) goto loc_82242350;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-196
	ctx.r4.s64 = r27.s64 + -196;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82240e78
	sub_82240E78(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82242350
	if (cr6.eq) goto loc_82242350;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822423e8
	if (cr0.eq) goto loc_822423E8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822422c8
	goto loc_822422C8;
loc_82242350:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-176
	ctx.r4.s64 = r27.s64 + -176;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82242390
	if (cr6.eq) goto loc_82242390;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822423e8
	if (cr0.eq) goto loc_822423E8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822422c8
	goto loc_822422C8;
loc_82242390:
	// lwz r11,-192(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -192);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822423dc
	if (cr6.eq) goto loc_822423DC;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822423e8
	if (cr0.eq) goto loc_822423E8;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822422c8
	goto loc_822422C8;
loc_822423DC:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_822423E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82242210"))) PPC_WEAK_FUNC(sub_82242210);
PPC_FUNC_IMPL(__imp__sub_82242210) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r25,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r25.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,14632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14632);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14628
	r29.s64 = ctx.r10.s64 + 14628;
	// bne 0x82242278
	if (!cr0.eq) goto loc_82242278;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14632(r30)
	PPC_STORE_U32(r30.u32 + 14632, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7152
	ctx.r4.s64 = r11.s64 + -7152;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14632);
loc_82242278:
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
	// beq 0x822422d4
	if (cr0.eq) goto loc_822422D4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-196
	ctx.r4.s64 = r27.s64 + -196;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82242198
	sub_82242198(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822422d0
	if (cr6.eq) goto loc_822422D0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822423e8
	if (cr0.eq) goto loc_822423E8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_822422C8:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x822423e8
	goto loc_822423E8;
loc_822422D0:
	// lwz r11,14632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14632);
loc_822422D4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14624
	r29.s64 = ctx.r10.s64 + 14624;
	// bne 0x822422fc
	if (!cr0.eq) goto loc_822422FC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,14632(r30)
	PPC_STORE_U32(r30.u32 + 14632, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-7168
	ctx.r4.s64 = r11.s64 + -7168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822422FC:
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
	// beq 0x82242350
	if (cr0.eq) goto loc_82242350;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-196
	ctx.r4.s64 = r27.s64 + -196;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82240e78
	sub_82240E78(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82242350
	if (cr6.eq) goto loc_82242350;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822423e8
	if (cr0.eq) goto loc_822423E8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x822422c8
	goto loc_822422C8;
loc_82242350:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-176
	ctx.r4.s64 = r27.s64 + -176;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82242390
	if (cr6.eq) goto loc_82242390;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822423e8
	if (cr0.eq) goto loc_822423E8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x822422c8
	goto loc_822422C8;
loc_82242390:
	// lwz r11,-192(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -192);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x822423dc
	if (cr6.eq) goto loc_822423DC;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822423e8
	if (cr0.eq) goto loc_822423E8;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x822422c8
	goto loc_822422C8;
loc_822423DC:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_822423E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822423F4"))) PPC_WEAK_FUNC(sub_822423F4);
PPC_FUNC_IMPL(__imp__sub_822423F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14632
	r11.s64 = r11.s64 + 14632;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14632
	ctx.r10.s64 = ctx.r10.s64 + 14632;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224241C"))) PPC_WEAK_FUNC(sub_8224241C);
PPC_FUNC_IMPL(__imp__sub_8224241C) {
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

__attribute__((alias("__imp__sub_82242444"))) PPC_WEAK_FUNC(sub_82242444);
PPC_FUNC_IMPL(__imp__sub_82242444) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14632
	r11.s64 = r11.s64 + 14632;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14632
	ctx.r10.s64 = ctx.r10.s64 + 14632;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224246C"))) PPC_WEAK_FUNC(sub_8224246C);
PPC_FUNC_IMPL(__imp__sub_8224246C) {
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

__attribute__((alias("__imp__sub_82242494"))) PPC_WEAK_FUNC(sub_82242494);
PPC_FUNC_IMPL(__imp__sub_82242494) {
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

__attribute__((alias("__imp__sub_822424BC"))) PPC_WEAK_FUNC(sub_822424BC);
PPC_FUNC_IMPL(__imp__sub_822424BC) {
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

__attribute__((alias("__imp__sub_822424E4"))) PPC_WEAK_FUNC(sub_822424E4);
PPC_FUNC_IMPL(__imp__sub_822424E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822424E8"))) PPC_WEAK_FUNC(sub_822424E8);
PPC_FUNC_IMPL(__imp__sub_822424E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,132
	r11.s64 = 132;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw. r30,r10,r11
	r30.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82242530
	if (!cr0.gt) goto loc_82242530;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_82242518:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82240be8
	sub_82240BE8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,132
	r31.s64 = r31.s64 + 132;
	// bgt 0x82242518
	if (cr0.gt) goto loc_82242518;
loc_82242530:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82240a98
	sub_82240A98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8224254C"))) PPC_WEAK_FUNC(sub_8224254C);
PPC_FUNC_IMPL(__imp__sub_8224254C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242550"))) PPC_WEAK_FUNC(sub_82242550);
PPC_FUNC_IMPL(__imp__sub_82242550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82242210
	sub_82242210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224255C"))) PPC_WEAK_FUNC(sub_8224255C);
PPC_FUNC_IMPL(__imp__sub_8224255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242560"))) PPC_WEAK_FUNC(sub_82242560);
PPC_FUNC_IMPL(__imp__sub_82242560) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5dc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f26,f2
	f26.f64 = ctx.f2.f64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
	// stfs f30,8(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fcmpu cr6,f30,f28
	cr6.compare(f30.f64, f28.f64);
	// bne cr6,0x822425b0
	if (!cr6.eq) goto loc_822425B0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,15600
	r11.s64 = r11.s64 + 15600;
	// lbz r11,13(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822425b0
	if (cr0.eq) goto loc_822425B0;
	// bl 0x82241fe0
	sub_82241FE0(ctx, base);
loc_822425B0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822427fc
	if (!cr0.eq) goto loc_822427FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lbz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f27,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f27.f64 = double(temp.f32);
	// fmr f29,f27
	f29.f64 = f27.f64;
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq 0x82242748
	if (cr0.eq) goto loc_82242748;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r11,14552
	r30.s64 = r11.s64 + 14552;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// mulli r9,r9,132
	ctx.r9.s64 = ctx.r9.s64 * 132;
	// add r28,r9,r8
	r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne 0x82242648
	if (!cr0.eq) goto loc_82242648;
loc_82242618:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,164(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82242648
	if (cr6.gt) goto loc_82242648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223a410
	sub_8223A410(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82242618
	if (cr0.eq) goto loc_82242618;
loc_82242648:
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822426e4
	if (!cr0.eq) goto loc_822426E4;
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,124(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// addi r29,r11,-5056
	r29.s64 = r11.s64 + -5056;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f25,f31,f0
	f25.f64 = double(float(f31.f64 - f0.f64));
	// bl 0x82311988
	sub_82311988(ctx, base);
	// fcmpu cr6,f25,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f25.f64, ctx.f1.f64);
	// bgt cr6,0x822426e4
	if (cr6.gt) goto loc_822426E4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822398e0
	sub_822398E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// ble cr6,0x822426c8
	if (!cr6.gt) goto loc_822426C8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,6376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6376);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// b 0x822426cc
	goto loc_822426CC;
loc_822426C8:
	// stfs f28,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
loc_822426CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8223a410
	sub_8223A410(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r11,r11,132
	r11.s64 = r11.s64 * 132;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_822426E4:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82242788
	if (cr6.eq) goto loc_82242788;
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	f0.f64 = double(temp.f32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// fsubs f0,f30,f0
	f0.f64 = double(float(f30.f64 - f0.f64));
	// lfs f13,180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// mulli r11,r11,132
	r11.s64 = r11.s64 * 132;
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bgt cr6,0x82242724
	if (cr6.gt) goto loc_82242724;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82242724:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bgt cr6,0x82242740
	if (cr6.gt) goto loc_82242740;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82242740:
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// b 0x82242788
	goto loc_82242788;
loc_82242748:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822399a8
	sub_822399A8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// beq cr6,0x82242788
	if (cr6.eq) goto loc_82242788;
	// mulli r10,r9,132
	ctx.r10.s64 = ctx.r9.s64 * 132;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
loc_82242788:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x822427a4
	if (!cr6.eq) goto loc_822427A4;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x822427a8
	if (cr6.eq) goto loc_822427A8;
loc_822427A4:
	// li r11,0
	r11.s64 = 0;
loc_822427A8:
	// clrlwi. r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x822427e0
	if (!cr0.eq) goto loc_822427E0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82240e20
	sub_82240E20(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x822427d8
	if (cr6.eq) goto loc_822427D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fsubs f1,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f27.f64 - f29.f64));
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8223d350
	sub_8223D350(ctx, base);
loc_822427D8:
	// stfs f29,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r28,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r28.u32);
loc_822427E0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822427f0
	if (cr6.eq) goto loc_822427F0;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822427fc
	if (!cr0.eq) goto loc_822427FC;
loc_822427F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// bl 0x82239bb8
	sub_82239BB8(ctx, base);
loc_822427FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d628
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8224280C"))) PPC_WEAK_FUNC(sub_8224280C);
PPC_FUNC_IMPL(__imp__sub_8224280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242810"))) PPC_WEAK_FUNC(sub_82242810);
PPC_FUNC_IMPL(__imp__sub_82242810) {
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
	// beq cr6,0x82242864
	if (cr6.eq) goto loc_82242864;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,132
	ctx.r8.s64 = 132;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82242850
	if (cr6.lt) goto loc_82242850;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82241970
	sub_82241970(ctx, base);
	// b 0x82242864
	goto loc_82242864;
loc_82242850:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x82241800
	sub_82241800(ctx, base);
loc_82242864:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82242874"))) PPC_WEAK_FUNC(sub_82242874);
PPC_FUNC_IMPL(__imp__sub_82242874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242878"))) PPC_WEAK_FUNC(sub_82242878);
PPC_FUNC_IMPL(__imp__sub_82242878) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82242560
	sub_82242560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242880"))) PPC_WEAK_FUNC(sub_82242880);
PPC_FUNC_IMPL(__imp__sub_82242880) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-6928(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -6928);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x82242900
	if (!cr6.eq) goto loc_82242900;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,132
	ctx.r9.s64 = 132;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
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
	// beq 0x822428f8
	if (cr0.eq) goto loc_822428F8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822428F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822429d4
	goto loc_822429D4;
loc_82242900:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mulli r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 * 132;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x822429bc
	if (cr6.lt) goto loc_822429BC;
	// andi. r11,r25,19
	r11.u64 = r25.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822429bc
	if (!cr0.eq) goto loc_822429BC;
	// cmpwi cr6,r25,8
	cr6.compare<int32_t>(r25.s32, 8, xer);
	// bne cr6,0x82242958
	if (!cr6.eq) goto loc_82242958;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82241788
	sub_82241788(ctx, base);
	// b 0x822428f8
	goto loc_822428F8;
loc_82242958:
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// bne cr6,0x822429b4
	if (!cr6.eq) goto loc_822429B4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x82240ee8
	sub_82240EE8(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82239fa0
	sub_82239FA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822429ac
	if (cr0.eq) goto loc_822429AC;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82242810
	sub_82242810(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// b 0x822428f8
	goto loc_822428F8;
loc_822429AC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
loc_822429B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822429d4
	goto loc_822429D4;
loc_822429BC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82239fa0
	sub_82239FA0(ctx, base);
loc_822429D4:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82242888"))) PPC_WEAK_FUNC(sub_82242888);
PPC_FUNC_IMPL(__imp__sub_82242888) {
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
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x82242900
	if (!cr6.eq) goto loc_82242900;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,132
	ctx.r9.s64 = 132;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
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
	// beq 0x822428f8
	if (cr0.eq) goto loc_822428F8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822428F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822429d4
	goto loc_822429D4;
loc_82242900:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mulli r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 * 132;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x822429bc
	if (cr6.lt) goto loc_822429BC;
	// andi. r11,r25,19
	r11.u64 = r25.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822429bc
	if (!cr0.eq) goto loc_822429BC;
	// cmpwi cr6,r25,8
	cr6.compare<int32_t>(r25.s32, 8, xer);
	// bne cr6,0x82242958
	if (!cr6.eq) goto loc_82242958;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82241788
	sub_82241788(ctx, base);
	// b 0x822428f8
	goto loc_822428F8;
loc_82242958:
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// bne cr6,0x822429b4
	if (!cr6.eq) goto loc_822429B4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x82240ee8
	sub_82240EE8(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82239fa0
	sub_82239FA0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822429ac
	if (cr0.eq) goto loc_822429AC;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82242810
	sub_82242810(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// b 0x822428f8
	goto loc_822428F8;
loc_822429AC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
loc_822429B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822429d4
	goto loc_822429D4;
loc_822429BC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82239fa0
	sub_82239FA0(ctx, base);
loc_822429D4:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_822429DC"))) PPC_WEAK_FUNC(sub_822429DC);
PPC_FUNC_IMPL(__imp__sub_822429DC) {
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

__attribute__((alias("__imp__sub_82242A04"))) PPC_WEAK_FUNC(sub_82242A04);
PPC_FUNC_IMPL(__imp__sub_82242A04) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82242A2C"))) PPC_WEAK_FUNC(sub_82242A2C);
PPC_FUNC_IMPL(__imp__sub_82242A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242A30"))) PPC_WEAK_FUNC(sub_82242A30);
PPC_FUNC_IMPL(__imp__sub_82242A30) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82242a5c
	if (cr6.eq) goto loc_82242A5C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x822424e8
	sub_822424E8(ctx, base);
loc_82242A5C:
	// addi r31,r28,32
	r31.s64 = r28.s64 + 32;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82242ad8
	if (cr0.eq) goto loc_82242AD8;
	// li r29,0
	r29.s64 = 0;
loc_82242A7C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82242a8c
	if (!cr6.eq) goto loc_82242A8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82242a9c
	goto loc_82242A9C;
loc_82242A8C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82242A9C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82242a7c
	if (!cr6.eq) goto loc_82242A7C;
loc_82242AD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82230a48
	sub_82230A48(ctx, base);
	// addi r31,r28,44
	r31.s64 = r28.s64 + 44;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82242b54
	if (cr0.eq) goto loc_82242B54;
	// li r29,0
	r29.s64 = 0;
loc_82242B08:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82242b18
	if (!cr6.eq) goto loc_82242B18;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82242b28
	goto loc_82242B28;
loc_82242B18:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82242B28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82316378
	sub_82316378(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82242b08
	if (!cr6.eq) goto loc_82242B08;
loc_82242B54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8223d760
	sub_8223D760(ctx, base);
	// addi r31,r28,56
	r31.s64 = r28.s64 + 56;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82242be0
	if (cr0.eq) goto loc_82242BE0;
	// li r29,0
	r29.s64 = 0;
loc_82242B84:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82242b94
	if (!cr6.eq) goto loc_82242B94;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82242ba4
	goto loc_82242BA4;
loc_82242B94:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82242BA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82316378
	sub_82316378(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82242b84
	if (!cr6.eq) goto loc_82242B84;
loc_82242BE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8223d7b8
	sub_8223D7B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82242BF8"))) PPC_WEAK_FUNC(sub_82242BF8);
PPC_FUNC_IMPL(__imp__sub_82242BF8) {
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
	// lwz r16,-6688(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -6688);
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14672
	r29.s64 = ctx.r10.s64 + 14672;
	// bne 0x82242c64
	if (!cr0.eq) goto loc_82242C64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-17168
	ctx.r4.s64 = r11.s64 + -17168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242C64:
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
	// beq 0x82242cc0
	if (cr0.eq) goto loc_82242CC0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-180
	ctx.r3.s64 = r27.s64 + -180;
	// bl 0x82242888
	sub_82242888(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82242cb8
	if (cr0.eq) goto loc_82242CB8;
	// andi. r11,r26,17
	r11.u64 = r26.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82242cb0
	if (!cr0.eq) goto loc_82242CB0;
	// addi r3,r27,-196
	ctx.r3.s64 = r27.s64 + -196;
	// bl 0x8223e9f0
	sub_8223E9F0(ctx, base);
loc_82242CB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224305c
	goto loc_8224305C;
loc_82242CB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224305c
	goto loc_8224305C;
loc_82242CC0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14668
	r29.s64 = ctx.r10.s64 + 14668;
	// bne 0x82242cec
	if (!cr0.eq) goto loc_82242CEC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-17176
	ctx.r4.s64 = r11.s64 + -17176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242CEC:
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
	// beq 0x82242d20
	if (cr0.eq) goto loc_82242D20;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-128
	ctx.r3.s64 = r27.s64 + -128;
loc_82242D18:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242D20:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14664
	r29.s64 = ctx.r10.s64 + 14664;
	// bne 0x82242d4c
	if (!cr0.eq) goto loc_82242D4C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2996
	ctx.r4.s64 = r11.s64 + 2996;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242D4C:
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
	// beq 0x82242d80
	if (cr0.eq) goto loc_82242D80;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-124
	ctx.r3.s64 = r27.s64 + -124;
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242D80:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14660
	r29.s64 = ctx.r10.s64 + 14660;
	// bne 0x82242dac
	if (!cr0.eq) goto loc_82242DAC;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6784
	ctx.r4.s64 = r11.s64 + -6784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242DAC:
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
	// beq 0x82242de0
	if (cr0.eq) goto loc_82242DE0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-120
	ctx.r3.s64 = r27.s64 + -120;
	// bl 0x82240750
	sub_82240750(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242DE0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14656
	r29.s64 = ctx.r10.s64 + 14656;
	// bne 0x82242e0c
	if (!cr0.eq) goto loc_82242E0C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6792
	ctx.r4.s64 = r11.s64 + -6792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242E0C:
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
	// beq 0x82242e40
	if (cr0.eq) goto loc_82242E40;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-100
	ctx.r3.s64 = r27.s64 + -100;
	// bl 0x8223a7b8
	sub_8223A7B8(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242E40:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14652
	r29.s64 = ctx.r10.s64 + 14652;
	// bne 0x82242e6c
	if (!cr0.eq) goto loc_82242E6C;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6800
	ctx.r4.s64 = r11.s64 + -6800;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242E6C:
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
	// beq 0x82242ea0
	if (cr0.eq) goto loc_82242EA0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-88
	ctx.r3.s64 = r27.s64 + -88;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242EA0:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14648
	r29.s64 = ctx.r10.s64 + 14648;
	// bne 0x82242ecc
	if (!cr0.eq) goto loc_82242ECC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6816
	ctx.r4.s64 = r11.s64 + -6816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242ECC:
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
	// beq 0x82242f00
	if (cr0.eq) goto loc_82242F00;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-108
	ctx.r3.s64 = r27.s64 + -108;
loc_82242EF8:
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242F00:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14644
	r29.s64 = ctx.r10.s64 + 14644;
	// bne 0x82242f2c
	if (!cr0.eq) goto loc_82242F2C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6832
	ctx.r4.s64 = r11.s64 + -6832;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242F2C:
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
	// beq 0x82242f5c
	if (cr0.eq) goto loc_82242F5C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-104
	ctx.r3.s64 = r27.s64 + -104;
	// b 0x82242ef8
	goto loc_82242EF8;
loc_82242F5C:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14640
	r29.s64 = ctx.r10.s64 + 14640;
	// bne 0x82242f88
	if (!cr0.eq) goto loc_82242F88;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6840
	ctx.r4.s64 = r11.s64 + -6840;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242F88:
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
	// beq 0x82242fb8
	if (cr0.eq) goto loc_82242FB8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-84
	ctx.r3.s64 = r27.s64 + -84;
	// b 0x82242d18
	goto loc_82242D18;
loc_82242FB8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14636
	r29.s64 = ctx.r10.s64 + 14636;
	// bne 0x82242fe0
	if (!cr0.eq) goto loc_82242FE0;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6848
	ctx.r4.s64 = r11.s64 + -6848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82242FE0:
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
	// beq 0x82243010
	if (cr0.eq) goto loc_82243010;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-8
	ctx.r3.s64 = r27.s64 + -8;
	// b 0x82242d18
	goto loc_82242D18;
loc_82243010:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r27,-176
	ctx.r3.s64 = r27.s64 + -176;
	// bl 0x821e7cf0
	sub_821E7CF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82242cb0
	if (!cr0.eq) goto loc_82242CB0;
	// lwz r11,-192(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -192);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bl 0x823150b8
	sub_823150B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8224305C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82242C00"))) PPC_WEAK_FUNC(sub_82242C00);
PPC_FUNC_IMPL(__imp__sub_82242C00) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14672
	r29.s64 = ctx.r10.s64 + 14672;
	// bne 0x82242c64
	if (!cr0.eq) goto loc_82242C64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-17168
	ctx.r4.s64 = r11.s64 + -17168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242C64:
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
	// beq 0x82242cc0
	if (cr0.eq) goto loc_82242CC0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-180
	ctx.r3.s64 = r27.s64 + -180;
	// bl 0x82242888
	sub_82242888(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82242cb8
	if (cr0.eq) goto loc_82242CB8;
	// andi. r11,r26,17
	r11.u64 = r26.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82242cb0
	if (!cr0.eq) goto loc_82242CB0;
	// addi r3,r27,-196
	ctx.r3.s64 = r27.s64 + -196;
	// bl 0x8223e9f0
	sub_8223E9F0(ctx, base);
loc_82242CB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224305c
	goto loc_8224305C;
loc_82242CB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224305c
	goto loc_8224305C;
loc_82242CC0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14668
	r29.s64 = ctx.r10.s64 + 14668;
	// bne 0x82242cec
	if (!cr0.eq) goto loc_82242CEC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-17176
	ctx.r4.s64 = r11.s64 + -17176;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242CEC:
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
	// beq 0x82242d20
	if (cr0.eq) goto loc_82242D20;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-128
	ctx.r3.s64 = r27.s64 + -128;
loc_82242D18:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242D20:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14664
	r29.s64 = ctx.r10.s64 + 14664;
	// bne 0x82242d4c
	if (!cr0.eq) goto loc_82242D4C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2996
	ctx.r4.s64 = r11.s64 + 2996;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242D4C:
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
	// beq 0x82242d80
	if (cr0.eq) goto loc_82242D80;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-124
	ctx.r3.s64 = r27.s64 + -124;
	// bl 0x8215d8f8
	sub_8215D8F8(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242D80:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14660
	r29.s64 = ctx.r10.s64 + 14660;
	// bne 0x82242dac
	if (!cr0.eq) goto loc_82242DAC;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6784
	ctx.r4.s64 = r11.s64 + -6784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242DAC:
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
	// beq 0x82242de0
	if (cr0.eq) goto loc_82242DE0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-120
	ctx.r3.s64 = r27.s64 + -120;
	// bl 0x82240750
	sub_82240750(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242DE0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14656
	r29.s64 = ctx.r10.s64 + 14656;
	// bne 0x82242e0c
	if (!cr0.eq) goto loc_82242E0C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6792
	ctx.r4.s64 = r11.s64 + -6792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242E0C:
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
	// beq 0x82242e40
	if (cr0.eq) goto loc_82242E40;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-100
	ctx.r3.s64 = r27.s64 + -100;
	// bl 0x8223a7b8
	sub_8223A7B8(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242E40:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14652
	r29.s64 = ctx.r10.s64 + 14652;
	// bne 0x82242e6c
	if (!cr0.eq) goto loc_82242E6C;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6800
	ctx.r4.s64 = r11.s64 + -6800;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242E6C:
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
	// beq 0x82242ea0
	if (cr0.eq) goto loc_82242EA0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-88
	ctx.r3.s64 = r27.s64 + -88;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242EA0:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14648
	r29.s64 = ctx.r10.s64 + 14648;
	// bne 0x82242ecc
	if (!cr0.eq) goto loc_82242ECC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6816
	ctx.r4.s64 = r11.s64 + -6816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242ECC:
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
	// beq 0x82242f00
	if (cr0.eq) goto loc_82242F00;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-108
	ctx.r3.s64 = r27.s64 + -108;
loc_82242EF8:
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x8224305c
	goto loc_8224305C;
loc_82242F00:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14644
	r29.s64 = ctx.r10.s64 + 14644;
	// bne 0x82242f2c
	if (!cr0.eq) goto loc_82242F2C;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6832
	ctx.r4.s64 = r11.s64 + -6832;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242F2C:
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
	// beq 0x82242f5c
	if (cr0.eq) goto loc_82242F5C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-104
	ctx.r3.s64 = r27.s64 + -104;
	// b 0x82242ef8
	goto loc_82242EF8;
loc_82242F5C:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14640
	r29.s64 = ctx.r10.s64 + 14640;
	// bne 0x82242f88
	if (!cr0.eq) goto loc_82242F88;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6840
	ctx.r4.s64 = r11.s64 + -6840;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14676(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14676);
loc_82242F88:
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
	// beq 0x82242fb8
	if (cr0.eq) goto loc_82242FB8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-84
	ctx.r3.s64 = r27.s64 + -84;
	// b 0x82242d18
	goto loc_82242D18;
loc_82242FB8:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14636
	r29.s64 = ctx.r10.s64 + 14636;
	// bne 0x82242fe0
	if (!cr0.eq) goto loc_82242FE0;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,14676(r30)
	PPC_STORE_U32(r30.u32 + 14676, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-6848
	ctx.r4.s64 = r11.s64 + -6848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82242FE0:
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
	// beq 0x82243010
	if (cr0.eq) goto loc_82243010;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,-8
	ctx.r3.s64 = r27.s64 + -8;
	// b 0x82242d18
	goto loc_82242D18;
loc_82243010:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r27,-176
	ctx.r3.s64 = r27.s64 + -176;
	// bl 0x821e7cf0
	sub_821E7CF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82242cb0
	if (!cr0.eq) goto loc_82242CB0;
	// lwz r11,-192(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -192);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bl 0x823150b8
	sub_823150B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_8224305C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82243064"))) PPC_WEAK_FUNC(sub_82243064);
PPC_FUNC_IMPL(__imp__sub_82243064) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224308C"))) PPC_WEAK_FUNC(sub_8224308C);
PPC_FUNC_IMPL(__imp__sub_8224308C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822430B4"))) PPC_WEAK_FUNC(sub_822430B4);
PPC_FUNC_IMPL(__imp__sub_822430B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822430DC"))) PPC_WEAK_FUNC(sub_822430DC);
PPC_FUNC_IMPL(__imp__sub_822430DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82243104"))) PPC_WEAK_FUNC(sub_82243104);
PPC_FUNC_IMPL(__imp__sub_82243104) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224312C"))) PPC_WEAK_FUNC(sub_8224312C);
PPC_FUNC_IMPL(__imp__sub_8224312C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82243154"))) PPC_WEAK_FUNC(sub_82243154);
PPC_FUNC_IMPL(__imp__sub_82243154) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224317C"))) PPC_WEAK_FUNC(sub_8224317C);
PPC_FUNC_IMPL(__imp__sub_8224317C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822431A4"))) PPC_WEAK_FUNC(sub_822431A4);
PPC_FUNC_IMPL(__imp__sub_822431A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822431CC"))) PPC_WEAK_FUNC(sub_822431CC);
PPC_FUNC_IMPL(__imp__sub_822431CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14676
	r11.s64 = r11.s64 + 14676;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14676
	ctx.r10.s64 = ctx.r10.s64 + 14676;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822431F4"))) PPC_WEAK_FUNC(sub_822431F4);
PPC_FUNC_IMPL(__imp__sub_822431F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822431F8"))) PPC_WEAK_FUNC(sub_822431F8);
PPC_FUNC_IMPL(__imp__sub_822431F8) {
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
	// li r8,132
	ctx.r8.s64 = 132;
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
	// bge cr6,0x82243248
	if (!cr6.lt) goto loc_82243248;
	// mulli r11,r11,132
	r11.s64 = r11.s64 * 132;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8224325c
	if (cr6.eq) goto loc_8224325C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x822424e8
	sub_822424E8(ctx, base);
	// b 0x8224325c
	goto loc_8224325C;
loc_82243248:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x82242810
	sub_82242810(ctx, base);
loc_8224325C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224326C"))) PPC_WEAK_FUNC(sub_8224326C);
PPC_FUNC_IMPL(__imp__sub_8224326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243270"))) PPC_WEAK_FUNC(sub_82243270);
PPC_FUNC_IMPL(__imp__sub_82243270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82242c00
	sub_82242C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224327C"))) PPC_WEAK_FUNC(sub_8224327C);
PPC_FUNC_IMPL(__imp__sub_8224327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243280"))) PPC_WEAK_FUNC(sub_82243280);
PPC_FUNC_IMPL(__imp__sub_82243280) {
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
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-6408(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -6408);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,-196
	ctx.r3.s64 = r30.s64 + -196;
	// addi r11,r11,-7396
	r11.s64 = r11.s64 + -7396;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,-192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// addi r10,r10,-7460
	ctx.r10.s64 = ctx.r10.s64 + -7460;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-192(r11)
	PPC_STORE_U32(r11.u32 + -192, ctx.r10.u32);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-192
	ctx.r10.s64 = r11.s64 + -192;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-196(r11)
	PPC_STORE_U32(r11.u32 + -196, ctx.r10.u32);
	// bl 0x82242a30
	sub_82242A30(ctx, base);
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// bl 0x821a3dd0
	sub_821A3DD0(ctx, base);
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// bl 0x821d0228
	sub_821D0228(ctx, base);
	// addi r3,r30,-80
	ctx.r3.s64 = r30.s64 + -80;
	// bl 0x8223ed08
	sub_8223ED08(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = r30.s64 + -100;
	// bl 0x82239038
	sub_82239038(ctx, base);
	// lwz r4,-120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// lwz r11,-116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -116);
	// b 0x82243318
	goto loc_82243318;
loc_82243314:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82243318:
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
	// bne 0x82243314
	if (!cr0.eq) goto loc_82243314;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8224334c
	if (cr6.eq) goto loc_8224334C;
	// lwz r11,-112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -112);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8224334C:
	// lwz r4,-140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -140);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8224336c
	if (cr0.eq) goto loc_8224336C;
	// lwz r11,-132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -132);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8224336C:
	// lwz r4,-152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8224338c
	if (cr0.eq) goto loc_8224338C;
	// lwz r11,-144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -144);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8224338C:
	// lwz r4,-164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -164);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822433ac
	if (cr0.eq) goto loc_822433AC;
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822433AC:
	// addi r3,r30,-180
	ctx.r3.s64 = r30.s64 + -180;
	// bl 0x82241270
	sub_82241270(ctx, base);
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

__attribute__((alias("__imp__sub_82243288"))) PPC_WEAK_FUNC(sub_82243288);
PPC_FUNC_IMPL(__imp__sub_82243288) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r30,-196
	ctx.r3.s64 = r30.s64 + -196;
	// addi r11,r11,-7396
	r11.s64 = r11.s64 + -7396;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,-192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// addi r10,r10,-7460
	ctx.r10.s64 = ctx.r10.s64 + -7460;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-192(r11)
	PPC_STORE_U32(r11.u32 + -192, ctx.r10.u32);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-192
	ctx.r10.s64 = r11.s64 + -192;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-196(r11)
	PPC_STORE_U32(r11.u32 + -196, ctx.r10.u32);
	// bl 0x82242a30
	sub_82242A30(ctx, base);
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// bl 0x821a3dd0
	sub_821A3DD0(ctx, base);
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// bl 0x821d0228
	sub_821D0228(ctx, base);
	// addi r3,r30,-80
	ctx.r3.s64 = r30.s64 + -80;
	// bl 0x8223ed08
	sub_8223ED08(ctx, base);
	// addi r3,r30,-100
	ctx.r3.s64 = r30.s64 + -100;
	// bl 0x82239038
	sub_82239038(ctx, base);
	// lwz r4,-120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -120);
	// lwz r11,-116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -116);
	// b 0x82243318
	goto loc_82243318;
loc_82243314:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82243318:
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
	// bne 0x82243314
	if (!cr0.eq) goto loc_82243314;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8224334c
	if (cr6.eq) goto loc_8224334C;
	// lwz r11,-112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -112);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8224334C:
	// lwz r4,-140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -140);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8224336c
	if (cr0.eq) goto loc_8224336C;
	// lwz r11,-132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -132);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8224336C:
	// lwz r4,-152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -152);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8224338c
	if (cr0.eq) goto loc_8224338C;
	// lwz r11,-144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -144);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8224338C:
	// lwz r4,-164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -164);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x822433ac
	if (cr0.eq) goto loc_822433AC;
	// lwz r11,-156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -156);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_822433AC:
	// addi r3,r30,-180
	ctx.r3.s64 = r30.s64 + -180;
	// bl 0x82241270
	sub_82241270(ctx, base);
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

__attribute__((alias("__imp__sub_822433CC"))) PPC_WEAK_FUNC(sub_822433CC);
PPC_FUNC_IMPL(__imp__sub_822433CC) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x822413b0
	sub_822413B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822433FC"))) PPC_WEAK_FUNC(sub_822433FC);
PPC_FUNC_IMPL(__imp__sub_822433FC) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
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

__attribute__((alias("__imp__sub_8224342C"))) PPC_WEAK_FUNC(sub_8224342C);
PPC_FUNC_IMPL(__imp__sub_8224342C) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
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

__attribute__((alias("__imp__sub_8224345C"))) PPC_WEAK_FUNC(sub_8224345C);
PPC_FUNC_IMPL(__imp__sub_8224345C) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
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

__attribute__((alias("__imp__sub_8224348C"))) PPC_WEAK_FUNC(sub_8224348C);
PPC_FUNC_IMPL(__imp__sub_8224348C) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// bl 0x82286230
	sub_82286230(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822434BC"))) PPC_WEAK_FUNC(sub_822434BC);
PPC_FUNC_IMPL(__imp__sub_822434BC) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
	// bl 0x82239858
	sub_82239858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822434EC"))) PPC_WEAK_FUNC(sub_822434EC);
PPC_FUNC_IMPL(__imp__sub_822434EC) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,116
	ctx.r3.s64 = r11.s64 + 116;
	// bl 0x8223f810
	sub_8223F810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224351C"))) PPC_WEAK_FUNC(sub_8224351C);
PPC_FUNC_IMPL(__imp__sub_8224351C) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
	// bl 0x821d0228
	sub_821D0228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224354C"))) PPC_WEAK_FUNC(sub_8224354C);
PPC_FUNC_IMPL(__imp__sub_8224354C) {
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
	// addi r11,r11,-196
	r11.s64 = r11.s64 + -196;
	// addi r3,r11,144
	ctx.r3.s64 = r11.s64 + 144;
	// bl 0x821a3dd0
	sub_821A3DD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224357C"))) PPC_WEAK_FUNC(sub_8224357C);
PPC_FUNC_IMPL(__imp__sub_8224357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243580"))) PPC_WEAK_FUNC(sub_82243580);
PPC_FUNC_IMPL(__imp__sub_82243580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-6264(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -6264);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82240ee8
	sub_82240EE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822431f8
	sub_822431F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82243588"))) PPC_WEAK_FUNC(sub_82243588);
PPC_FUNC_IMPL(__imp__sub_82243588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82240ee8
	sub_82240EE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822431f8
	sub_822431F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822435CC"))) PPC_WEAK_FUNC(sub_822435CC);
PPC_FUNC_IMPL(__imp__sub_822435CC) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822435F4"))) PPC_WEAK_FUNC(sub_822435F4);
PPC_FUNC_IMPL(__imp__sub_822435F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822435F8"))) PPC_WEAK_FUNC(sub_822435F8);
PPC_FUNC_IMPL(__imp__sub_822435F8) {
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82243588
	sub_82243588(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8224363c
	goto loc_8224363C;
loc_8224362C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82241170
	sub_82241170(ctx, base);
	// addi r31,r31,132
	r31.s64 = r31.s64 + 132;
loc_8224363C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8224362c
	if (!cr6.eq) goto loc_8224362C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82243654"))) PPC_WEAK_FUNC(sub_82243654);
PPC_FUNC_IMPL(__imp__sub_82243654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243658"))) PPC_WEAK_FUNC(sub_82243658);
PPC_FUNC_IMPL(__imp__sub_82243658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r2{};
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
	// lwz r16,-6176(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -6176);
	// mflr r12
	// bl 0x8239bcd8
	// addi r31,r1,-592
	r31.s64 = ctx.r1.s64 + -592;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r21,r11,14544
	r21.s64 = r11.s64 + 14544;
	// li r11,1
	r11.s64 = 1;
	// addi r20,r30,-196
	r20.s64 = r30.s64 + -196;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stb r11,4(r21)
	PPC_STORE_U8(r21.u32 + 4, r11.u8);
	// bl 0x82242a30
	sub_82242A30(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,15892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15892);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x822436c0
	if (!cr6.gt) goto loc_822436C0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82243d80
	goto loc_82243D80;
loc_822436C0:
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,-176
	ctx.r3.s64 = r30.s64 + -176;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
	// addi r4,r30,-180
	ctx.r4.s64 = r30.s64 + -180;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822435f8
	sub_822435F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r23,r30,-164
	r23.s64 = r30.s64 + -164;
	// li r22,0
	r22.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r5,4(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// stw r22,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r22.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8224373c
	if (!cr6.lt) goto loc_8224373C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82230a48
	sub_82230A48(ctx, base);
	// b 0x82243754
	goto loc_82243754;
loc_8224373C:
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82230aa0
	sub_82230AA0(ctx, base);
loc_82243754:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8224380c
	if (cr0.eq) goto loc_8224380C;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82243770:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,0(r23)
	r27.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -164);
	// bl 0x8223a590
	sub_8223A590(ctx, base);
	// stwx r3,r29,r27
	PPC_STORE_U32(r29.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822437ec
	if (cr6.eq) goto loc_822437EC;
	// addic. r10,r30,-196
	xer.ca = r30.u32 > 195;
	ctx.r10.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822437c4
	if (!cr0.eq) goto loc_822437C4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x822437d4
	goto loc_822437D4;
loc_822437C4:
	// lwz r10,-192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r10,-192
	ctx.r4.s64 = ctx.r10.s64 + -192;
loc_822437D4:
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_822437EC:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82243770
	if (!cr6.eq) goto loc_82243770;
loc_8224380C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r24,r30,-152
	r24.s64 = r30.s64 + -152;
	// stw r22,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r22.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82243854
	if (!cr6.lt) goto loc_82243854;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8223d760
	sub_8223D760(ctx, base);
	// b 0x8224386c
	goto loc_8224386C;
loc_82243854:
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x8223da10
	sub_8223DA10(ctx, base);
loc_8224386C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243914
	if (cr0.eq) goto loc_82243914;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82243888:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,0(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -164);
	// bl 0x821b8868
	sub_821B8868(ctx, base);
	// stwx r3,r29,r27
	PPC_STORE_U32(r29.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822438f4
	if (cr6.eq) goto loc_822438F4;
	// addic. r10,r30,-196
	xer.ca = r30.u32 > 195;
	ctx.r10.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822438dc
	if (!cr0.eq) goto loc_822438DC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x822438ec
	goto loc_822438EC;
loc_822438DC:
	// lwz r10,-192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r10,-192
	ctx.r4.s64 = ctx.r10.s64 + -192;
loc_822438EC:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_822438F4:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82243888
	if (!cr6.eq) goto loc_82243888;
loc_82243914:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r26,r30,-140
	r26.s64 = r30.s64 + -140;
	// stw r22,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r22.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8224395c
	if (!cr6.lt) goto loc_8224395C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8223d7b8
	sub_8223D7B8(ctx, base);
	// b 0x82243974
	goto loc_82243974;
loc_8224395C:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x8223db70
	sub_8223DB70(ctx, base);
loc_82243974:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r25,r22
	r25.u64 = r22.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243a2c
	if (cr0.eq) goto loc_82243A2C;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82243990:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,0(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -164);
	// bl 0x8223a5e8
	sub_8223A5E8(ctx, base);
	// stwx r3,r29,r27
	PPC_STORE_U32(r29.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82243a0c
	if (cr6.eq) goto loc_82243A0C;
	// addic. r10,r30,-196
	xer.ca = r30.u32 > 195;
	ctx.r10.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822439e4
	if (!cr0.eq) goto loc_822439E4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x822439f4
	goto loc_822439F4;
loc_822439E4:
	// lwz r10,-192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r10,-192
	ctx.r4.s64 = ctx.r10.s64 + -192;
loc_822439F4:
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82243A0C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82243990
	if (!cr6.eq) goto loc_82243990;
loc_82243A2C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x82243a8c
	if (!cr6.lt) goto loc_82243A8C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82243a8c
	if (cr0.eq) goto loc_82243A8C;
	// addic. r11,r30,-196
	xer.ca = r30.u32 > 195;
	r11.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82243a60
	if (!cr0.eq) goto loc_82243A60;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x82243a70
	goto loc_82243A70;
loc_82243A60:
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
loc_82243A70:
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82240ee8
	sub_82240EE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82241170
	sub_82241170(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
loc_82243A8C:
	// addi r4,r30,-128
	ctx.r4.s64 = r30.s64 + -128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// addi r4,r30,-124
	ctx.r4.s64 = r30.s64 + -124;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359638
	sub_82359638(ctx, base);
	// addi r4,r30,-120
	ctx.r4.s64 = r30.s64 + -120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822409d0
	sub_822409D0(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x82243acc
	if (!cr6.gt) goto loc_82243ACC;
	// addi r4,r30,-100
	ctx.r4.s64 = r30.s64 + -100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8223a640
	sub_8223A640(ctx, base);
	// b 0x82243b10
	goto loc_82243B10;
loc_82243ACC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82243b08
	if (!cr0.eq) goto loc_82243B08;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82243B08:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82243B10:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x82243b38
	if (!cr6.lt) goto loc_82243B38;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82243B38:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-88
	ctx.r4.s64 = r30.s64 + -88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82243b68
	if (!cr6.gt) goto loc_82243B68;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-108
	ctx.r4.s64 = r30.s64 + -108;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
loc_82243B68:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82243b84
	if (!cr6.gt) goto loc_82243B84;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-104
	ctx.r4.s64 = r30.s64 + -104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x82243b8c
	goto loc_82243B8C;
loc_82243B84:
	// lwz r11,-108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -108);
	// stw r11,-104(r30)
	PPC_STORE_U32(r30.u32 + -104, r11.u32);
loc_82243B8C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82243bb0
	if (!cr6.gt) goto loc_82243BB0;
	// addi r4,r30,-84
	ctx.r4.s64 = r30.s64 + -84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = r30.s64 + -8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82243BB0:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r3,r30,-80
	ctx.r3.s64 = r30.s64 + -80;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822408b8
	sub_822408B8(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r5,r31,288
	ctx.r5.s64 = r31.s64 + 288;
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822404b0
	sub_822404B0(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r5,r31,288
	ctx.r5.s64 = r31.s64 + 288;
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x82240528
	sub_82240528(ctx, base);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r29,r22
	r29.u64 = r22.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243c70
	if (cr0.eq) goto loc_82243C70;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82243C1C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82243c3c
	if (cr6.eq) goto loc_82243C3C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r11,596(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 596);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82243c50
	if (!cr0.eq) goto loc_82243C50;
loc_82243C3C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8223e900
	sub_8223E900(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_82243C50:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82243c1c
	if (!cr6.eq) goto loc_82243C1C;
loc_82243C70:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243ce0
	if (cr0.eq) goto loc_82243CE0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82243C8C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82243cac
	if (cr6.eq) goto loc_82243CAC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r11,116(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82243cc0
	if (!cr0.eq) goto loc_82243CC0;
loc_82243CAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8223d180
	sub_8223D180(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_82243CC0:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82243c8c
	if (!cr6.eq) goto loc_82243C8C;
loc_82243CE0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243d6c
	if (cr0.eq) goto loc_82243D6C;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82243CFC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82243d38
	if (cr6.eq) goto loc_82243D38;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 204);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82243d2c
	if (!cr0.eq) goto loc_82243D2C;
	// lbz r11,205(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 205);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// beq 0x82243d30
	if (cr0.eq) goto loc_82243D30;
loc_82243D2C:
	// li r11,1
	r11.s64 = 1;
loc_82243D30:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82243d4c
	if (!cr0.eq) goto loc_82243D4C;
loc_82243D38:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8223d260
	sub_8223D260(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_82243D4C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82243cfc
	if (!cr6.eq) goto loc_82243CFC;
loc_82243D6C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82241fe0
	sub_82241FE0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8223e9f0
	sub_8223E9F0(ctx, base);
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82243D80:
	// stb r11,4(r21)
	PPC_STORE_U8(r21.u32 + 4, r11.u8);
	// addi r1,r31,592
	ctx.r1.s64 = r31.s64 + 592;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82243660"))) PPC_WEAK_FUNC(sub_82243660);
PPC_FUNC_IMPL(__imp__sub_82243660) {
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
	// addi r31,r1,-592
	r31.s64 = ctx.r1.s64 + -592;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r21,r11,14544
	r21.s64 = r11.s64 + 14544;
	// li r11,1
	r11.s64 = 1;
	// addi r20,r30,-196
	r20.s64 = r30.s64 + -196;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stb r11,4(r21)
	PPC_STORE_U8(r21.u32 + 4, r11.u8);
	// bl 0x82242a30
	sub_82242A30(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,15892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15892);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x822436c0
	if (!cr6.gt) goto loc_822436C0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82243d80
	goto loc_82243D80;
loc_822436C0:
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,-176
	ctx.r3.s64 = r30.s64 + -176;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
	// addi r4,r30,-180
	ctx.r4.s64 = r30.s64 + -180;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822435f8
	sub_822435F8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r23,r30,-164
	r23.s64 = r30.s64 + -164;
	// li r22,0
	r22.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r5,4(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// stw r22,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r22.u32);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8224373c
	if (!cr6.lt) goto loc_8224373C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82230a48
	sub_82230A48(ctx, base);
	// b 0x82243754
	goto loc_82243754;
loc_8224373C:
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82230aa0
	sub_82230AA0(ctx, base);
loc_82243754:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8224380c
	if (cr0.eq) goto loc_8224380C;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82243770:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,0(r23)
	r27.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -164);
	// bl 0x8223a590
	sub_8223A590(ctx, base);
	// stwx r3,r29,r27
	PPC_STORE_U32(r29.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822437ec
	if (cr6.eq) goto loc_822437EC;
	// addic. r10,r30,-196
	xer.ca = r30.u32 > 195;
	ctx.r10.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822437c4
	if (!cr0.eq) goto loc_822437C4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x822437d4
	goto loc_822437D4;
loc_822437C4:
	// lwz r10,-192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r10,-192
	ctx.r4.s64 = ctx.r10.s64 + -192;
loc_822437D4:
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_822437EC:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82243770
	if (!cr6.eq) goto loc_82243770;
loc_8224380C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r24,r30,-152
	r24.s64 = r30.s64 + -152;
	// stw r22,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r22.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82243854
	if (!cr6.lt) goto loc_82243854;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8223d760
	sub_8223D760(ctx, base);
	// b 0x8224386c
	goto loc_8224386C;
loc_82243854:
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x8223da10
	sub_8223DA10(ctx, base);
loc_8224386C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243914
	if (cr0.eq) goto loc_82243914;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82243888:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,0(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -164);
	// bl 0x821b8868
	sub_821B8868(ctx, base);
	// stwx r3,r29,r27
	PPC_STORE_U32(r29.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822438f4
	if (cr6.eq) goto loc_822438F4;
	// addic. r10,r30,-196
	xer.ca = r30.u32 > 195;
	ctx.r10.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822438dc
	if (!cr0.eq) goto loc_822438DC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x822438ec
	goto loc_822438EC;
loc_822438DC:
	// lwz r10,-192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r10,-192
	ctx.r4.s64 = ctx.r10.s64 + -192;
loc_822438EC:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_822438F4:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82243888
	if (!cr6.eq) goto loc_82243888;
loc_82243914:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r26,r30,-140
	r26.s64 = r30.s64 + -140;
	// stw r22,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r22.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8224395c
	if (!cr6.lt) goto loc_8224395C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8223d7b8
	sub_8223D7B8(ctx, base);
	// b 0x82243974
	goto loc_82243974;
loc_8224395C:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x8223db70
	sub_8223DB70(ctx, base);
loc_82243974:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r25,r22
	r25.u64 = r22.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243a2c
	if (cr0.eq) goto loc_82243A2C;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82243990:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,0(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,-164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -164);
	// bl 0x8223a5e8
	sub_8223A5E8(ctx, base);
	// stwx r3,r29,r27
	PPC_STORE_U32(r29.u32 + r27.u32, ctx.r3.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82243a0c
	if (cr6.eq) goto loc_82243A0C;
	// addic. r10,r30,-196
	xer.ca = r30.u32 > 195;
	ctx.r10.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822439e4
	if (!cr0.eq) goto loc_822439E4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x822439f4
	goto loc_822439F4;
loc_822439E4:
	// lwz r10,-192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r4,r10,-192
	ctx.r4.s64 = ctx.r10.s64 + -192;
loc_822439F4:
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82243A0C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82243990
	if (!cr6.eq) goto loc_82243990;
loc_82243A2C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x82243a8c
	if (!cr6.lt) goto loc_82243A8C;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82243a8c
	if (cr0.eq) goto loc_82243A8C;
	// addic. r11,r30,-196
	xer.ca = r30.u32 > 195;
	r11.s64 = r30.s64 + -196;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82243a60
	if (!cr0.eq) goto loc_82243A60;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x82243a70
	goto loc_82243A70;
loc_82243A60:
	// lwz r11,-192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
loc_82243A70:
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82240ee8
	sub_82240EE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82241170
	sub_82241170(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
loc_82243A8C:
	// addi r4,r30,-128
	ctx.r4.s64 = r30.s64 + -128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// addi r4,r30,-124
	ctx.r4.s64 = r30.s64 + -124;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359638
	sub_82359638(ctx, base);
	// addi r4,r30,-120
	ctx.r4.s64 = r30.s64 + -120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822409d0
	sub_822409D0(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x82243acc
	if (!cr6.gt) goto loc_82243ACC;
	// addi r4,r30,-100
	ctx.r4.s64 = r30.s64 + -100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8223a640
	sub_8223A640(ctx, base);
	// b 0x82243b10
	goto loc_82243B10;
loc_82243ACC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82243b08
	if (!cr0.eq) goto loc_82243B08;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82243B08:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82243B10:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x82243b38
	if (!cr6.lt) goto loc_82243B38;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359680
	sub_82359680(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82243B38:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-88
	ctx.r4.s64 = r30.s64 + -88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82243b68
	if (!cr6.gt) goto loc_82243B68;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-108
	ctx.r4.s64 = r30.s64 + -108;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
loc_82243B68:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82243b84
	if (!cr6.gt) goto loc_82243B84;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-104
	ctx.r4.s64 = r30.s64 + -104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x82243b8c
	goto loc_82243B8C;
loc_82243B84:
	// lwz r11,-108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -108);
	// stw r11,-104(r30)
	PPC_STORE_U32(r30.u32 + -104, r11.u32);
loc_82243B8C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82243bb0
	if (!cr6.gt) goto loc_82243BB0;
	// addi r4,r30,-84
	ctx.r4.s64 = r30.s64 + -84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = r30.s64 + -8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
loc_82243BB0:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r3,r30,-80
	ctx.r3.s64 = r30.s64 + -80;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822408b8
	sub_822408B8(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r5,r31,288
	ctx.r5.s64 = r31.s64 + 288;
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822404b0
	sub_822404B0(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r5,r31,288
	ctx.r5.s64 = r31.s64 + 288;
	// addi r3,r30,-52
	ctx.r3.s64 = r30.s64 + -52;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x82240528
	sub_82240528(ctx, base);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r29,r22
	r29.u64 = r22.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243c70
	if (cr0.eq) goto loc_82243C70;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82243C1C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82243c3c
	if (cr6.eq) goto loc_82243C3C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r11,596(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 596);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82243c50
	if (!cr0.eq) goto loc_82243C50;
loc_82243C3C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8223e900
	sub_8223E900(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_82243C50:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82243c1c
	if (!cr6.eq) goto loc_82243C1C;
loc_82243C70:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243ce0
	if (cr0.eq) goto loc_82243CE0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82243C8C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82243cac
	if (cr6.eq) goto loc_82243CAC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r11,116(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82243cc0
	if (!cr0.eq) goto loc_82243CC0;
loc_82243CAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8223d180
	sub_8223D180(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_82243CC0:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82243c8c
	if (!cr6.eq) goto loc_82243C8C;
loc_82243CE0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243d6c
	if (cr0.eq) goto loc_82243D6C;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82243CFC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82243d38
	if (cr6.eq) goto loc_82243D38;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 204);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82243d2c
	if (!cr0.eq) goto loc_82243D2C;
	// lbz r11,205(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 205);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// beq 0x82243d30
	if (cr0.eq) goto loc_82243D30;
loc_82243D2C:
	// li r11,1
	r11.s64 = 1;
loc_82243D30:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82243d4c
	if (!cr0.eq) goto loc_82243D4C;
loc_82243D38:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8223d260
	sub_8223D260(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_82243D4C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82243cfc
	if (!cr6.eq) goto loc_82243CFC;
loc_82243D6C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82241fe0
	sub_82241FE0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8223e9f0
	sub_8223E9F0(ctx, base);
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82243D80:
	// stb r11,4(r21)
	PPC_STORE_U8(r21.u32 + 4, r11.u8);
	// addi r1,r31,592
	ctx.r1.s64 = r31.s64 + 592;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82243D8C"))) PPC_WEAK_FUNC(sub_82243D8C);
PPC_FUNC_IMPL(__imp__sub_82243D8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-592
	r31.s64 = r12.s64 + -592;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x8223f820
	sub_8223F820(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82243DB4"))) PPC_WEAK_FUNC(sub_82243DB4);
PPC_FUNC_IMPL(__imp__sub_82243DB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-592
	r31.s64 = r12.s64 + -592;
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

__attribute__((alias("__imp__sub_82243DDC"))) PPC_WEAK_FUNC(sub_82243DDC);
PPC_FUNC_IMPL(__imp__sub_82243DDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-592
	r31.s64 = r12.s64 + -592;
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

__attribute__((alias("__imp__sub_82243E04"))) PPC_WEAK_FUNC(sub_82243E04);
PPC_FUNC_IMPL(__imp__sub_82243E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243E08"))) PPC_WEAK_FUNC(sub_82243E08);
PPC_FUNC_IMPL(__imp__sub_82243E08) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82243e50
	if (cr6.eq) goto loc_82243E50;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,132
	ctx.r9.s64 = 132;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = r11.s32 / ctx.r9.s32;
	// bl 0x82243588
	sub_82243588(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82241648
	sub_82241648(ctx, base);
loc_82243E50:
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

__attribute__((alias("__imp__sub_82243E68"))) PPC_WEAK_FUNC(sub_82243E68);
PPC_FUNC_IMPL(__imp__sub_82243E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82243660
	sub_82243660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243E74"))) PPC_WEAK_FUNC(sub_82243E74);
PPC_FUNC_IMPL(__imp__sub_82243E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243E78"))) PPC_WEAK_FUNC(sub_82243E78);
PPC_FUNC_IMPL(__imp__sub_82243E78) {
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
	// addi r30,r3,-196
	r30.s64 = ctx.r3.s64 + -196;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,196
	r31.s64 = r30.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82243288
	sub_82243288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243eb0
	if (cr0.eq) goto loc_82243EB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82243EB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82243EBC"))) PPC_WEAK_FUNC(sub_82243EBC);
PPC_FUNC_IMPL(__imp__sub_82243EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243EC0"))) PPC_WEAK_FUNC(sub_82243EC0);
PPC_FUNC_IMPL(__imp__sub_82243EC0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,-192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-176
	ctx.r3.s64 = r31.s64 + -176;
	// bl 0x821e76c0
	sub_821E76C0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,15860
	ctx.r6.s64 = r11.s64 + 15860;
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
	// beq 0x82244178
	if (cr0.eq) goto loc_82244178;
	// addi r23,r31,-196
	r23.s64 = r31.s64 + -196;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82242a30
	sub_82242A30(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r31,-180
	ctx.r3.s64 = r31.s64 + -180;
	// bl 0x82243e08
	sub_82243E08(ctx, base);
	// addi r25,r31,-164
	r25.s64 = r31.s64 + -164;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8223d810
	sub_8223D810(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82243fc8
	if (cr0.eq) goto loc_82243FC8;
	// addi r27,r31,-196
	r27.s64 = r31.s64 + -196;
	// li r29,0
	r29.s64 = 0;
loc_82243F6C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82243f7c
	if (!cr6.eq) goto loc_82243F7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82243f8c
	goto loc_82243F8C;
loc_82243F7C:
	// lwz r11,-192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
loc_82243F8C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82243f6c
	if (!cr6.eq) goto loc_82243F6C;
loc_82243FC8:
	// addi r26,r31,-152
	r26.s64 = r31.s64 + -152;
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223d910
	sub_8223D910(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82244044
	if (cr0.eq) goto loc_82244044;
	// addi r27,r31,-196
	r27.s64 = r31.s64 + -196;
	// li r29,0
	r29.s64 = 0;
loc_82243FF8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82244008
	if (!cr6.eq) goto loc_82244008;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82244018
	goto loc_82244018;
loc_82244008:
	// lwz r11,-192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
loc_82244018:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82317480
	sub_82317480(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82243ff8
	if (!cr6.eq) goto loc_82243FF8;
loc_82244044:
	// addi r29,r31,-140
	r29.s64 = r31.s64 + -140;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223da70
	sub_8223DA70(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822440d0
	if (cr0.eq) goto loc_822440D0;
	// addi r24,r31,-196
	r24.s64 = r31.s64 + -196;
	// li r28,0
	r28.s64 = 0;
loc_82244074:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82244084
	if (!cr6.eq) goto loc_82244084;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82244094
	goto loc_82244094;
loc_82244084:
	// lwz r11,-192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -192);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
loc_82244094:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82244074
	if (!cr6.eq) goto loc_82244074;
loc_822440D0:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r31,-80
	ctx.r3.s64 = r31.s64 + -80;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822408b8
	sub_822408B8(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-64
	ctx.r3.s64 = r31.s64 + -64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822404b0
	sub_822404B0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-52
	ctx.r3.s64 = r31.s64 + -52;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x82240528
	sub_82240528(ctx, base);
	// lbz r11,68(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 68);
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// addi r3,r31,-120
	ctx.r3.s64 = r31.s64 + -120;
	// stb r11,-128(r31)
	PPC_STORE_U8(r31.u32 + -128, r11.u8);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r11,-124(r31)
	PPC_STORE_U32(r31.u32 + -124, r11.u32);
	// bl 0x8223edb0
	sub_8223EDB0(ctx, base);
	// addi r3,r31,-100
	ctx.r3.s64 = r31.s64 + -100;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// bl 0x822391b0
	sub_822391B0(ctx, base);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,-88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -88, temp.u32);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,-108(r31)
	PPC_STORE_U32(r31.u32 + -108, r11.u32);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r11,-104(r31)
	PPC_STORE_U32(r31.u32 + -104, r11.u32);
	// lbz r11,112(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// stb r11,-84(r31)
	PPC_STORE_U8(r31.u32 + -84, r11.u8);
	// lbz r11,188(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 188);
	// stb r11,-8(r31)
	PPC_STORE_U8(r31.u32 + -8, r11.u8);
	// bl 0x8223e9f0
	sub_8223E9F0(ctx, base);
loc_82244178:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82244180"))) PPC_WEAK_FUNC(sub_82244180);
PPC_FUNC_IMPL(__imp__sub_82244180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82243ec0
	sub_82243EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224418C"))) PPC_WEAK_FUNC(sub_8224418C);
PPC_FUNC_IMPL(__imp__sub_8224418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244190"))) PPC_WEAK_FUNC(sub_82244190);
PPC_FUNC_IMPL(__imp__sub_82244190) {
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
	// lwz r16,-6056(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -6056);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-6076
	r11.s64 = r11.s64 + -6076;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822441e8
	if (cr0.eq) goto loc_822441E8;
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
loc_822441E8:
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

__attribute__((alias("__imp__sub_82244198"))) PPC_WEAK_FUNC(sub_82244198);
PPC_FUNC_IMPL(__imp__sub_82244198) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-6076
	r11.s64 = r11.s64 + -6076;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x822441e8
	if (cr0.eq) goto loc_822441E8;
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
loc_822441E8:
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

__attribute__((alias("__imp__sub_8224420C"))) PPC_WEAK_FUNC(sub_8224420C);
PPC_FUNC_IMPL(__imp__sub_8224420C) {
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

__attribute__((alias("__imp__sub_82244234"))) PPC_WEAK_FUNC(sub_82244234);
PPC_FUNC_IMPL(__imp__sub_82244234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244238"))) PPC_WEAK_FUNC(sub_82244238);
PPC_FUNC_IMPL(__imp__sub_82244238) {
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
	// bl 0x82244198
	sub_82244198(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82244268
	if (cr0.eq) goto loc_82244268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82244268:
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

__attribute__((alias("__imp__sub_82244284"))) PPC_WEAK_FUNC(sub_82244284);
PPC_FUNC_IMPL(__imp__sub_82244284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244288"))) PPC_WEAK_FUNC(sub_82244288);
PPC_FUNC_IMPL(__imp__sub_82244288) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x822442f4
	if (cr6.eq) goto loc_822442F4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822442d0
	if (cr6.eq) goto loc_822442D0;
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
loc_822442D0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x822442f4
	if (cr6.eq) goto loc_822442F4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_822442F4:
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

__attribute__((alias("__imp__sub_8224430C"))) PPC_WEAK_FUNC(sub_8224430C);
PPC_FUNC_IMPL(__imp__sub_8224430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244310"))) PPC_WEAK_FUNC(sub_82244310);
PPC_FUNC_IMPL(__imp__sub_82244310) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8224433c
	if (cr0.eq) goto loc_8224433C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_8224433C:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82244374
	if (!cr6.eq) goto loc_82244374;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82244368
	if (cr6.eq) goto loc_82244368;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// b 0x8224436c
	goto loc_8224436C;
loc_82244368:
	// stw r31,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r31.u32);
loc_8224436C:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// b 0x822443b0
	goto loc_822443B0;
loc_82244374:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8224439c
	if (!cr6.eq) goto loc_8224439C;
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
	// b 0x822443b0
	goto loc_822443B0;
loc_8224439C:
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
loc_822443B0:
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

__attribute__((alias("__imp__sub_822443C4"))) PPC_WEAK_FUNC(sub_822443C4);
PPC_FUNC_IMPL(__imp__sub_822443C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822443C8"))) PPC_WEAK_FUNC(sub_822443C8);
PPC_FUNC_IMPL(__imp__sub_822443C8) {
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
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x822443f8
	if (cr0.eq) goto loc_822443F8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_822443F8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82244434
	if (!cr6.eq) goto loc_82244434;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82244424
	if (cr0.eq) goto loc_82244424;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82244428
	goto loc_82244428;
loc_82244424:
	// li r11,0
	r11.s64 = 0;
loc_82244428:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82244484
	goto loc_82244484;
loc_82244434:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82244468
	if (!cr6.eq) goto loc_82244468;
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
	// b 0x82244484
	goto loc_82244484;
loc_82244468:
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
loc_82244484:
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

__attribute__((alias("__imp__sub_822444A8"))) PPC_WEAK_FUNC(sub_822444A8);
PPC_FUNC_IMPL(__imp__sub_822444A8) {
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
	// bl 0x821e1660
	sub_821E1660(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,10656
	r31.s64 = r11.s64 + 10656;
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

__attribute__((alias("__imp__sub_82244508"))) PPC_WEAK_FUNC(sub_82244508);
PPC_FUNC_IMPL(__imp__sub_82244508) {
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
	// beq 0x82244548
	if (cr0.eq) goto loc_82244548;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,16388
	ctx.r3.s64 = r11.s64 + 16388;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82244550
	goto loc_82244550;
loc_82244548:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82244550:
	// mulli r3,r31,68
	ctx.r3.s64 = r31.s64 * 68;
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

__attribute__((alias("__imp__sub_8224456C"))) PPC_WEAK_FUNC(sub_8224456C);
PPC_FUNC_IMPL(__imp__sub_8224456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244570"))) PPC_WEAK_FUNC(sub_82244570);
PPC_FUNC_IMPL(__imp__sub_82244570) {
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
	// beq 0x822445b0
	if (cr0.eq) goto loc_822445B0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,16436
	ctx.r3.s64 = r11.s64 + 16436;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822445b8
	goto loc_822445B8;
loc_822445B0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_822445B8:
	// mulli r3,r31,68
	ctx.r3.s64 = r31.s64 * 68;
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

__attribute__((alias("__imp__sub_822445D4"))) PPC_WEAK_FUNC(sub_822445D4);
PPC_FUNC_IMPL(__imp__sub_822445D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822445D8"))) PPC_WEAK_FUNC(sub_822445D8);
PPC_FUNC_IMPL(__imp__sub_822445D8) {
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
	// beq 0x82244618
	if (cr0.eq) goto loc_82244618;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,16464
	ctx.r3.s64 = r11.s64 + 16464;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82244620
	goto loc_82244620;
loc_82244618:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82244620:
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
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

__attribute__((alias("__imp__sub_8224463C"))) PPC_WEAK_FUNC(sub_8224463C);
PPC_FUNC_IMPL(__imp__sub_8224463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244640"))) PPC_WEAK_FUNC(sub_82244640);
PPC_FUNC_IMPL(__imp__sub_82244640) {
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
	// beq 0x82244680
	if (cr0.eq) goto loc_82244680;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,16688
	ctx.r3.s64 = r11.s64 + 16688;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82244688
	goto loc_82244688;
loc_82244680:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82244688:
	// mulli r3,r31,68
	ctx.r3.s64 = r31.s64 * 68;
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

__attribute__((alias("__imp__sub_822446A4"))) PPC_WEAK_FUNC(sub_822446A4);
PPC_FUNC_IMPL(__imp__sub_822446A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822446A8"))) PPC_WEAK_FUNC(sub_822446A8);
PPC_FUNC_IMPL(__imp__sub_822446A8) {
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
	// lwz r16,-5984(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -5984);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-6076
	r11.s64 = r11.s64 + -6076;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq 0x8224470c
	if (cr0.eq) goto loc_8224470C;
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
loc_8224470C:
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

__attribute__((alias("__imp__sub_822446B0"))) PPC_WEAK_FUNC(sub_822446B0);
PPC_FUNC_IMPL(__imp__sub_822446B0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-6076
	r11.s64 = r11.s64 + -6076;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq 0x8224470c
	if (cr0.eq) goto loc_8224470C;
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
loc_8224470C:
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

__attribute__((alias("__imp__sub_82244728"))) PPC_WEAK_FUNC(sub_82244728);
PPC_FUNC_IMPL(__imp__sub_82244728) {
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

__attribute__((alias("__imp__sub_82244750"))) PPC_WEAK_FUNC(sub_82244750);
PPC_FUNC_IMPL(__imp__sub_82244750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,64(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82244770
	if (cr6.lt) goto loc_82244770;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82244770:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// beq 0x822447b4
	if (cr0.eq) goto loc_822447B4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8224478c
	if (cr6.lt) goto loc_8224478C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8224478C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x822447e4
	if (!cr0.eq) goto loc_822447E4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822447a4
	if (cr6.lt) goto loc_822447A4;
	// li r11,0
	r11.s64 = 0;
loc_822447A4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_822447AC:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
loc_822447B4:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822447c4
	if (cr6.lt) goto loc_822447C4;
	// li r11,0
	r11.s64 = 0;
loc_822447C4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822447ac
	if (!cr0.eq) goto loc_822447AC;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x822447dc
	if (cr6.lt) goto loc_822447DC;
	// li r11,0
	r11.s64 = 0;
loc_822447DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_822447E4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822447EC"))) PPC_WEAK_FUNC(sub_822447EC);
PPC_FUNC_IMPL(__imp__sub_822447EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822447F0"))) PPC_WEAK_FUNC(sub_822447F0);
PPC_FUNC_IMPL(__imp__sub_822447F0) {
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
	// addi r31,r3,-68
	r31.s64 = ctx.r3.s64 + -68;
loc_8224480C:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82244824
	if (cr6.lt) goto loc_82244824;
	// li r11,0
	r11.s64 = 0;
loc_82244824:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r5,68
	ctx.r5.s64 = 68;
	// beq 0x82244844
	if (cr0.eq) goto loc_82244844;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r31,-68
	r31.s64 = r31.s64 + -68;
	// b 0x8224480c
	goto loc_8224480C;
loc_82244844:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
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

__attribute__((alias("__imp__sub_82244864"))) PPC_WEAK_FUNC(sub_82244864);
PPC_FUNC_IMPL(__imp__sub_82244864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244868"))) PPC_WEAK_FUNC(sub_82244868);
PPC_FUNC_IMPL(__imp__sub_82244868) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// b 0x822448cc
	goto loc_822448CC;
loc_8224488C:
	// mulli r10,r31,68
	ctx.r10.s64 = r31.s64 * 68;
	// lwz r9,64(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x822448ac
	if (cr6.lt) goto loc_822448AC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822448AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822448dc
	if (cr0.eq) goto loc_822448DC;
	// mulli r11,r11,68
	r11.s64 = r11.s64 * 68;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
loc_822448CC:
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// bgt cr6,0x8224488c
	if (cr6.gt) goto loc_8224488C;
loc_822448DC:
	// mulli r11,r11,68
	r11.s64 = r11.s64 * 68;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822448F8"))) PPC_WEAK_FUNC(sub_822448F8);
PPC_FUNC_IMPL(__imp__sub_822448F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82244958"))) PPC_WEAK_FUNC(sub_82244958);
PPC_FUNC_IMPL(__imp__sub_82244958) {
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
	// bl 0x82244198
	sub_82244198(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82244988
	if (cr0.eq) goto loc_82244988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82244988:
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

__attribute__((alias("__imp__sub_822449A4"))) PPC_WEAK_FUNC(sub_822449A4);
PPC_FUNC_IMPL(__imp__sub_822449A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822449A8"))) PPC_WEAK_FUNC(sub_822449A8);
PPC_FUNC_IMPL(__imp__sub_822449A8) {
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
	// bl 0x82244310
	sub_82244310(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82244A00"))) PPC_WEAK_FUNC(sub_82244A00);
PPC_FUNC_IMPL(__imp__sub_82244A00) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82244a78
	if (cr6.eq) goto loc_82244A78;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,3908
	r29.s64 = r11.s64 + 3908;
loc_82244A2C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x82244ad0
	if (!cr0.eq) goto loc_82244AD0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82244a2c
	if (!cr6.eq) goto loc_82244A2C;
loc_82244A78:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82244ac8
	if (cr0.eq) goto loc_82244AC8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8231e310
	sub_8231E310(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x82244ac8
	if (cr0.eq) goto loc_82244AC8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82244a00
	sub_82244A00(ctx, base);
	// b 0x82244ad0
	goto loc_82244AD0;
loc_82244AC8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82244AD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82244AD8"))) PPC_WEAK_FUNC(sub_82244AD8);
PPC_FUNC_IMPL(__imp__sub_82244AD8) {
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
	// beq 0x82244b0c
	if (cr0.eq) goto loc_82244B0C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x82244b14
	goto loc_82244B14;
loc_82244B0C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_82244B14:
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

__attribute__((alias("__imp__sub_82244B30"))) PPC_WEAK_FUNC(sub_82244B30);
PPC_FUNC_IMPL(__imp__sub_82244B30) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82244ba0
	if (cr0.eq) goto loc_82244BA0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82244ba0
	if (cr0.eq) goto loc_82244BA0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,1640
	r31.s64 = r11.s64 + 1640;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82244ba4
	goto loc_82244BA4;
loc_82244BA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82244BA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82244288
	sub_82244288(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82244BB8"))) PPC_WEAK_FUNC(sub_82244BB8);
PPC_FUNC_IMPL(__imp__sub_82244BB8) {
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
	// lwz r16,-5912(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -5912);
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
	// bne cr6,0x82244c28
	if (!cr6.eq) goto loc_82244C28;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82244bfc
	if (cr0.eq) goto loc_82244BFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82244BFC:
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
	// beq 0x82244c60
	if (cr0.eq) goto loc_82244C60;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82244c60
	goto loc_82244C60;
loc_82244C28:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,1640
	r30.s64 = r11.s64 + 1640;
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
	// bl 0x82244288
	sub_82244288(ctx, base);
loc_82244C60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82244BC0"))) PPC_WEAK_FUNC(sub_82244BC0);
PPC_FUNC_IMPL(__imp__sub_82244BC0) {
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
	// bne cr6,0x82244c28
	if (!cr6.eq) goto loc_82244C28;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82244bfc
	if (cr0.eq) goto loc_82244BFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82244BFC:
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
	// beq 0x82244c60
	if (cr0.eq) goto loc_82244C60;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82244c60
	goto loc_82244C60;
loc_82244C28:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,1640
	r30.s64 = r11.s64 + 1640;
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
	// bl 0x82244288
	sub_82244288(ctx, base);
loc_82244C60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82244C6C"))) PPC_WEAK_FUNC(sub_82244C6C);
PPC_FUNC_IMPL(__imp__sub_82244C6C) {
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

__attribute__((alias("__imp__sub_82244C94"))) PPC_WEAK_FUNC(sub_82244C94);
PPC_FUNC_IMPL(__imp__sub_82244C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244C98"))) PPC_WEAK_FUNC(sub_82244C98);
PPC_FUNC_IMPL(__imp__sub_82244C98) {
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
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82244508
	sub_82244508(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mulli r10,r29,68
	ctx.r10.s64 = r29.s64 * 68;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82244CF0"))) PPC_WEAK_FUNC(sub_82244CF0);
PPC_FUNC_IMPL(__imp__sub_82244CF0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// beq cr6,0x82244d44
	if (cr6.eq) goto loc_82244D44;
loc_82244D10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x822447f0
	sub_822447F0(ctx, base);
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82244d10
	if (!cr6.eq) goto loc_82244D10;
loc_82244D44:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82244D4C"))) PPC_WEAK_FUNC(sub_82244D4C);
PPC_FUNC_IMPL(__imp__sub_82244D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244D50"))) PPC_WEAK_FUNC(sub_82244D50);
PPC_FUNC_IMPL(__imp__sub_82244D50) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r25,r30
	r25.u64 = r30.u64;
	// b 0x82244dc8
	goto loc_82244DC8;
loc_82244D7C:
	// mulli r11,r31,68
	r11.s64 = r31.s64 * 68;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82244d9c
	if (cr6.lt) goto loc_82244D9C;
	// li r11,0
	r11.s64 = 0;
loc_82244D9C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82244da8
	if (cr0.eq) goto loc_82244DA8;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82244DA8:
	// mulli r10,r31,68
	ctx.r10.s64 = r31.s64 * 68;
	// mulli r11,r30,68
	r11.s64 = r30.s64 * 68;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82244DC8:
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x82244d7c
	if (cr6.lt) goto loc_82244D7C;
	// bne cr6,0x82244df8
	if (!cr6.eq) goto loc_82244DF8;
	// mulli r11,r31,68
	r11.s64 = r31.s64 * 68;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// mulli r11,r30,68
	r11.s64 = r30.s64 * 68;
	// addi r4,r10,-68
	ctx.r4.s64 = ctx.r10.s64 + -68;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r30,r31,-1
	r30.s64 = r31.s64 + -1;
loc_82244DF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,64(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x82244868
	sub_82244868(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82244E30"))) PPC_WEAK_FUNC(sub_82244E30);
PPC_FUNC_IMPL(__imp__sub_82244E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,68
	ctx.r10.s64 = 68;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f9,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f9.f64 = double(temp.f32);
	// subf r11,r8,r9
	r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// divw. r7,r11,r10
	ctx.r7.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r9,r8,64
	ctx.r9.s64 = ctx.r8.s64 + 64;
	// lfs f10,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f10.f64 = double(temp.f32);
loc_82244E64:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// fmr f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f9.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,56
	r11.s64 = ctx.r8.s64 + 56;
loc_82244E74:
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// beq cr6,0x82244ec8
	if (cr6.eq) goto loc_82244EC8;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm. r4,r4,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82244ec8
	if (cr0.eq) goto loc_82244EC8;
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fdivs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 / f0.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 + ctx.f11.f64));
loc_82244EC8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82244e74
	if (cr6.lt) goto loc_82244E74;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fadds f1,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// addi r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 + 68;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x82244e64
	if (cr6.lt) goto loc_82244E64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82244EF0"))) PPC_WEAK_FUNC(sub_82244EF0);
PPC_FUNC_IMPL(__imp__sub_82244EF0) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,15600
	r11.s64 = r11.s64 + 15600;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lbz r11,13(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82244f74
	if (cr0.eq) goto loc_82244F74;
	// bl 0x821b2b90
	sub_821B2B90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82244f74
	if (cr0.eq) goto loc_82244F74;
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82244f5c
	goto loc_82244F5C;
loc_82244F34:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82244f58
	if (cr0.eq) goto loc_82244F58;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82244F58:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82244F5C:
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
	// bne 0x82244f34
	if (!cr0.eq) goto loc_82244F34;
loc_82244F74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82244F7C"))) PPC_WEAK_FUNC(sub_82244F7C);
PPC_FUNC_IMPL(__imp__sub_82244F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244F80"))) PPC_WEAK_FUNC(sub_82244F80);
PPC_FUNC_IMPL(__imp__sub_82244F80) {
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
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82244fb4
	if (cr0.eq) goto loc_82244FB4;
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r10,272(r11)
	PPC_STORE_U32(r11.u32 + 272, ctx.r10.u32);
loc_82244FB4:
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

__attribute__((alias("__imp__sub_82244FC8"))) PPC_WEAK_FUNC(sub_82244FC8);
PPC_FUNC_IMPL(__imp__sub_82244FC8) {
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
	// lbz r11,-28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82245030
	if (cr0.eq) goto loc_82245030;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82245018
	goto loc_82245018;
loc_82244FF4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82245014
	if (cr0.eq) goto loc_82245014;
	// addi r3,r11,360
	ctx.r3.s64 = r11.s64 + 360;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82245014:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82245018:
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
	// bne 0x82244ff4
	if (!cr0.eq) goto loc_82244FF4;
loc_82245030:
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

__attribute__((alias("__imp__sub_82245048"))) PPC_WEAK_FUNC(sub_82245048);
PPC_FUNC_IMPL(__imp__sub_82245048) {
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
	// bl 0x821b3f78
	sub_821B3F78(ctx, base);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82245094
	goto loc_82245094;
loc_82245070:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82245090
	if (cr0.eq) goto loc_82245090;
	// addi r3,r11,360
	ctx.r3.s64 = r11.s64 + 360;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82245090:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82245094:
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
	// bne 0x82245070
	if (!cr0.eq) goto loc_82245070;
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

__attribute__((alias("__imp__sub_822450C4"))) PPC_WEAK_FUNC(sub_822450C4);
PPC_FUNC_IMPL(__imp__sub_822450C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822450C8"))) PPC_WEAK_FUNC(sub_822450C8);
PPC_FUNC_IMPL(__imp__sub_822450C8) {
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
	// bl 0x821b4048
	sub_821B4048(ctx, base);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82245114
	goto loc_82245114;
loc_822450F0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82245110
	if (cr0.eq) goto loc_82245110;
	// addi r3,r11,360
	ctx.r3.s64 = r11.s64 + 360;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82245110:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82245114:
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
	// bne 0x822450f0
	if (!cr0.eq) goto loc_822450F0;
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

__attribute__((alias("__imp__sub_82245144"))) PPC_WEAK_FUNC(sub_82245144);
PPC_FUNC_IMPL(__imp__sub_82245144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245148"))) PPC_WEAK_FUNC(sub_82245148);
PPC_FUNC_IMPL(__imp__sub_82245148) {
	PPC_FUNC_PROLOGUE();
	// b 0x82244198
	sub_82244198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224514C"))) PPC_WEAK_FUNC(sub_8224514C);
PPC_FUNC_IMPL(__imp__sub_8224514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245150"))) PPC_WEAK_FUNC(sub_82245150);
PPC_FUNC_IMPL(__imp__sub_82245150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r2{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-5836(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -5836);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r1,-16
	r31.s64 = ctx.r1.s64 + -16;
	// stwu r1,-16(r1)
	ea = -16 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-5932
	r11.s64 = r11.s64 + -5932;
	// lfs f0,-5848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5848);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f13,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,29204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29204);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r1,r31,16
	ctx.r1.s64 = r31.s64 + 16;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82245158"))) PPC_WEAK_FUNC(sub_82245158);
PPC_FUNC_IMPL(__imp__sub_82245158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r1,-16
	r31.s64 = ctx.r1.s64 + -16;
	// stwu r1,-16(r1)
	ea = -16 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-5932
	r11.s64 = r11.s64 + -5932;
	// lfs f0,-5848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5848);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f13,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,29204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29204);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r1,r31,16
	ctx.r1.s64 = r31.s64 + 16;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822451AC"))) PPC_WEAK_FUNC(sub_822451AC);
PPC_FUNC_IMPL(__imp__sub_822451AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-16
	r31.s64 = r12.s64 + -16;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-32(r1)
	ea = -32 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82126688
	sub_82126688(ctx, base);
	// addi r1,r1,32
	ctx.r1.s64 = ctx.r1.s64 + 32;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822451D4"))) PPC_WEAK_FUNC(sub_822451D4);
PPC_FUNC_IMPL(__imp__sub_822451D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822451D8"))) PPC_WEAK_FUNC(sub_822451D8);
PPC_FUNC_IMPL(__imp__sub_822451D8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82244ad8
	sub_82244AD8(ctx, base);
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

__attribute__((alias("__imp__sub_82245260"))) PPC_WEAK_FUNC(sub_82245260);
PPC_FUNC_IMPL(__imp__sub_82245260) {
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82244b30
	sub_82244B30(ctx, base);
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,14680(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14680);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x822452c8
	if (!cr6.gt) goto loc_822452C8;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_822452C8:
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

__attribute__((alias("__imp__sub_822452E0"))) PPC_WEAK_FUNC(sub_822452E0);
PPC_FUNC_IMPL(__imp__sub_822452E0) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// addi r11,r4,56
	r11.s64 = ctx.r4.s64 + 56;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82245530
	if (!cr0.eq) goto loc_82245530;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r27,r25
	r27.u64 = r25.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82245378
	if (cr0.eq) goto loc_82245378;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
loc_82245344:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8224535c
	if (cr0.eq) goto loc_8224535C;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_8224535C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82245344
	if (!cr0.eq) goto loc_82245344;
loc_82245378:
	// addic. r30,r27,-1
	xer.ca = r27.u32 > 0;
	r30.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x822453dc
	if (!cr0.gt) goto loc_822453DC;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
loc_82245390:
	// bl 0x8226dc60
	sub_8226DC60(ctx, base);
	// divw r11,r3,r31
	r11.s32 = ctx.r3.s32 / r31.s32;
	// rotlwi r8,r3,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mullw r11,r11,r31
	r11.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r8,r31,r8
	ctx.r8.u64 = r31.u64 & ~ctx.r8.u64;
	// twllei r31,0
	// twlgei r8,-1
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bgt 0x82245390
	if (cr0.gt) goto loc_82245390;
loc_822453DC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,2
	r30.s64 = 2;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// fmr f29,f30
	f29.f64 = f30.f64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82245438
	if (!cr6.gt) goto loc_82245438;
	// li r31,16
	r31.s64 = 16;
loc_822453FC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x82245424
	if (!cr6.gt) goto loc_82245424;
	// fadds f29,f1,f29
	f29.f64 = double(float(ctx.f1.f64 + f29.f64));
loc_82245424:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x822453fc
	if (cr6.lt) goto loc_822453FC;
loc_82245438:
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// lha r9,8(r28)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r27,r25
	r27.u64 = r25.u64;
	// li r26,2
	r26.s64 = 2;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f31,6732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6732);
	f31.f64 = double(temp.f32);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f29,f0,f29
	f29.f64 = double(float(f0.f64 / f29.f64));
	// ble cr6,0x82245530
	if (!cr6.gt) goto loc_82245530;
	// li r29,16
	r29.s64 = 16;
loc_82245470:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmadds f31,f1,f29,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f29.f64 + f31.f64));
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// bge cr6,0x8224551c
	if (!cr6.lt) goto loc_8224551C;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
loc_822454A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822454bc
	if (!cr0.eq) goto loc_822454BC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// b 0x822454cc
	goto loc_822454CC;
loc_822454BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
loc_822454CC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8231ae98
	sub_8231AE98(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822454f8
	if (cr0.eq) goto loc_822454F8;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822454F8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// extsw r11,r27
	r11.s64 = r27.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// blt cr6,0x822454a8
	if (cr6.lt) goto loc_822454A8;
loc_8224551C:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82245470
	if (cr6.lt) goto loc_82245470;
loc_82245530:
	// stw r25,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82245550"))) PPC_WEAK_FUNC(sub_82245550);
PPC_FUNC_IMPL(__imp__sub_82245550) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-5744(r2)
	r16.u64 = PPC_LOAD_U32(r2.u32 + -5744);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x82245590
	if (!cr6.eq) goto loc_82245590;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224572c
	goto loc_8224572C;
loc_82245590:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// addi r27,r29,1
	r27.s64 = r29.s64 + 1;
	// lwz r11,14704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14704);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14700
	r29.s64 = ctx.r10.s64 + 14700;
	// bne 0x822455e0
	if (!cr0.eq) goto loc_822455E0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14704(r30)
	PPC_STORE_U32(r30.u32 + 14704, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5792
	ctx.r4.s64 = r11.s64 + -5792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14704);
loc_822455E0:
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
	// beq 0x82245614
	if (cr0.eq) goto loc_82245614;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82244bc0
	sub_82244BC0(ctx, base);
	// b 0x8224572c
	goto loc_8224572C;
loc_82245614:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14696
	r29.s64 = ctx.r10.s64 + 14696;
	// bne 0x82245640
	if (!cr0.eq) goto loc_82245640;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,14704(r30)
	PPC_STORE_U32(r30.u32 + 14704, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6396
	ctx.r4.s64 = r11.s64 + 6396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14704);
loc_82245640:
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
	// beq 0x82245674
	if (cr0.eq) goto loc_82245674;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,12
	ctx.r3.s64 = r26.s64 + 12;
loc_8224566C:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8224572c
	goto loc_8224572C;
loc_82245674:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14692
	r29.s64 = ctx.r10.s64 + 14692;
	// bne 0x822456a0
	if (!cr0.eq) goto loc_822456A0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,14704(r30)
	PPC_STORE_U32(r30.u32 + 14704, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5800
	ctx.r4.s64 = r11.s64 + -5800;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14704);
loc_822456A0:
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
	// beq 0x822456d0
	if (cr0.eq) goto loc_822456D0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,16
	ctx.r3.s64 = r26.s64 + 16;
	// b 0x8224566c
	goto loc_8224566C;
loc_822456D0:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14688
	r29.s64 = ctx.r10.s64 + 14688;
	// bne 0x822456f8
	if (!cr0.eq) goto loc_822456F8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,14704(r30)
	PPC_STORE_U32(r30.u32 + 14704, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-1448
	ctx.r4.s64 = r11.s64 + -1448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822456F8:
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
	// beq 0x82245728
	if (cr0.eq) goto loc_82245728;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,20
	ctx.r3.s64 = r26.s64 + 20;
	// b 0x8224566c
	goto loc_8224566C;
loc_82245728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224572C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82245558"))) PPC_WEAK_FUNC(sub_82245558);
PPC_FUNC_IMPL(__imp__sub_82245558) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x82245590
	if (!cr6.eq) goto loc_82245590;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224572c
	goto loc_8224572C;
loc_82245590:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// addi r27,r29,1
	r27.s64 = r29.s64 + 1;
	// lwz r11,14704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14704);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14700
	r29.s64 = ctx.r10.s64 + 14700;
	// bne 0x822455e0
	if (!cr0.eq) goto loc_822455E0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14704(r30)
	PPC_STORE_U32(r30.u32 + 14704, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5792
	ctx.r4.s64 = r11.s64 + -5792;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14704);
loc_822455E0:
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
	// beq 0x82245614
	if (cr0.eq) goto loc_82245614;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82244bc0
	sub_82244BC0(ctx, base);
	// b 0x8224572c
	goto loc_8224572C;
loc_82245614:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14696
	r29.s64 = ctx.r10.s64 + 14696;
	// bne 0x82245640
	if (!cr0.eq) goto loc_82245640;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,14704(r30)
	PPC_STORE_U32(r30.u32 + 14704, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,6396
	ctx.r4.s64 = r11.s64 + 6396;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14704);
loc_82245640:
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
	// beq 0x82245674
	if (cr0.eq) goto loc_82245674;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,12
	ctx.r3.s64 = r26.s64 + 12;
loc_8224566C:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8224572c
	goto loc_8224572C;
loc_82245674:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14692
	r29.s64 = ctx.r10.s64 + 14692;
	// bne 0x822456a0
	if (!cr0.eq) goto loc_822456A0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,14704(r30)
	PPC_STORE_U32(r30.u32 + 14704, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5800
	ctx.r4.s64 = r11.s64 + -5800;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,14704(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14704);
loc_822456A0:
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
	// beq 0x822456d0
	if (cr0.eq) goto loc_822456D0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,16
	ctx.r3.s64 = r26.s64 + 16;
	// b 0x8224566c
	goto loc_8224566C;
loc_822456D0:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,14688
	r29.s64 = ctx.r10.s64 + 14688;
	// bne 0x822456f8
	if (!cr0.eq) goto loc_822456F8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,14704(r30)
	PPC_STORE_U32(r30.u32 + 14704, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-1448
	ctx.r4.s64 = r11.s64 + -1448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_822456F8:
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
	// beq 0x82245728
	if (cr0.eq) goto loc_82245728;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,20
	ctx.r3.s64 = r26.s64 + 20;
	// b 0x8224566c
	goto loc_8224566C;
loc_82245728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224572C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82245734"))) PPC_WEAK_FUNC(sub_82245734);
PPC_FUNC_IMPL(__imp__sub_82245734) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14704
	r11.s64 = r11.s64 + 14704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14704
	ctx.r10.s64 = ctx.r10.s64 + 14704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224575C"))) PPC_WEAK_FUNC(sub_8224575C);
PPC_FUNC_IMPL(__imp__sub_8224575C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14704
	r11.s64 = r11.s64 + 14704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14704
	ctx.r10.s64 = ctx.r10.s64 + 14704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82245784"))) PPC_WEAK_FUNC(sub_82245784);
PPC_FUNC_IMPL(__imp__sub_82245784) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14704
	r11.s64 = r11.s64 + 14704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14704
	ctx.r10.s64 = ctx.r10.s64 + 14704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822457AC"))) PPC_WEAK_FUNC(sub_822457AC);
PPC_FUNC_IMPL(__imp__sub_822457AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,14704
	r11.s64 = r11.s64 + 14704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,14704
	ctx.r10.s64 = ctx.r10.s64 + 14704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822457D4"))) PPC_WEAK_FUNC(sub_822457D4);
PPC_FUNC_IMPL(__imp__sub_822457D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822457D8"))) PPC_WEAK_FUNC(sub_822457D8);
PPC_FUNC_IMPL(__imp__sub_822457D8) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82245810
	if (cr6.eq) goto loc_82245810;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82245810:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82245840
	if (!cr6.eq) goto loc_82245840;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1640
	ctx.r6.s64 = r11.s64 + 1640;
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
	// bl 0x82244288
	sub_82244288(ctx, base);
loc_82245840:
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

__attribute__((alias("__imp__sub_82245854"))) PPC_WEAK_FUNC(sub_82245854);
PPC_FUNC_IMPL(__imp__sub_82245854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245858"))) PPC_WEAK_FUNC(sub_82245858);
PPC_FUNC_IMPL(__imp__sub_82245858) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822458ac
	goto loc_822458AC;
loc_8224586C:
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x822443c8
	sub_822443C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822458ac
	if (cr6.eq) goto loc_822458AC;
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
loc_822458AC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8224586c
	if (cr0.eq) goto loc_8224586C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822458C4"))) PPC_WEAK_FUNC(sub_822458C4);
PPC_FUNC_IMPL(__imp__sub_822458C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822458C8"))) PPC_WEAK_FUNC(sub_822458C8);
PPC_FUNC_IMPL(__imp__sub_822458C8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82245904
	if (!cr6.eq) goto loc_82245904;
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
	// b 0x822459ac
	goto loc_822459AC;
loc_82245904:
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x822459ac
	if (cr0.eq) goto loc_822459AC;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r26,r11,920
	r26.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,5092
	r25.s64 = r11.s64 + 5092;
loc_82245920:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x822459a0
	if (!cr6.eq) goto loc_822459A0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82245964
	if (!cr6.eq) goto loc_82245964;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82245964
	if (!cr6.eq) goto loc_82245964;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822443c8
	sub_822443C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// mr r31,r28
	r31.u64 = r28.u64;
	// b 0x822459a4
	goto loc_822459A4;
loc_82245964:
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x822459a0
	if (cr6.eq) goto loc_822459A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_822459A0:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_822459A4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82245920
	if (!cr6.eq) goto loc_82245920;
loc_822459AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

