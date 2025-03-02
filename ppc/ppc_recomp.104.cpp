#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82332BD8"))) PPC_WEAK_FUNC(sub_82332BD8);
PPC_FUNC_IMPL(__imp__sub_82332BD8) {
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

__attribute__((alias("__imp__sub_82332C00"))) PPC_WEAK_FUNC(sub_82332C00);
PPC_FUNC_IMPL(__imp__sub_82332C00) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x82332c2c
	goto loc_82332C2C;
loc_82332C28:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_82332C2C:
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
	// bne 0x82332c28
	if (!cr0.eq) goto loc_82332C28;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82332c60
	if (cr6.eq) goto loc_82332C60;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82332C60:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82332c70
	if (cr0.eq) goto loc_82332C70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82332C70:
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

__attribute__((alias("__imp__sub_82332C8C"))) PPC_WEAK_FUNC(sub_82332C8C);
PPC_FUNC_IMPL(__imp__sub_82332C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332C90"))) PPC_WEAK_FUNC(sub_82332C90);
PPC_FUNC_IMPL(__imp__sub_82332C90) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82332b78
	sub_82332B78(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823320d8
	sub_823320D8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82332d2c
	if (!cr6.gt) goto loc_82332D2C;
	// li r29,0
	r29.s64 = 0;
loc_82332CE8:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x8233fee0
	sub_8233FEE0(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82341b20
	sub_82341B20(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x823406c0
	sub_823406C0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82332ce8
	if (cr6.lt) goto loc_82332CE8;
loc_82332D2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82332D34"))) PPC_WEAK_FUNC(sub_82332D34);
PPC_FUNC_IMPL(__imp__sub_82332D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332D38"))) PPC_WEAK_FUNC(sub_82332D38);
PPC_FUNC_IMPL(__imp__sub_82332D38) {
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
	// lwz r16,28240(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28240);
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
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82332d9c
	if (cr0.eq) goto loc_82332D9C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82332ae0
	sub_82332AE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82332da0
	goto loc_82332DA0;
loc_82332D9C:
	// li r11,0
	r11.s64 = 0;
loc_82332DA0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x823320d8
	sub_823320D8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82332e08
	if (!cr6.gt) goto loc_82332E08;
	// li r29,0
	r29.s64 = 0;
loc_82332DC4:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x8233fe50
	sub_8233FE50(ctx, base);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82341940
	sub_82341940(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82340a10
	sub_82340A10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82332dc4
	if (cr6.lt) goto loc_82332DC4;
loc_82332E08:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82332D40"))) PPC_WEAK_FUNC(sub_82332D40);
PPC_FUNC_IMPL(__imp__sub_82332D40) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82332d9c
	if (cr0.eq) goto loc_82332D9C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82332ae0
	sub_82332AE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82332da0
	goto loc_82332DA0;
loc_82332D9C:
	// li r11,0
	r11.s64 = 0;
loc_82332DA0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x823320d8
	sub_823320D8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82332e08
	if (!cr6.gt) goto loc_82332E08;
	// li r29,0
	r29.s64 = 0;
loc_82332DC4:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x8233fe50
	sub_8233FE50(ctx, base);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82341940
	sub_82341940(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82340a10
	sub_82340A10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82332dc4
	if (cr6.lt) goto loc_82332DC4;
loc_82332E08:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82332E10"))) PPC_WEAK_FUNC(sub_82332E10);
PPC_FUNC_IMPL(__imp__sub_82332E10) {
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

__attribute__((alias("__imp__sub_82332E38"))) PPC_WEAK_FUNC(sub_82332E38);
PPC_FUNC_IMPL(__imp__sub_82332E38) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82332e70
	if (cr6.eq) goto loc_82332E70;
	// bl 0x823313f0
	sub_823313F0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82332e8c
	goto loc_82332E8C;
loc_82332E70:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82332730
	sub_82332730(ctx, base);
loc_82332E8C:
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

__attribute__((alias("__imp__sub_82332EA0"))) PPC_WEAK_FUNC(sub_82332EA0);
PPC_FUNC_IMPL(__imp__sub_82332EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82332ecc
	if (cr0.eq) goto loc_82332ECC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82332680
	sub_82332680(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82332ECC:
	// li r29,0
	r29.s64 = 0;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// beq 0x82332ef0
	if (cr0.eq) goto loc_82332EF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82332680
	sub_82332680(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82332EF0:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82332EFC"))) PPC_WEAK_FUNC(sub_82332EFC);
PPC_FUNC_IMPL(__imp__sub_82332EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332F00"))) PPC_WEAK_FUNC(sub_82332F00);
PPC_FUNC_IMPL(__imp__sub_82332F00) {
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
	// bl 0x82332998
	sub_82332998(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82332f30
	if (cr0.eq) goto loc_82332F30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82332F30:
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

__attribute__((alias("__imp__sub_82332F4C"))) PPC_WEAK_FUNC(sub_82332F4C);
PPC_FUNC_IMPL(__imp__sub_82332F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332F50"))) PPC_WEAK_FUNC(sub_82332F50);
PPC_FUNC_IMPL(__imp__sub_82332F50) {
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
	// lwz r16,28320(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28320);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82332fb8
	if (!cr6.gt) goto loc_82332FB8;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_82332F90:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x82263250
	sub_82263250(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82332f90
	if (cr6.lt) goto loc_82332F90;
loc_82332FB8:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82330ad8
	sub_82330AD8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82333014
	if (!cr6.lt) goto loc_82333014;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82332FE4:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// bl 0x82332c90
	sub_82332C90(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82332fe4
	if (cr6.lt) goto loc_82332FE4;
loc_82333014:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82333024
	goto loc_82333024;
loc_82333020:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82333024:
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
	// bne 0x82333020
	if (!cr0.eq) goto loc_82333020;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82333058
	if (cr6.eq) goto loc_82333058;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333058:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82332F58"))) PPC_WEAK_FUNC(sub_82332F58);
PPC_FUNC_IMPL(__imp__sub_82332F58) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82332fb8
	if (!cr6.gt) goto loc_82332FB8;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_82332F90:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x82263250
	sub_82263250(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82332f90
	if (cr6.lt) goto loc_82332F90;
loc_82332FB8:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82330ad8
	sub_82330AD8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82333014
	if (!cr6.lt) goto loc_82333014;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82332FE4:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// bl 0x82332c90
	sub_82332C90(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82332fe4
	if (cr6.lt) goto loc_82332FE4;
loc_82333014:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82333024
	goto loc_82333024;
loc_82333020:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82333024:
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
	// bne 0x82333020
	if (!cr0.eq) goto loc_82333020;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82333058
	if (cr6.eq) goto loc_82333058;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333058:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82333060"))) PPC_WEAK_FUNC(sub_82333060);
PPC_FUNC_IMPL(__imp__sub_82333060) {
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

__attribute__((alias("__imp__sub_82333088"))) PPC_WEAK_FUNC(sub_82333088);
PPC_FUNC_IMPL(__imp__sub_82333088) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82332f58
	sub_82332F58(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r22,r31,64
	r22.s64 = r31.s64 + 64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x822a2330
	sub_822A2330(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x8233311c
	if (!cr0.gt) goto loc_8233311C;
	// li r28,0
	r28.s64 = 0;
loc_823330D8:
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x823330f0
	if (!cr6.eq) goto loc_823330F0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_823330F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822a2280
	sub_822A2280(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x823330d8
	if (cr6.lt) goto loc_823330D8;
loc_8233311C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x823332bc
	if (!cr6.gt) goto loc_823332BC;
	// li r23,0
	r23.s64 = 0;
loc_82333130:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r30,40(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// lwzx r29,r23,r11
	r29.u64 = PPC_LOAD_U32(r23.u32 + r11.u32);
	// beq cr6,0x82333170
	if (cr6.eq) goto loc_82333170;
loc_82333148:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lbz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8233c0e8
	sub_8233C0E8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82333148
	if (!cr6.eq) goto loc_82333148;
loc_82333170:
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x8233319c
	goto loc_8233319C;
loc_82333178:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lbz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
loc_8233319C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82333178
	if (!cr6.eq) goto loc_82333178;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwzx r11,r11,r23
	r11.u64 = PPC_LOAD_U32(r11.u32 + r23.u32);
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r25,r10
	r24.u64 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
loc_823331C0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823403a0
	sub_823403A0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82333230
	if (cr6.eq) goto loc_82333230;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_823331E8:
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x82333218
	goto loc_82333218;
loc_823331F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82333218:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x823331f0
	if (!cr6.eq) goto loc_823331F0;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x823331e8
	if (!cr6.eq) goto loc_823331E8;
loc_82333230:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// blt cr6,0x823331c0
	if (cr6.lt) goto loc_823331C0;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r25,r11
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r11.u32);
	// bl 0x8233fc98
	sub_8233FC98(ctx, base);
	// addi r28,r3,8
	r28.s64 = ctx.r3.s64 + 8;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x823332a8
	if (cr6.eq) goto loc_823332A8;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_82333264:
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x82333290
	goto loc_82333290;
loc_8233326C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82333290:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8233326c
	if (!cr6.eq) goto loc_8233326C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82333264
	if (!cr6.eq) goto loc_82333264;
loc_823332A8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82333130
	if (cr6.lt) goto loc_82333130;
loc_823332BC:
	// lwz r30,40(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// b 0x823332d0
	goto loc_823332D0;
loc_823332C4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8233a700
	sub_8233A700(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_823332D0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x823332c4
	if (!cr6.eq) goto loc_823332C4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x823420f8
	sub_823420F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823332EC"))) PPC_WEAK_FUNC(sub_823332EC);
PPC_FUNC_IMPL(__imp__sub_823332EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823332F0"))) PPC_WEAK_FUNC(sub_823332F0);
PPC_FUNC_IMPL(__imp__sub_823332F0) {
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
	// lwz r16,28392(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28392);
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
	// bl 0x82332898
	sub_82332898(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8233335c
	if (cr0.eq) goto loc_8233335C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8233335C:
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

__attribute__((alias("__imp__sub_823332F8"))) PPC_WEAK_FUNC(sub_823332F8);
PPC_FUNC_IMPL(__imp__sub_823332F8) {
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
	// bl 0x82332898
	sub_82332898(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8233335c
	if (cr0.eq) goto loc_8233335C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8233335C:
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

__attribute__((alias("__imp__sub_82333374"))) PPC_WEAK_FUNC(sub_82333374);
PPC_FUNC_IMPL(__imp__sub_82333374) {
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
	// bl 0x822aaf60
	sub_822AAF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233339C"))) PPC_WEAK_FUNC(sub_8233339C);
PPC_FUNC_IMPL(__imp__sub_8233339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823333A0"))) PPC_WEAK_FUNC(sub_823333A0);
PPC_FUNC_IMPL(__imp__sub_823333A0) {
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
	// lwz r16,28464(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28464);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82333404
	if (!cr0.eq) goto loc_82333404;
	// lwz r11,-24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// ble cr6,0x82333404
	if (!cr6.gt) goto loc_82333404;
	// li r30,0
	r30.s64 = 0;
loc_823333F0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd48
	return;
loc_82333404:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82330ff0
	sub_82330FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82332e38
	sub_82332E38(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// b 0x823333f0
	goto loc_823333F0;
}

__attribute__((alias("__imp__sub_823333A8"))) PPC_WEAK_FUNC(sub_823333A8);
PPC_FUNC_IMPL(__imp__sub_823333A8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82333404
	if (!cr0.eq) goto loc_82333404;
	// lwz r11,-24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// ble cr6,0x82333404
	if (!cr6.gt) goto loc_82333404;
	// li r30,0
	r30.s64 = 0;
loc_823333F0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd48
	return;
loc_82333404:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82330ff0
	sub_82330FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82332e38
	sub_82332E38(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// b 0x823333f0
	goto loc_823333F0;
}

__attribute__((alias("__imp__sub_8233343C"))) PPC_WEAK_FUNC(sub_8233343C);
PPC_FUNC_IMPL(__imp__sub_8233343C) {
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

__attribute__((alias("__imp__sub_82333464"))) PPC_WEAK_FUNC(sub_82333464);
PPC_FUNC_IMPL(__imp__sub_82333464) {
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
	// bl 0x82330fe0
	sub_82330FE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233348C"))) PPC_WEAK_FUNC(sub_8233348C);
PPC_FUNC_IMPL(__imp__sub_8233348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333490"))) PPC_WEAK_FUNC(sub_82333490);
PPC_FUNC_IMPL(__imp__sub_82333490) {
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
	// b 0x823334c8
	goto loc_823334C8;
loc_823334B0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-20
	ctx.r3.s64 = r11.s64 + -20;
	// bl 0x82686ff8
	sub_82686FF8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823334C8:
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
	// bne 0x823334b0
	if (!cr0.eq) goto loc_823334B0;
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

__attribute__((alias("__imp__sub_82333500"))) PPC_WEAK_FUNC(sub_82333500);
PPC_FUNC_IMPL(__imp__sub_82333500) {
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
	// lwz r16,28560(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28560);
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
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x823332f8
	sub_823332F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82332998
	sub_82332998(ctx, base);
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

__attribute__((alias("__imp__sub_82333508"))) PPC_WEAK_FUNC(sub_82333508);
PPC_FUNC_IMPL(__imp__sub_82333508) {
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
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x823332f8
	sub_823332F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82332998
	sub_82332998(ctx, base);
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

__attribute__((alias("__imp__sub_82333550"))) PPC_WEAK_FUNC(sub_82333550);
PPC_FUNC_IMPL(__imp__sub_82333550) {
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
	// bl 0x82332998
	sub_82332998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333578"))) PPC_WEAK_FUNC(sub_82333578);
PPC_FUNC_IMPL(__imp__sub_82333578) {
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
	// lwz r16,28720(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28720);
	// mflr r12
	// bl 0x8239bcf0
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
	// addi r11,r11,28620
	r11.s64 = r11.s64 + 28620;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r28
	r26.u64 = r28.u64;
	// ble cr6,0x82333648
	if (!cr6.gt) goto loc_82333648;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_823335BC:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwzx r27,r29,r11
	r27.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x823335dc
	if (cr0.eq) goto loc_823335DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340120
	sub_82340120(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823335DC:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwzx r27,r29,r11
	r27.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82333604
	if (cr0.eq) goto loc_82333604;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340c48
	sub_82340C48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82333604:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwzx r27,r29,r11
	r27.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x8233362c
	if (cr0.eq) goto loc_8233362C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82341d48
	sub_82341D48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8233362C:
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x823335bc
	if (cr6.lt) goto loc_823335BC;
loc_82333648:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r27,r28
	r27.u64 = r28.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823336ac
	if (cr0.eq) goto loc_823336AC;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82333664:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwzx r26,r29,r11
	r26.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x82333684
	if (cr0.eq) goto loc_82333684;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82332ea0
	sub_82332EA0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82333684:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82333664
	if (cr6.lt) goto loc_82333664;
loc_823336AC:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823336cc
	if (cr0.eq) goto loc_823336CC;
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
loc_823336CC:
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// stw r28,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823336e4
	if (cr0.eq) goto loc_823336E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332c00
	sub_82332C00(ctx, base);
loc_823336E4:
	// lwz r29,112(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stw r28,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r28.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82333704
	if (cr0.eq) goto loc_82333704;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82332920
	sub_82332920(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82333704:
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// stw r28,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333728
	if (cr0.eq) goto loc_82333728;
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
loc_82333728:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stw r28,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8233374c
	if (cr0.eq) goto loc_8233374C;
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
loc_8233374C:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// stw r28,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333770
	if (cr0.eq) goto loc_82333770;
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
loc_82333770:
	// stw r28,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r28.u32);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333794
	if (cr0.eq) goto loc_82333794;
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333794:
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823337b4
	if (cr0.eq) goto loc_823337B4;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823337B4:
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823337d4
	if (cr0.eq) goto loc_823337D4;
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823337D4:
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823337f4
	if (cr0.eq) goto loc_823337F4;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823337F4:
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333814
	if (cr0.eq) goto loc_82333814;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333814:
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333834
	if (cr0.eq) goto loc_82333834;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333834:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333854
	if (cr0.eq) goto loc_82333854;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333854:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,27324
	r11.s64 = r11.s64 + 27324;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82333580"))) PPC_WEAK_FUNC(sub_82333580);
PPC_FUNC_IMPL(__imp__sub_82333580) {
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
	// addi r11,r11,28620
	r11.s64 = r11.s64 + 28620;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r28
	r26.u64 = r28.u64;
	// ble cr6,0x82333648
	if (!cr6.gt) goto loc_82333648;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_823335BC:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwzx r27,r29,r11
	r27.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x823335dc
	if (cr0.eq) goto loc_823335DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340120
	sub_82340120(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823335DC:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwzx r27,r29,r11
	r27.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82333604
	if (cr0.eq) goto loc_82333604;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340c48
	sub_82340C48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82333604:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwzx r27,r29,r11
	r27.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x8233362c
	if (cr0.eq) goto loc_8233362C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82341d48
	sub_82341D48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8233362C:
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x823335bc
	if (cr6.lt) goto loc_823335BC;
loc_82333648:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r27,r28
	r27.u64 = r28.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823336ac
	if (cr0.eq) goto loc_823336AC;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82333664:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwzx r26,r29,r11
	r26.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x82333684
	if (cr0.eq) goto loc_82333684;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82332ea0
	sub_82332EA0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82333684:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r28,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82333664
	if (cr6.lt) goto loc_82333664;
loc_823336AC:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823336cc
	if (cr0.eq) goto loc_823336CC;
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
loc_823336CC:
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// stw r28,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823336e4
	if (cr0.eq) goto loc_823336E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332c00
	sub_82332C00(ctx, base);
loc_823336E4:
	// lwz r29,112(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stw r28,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r28.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82333704
	if (cr0.eq) goto loc_82333704;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82332920
	sub_82332920(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82333704:
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// stw r28,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333728
	if (cr0.eq) goto loc_82333728;
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
loc_82333728:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stw r28,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8233374c
	if (cr0.eq) goto loc_8233374C;
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
loc_8233374C:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// stw r28,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333770
	if (cr0.eq) goto loc_82333770;
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
loc_82333770:
	// stw r28,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r28.u32);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333794
	if (cr0.eq) goto loc_82333794;
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333794:
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823337b4
	if (cr0.eq) goto loc_823337B4;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823337B4:
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823337d4
	if (cr0.eq) goto loc_823337D4;
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823337D4:
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823337f4
	if (cr0.eq) goto loc_823337F4;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823337F4:
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333814
	if (cr0.eq) goto loc_82333814;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333814:
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333834
	if (cr0.eq) goto loc_82333834;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333834:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333854
	if (cr0.eq) goto loc_82333854;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333854:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,27324
	r11.s64 = r11.s64 + 27324;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82333868"))) PPC_WEAK_FUNC(sub_82333868);
PPC_FUNC_IMPL(__imp__sub_82333868) {
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
	// bl 0x82330e18
	sub_82330E18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333890"))) PPC_WEAK_FUNC(sub_82333890);
PPC_FUNC_IMPL(__imp__sub_82333890) {
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

__attribute__((alias("__imp__sub_823338BC"))) PPC_WEAK_FUNC(sub_823338BC);
PPC_FUNC_IMPL(__imp__sub_823338BC) {
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

__attribute__((alias("__imp__sub_823338E8"))) PPC_WEAK_FUNC(sub_823338E8);
PPC_FUNC_IMPL(__imp__sub_823338E8) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
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

__attribute__((alias("__imp__sub_82333914"))) PPC_WEAK_FUNC(sub_82333914);
PPC_FUNC_IMPL(__imp__sub_82333914) {
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
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
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

__attribute__((alias("__imp__sub_82333940"))) PPC_WEAK_FUNC(sub_82333940);
PPC_FUNC_IMPL(__imp__sub_82333940) {
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
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
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

__attribute__((alias("__imp__sub_8233396C"))) PPC_WEAK_FUNC(sub_8233396C);
PPC_FUNC_IMPL(__imp__sub_8233396C) {
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
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
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

__attribute__((alias("__imp__sub_82333998"))) PPC_WEAK_FUNC(sub_82333998);
PPC_FUNC_IMPL(__imp__sub_82333998) {
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
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
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

__attribute__((alias("__imp__sub_823339C4"))) PPC_WEAK_FUNC(sub_823339C4);
PPC_FUNC_IMPL(__imp__sub_823339C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823339C8"))) PPC_WEAK_FUNC(sub_823339C8);
PPC_FUNC_IMPL(__imp__sub_823339C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x823333a8
	sub_823333A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82333a24
	if (!cr0.eq) goto loc_82333A24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x8235fcb8
	sub_8235FCB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82330f38
	sub_82330F38(ctx, base);
loc_82333A24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82333A2C"))) PPC_WEAK_FUNC(sub_82333A2C);
PPC_FUNC_IMPL(__imp__sub_82333A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333A30"))) PPC_WEAK_FUNC(sub_82333A30);
PPC_FUNC_IMPL(__imp__sub_82333A30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x823333a8
	sub_823333A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82333a8c
	if (!cr0.eq) goto loc_82333A8C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x8235fcb8
	sub_8235FCB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82330f38
	sub_82330F38(ctx, base);
loc_82333A8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82333A94"))) PPC_WEAK_FUNC(sub_82333A94);
PPC_FUNC_IMPL(__imp__sub_82333A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333A98"))) PPC_WEAK_FUNC(sub_82333A98);
PPC_FUNC_IMPL(__imp__sub_82333A98) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,28888(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28888);
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r30,0
	r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,28620
	ctx.r10.s64 = ctx.r10.s64 + 28620;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r29,28
	r11.s64 = r29.s64 + 28;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// stb r8,16(r29)
	PPC_STORE_U8(r29.u32 + 16, ctx.r8.u8);
	// stw r9,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r9.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r9.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,40
	r11.s64 = r29.s64 + 40;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,52
	r11.s64 = r29.s64 + 52;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,64
	r11.s64 = r29.s64 + 64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,76
	r11.s64 = r29.s64 + 76;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,88
	r11.s64 = r29.s64 + 88;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,100
	r11.s64 = r29.s64 + 100;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333b8c
	if (cr0.eq) goto loc_82333B8C;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// b 0x82333b90
	goto loc_82333B90;
loc_82333B8C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82333B90:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r10,112(r29)
	PPC_STORE_U32(r29.u32 + 112, ctx.r10.u32);
	// stw r30,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r30.u32);
	// stw r30,120(r29)
	PPC_STORE_U32(r29.u32 + 120, r30.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r11,28308
	r28.s64 = r11.s64 + 28308;
	// beq 0x82333be0
	if (cr0.eq) goto loc_82333BE0;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// b 0x82333be4
	goto loc_82333BE4;
loc_82333BE0:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82333BE4:
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r9,124(r29)
	PPC_STORE_U32(r29.u32 + 124, ctx.r9.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333c3c
	if (cr0.eq) goto loc_82333C3C;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r8,r8,28548
	ctx.r8.s64 = ctx.r8.s64 + 28548;
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// b 0x82333c40
	goto loc_82333C40;
loc_82333C3C:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_82333C40:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r7,128(r29)
	PPC_STORE_U32(r29.u32 + 128, ctx.r7.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333c80
	if (cr0.eq) goto loc_82333C80;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// b 0x82333c84
	goto loc_82333C84;
loc_82333C80:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82333C84:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r9,132(r29)
	PPC_STORE_U32(r29.u32 + 132, ctx.r9.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 136, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82333AA0"))) PPC_WEAK_FUNC(sub_82333AA0);
PPC_FUNC_IMPL(__imp__sub_82333AA0) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r30,0
	r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,28620
	ctx.r10.s64 = ctx.r10.s64 + 28620;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r29,28
	r11.s64 = r29.s64 + 28;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// stb r8,16(r29)
	PPC_STORE_U8(r29.u32 + 16, ctx.r8.u8);
	// stw r9,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r9.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r9.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,40
	r11.s64 = r29.s64 + 40;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,52
	r11.s64 = r29.s64 + 52;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,64
	r11.s64 = r29.s64 + 64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,76
	r11.s64 = r29.s64 + 76;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,88
	r11.s64 = r29.s64 + 88;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r11,r29,100
	r11.s64 = r29.s64 + 100;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333b8c
	if (cr0.eq) goto loc_82333B8C;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// b 0x82333b90
	goto loc_82333B90;
loc_82333B8C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82333B90:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r10,112(r29)
	PPC_STORE_U32(r29.u32 + 112, ctx.r10.u32);
	// stw r30,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r30.u32);
	// stw r30,120(r29)
	PPC_STORE_U32(r29.u32 + 120, r30.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r11,28308
	r28.s64 = r11.s64 + 28308;
	// beq 0x82333be0
	if (cr0.eq) goto loc_82333BE0;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// b 0x82333be4
	goto loc_82333BE4;
loc_82333BE0:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82333BE4:
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r9,124(r29)
	PPC_STORE_U32(r29.u32 + 124, ctx.r9.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333c3c
	if (cr0.eq) goto loc_82333C3C;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r8,r8,28548
	ctx.r8.s64 = ctx.r8.s64 + 28548;
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// b 0x82333c40
	goto loc_82333C40;
loc_82333C3C:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_82333C40:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r7,128(r29)
	PPC_STORE_U32(r29.u32 + 128, ctx.r7.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82333c80
	if (cr0.eq) goto loc_82333C80;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// b 0x82333c84
	goto loc_82333C84;
loc_82333C80:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82333C84:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r9,132(r29)
	PPC_STORE_U32(r29.u32 + 132, ctx.r9.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 136, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82333CA0"))) PPC_WEAK_FUNC(sub_82333CA0);
PPC_FUNC_IMPL(__imp__sub_82333CA0) {
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
	// bl 0x82330e18
	sub_82330E18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333CC8"))) PPC_WEAK_FUNC(sub_82333CC8);
PPC_FUNC_IMPL(__imp__sub_82333CC8) {
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
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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

__attribute__((alias("__imp__sub_82333CF4"))) PPC_WEAK_FUNC(sub_82333CF4);
PPC_FUNC_IMPL(__imp__sub_82333CF4) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
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

__attribute__((alias("__imp__sub_82333D20"))) PPC_WEAK_FUNC(sub_82333D20);
PPC_FUNC_IMPL(__imp__sub_82333D20) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
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

__attribute__((alias("__imp__sub_82333D4C"))) PPC_WEAK_FUNC(sub_82333D4C);
PPC_FUNC_IMPL(__imp__sub_82333D4C) {
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
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
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

__attribute__((alias("__imp__sub_82333D78"))) PPC_WEAK_FUNC(sub_82333D78);
PPC_FUNC_IMPL(__imp__sub_82333D78) {
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

__attribute__((alias("__imp__sub_82333DA4"))) PPC_WEAK_FUNC(sub_82333DA4);
PPC_FUNC_IMPL(__imp__sub_82333DA4) {
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
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
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

__attribute__((alias("__imp__sub_82333DD0"))) PPC_WEAK_FUNC(sub_82333DD0);
PPC_FUNC_IMPL(__imp__sub_82333DD0) {
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
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
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

__attribute__((alias("__imp__sub_82333DFC"))) PPC_WEAK_FUNC(sub_82333DFC);
PPC_FUNC_IMPL(__imp__sub_82333DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333E00"))) PPC_WEAK_FUNC(sub_82333E00);
PPC_FUNC_IMPL(__imp__sub_82333E00) {
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
	// bl 0x82333580
	sub_82333580(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82333e30
	if (cr0.eq) goto loc_82333E30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82333E30:
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

__attribute__((alias("__imp__sub_82333E4C"))) PPC_WEAK_FUNC(sub_82333E4C);
PPC_FUNC_IMPL(__imp__sub_82333E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333E50"))) PPC_WEAK_FUNC(sub_82333E50);
PPC_FUNC_IMPL(__imp__sub_82333E50) {
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
	// bl 0x82333508
	sub_82333508(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82333e80
	if (cr0.eq) goto loc_82333E80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82333E80:
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

__attribute__((alias("__imp__sub_82333E9C"))) PPC_WEAK_FUNC(sub_82333E9C);
PPC_FUNC_IMPL(__imp__sub_82333E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333EA0"))) PPC_WEAK_FUNC(sub_82333EA0);
PPC_FUNC_IMPL(__imp__sub_82333EA0) {
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
	// lwz r16,28952(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28952);
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
	// bl 0x82333490
	sub_82333490(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333f0c
	if (cr0.eq) goto loc_82333F0C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333F0C:
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

__attribute__((alias("__imp__sub_82333EA8"))) PPC_WEAK_FUNC(sub_82333EA8);
PPC_FUNC_IMPL(__imp__sub_82333EA8) {
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
	// bl 0x82333490
	sub_82333490(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82333f0c
	if (cr0.eq) goto loc_82333F0C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333F0C:
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

__attribute__((alias("__imp__sub_82333F24"))) PPC_WEAK_FUNC(sub_82333F24);
PPC_FUNC_IMPL(__imp__sub_82333F24) {
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
	// bl 0x822aaf60
	sub_822AAF60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333F4C"))) PPC_WEAK_FUNC(sub_82333F4C);
PPC_FUNC_IMPL(__imp__sub_82333F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333F50"))) PPC_WEAK_FUNC(sub_82333F50);
PPC_FUNC_IMPL(__imp__sub_82333F50) {
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
	// lwz r16,29080(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29080);
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
	// addi r11,r30,256
	r11.s64 = r30.s64 + 256;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r11,r30,208
	r11.s64 = r30.s64 + 208;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// b 0x82333fa8
	goto loc_82333FA8;
loc_82333FA4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82333FA8:
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
	// bne 0x82333fa4
	if (!cr0.eq) goto loc_82333FA4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82333fdc
	if (cr6.eq) goto loc_82333FDC;
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333FDC:
	// addi r3,r30,144
	ctx.r3.s64 = r30.s64 + 144;
	// bl 0x82120a98
	sub_82120A98(ctx, base);
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// bl 0x82120a98
	sub_82120A98(ctx, base);
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8233400c
	if (cr0.eq) goto loc_8233400C;
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8233400C:
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x82333ea8
	sub_82333EA8(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,26712
	r11.s64 = r11.s64 + 26712;
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

__attribute__((alias("__imp__sub_82333F58"))) PPC_WEAK_FUNC(sub_82333F58);
PPC_FUNC_IMPL(__imp__sub_82333F58) {
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
	// addi r11,r30,256
	r11.s64 = r30.s64 + 256;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r11,r30,208
	r11.s64 = r30.s64 + 208;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// b 0x82333fa8
	goto loc_82333FA8;
loc_82333FA4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82333FA8:
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
	// bne 0x82333fa4
	if (!cr0.eq) goto loc_82333FA4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82333fdc
	if (cr6.eq) goto loc_82333FDC;
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82333FDC:
	// addi r3,r30,144
	ctx.r3.s64 = r30.s64 + 144;
	// bl 0x82120a98
	sub_82120A98(ctx, base);
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// bl 0x82120a98
	sub_82120A98(ctx, base);
	// lwz r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8233400c
	if (cr0.eq) goto loc_8233400C;
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8233400C:
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// bl 0x82333ea8
	sub_82333EA8(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,26712
	r11.s64 = r11.s64 + 26712;
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

__attribute__((alias("__imp__sub_82334040"))) PPC_WEAK_FUNC(sub_82334040);
PPC_FUNC_IMPL(__imp__sub_82334040) {
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
	// bl 0x8232f978
	sub_8232F978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334068"))) PPC_WEAK_FUNC(sub_82334068);
PPC_FUNC_IMPL(__imp__sub_82334068) {
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
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334094"))) PPC_WEAK_FUNC(sub_82334094);
PPC_FUNC_IMPL(__imp__sub_82334094) {
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
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
	// bl 0x82333ea8
	sub_82333EA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823340C0"))) PPC_WEAK_FUNC(sub_823340C0);
PPC_FUNC_IMPL(__imp__sub_823340C0) {
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
	// addi r3,r11,116
	ctx.r3.s64 = r11.s64 + 116;
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

__attribute__((alias("__imp__sub_823340EC"))) PPC_WEAK_FUNC(sub_823340EC);
PPC_FUNC_IMPL(__imp__sub_823340EC) {
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
	// addi r3,r11,136
	ctx.r3.s64 = r11.s64 + 136;
	// bl 0x82120b48
	sub_82120B48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334118"))) PPC_WEAK_FUNC(sub_82334118);
PPC_FUNC_IMPL(__imp__sub_82334118) {
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
	// addi r3,r11,144
	ctx.r3.s64 = r11.s64 + 144;
	// bl 0x82120b48
	sub_82120B48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334144"))) PPC_WEAK_FUNC(sub_82334144);
PPC_FUNC_IMPL(__imp__sub_82334144) {
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

__attribute__((alias("__imp__sub_82334170"))) PPC_WEAK_FUNC(sub_82334170);
PPC_FUNC_IMPL(__imp__sub_82334170) {
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
	// addi r3,r11,188
	ctx.r3.s64 = r11.s64 + 188;
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

__attribute__((alias("__imp__sub_8233419C"))) PPC_WEAK_FUNC(sub_8233419C);
PPC_FUNC_IMPL(__imp__sub_8233419C) {
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
	// addi r3,r11,208
	ctx.r3.s64 = r11.s64 + 208;
	// bl 0x82330e70
	sub_82330E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823341C8"))) PPC_WEAK_FUNC(sub_823341C8);
PPC_FUNC_IMPL(__imp__sub_823341C8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,29256(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29256);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r4,r11,27696
	ctx.r4.s64 = r11.s64 + 27696;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d10
	sub_82270D10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r27,r11,29208
	r27.s64 = r11.s64 + 29208;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r10,28280
	ctx.r4.s64 = ctx.r10.s64 + 28280;
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82334384
	if (!cr6.gt) goto loc_82334384;
	// addi r27,r30,76
	r27.s64 = r30.s64 + 76;
	// addi r26,r30,100
	r26.s64 = r30.s64 + 100;
	// addi r25,r30,88
	r25.s64 = r30.s64 + 88;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_823342C4:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823342ec
	if (cr0.eq) goto loc_823342EC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8233fda8
	sub_8233FDA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823342f0
	goto loc_823342F0;
loc_823342EC:
	// li r11,0
	r11.s64 = 0;
loc_823342F0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82332140
	sub_82332140(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82334334
	if (cr0.eq) goto loc_82334334;
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 28);
	// li r11,24
	r11.s64 = 24;
	// lwz r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r4,r10,r11
	ctx.r4.s32 = ctx.r10.s32 / r11.s32;
	// bl 0x823418c0
	sub_823418C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82334338
	goto loc_82334338;
loc_82334334:
	// li r11,0
	r11.s64 = 0;
loc_82334338:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82332210
	sub_82332210(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82334368
	if (cr0.eq) goto loc_82334368;
	// bl 0x823405c0
	sub_823405C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8233436c
	goto loc_8233436C;
loc_82334368:
	// li r11,0
	r11.s64 = 0;
loc_8233436C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x823321a8
	sub_823321A8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x823342c4
	if (!cr0.eq) goto loc_823342C4;
loc_82334384:
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lbz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// addi r9,r30,120
	ctx.r9.s64 = r30.s64 + 120;
	// addi r8,r30,116
	ctx.r8.s64 = r30.s64 + 116;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,-2472(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -2472);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82346fa8
	sub_82346FA8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82330600
	sub_82330600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82344148
	sub_82344148(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82344558
	sub_82344558(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,14640
	ctx.r4.s64 = r11.s64 + 14640;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
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
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82346a18
	sub_82346A18(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82333088
	sub_82333088(ctx, base);
	// lwz r3,-2472(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -2472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82334448
	if (cr6.eq) goto loc_82334448;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x8232fc80
	sub_8232FC80(ctx, base);
	// lwz r3,-2472(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -2472);
	// bl 0x8232fcd0
	sub_8232FCD0(ctx, base);
loc_82334448:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82333f58
	sub_82333F58(ctx, base);
	// addi r1,r31,496
	ctx.r1.s64 = r31.s64 + 496;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823341D0"))) PPC_WEAK_FUNC(sub_823341D0);
PPC_FUNC_IMPL(__imp__sub_823341D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r4,r11,27696
	ctx.r4.s64 = r11.s64 + 27696;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d10
	sub_82270D10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r27,r11,29208
	r27.s64 = r11.s64 + 29208;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r10,28280
	ctx.r4.s64 = ctx.r10.s64 + 28280;
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82334384
	if (!cr6.gt) goto loc_82334384;
	// addi r27,r30,76
	r27.s64 = r30.s64 + 76;
	// addi r26,r30,100
	r26.s64 = r30.s64 + 100;
	// addi r25,r30,88
	r25.s64 = r30.s64 + 88;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_823342C4:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823342ec
	if (cr0.eq) goto loc_823342EC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x8233fda8
	sub_8233FDA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823342f0
	goto loc_823342F0;
loc_823342EC:
	// li r11,0
	r11.s64 = 0;
loc_823342F0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82332140
	sub_82332140(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82334334
	if (cr0.eq) goto loc_82334334;
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 28);
	// li r11,24
	r11.s64 = 24;
	// lwz r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r4,r10,r11
	ctx.r4.s32 = ctx.r10.s32 / r11.s32;
	// bl 0x823418c0
	sub_823418C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82334338
	goto loc_82334338;
loc_82334334:
	// li r11,0
	r11.s64 = 0;
loc_82334338:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82332210
	sub_82332210(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82334368
	if (cr0.eq) goto loc_82334368;
	// bl 0x823405c0
	sub_823405C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8233436c
	goto loc_8233436C;
loc_82334368:
	// li r11,0
	r11.s64 = 0;
loc_8233436C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x823321a8
	sub_823321A8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x823342c4
	if (!cr0.eq) goto loc_823342C4;
loc_82334384:
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lbz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// addi r9,r30,120
	ctx.r9.s64 = r30.s64 + 120;
	// addi r8,r30,116
	ctx.r8.s64 = r30.s64 + 116;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,-2472(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -2472);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82346fa8
	sub_82346FA8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82330600
	sub_82330600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82344148
	sub_82344148(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82344558
	sub_82344558(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,14640
	ctx.r4.s64 = r11.s64 + 14640;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
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
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82346a18
	sub_82346A18(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82333088
	sub_82333088(ctx, base);
	// lwz r3,-2472(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -2472);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82334448
	if (cr6.eq) goto loc_82334448;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x8232fc80
	sub_8232FC80(ctx, base);
	// lwz r3,-2472(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -2472);
	// bl 0x8232fcd0
	sub_8232FCD0(ctx, base);
loc_82334448:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82333f58
	sub_82333F58(ctx, base);
	// addi r1,r31,496
	ctx.r1.s64 = r31.s64 + 496;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82334458"))) PPC_WEAK_FUNC(sub_82334458);
PPC_FUNC_IMPL(__imp__sub_82334458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-496
	r31.s64 = r12.s64 + -496;
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

__attribute__((alias("__imp__sub_82334480"))) PPC_WEAK_FUNC(sub_82334480);
PPC_FUNC_IMPL(__imp__sub_82334480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-496
	r31.s64 = r12.s64 + -496;
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

__attribute__((alias("__imp__sub_823344A8"))) PPC_WEAK_FUNC(sub_823344A8);
PPC_FUNC_IMPL(__imp__sub_823344A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-496
	r31.s64 = r12.s64 + -496;
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

__attribute__((alias("__imp__sub_823344D0"))) PPC_WEAK_FUNC(sub_823344D0);
PPC_FUNC_IMPL(__imp__sub_823344D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-496
	r31.s64 = r12.s64 + -496;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82333f58
	sub_82333F58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823344F8"))) PPC_WEAK_FUNC(sub_823344F8);
PPC_FUNC_IMPL(__imp__sub_823344F8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,29376(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29376);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,2888
	ctx.r4.s64 = r11.s64 + 2888;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357a10
	sub_82357A10(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823341d0
	sub_823341D0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82334500"))) PPC_WEAK_FUNC(sub_82334500);
PPC_FUNC_IMPL(__imp__sub_82334500) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,2888
	ctx.r4.s64 = r11.s64 + 2888;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
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
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357a10
	sub_82357A10(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823341d0
	sub_823341D0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82334598"))) PPC_WEAK_FUNC(sub_82334598);
PPC_FUNC_IMPL(__imp__sub_82334598) {
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

__attribute__((alias("__imp__sub_823345C0"))) PPC_WEAK_FUNC(sub_823345C0);
PPC_FUNC_IMPL(__imp__sub_823345C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// lbz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// rlwimi r11,r10,7,0,24
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFF80) | (r11.u64 & 0xFFFFFFFF0000007F);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, r11.u8);
	// lbz r11,25(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// rlwimi r10,r11,6,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r10,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r10.u8);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334628"))) PPC_WEAK_FUNC(sub_82334628);
PPC_FUNC_IMPL(__imp__sub_82334628) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,14(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// b 0x82347688
	sub_82347688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334630"))) PPC_WEAK_FUNC(sub_82334630);
PPC_FUNC_IMPL(__imp__sub_82334630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233463C:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and. r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82334658
	if (cr0.eq) goto loc_82334658;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// andc. r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_82334658:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// blt cr6,0x8233463c
	if (cr6.lt) goto loc_8233463C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233466C"))) PPC_WEAK_FUNC(sub_8233466C);
PPC_FUNC_IMPL(__imp__sub_8233466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334670"))) PPC_WEAK_FUNC(sub_82334670);
PPC_FUNC_IMPL(__imp__sub_82334670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823346a8
	if (cr6.eq) goto loc_823346A8;
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
	// li r11,1
	r11.s64 = 1;
	// bne 0x823346ac
	if (!cr0.eq) goto loc_823346AC;
loc_823346A8:
	// li r11,0
	r11.s64 = 0;
loc_823346AC:
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

__attribute__((alias("__imp__sub_823346C0"))) PPC_WEAK_FUNC(sub_823346C0);
PPC_FUNC_IMPL(__imp__sub_823346C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823346f8
	if (cr6.eq) goto loc_823346F8;
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
	// li r11,1
	r11.s64 = 1;
	// bne 0x823346fc
	if (!cr0.eq) goto loc_823346FC;
loc_823346F8:
	// li r11,0
	r11.s64 = 0;
loc_823346FC:
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

__attribute__((alias("__imp__sub_82334710"))) PPC_WEAK_FUNC(sub_82334710);
PPC_FUNC_IMPL(__imp__sub_82334710) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x822f7878
	sub_822F7878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334718"))) PPC_WEAK_FUNC(sub_82334718);
PPC_FUNC_IMPL(__imp__sub_82334718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	f0.f64 = double(temp.f32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// b 0x822f7878
	sub_822F7878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334728"))) PPC_WEAK_FUNC(sub_82334728);
PPC_FUNC_IMPL(__imp__sub_82334728) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x822f7878
	sub_822F7878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334730"))) PPC_WEAK_FUNC(sub_82334730);
PPC_FUNC_IMPL(__imp__sub_82334730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82334744"))) PPC_WEAK_FUNC(sub_82334744);
PPC_FUNC_IMPL(__imp__sub_82334744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334748"))) PPC_WEAK_FUNC(sub_82334748);
PPC_FUNC_IMPL(__imp__sub_82334748) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8233477c
	if (cr0.eq) goto loc_8233477C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x82334794
	goto loc_82334794;
loc_8233477C:
	// lbz r11,160(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8233479c
	if (cr0.eq) goto loc_8233479C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_82334794:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8233479C:
	// stb r30,160(r31)
	PPC_STORE_U8(r31.u32 + 160, r30.u8);
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

__attribute__((alias("__imp__sub_823347B8"))) PPC_WEAK_FUNC(sub_823347B8);
PPC_FUNC_IMPL(__imp__sub_823347B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823347c8
	if (cr0.eq) goto loc_823347C8;
	// lfs f1,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823347d0
	goto loc_823347D0;
loc_823347C8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
loc_823347D0:
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x822f7878
	sub_822F7878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823347D8"))) PPC_WEAK_FUNC(sub_823347D8);
PPC_FUNC_IMPL(__imp__sub_823347D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823347ec
	if (cr6.eq) goto loc_823347EC;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x823347f0
	if (!cr6.eq) goto loc_823347F0;
loc_823347EC:
	// li r11,1
	r11.s64 = 1;
loc_823347F0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, r11.u8);
	// beq 0x82334804
	if (cr0.eq) goto loc_82334804;
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8233480c
	goto loc_8233480C;
loc_82334804:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
loc_8233480C:
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// b 0x822f7878
	sub_822F7878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334814"))) PPC_WEAK_FUNC(sub_82334814);
PPC_FUNC_IMPL(__imp__sub_82334814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334818"))) PPC_WEAK_FUNC(sub_82334818);
PPC_FUNC_IMPL(__imp__sub_82334818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,29440
	ctx.r4.s64 = ctx.r10.s64 + 29440;
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// stb r11,41(r31)
	PPC_STORE_U8(r31.u32 + 41, r11.u8);
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822f8110
	sub_822F8110(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823348FC"))) PPC_WEAK_FUNC(sub_823348FC);
PPC_FUNC_IMPL(__imp__sub_823348FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334900"))) PPC_WEAK_FUNC(sub_82334900);
PPC_FUNC_IMPL(__imp__sub_82334900) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82334988
	if (cr0.eq) goto loc_82334988;
	// bl 0x826a1050
	sub_826A1050(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-11844(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11844);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// ble cr6,0x82334958
	if (!cr6.gt) goto loc_82334958;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82334958:
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// bne cr6,0x82334970
	if (!cr6.eq) goto loc_82334970;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82334988
	if (cr6.eq) goto loc_82334988;
loc_82334970:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x826a0f70
	sub_826A0F70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stb r11,41(r31)
	PPC_STORE_U8(r31.u32 + 41, r11.u8);
loc_82334988:
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

__attribute__((alias("__imp__sub_823349A0"))) PPC_WEAK_FUNC(sub_823349A0);
PPC_FUNC_IMPL(__imp__sub_823349A0) {
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
	// lwz r16,29456(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29456);
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
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82334aa8
	if (cr6.eq) goto loc_82334AA8;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823349f0
	if (cr0.eq) goto loc_823349F0;
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
loc_823349F0:
	// li r27,0
	r27.s64 = 0;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82334a54
	if (!cr0.eq) goto loc_82334A54;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x82334a44
	if (cr0.eq) goto loc_82334A44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82347fc0
	sub_82347FC0(ctx, base);
	// b 0x82334a48
	goto loc_82334A48;
loc_82334A44:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82334A48:
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// stb r27,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r27.u8);
	// b 0x82334aa8
	goto loc_82334AA8;
loc_82334A54:
	// lbz r11,52(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x823490d0
	sub_823490D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82334aa4
	if (cr6.gt) goto loc_82334AA4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82334AA4:
	// stb r11,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r11.u8);
loc_82334AA8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823349A8"))) PPC_WEAK_FUNC(sub_823349A8);
PPC_FUNC_IMPL(__imp__sub_823349A8) {
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
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82334aa8
	if (cr6.eq) goto loc_82334AA8;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823349f0
	if (cr0.eq) goto loc_823349F0;
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
loc_823349F0:
	// li r27,0
	r27.s64 = 0;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82334a54
	if (!cr0.eq) goto loc_82334A54;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x82334a44
	if (cr0.eq) goto loc_82334A44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82347fc0
	sub_82347FC0(ctx, base);
	// b 0x82334a48
	goto loc_82334A48;
loc_82334A44:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82334A48:
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// stb r27,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r27.u8);
	// b 0x82334aa8
	goto loc_82334AA8;
loc_82334A54:
	// lbz r11,52(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x823490d0
	sub_823490D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82334aa4
	if (cr6.gt) goto loc_82334AA4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82334AA4:
	// stb r11,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r11.u8);
loc_82334AA8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82334AB0"))) PPC_WEAK_FUNC(sub_82334AB0);
PPC_FUNC_IMPL(__imp__sub_82334AB0) {
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

__attribute__((alias("__imp__sub_82334AD8"))) PPC_WEAK_FUNC(sub_82334AD8);
PPC_FUNC_IMPL(__imp__sub_82334AD8) {
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
	// beq 0x82334b18
	if (cr0.eq) goto loc_82334B18;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-31536
	ctx.r3.s64 = r11.s64 + -31536;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82334b20
	goto loc_82334B20;
loc_82334B18:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82334B20:
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

__attribute__((alias("__imp__sub_82334B3C"))) PPC_WEAK_FUNC(sub_82334B3C);
PPC_FUNC_IMPL(__imp__sub_82334B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334B40"))) PPC_WEAK_FUNC(sub_82334B40);
PPC_FUNC_IMPL(__imp__sub_82334B40) {
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
	// beq 0x82334b80
	if (cr0.eq) goto loc_82334B80;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-31508
	ctx.r3.s64 = r11.s64 + -31508;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82334b88
	goto loc_82334B88;
loc_82334B80:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82334B88:
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

__attribute__((alias("__imp__sub_82334BA4"))) PPC_WEAK_FUNC(sub_82334BA4);
PPC_FUNC_IMPL(__imp__sub_82334BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334BA8"))) PPC_WEAK_FUNC(sub_82334BA8);
PPC_FUNC_IMPL(__imp__sub_82334BA8) {
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
	// lwz r16,29528(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29528);
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
	// li r29,0
	r29.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82334c80
	if (!cr0.gt) goto loc_82334C80;
	// li r27,0
	r27.s64 = 0;
loc_82334BE4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82334c10
	if (!cr6.eq) goto loc_82334C10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82334bb0
	sub_82334BB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82334c68
	goto loc_82334C68;
loc_82334C10:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82334c3c
	if (!cr0.eq) goto loc_82334C3C;
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x82317b88
	sub_82317B88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82334c40
	if (!cr0.eq) goto loc_82334C40;
loc_82334C3C:
	// li r11,0
	r11.s64 = 0;
loc_82334C40:
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82334c64
	if (cr0.eq) goto loc_82334C64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82334c64
	if (cr0.eq) goto loc_82334C64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82334C64:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82334C68:
	// bne 0x82334c8c
	if (!cr0.eq) goto loc_82334C8C;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82334be4
	if (cr6.lt) goto loc_82334BE4;
loc_82334C80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334C84:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
loc_82334C8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82334c84
	goto loc_82334C84;
}

__attribute__((alias("__imp__sub_82334BB0"))) PPC_WEAK_FUNC(sub_82334BB0);
PPC_FUNC_IMPL(__imp__sub_82334BB0) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82334c80
	if (!cr0.gt) goto loc_82334C80;
	// li r27,0
	r27.s64 = 0;
loc_82334BE4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82334c10
	if (!cr6.eq) goto loc_82334C10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82334bb0
	sub_82334BB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82334c68
	goto loc_82334C68;
loc_82334C10:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82334c3c
	if (!cr0.eq) goto loc_82334C3C;
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x82317b88
	sub_82317B88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82334c40
	if (!cr0.eq) goto loc_82334C40;
loc_82334C3C:
	// li r11,0
	r11.s64 = 0;
loc_82334C40:
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82334c64
	if (cr0.eq) goto loc_82334C64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82334c64
	if (cr0.eq) goto loc_82334C64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82334C64:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82334C68:
	// bne 0x82334c8c
	if (!cr0.eq) goto loc_82334C8C;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82334be4
	if (cr6.lt) goto loc_82334BE4;
loc_82334C80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334C84:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
loc_82334C8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82334c84
	goto loc_82334C84;
}

__attribute__((alias("__imp__sub_82334C94"))) PPC_WEAK_FUNC(sub_82334C94);
PPC_FUNC_IMPL(__imp__sub_82334C94) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82334cc4
	if (cr0.eq) goto loc_82334CC4;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_82334CC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334CD4"))) PPC_WEAK_FUNC(sub_82334CD4);
PPC_FUNC_IMPL(__imp__sub_82334CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334CD8"))) PPC_WEAK_FUNC(sub_82334CD8);
PPC_FUNC_IMPL(__imp__sub_82334CD8) {
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
	// lwz r16,29624(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29624);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,-2460(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -2460);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-2464
	r29.s64 = ctx.r10.s64 + -2464;
	// bne 0x82334d28
	if (!cr0.eq) goto loc_82334D28;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-2460(r30)
	PPC_STORE_U32(r30.u32 + -2460, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29600
	ctx.r4.s64 = r11.s64 + 29600;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-2460(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -2460);
loc_82334D28:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82334d4c
	if (!cr0.eq) goto loc_82334D4C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-2460(r30)
	PPC_STORE_U32(r30.u32 + -2460, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-8680
	ctx.r4.s64 = r11.s64 + -8680;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-2468
	ctx.r3.s64 = r11.s64 + -2468;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82334D4C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82334d68
	if (!cr0.eq) goto loc_82334D68;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334D68:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82334CE0"))) PPC_WEAK_FUNC(sub_82334CE0);
PPC_FUNC_IMPL(__imp__sub_82334CE0) {
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,-2460(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -2460);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r29,r10,-2464
	r29.s64 = ctx.r10.s64 + -2464;
	// bne 0x82334d28
	if (!cr0.eq) goto loc_82334D28;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-2460(r30)
	PPC_STORE_U32(r30.u32 + -2460, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,29600
	ctx.r4.s64 = r11.s64 + 29600;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-2460(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -2460);
loc_82334D28:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82334d4c
	if (!cr0.eq) goto loc_82334D4C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-2460(r30)
	PPC_STORE_U32(r30.u32 + -2460, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-8680
	ctx.r4.s64 = r11.s64 + -8680;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-2468
	ctx.r3.s64 = r11.s64 + -2468;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82334D4C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82334d68
	if (!cr0.eq) goto loc_82334D68;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334D68:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82334D70"))) PPC_WEAK_FUNC(sub_82334D70);
PPC_FUNC_IMPL(__imp__sub_82334D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2460
	r11.s64 = r11.s64 + -2460;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-2460
	ctx.r10.s64 = ctx.r10.s64 + -2460;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334D98"))) PPC_WEAK_FUNC(sub_82334D98);
PPC_FUNC_IMPL(__imp__sub_82334D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2460
	r11.s64 = r11.s64 + -2460;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-2460
	ctx.r10.s64 = ctx.r10.s64 + -2460;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334DC0"))) PPC_WEAK_FUNC(sub_82334DC0);
PPC_FUNC_IMPL(__imp__sub_82334DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm. r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82334DE4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82334e04
	if (cr0.eq) goto loc_82334E04;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x82334e04
	if (cr6.eq) goto loc_82334E04;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82334E04:
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82334de4
	if (cr6.lt) goto loc_82334DE4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334E28"))) PPC_WEAK_FUNC(sub_82334E28);
PPC_FUNC_IMPL(__imp__sub_82334E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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

__attribute__((alias("__imp__sub_82334E54"))) PPC_WEAK_FUNC(sub_82334E54);
PPC_FUNC_IMPL(__imp__sub_82334E54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334E58"))) PPC_WEAK_FUNC(sub_82334E58);
PPC_FUNC_IMPL(__imp__sub_82334E58) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82334ed0
	if (cr0.eq) goto loc_82334ED0;
	// li r30,0
	r30.s64 = 0;
loc_82334E98:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82334eb0
	if (cr0.eq) goto loc_82334EB0;
	// bl 0x826a11b0
	sub_826A11B0(ctx, base);
loc_82334EB0:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82334e98
	if (cr6.lt) goto loc_82334E98;
loc_82334ED0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82334ED8"))) PPC_WEAK_FUNC(sub_82334ED8);
PPC_FUNC_IMPL(__imp__sub_82334ED8) {
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
	// bl 0x82334670
	sub_82334670(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82334f28
	if (cr0.eq) goto loc_82334F28;
	// lwz r31,56(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// b 0x82334f1c
	goto loc_82334F1C;
loc_82334F04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82334f18
	if (cr0.eq) goto loc_82334F18;
	// bl 0x826a1070
	sub_826A1070(ctx, base);
loc_82334F18:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82334F1C:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82334f04
	if (!cr6.eq) goto loc_82334F04;
loc_82334F28:
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

__attribute__((alias("__imp__sub_82334F40"))) PPC_WEAK_FUNC(sub_82334F40);
PPC_FUNC_IMPL(__imp__sub_82334F40) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82334fd0
	if (cr0.eq) goto loc_82334FD0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r28,r4,24
	r28.u64 = ctx.r4.u32 & 0xFF;
	// li r30,0
	r30.s64 = 0;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_82334F7C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// beq cr6,0x82334f94
	if (cr6.eq) goto loc_82334F94;
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82334f98
	goto loc_82334F98;
loc_82334F94:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82334F98:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82334f7c
	if (cr6.lt) goto loc_82334F7C;
loc_82334FD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82334FDC"))) PPC_WEAK_FUNC(sub_82334FDC);
PPC_FUNC_IMPL(__imp__sub_82334FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334FE0"))) PPC_WEAK_FUNC(sub_82334FE0);
PPC_FUNC_IMPL(__imp__sub_82334FE0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82335018
	if (!cr6.eq) goto loc_82335018;
	// lbz r11,41(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8233503c
	if (cr0.eq) goto loc_8233503C;
loc_82335018:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a0fe0
	sub_826A0FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82334900
	sub_82334900(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,41(r31)
	PPC_STORE_U8(r31.u32 + 41, r11.u8);
loc_8233503C:
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

__attribute__((alias("__imp__sub_82335054"))) PPC_WEAK_FUNC(sub_82335054);
PPC_FUNC_IMPL(__imp__sub_82335054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335058"))) PPC_WEAK_FUNC(sub_82335058);
PPC_FUNC_IMPL(__imp__sub_82335058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82335080
	if (!cr6.lt) goto loc_82335080;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82335080:
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823350A4"))) PPC_WEAK_FUNC(sub_823350A4);
PPC_FUNC_IMPL(__imp__sub_823350A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823350A8"))) PPC_WEAK_FUNC(sub_823350A8);
PPC_FUNC_IMPL(__imp__sub_823350A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// bne cr6,0x823350d8
	if (!cr6.eq) goto loc_823350D8;
loc_823350D0:
	// li r11,1
	r11.s64 = 1;
	// b 0x82335138
	goto loc_82335138;
loc_823350D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82330588
	sub_82330588(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82335134
	if (cr6.eq) goto loc_82335134;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,29688
	ctx.r4.s64 = r11.s64 + 29688;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823350d0
	if (cr0.eq) goto loc_823350D0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8233512c
	if (cr0.eq) goto loc_8233512C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r11.u8);
	// b 0x82335138
	goto loc_82335138;
loc_8233512C:
	// lfs f0,136(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 136);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
loc_82335134:
	// li r11,0
	r11.s64 = 0;
loc_82335138:
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82335144"))) PPC_WEAK_FUNC(sub_82335144);
PPC_FUNC_IMPL(__imp__sub_82335144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335148"))) PPC_WEAK_FUNC(sub_82335148);
PPC_FUNC_IMPL(__imp__sub_82335148) {
	PPC_FUNC_PROLOGUE();
	// b 0x82334f40
	sub_82334F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233514C"))) PPC_WEAK_FUNC(sub_8233514C);
PPC_FUNC_IMPL(__imp__sub_8233514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335150"))) PPC_WEAK_FUNC(sub_82335150);
PPC_FUNC_IMPL(__imp__sub_82335150) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82335264
	if (cr0.eq) goto loc_82335264;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82335230
	if (!cr6.eq) goto loc_82335230;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// li r30,0
	r30.s64 = 0;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82335268
	if (cr0.eq) goto loc_82335268;
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
loc_823351B8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120928
	sub_82120928(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// beq cr6,0x823351e4
	if (cr6.eq) goto loc_823351E4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x823351e8
	goto loc_823351E8;
loc_823351E4:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_823351E8:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823351b8
	if (cr6.lt) goto loc_823351B8;
	// b 0x82335268
	goto loc_82335268;
loc_82335230:
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120928
	sub_82120928(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// beq 0x82335258
	if (cr0.eq) goto loc_82335258;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x8233525c
	goto loc_8233525C;
loc_82335258:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_8233525C:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82335268
	goto loc_82335268;
loc_82335264:
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r29.u8);
loc_82335268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82335270"))) PPC_WEAK_FUNC(sub_82335270);
PPC_FUNC_IMPL(__imp__sub_82335270) {
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
	// blt cr6,0x823352b8
	if (cr6.lt) goto loc_823352B8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_823352B8:
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
	// bl 0x82334ad8
	sub_82334AD8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823352f0
	if (cr0.eq) goto loc_823352F0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_823352F0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82335310
	if (cr6.eq) goto loc_82335310;
loc_823352FC:
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
	// bne 0x823352fc
	if (!cr0.eq) goto loc_823352FC;
loc_82335310:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82335338
	if (!cr0.eq) goto loc_82335338;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82335338
	if (cr0.eq) goto loc_82335338;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82335338:
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

__attribute__((alias("__imp__sub_8233536C"))) PPC_WEAK_FUNC(sub_8233536C);
PPC_FUNC_IMPL(__imp__sub_8233536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335370"))) PPC_WEAK_FUNC(sub_82335370);
PPC_FUNC_IMPL(__imp__sub_82335370) {
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
	// blt cr6,0x823353b8
	if (cr6.lt) goto loc_823353B8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_823353B8:
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
	// bl 0x82334b40
	sub_82334B40(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823353f0
	if (cr0.eq) goto loc_823353F0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_823353F0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82335410
	if (cr6.eq) goto loc_82335410;
loc_823353FC:
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
	// bne 0x823353fc
	if (!cr0.eq) goto loc_823353FC;
loc_82335410:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82335438
	if (!cr0.eq) goto loc_82335438;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82335438
	if (cr0.eq) goto loc_82335438;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82335438:
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

__attribute__((alias("__imp__sub_8233546C"))) PPC_WEAK_FUNC(sub_8233546C);
PPC_FUNC_IMPL(__imp__sub_8233546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335470"))) PPC_WEAK_FUNC(sub_82335470);
PPC_FUNC_IMPL(__imp__sub_82335470) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30056(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30056);
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r29,0
	r29.s64 = 0;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// addi r11,r11,29940
	r11.s64 = r11.s64 + 29940;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823354e0
	if (cr0.eq) goto loc_823354E0;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823354e4
	goto loc_823354E4;
loc_823354E0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823354E4:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82335508
	if (cr0.eq) goto loc_82335508;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8233550c
	goto loc_8233550C;
loc_82335508:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8233550C:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82335530
	if (cr0.eq) goto loc_82335530;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82335534
	goto loc_82335534;
loc_82335530:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82335534:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82335558
	if (cr0.eq) goto loc_82335558;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8233555c
	goto loc_8233555C;
loc_82335558:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8233555C:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82335580
	if (cr0.eq) goto loc_82335580;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82335584
	goto loc_82335584;
loc_82335580:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82335584:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823355a8
	if (cr0.eq) goto loc_823355A8;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823355ac
	goto loc_823355AC;
loc_823355A8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823355AC:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823355cc
	if (cr0.eq) goto loc_823355CC;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// b 0x823355d0
	goto loc_823355D0;
loc_823355CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_823355D0:
	// addi r11,r30,56
	r11.s64 = r30.s64 + 56;
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,68
	r11.s64 = r30.s64 + 68;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,80
	r11.s64 = r30.s64 + 80;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r29,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r29.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r29,160(r30)
	PPC_STORE_U8(r30.u32 + 160, r29.u8);
	// addi r27,r30,124
	r27.s64 = r30.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,-14040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f0,132(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 132, temp.u32);
	// stb r10,92(r30)
	PPC_STORE_U8(r30.u32 + 92, ctx.r10.u8);
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stw r9,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r9.u32);
	// lfs f13,29932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29932);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,136(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 136, temp.u32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,148(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 148, temp.u32);
	// stfs f31,156(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 156, temp.u32);
	// stfs f31,140(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 140, temp.u32);
	// stfs f31,144(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 144, temp.u32);
	// lfs f12,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 152, temp.u32);
	// bl 0x823390b0
	sub_823390B0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29912
	ctx.r4.s64 = r11.s64 + 29912;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stfs f1,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 104, temp.u32);
	// addi r4,r11,29888
	ctx.r4.s64 = r11.s64 + 29888;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bgt cr6,0x823356ec
	if (cr6.gt) goto loc_823356EC;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_823356EC:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29856
	ctx.r4.s64 = r11.s64 + 29856;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r4,r11,29832
	ctx.r4.s64 = r11.s64 + 29832;
	// stfs f0,112(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 112, temp.u32);
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r4,r11,29808
	ctx.r4.s64 = r11.s64 + 29808;
	// stfs f0,120(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823357b0
	if (cr0.eq) goto loc_823357B0;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,140(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 140, temp.u32);
loc_823357B0:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29784
	ctx.r4.s64 = r11.s64 + 29784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823357ec
	if (cr0.eq) goto loc_823357EC;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,132(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 132, temp.u32);
loc_823357EC:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29768
	ctx.r4.s64 = r11.s64 + 29768;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82335828
	if (cr0.eq) goto loc_82335828;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,136(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 136, temp.u32);
loc_82335828:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29748
	ctx.r4.s64 = r11.s64 + 29748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82335864
	if (cr0.eq) goto loc_82335864;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,144(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 144, temp.u32);
loc_82335864:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29732
	ctx.r4.s64 = r11.s64 + 29732;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319650
	sub_82319650(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823358ac
	if (cr0.eq) goto loc_823358AC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82334ce0
	sub_82334CE0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_823358AC:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29720
	ctx.r4.s64 = r11.s64 + 29720;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// addi r26,r30,128
	r26.s64 = r30.s64 + 128;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29708
	ctx.r4.s64 = r11.s64 + 29708;
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r27.u32);
	// beq 0x82335950
	if (cr0.eq) goto loc_82335950;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// addi r4,r11,29696
	ctx.r4.s64 = r11.s64 + 29696;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82347e58
	sub_82347E58(ctx, base);
	// b 0x82335954
	goto loc_82335954;
loc_82335950:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82335954:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82335478"))) PPC_WEAK_FUNC(sub_82335478);
PPC_FUNC_IMPL(__imp__sub_82335478) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r29,0
	r29.s64 = 0;
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// addi r11,r11,29940
	r11.s64 = r11.s64 + 29940;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823354e0
	if (cr0.eq) goto loc_823354E0;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823354e4
	goto loc_823354E4;
loc_823354E0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823354E4:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82335508
	if (cr0.eq) goto loc_82335508;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8233550c
	goto loc_8233550C;
loc_82335508:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8233550C:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82335530
	if (cr0.eq) goto loc_82335530;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82335534
	goto loc_82335534;
loc_82335530:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82335534:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82335558
	if (cr0.eq) goto loc_82335558;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8233555c
	goto loc_8233555C;
loc_82335558:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8233555C:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82335580
	if (cr0.eq) goto loc_82335580;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82335584
	goto loc_82335584;
loc_82335580:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82335584:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823355a8
	if (cr0.eq) goto loc_823355A8;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823355ac
	goto loc_823355AC;
loc_823355A8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823355AC:
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823355cc
	if (cr0.eq) goto loc_823355CC;
	// bl 0x822f8008
	sub_822F8008(ctx, base);
	// b 0x823355d0
	goto loc_823355D0;
loc_823355CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_823355D0:
	// addi r11,r30,56
	r11.s64 = r30.s64 + 56;
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,68
	r11.s64 = r30.s64 + 68;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,80
	r11.s64 = r30.s64 + 80;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r29,100(r30)
	PPC_STORE_U8(r30.u32 + 100, r29.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r29,160(r30)
	PPC_STORE_U8(r30.u32 + 160, r29.u8);
	// addi r27,r30,124
	r27.s64 = r30.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,-14040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14040);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f0,132(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 132, temp.u32);
	// stb r10,92(r30)
	PPC_STORE_U8(r30.u32 + 92, ctx.r10.u8);
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stw r9,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r9.u32);
	// lfs f13,29932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29932);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,136(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 136, temp.u32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,148(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 148, temp.u32);
	// stfs f31,156(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 156, temp.u32);
	// stfs f31,140(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 140, temp.u32);
	// stfs f31,144(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 144, temp.u32);
	// lfs f12,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 152, temp.u32);
	// bl 0x823390b0
	sub_823390B0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29912
	ctx.r4.s64 = r11.s64 + 29912;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stfs f1,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 104, temp.u32);
	// addi r4,r11,29888
	ctx.r4.s64 = r11.s64 + 29888;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,108(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 108, temp.u32);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bgt cr6,0x823356ec
	if (cr6.gt) goto loc_823356EC;
	// fmr f0,f31
	f0.f64 = f31.f64;
loc_823356EC:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29856
	ctx.r4.s64 = r11.s64 + 29856;
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r4,r11,29832
	ctx.r4.s64 = r11.s64 + 29832;
	// stfs f0,112(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 112, temp.u32);
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
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r4,r11,29808
	ctx.r4.s64 = r11.s64 + 29808;
	// stfs f0,120(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 120, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823357b0
	if (cr0.eq) goto loc_823357B0;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,140(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 140, temp.u32);
loc_823357B0:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29784
	ctx.r4.s64 = r11.s64 + 29784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823357ec
	if (cr0.eq) goto loc_823357EC;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,132(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 132, temp.u32);
loc_823357EC:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29768
	ctx.r4.s64 = r11.s64 + 29768;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82335828
	if (cr0.eq) goto loc_82335828;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,136(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 136, temp.u32);
loc_82335828:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29748
	ctx.r4.s64 = r11.s64 + 29748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82335864
	if (cr0.eq) goto loc_82335864;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,144(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 144, temp.u32);
loc_82335864:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29732
	ctx.r4.s64 = r11.s64 + 29732;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319650
	sub_82319650(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823358ac
	if (cr0.eq) goto loc_823358AC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82334ce0
	sub_82334CE0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_823358AC:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29720
	ctx.r4.s64 = r11.s64 + 29720;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// addi r26,r30,128
	r26.s64 = r30.s64 + 128;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// addi r4,r11,29708
	ctx.r4.s64 = r11.s64 + 29708;
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r27.u32);
	// beq 0x82335950
	if (cr0.eq) goto loc_82335950;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// addi r4,r11,29696
	ctx.r4.s64 = r11.s64 + 29696;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82347e58
	sub_82347E58(ctx, base);
	// b 0x82335954
	goto loc_82335954;
loc_82335950:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82335954:
	// stw r3,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82335968"))) PPC_WEAK_FUNC(sub_82335968);
PPC_FUNC_IMPL(__imp__sub_82335968) {
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
	// bl 0x822ce798
	sub_822CE798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82335990"))) PPC_WEAK_FUNC(sub_82335990);
PPC_FUNC_IMPL(__imp__sub_82335990) {
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

__attribute__((alias("__imp__sub_823359B8"))) PPC_WEAK_FUNC(sub_823359B8);
PPC_FUNC_IMPL(__imp__sub_823359B8) {
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

__attribute__((alias("__imp__sub_823359E0"))) PPC_WEAK_FUNC(sub_823359E0);
PPC_FUNC_IMPL(__imp__sub_823359E0) {
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

__attribute__((alias("__imp__sub_82335A08"))) PPC_WEAK_FUNC(sub_82335A08);
PPC_FUNC_IMPL(__imp__sub_82335A08) {
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

__attribute__((alias("__imp__sub_82335A30"))) PPC_WEAK_FUNC(sub_82335A30);
PPC_FUNC_IMPL(__imp__sub_82335A30) {
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

__attribute__((alias("__imp__sub_82335A58"))) PPC_WEAK_FUNC(sub_82335A58);
PPC_FUNC_IMPL(__imp__sub_82335A58) {
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

__attribute__((alias("__imp__sub_82335A80"))) PPC_WEAK_FUNC(sub_82335A80);
PPC_FUNC_IMPL(__imp__sub_82335A80) {
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

__attribute__((alias("__imp__sub_82335AA8"))) PPC_WEAK_FUNC(sub_82335AA8);
PPC_FUNC_IMPL(__imp__sub_82335AA8) {
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

__attribute__((alias("__imp__sub_82335AD4"))) PPC_WEAK_FUNC(sub_82335AD4);
PPC_FUNC_IMPL(__imp__sub_82335AD4) {
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
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
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

__attribute__((alias("__imp__sub_82335B00"))) PPC_WEAK_FUNC(sub_82335B00);
PPC_FUNC_IMPL(__imp__sub_82335B00) {
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

__attribute__((alias("__imp__sub_82335B2C"))) PPC_WEAK_FUNC(sub_82335B2C);
PPC_FUNC_IMPL(__imp__sub_82335B2C) {
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

__attribute__((alias("__imp__sub_82335B54"))) PPC_WEAK_FUNC(sub_82335B54);
PPC_FUNC_IMPL(__imp__sub_82335B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335B58"))) PPC_WEAK_FUNC(sub_82335B58);
PPC_FUNC_IMPL(__imp__sub_82335B58) {
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
	// beq cr6,0x82335b98
	if (cr6.eq) goto loc_82335B98;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82335b88
	if (cr0.eq) goto loc_82335B88;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82335B88:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82335bac
	goto loc_82335BAC;
loc_82335B98:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82335270
	sub_82335270(ctx, base);
loc_82335BAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82335BBC"))) PPC_WEAK_FUNC(sub_82335BBC);
PPC_FUNC_IMPL(__imp__sub_82335BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335BC0"))) PPC_WEAK_FUNC(sub_82335BC0);
PPC_FUNC_IMPL(__imp__sub_82335BC0) {
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
	// beq cr6,0x82335c00
	if (cr6.eq) goto loc_82335C00;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82335bf0
	if (cr0.eq) goto loc_82335BF0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82335BF0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82335c14
	goto loc_82335C14;
loc_82335C00:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82335370
	sub_82335370(ctx, base);
loc_82335C14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82335C24"))) PPC_WEAK_FUNC(sub_82335C24);
PPC_FUNC_IMPL(__imp__sub_82335C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335C28"))) PPC_WEAK_FUNC(sub_82335C28);
PPC_FUNC_IMPL(__imp__sub_82335C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30248(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30248);
	// mflr r12
	// bl 0x8239bcdc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-812
	ctx.r4.s64 = r11.s64 + -812;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
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
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r11,-820
	ctx.r4.s64 = r11.s64 + -820;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,30232
	ctx.r4.s64 = r11.s64 + 30232;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
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
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82335df4
	if (!cr0.gt) goto loc_82335DF4;
	// addi r21,r28,56
	r21.s64 = r28.s64 + 56;
	// li r27,0
	r27.s64 = 0;
loc_82335D10:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82334bb0
	sub_82334BB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82335d60
	if (!cr0.eq) goto loc_82335D60;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
loc_82335D60:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// beq 0x82335dcc
	if (cr0.eq) goto loc_82335DCC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// bl 0x82334818
	sub_82334818(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82335dd0
	goto loc_82335DD0;
loc_82335DCC:
	// li r11,0
	r11.s64 = 0;
loc_82335DD0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82335b58
	sub_82335B58(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82335d10
	if (cr6.lt) goto loc_82335D10;
loc_82335DF4:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82335C30"))) PPC_WEAK_FUNC(sub_82335C30);
PPC_FUNC_IMPL(__imp__sub_82335C30) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-812
	ctx.r4.s64 = r11.s64 + -812;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
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
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r11,-820
	ctx.r4.s64 = r11.s64 + -820;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,30232
	ctx.r4.s64 = r11.s64 + 30232;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
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
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82335df4
	if (!cr0.gt) goto loc_82335DF4;
	// addi r21,r28,56
	r21.s64 = r28.s64 + 56;
	// li r27,0
	r27.s64 = 0;
loc_82335D10:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82334bb0
	sub_82334BB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82335d60
	if (!cr0.eq) goto loc_82335D60;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
loc_82335D60:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// beq 0x82335dcc
	if (cr0.eq) goto loc_82335DCC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// bl 0x82334818
	sub_82334818(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82335dd0
	goto loc_82335DD0;
loc_82335DCC:
	// li r11,0
	r11.s64 = 0;
loc_82335DD0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82335b58
	sub_82335B58(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82335d10
	if (cr6.lt) goto loc_82335D10;
loc_82335DF4:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82335E00"))) PPC_WEAK_FUNC(sub_82335E00);
PPC_FUNC_IMPL(__imp__sub_82335E00) {
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

__attribute__((alias("__imp__sub_82335E28"))) PPC_WEAK_FUNC(sub_82335E28);
PPC_FUNC_IMPL(__imp__sub_82335E28) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30320(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30320);
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// bne cr6,0x82335ef8
	if (!cr6.eq) goto loc_82335EF8;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r9,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82335ed4
	if (cr6.eq) goto loc_82335ED4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82335ed4
	goto loc_82335ED4;
loc_82335EB8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82334900
	sub_82334900(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82335ED4:
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
	// bne 0x82335eb8
	if (!cr0.eq) goto loc_82335EB8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
loc_82335EF8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82335E30"))) PPC_WEAK_FUNC(sub_82335E30);
PPC_FUNC_IMPL(__imp__sub_82335E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// bne cr6,0x82335ef8
	if (!cr6.eq) goto loc_82335EF8;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r9,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82335ed4
	if (cr6.eq) goto loc_82335ED4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82335ed4
	goto loc_82335ED4;
loc_82335EB8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82334900
	sub_82334900(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82335ED4:
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
	// bne 0x82335eb8
	if (!cr0.eq) goto loc_82335EB8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
loc_82335EF8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82335F04"))) PPC_WEAK_FUNC(sub_82335F04);
PPC_FUNC_IMPL(__imp__sub_82335F04) {
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

__attribute__((alias("__imp__sub_82335F2C"))) PPC_WEAK_FUNC(sub_82335F2C);
PPC_FUNC_IMPL(__imp__sub_82335F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335F30"))) PPC_WEAK_FUNC(sub_82335F30);
PPC_FUNC_IMPL(__imp__sub_82335F30) {
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
	// lwz r16,30392(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30392);
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x823346c0
	sub_823346C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82335ff4
	if (cr0.eq) goto loc_82335FF4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82335fd0
	if (cr6.eq) goto loc_82335FD0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82335fd0
	goto loc_82335FD0;
loc_82335FB8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82334fe0
	sub_82334FE0(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82335FD0:
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
	// bne 0x82335fb8
	if (!cr0.eq) goto loc_82335FB8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
loc_82335FF4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82335F38"))) PPC_WEAK_FUNC(sub_82335F38);
PPC_FUNC_IMPL(__imp__sub_82335F38) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x823346c0
	sub_823346C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82335ff4
	if (cr0.eq) goto loc_82335FF4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82335fd0
	if (cr6.eq) goto loc_82335FD0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82335fd0
	goto loc_82335FD0;
loc_82335FB8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82334fe0
	sub_82334FE0(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82335FD0:
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
	// bne 0x82335fb8
	if (!cr0.eq) goto loc_82335FB8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
loc_82335FF4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82335FFC"))) PPC_WEAK_FUNC(sub_82335FFC);
PPC_FUNC_IMPL(__imp__sub_82335FFC) {
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

__attribute__((alias("__imp__sub_82336024"))) PPC_WEAK_FUNC(sub_82336024);
PPC_FUNC_IMPL(__imp__sub_82336024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336028"))) PPC_WEAK_FUNC(sub_82336028);
PPC_FUNC_IMPL(__imp__sub_82336028) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30464(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30464);
	// mflr r12
	// bl 0x8239bcf8
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823360b4
	if (cr6.eq) goto loc_823360B4;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823360B4:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
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
	// beq 0x8233613c
	if (cr0.eq) goto loc_8233613C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f29,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f29.f64 = double(temp.f32);
loc_823360DC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822f6ff0
	sub_822F6FF0(ctx, base);
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ble cr6,0x82336118
	if (!cr6.gt) goto loc_82336118;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x822f78a0
	sub_822F78A0(ctx, base);
	// b 0x8233611c
	goto loc_8233611C;
loc_82336118:
	// bl 0x822f7878
	sub_822F7878(ctx, base);
loc_8233611C:
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823360dc
	if (!cr0.eq) goto loc_823360DC;
loc_8233613C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
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

__attribute__((alias("__imp__sub_82336030"))) PPC_WEAK_FUNC(sub_82336030);
PPC_FUNC_IMPL(__imp__sub_82336030) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823360b4
	if (cr6.eq) goto loc_823360B4;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823360B4:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
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
	// beq 0x8233613c
	if (cr0.eq) goto loc_8233613C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f29,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f29.f64 = double(temp.f32);
loc_823360DC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822f6ff0
	sub_822F6FF0(ctx, base);
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ble cr6,0x82336118
	if (!cr6.gt) goto loc_82336118;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x822f78a0
	sub_822F78A0(ctx, base);
	// b 0x8233611c
	goto loc_8233611C;
loc_82336118:
	// bl 0x822f7878
	sub_822F7878(ctx, base);
loc_8233611C:
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823360dc
	if (!cr0.eq) goto loc_823360DC;
loc_8233613C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
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

__attribute__((alias("__imp__sub_82336158"))) PPC_WEAK_FUNC(sub_82336158);
PPC_FUNC_IMPL(__imp__sub_82336158) {
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

__attribute__((alias("__imp__sub_82336180"))) PPC_WEAK_FUNC(sub_82336180);
PPC_FUNC_IMPL(__imp__sub_82336180) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 53);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82336220
	if (!cr0.eq) goto loc_82336220;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lfs f31,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	f31.f64 = double(temp.f32);
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
	// beq 0x823361f0
	if (cr0.eq) goto loc_823361F0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x823361ec
	if (!cr6.eq) goto loc_823361EC;
	// lfs f31,124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 124);
	f31.f64 = double(temp.f32);
	// b 0x823361f0
	goto loc_823361F0;
loc_823361EC:
	// lfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	f31.f64 = double(temp.f32);
loc_823361F0:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19424
	ctx.r4.s64 = r11.s64 + -19424;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82336030
	sub_82336030(ctx, base);
loc_82336220:
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

__attribute__((alias("__imp__sub_82336230"))) PPC_WEAK_FUNC(sub_82336230);
PPC_FUNC_IMPL(__imp__sub_82336230) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-19424
	ctx.r4.s64 = r11.s64 + -19424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82336030
	sub_82336030(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82336284"))) PPC_WEAK_FUNC(sub_82336284);
PPC_FUNC_IMPL(__imp__sub_82336284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336288"))) PPC_WEAK_FUNC(sub_82336288);
PPC_FUNC_IMPL(__imp__sub_82336288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r29,68
	r30.s64 = r29.s64 + 68;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823362f4
	if (!cr0.gt) goto loc_823362F4;
loc_823362C0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82336180
	sub_82336180(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x823362c0
	if (cr6.lt) goto loc_823362C0;
loc_823362F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82336300"))) PPC_WEAK_FUNC(sub_82336300);
PPC_FUNC_IMPL(__imp__sub_82336300) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r3,80
	r28.s64 = ctx.r3.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8233637c
	if (cr6.eq) goto loc_8233637C;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8233637c
	if (!cr6.gt) goto loc_8233637C;
	// li r29,8
	r29.s64 = 8;
loc_82336348:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82336348
	if (cr6.lt) goto loc_82336348;
loc_8233637C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82336384"))) PPC_WEAK_FUNC(sub_82336384);
PPC_FUNC_IMPL(__imp__sub_82336384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336388"))) PPC_WEAK_FUNC(sub_82336388);
PPC_FUNC_IMPL(__imp__sub_82336388) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823363c4
	if (cr0.eq) goto loc_823363C4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823363C4:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823363d4
	if (cr0.eq) goto loc_823363D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823363D4:
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

__attribute__((alias("__imp__sub_823363F0"))) PPC_WEAK_FUNC(sub_823363F0);
PPC_FUNC_IMPL(__imp__sub_823363F0) {
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
	// lwz r16,30536(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30536);
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
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82336458
	if (cr0.eq) goto loc_82336458;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82336474
	if (!cr6.eq) goto loc_82336474;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8233644c
	if (cr0.eq) goto loc_8233644C;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826a1208
	sub_826A1208(ctx, base);
	// b 0x82336450
	goto loc_82336450;
loc_8233644C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82336450:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// b 0x82336474
	goto loc_82336474;
loc_82336458:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82336474
	if (cr0.eq) goto loc_82336474;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82336388
	sub_82336388(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82336474:
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

__attribute__((alias("__imp__sub_823363F8"))) PPC_WEAK_FUNC(sub_823363F8);
PPC_FUNC_IMPL(__imp__sub_823363F8) {
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
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82336458
	if (cr0.eq) goto loc_82336458;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82336474
	if (!cr6.eq) goto loc_82336474;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8233644c
	if (cr0.eq) goto loc_8233644C;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826a1208
	sub_826A1208(ctx, base);
	// b 0x82336450
	goto loc_82336450;
loc_8233644C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82336450:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// b 0x82336474
	goto loc_82336474;
loc_82336458:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82336474
	if (cr0.eq) goto loc_82336474;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82336388
	sub_82336388(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82336474:
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

__attribute__((alias("__imp__sub_8233648C"))) PPC_WEAK_FUNC(sub_8233648C);
PPC_FUNC_IMPL(__imp__sub_8233648C) {
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

__attribute__((alias("__imp__sub_823364B4"))) PPC_WEAK_FUNC(sub_823364B4);
PPC_FUNC_IMPL(__imp__sub_823364B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823364B8"))) PPC_WEAK_FUNC(sub_823364B8);
PPC_FUNC_IMPL(__imp__sub_823364B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// ble cr6,0x82336588
	if (!cr6.gt) goto loc_82336588;
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8233652c
	goto loc_8233652C;
loc_82336524:
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8233652C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82336524
	if (!cr6.eq) goto loc_82336524;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x8223c170
	sub_8223C170(ctx, base);
	// b 0x823365e8
	goto loc_823365E8;
loc_82336588:
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bl 0x82120880
	sub_82120880(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x8223c038
	sub_8223C038(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = r30.u32 & 0xFF;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x823365e0
	goto loc_823365E0;
loc_823365D8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_823365E0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823365d8
	if (!cr6.eq) goto loc_823365D8;
loc_823365E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823365F0"))) PPC_WEAK_FUNC(sub_823365F0);
PPC_FUNC_IMPL(__imp__sub_823365F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x8239bcf8
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d5e8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// fmr f29,f30
	f29.f64 = f30.f64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82336634
	if (cr0.eq) goto loc_82336634;
	// bl 0x82334dc0
	sub_82334DC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82335058
	sub_82335058(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
loc_82336634:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823366ec
	if (!cr0.gt) goto loc_823366EC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,30592
	r28.s64 = r11.s64 + 30592;
	// lfs f28,-14040(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14040);
	f28.f64 = double(temp.f32);
loc_82336660:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823366a0
	if (!cr0.eq) goto loc_823366A0;
	// lbz r11,32(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8233669c
	if (cr0.eq) goto loc_8233669C;
	// fmr f31,f29
	f31.f64 = f29.f64;
	// b 0x823366a0
	goto loc_823366A0;
loc_8233669C:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = f28.f64;
loc_823366A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82336030
	sub_82336030(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82336660
	if (cr6.lt) goto loc_82336660;
loc_823366EC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d634
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82336708"))) PPC_WEAK_FUNC(sub_82336708);
PPC_FUNC_IMPL(__imp__sub_82336708) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f31,f0
	f31.f64 = f0.f64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lfs f30,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// ble cr6,0x82336790
	if (!cr6.gt) goto loc_82336790;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lfs f31,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	f31.f64 = double(temp.f32);
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fadds f30,f0,f13
	f30.f64 = double(float(f0.f64 + ctx.f13.f64));
loc_82336790:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823363f8
	sub_823363F8(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(f0.f64 * f31.f64 + f30.f64));
	// stfs f1,20(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// stb r25,16(r29)
	PPC_STORE_U8(r29.u32 + 16, r25.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	f0.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + f0.f64));
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30592
	ctx.r4.s64 = r11.s64 + 30592;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822f8110
	sub_822F8110(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,-19424
	r27.s64 = r11.s64 + -19424;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822f8110
	sub_822F8110(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30600
	ctx.r4.s64 = r11.s64 + 30600;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822f8110
	sub_822F8110(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f31,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822f6ff0
	sub_822F6FF0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// lbz r11,8(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82336900
	if (cr0.eq) goto loc_82336900;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823368c8
	if (!cr6.eq) goto loc_823368C8;
	// bl 0x822e2100
	sub_822E2100(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
loc_823368C8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r25,40(r29)
	PPC_STORE_U8(r29.u32 + 40, r25.u8);
loc_82336900:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82336910"))) PPC_WEAK_FUNC(sub_82336910);
PPC_FUNC_IMPL(__imp__sub_82336910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x822f7f78
	sub_822F7F78(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x823363f8
	sub_823363F8(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// stb r10,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r10.u8);
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823369BC"))) PPC_WEAK_FUNC(sub_823369BC);
PPC_FUNC_IMPL(__imp__sub_823369BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823369C0"))) PPC_WEAK_FUNC(sub_823369C0);
PPC_FUNC_IMPL(__imp__sub_823369C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82336288
	sub_82336288(ctx, base);
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
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
	// ble 0x82336a80
	if (!cr0.gt) goto loc_82336A80;
	// li r29,0
	r29.s64 = 0;
loc_82336A4C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82335150
	sub_82335150(ctx, base);
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
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82336a4c
	if (cr6.lt) goto loc_82336A4C;
loc_82336A80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82336A8C"))) PPC_WEAK_FUNC(sub_82336A8C);
PPC_FUNC_IMPL(__imp__sub_82336A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336A90"))) PPC_WEAK_FUNC(sub_82336A90);
PPC_FUNC_IMPL(__imp__sub_82336A90) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82336b0c
	if (!cr6.eq) goto loc_82336B0C;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82336adc
	if (cr0.eq) goto loc_82336ADC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8223b1a0
	sub_8223B1A0(ctx, base);
	// b 0x82336ae0
	goto loc_82336AE0;
loc_82336ADC:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_82336AE0:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82336afc
	if (cr0.eq) goto loc_82336AFC;
	// bl 0x82336230
	sub_82336230(ctx, base);
	// b 0x82336b0c
	goto loc_82336B0C;
loc_82336AFC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,8744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82336180
	sub_82336180(ctx, base);
loc_82336B0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82336B14"))) PPC_WEAK_FUNC(sub_82336B14);
PPC_FUNC_IMPL(__imp__sub_82336B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336B18"))) PPC_WEAK_FUNC(sub_82336B18);
PPC_FUNC_IMPL(__imp__sub_82336B18) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,30616(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30616);
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x82336230
	sub_82336230(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82336ba4
	if (cr6.eq) goto loc_82336BA4;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82336BA4:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x82336be0
	goto loc_82336BE0;
loc_82336BB4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826a1140
	sub_826A1140(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
loc_82336BE0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82336bb4
	if (!cr0.eq) goto loc_82336BB4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82336B20"))) PPC_WEAK_FUNC(sub_82336B20);
PPC_FUNC_IMPL(__imp__sub_82336B20) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x82336230
	sub_82336230(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82336ba4
	if (cr6.eq) goto loc_82336BA4;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82336BA4:
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x82336be0
	goto loc_82336BE0;
loc_82336BB4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826a1140
	sub_826A1140(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
loc_82336BE0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82336bb4
	if (!cr0.eq) goto loc_82336BB4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82336C0C"))) PPC_WEAK_FUNC(sub_82336C0C);
PPC_FUNC_IMPL(__imp__sub_82336C0C) {
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

__attribute__((alias("__imp__sub_82336C34"))) PPC_WEAK_FUNC(sub_82336C34);
PPC_FUNC_IMPL(__imp__sub_82336C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336C38"))) PPC_WEAK_FUNC(sub_82336C38);
PPC_FUNC_IMPL(__imp__sub_82336C38) {
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
	// rlwinm r29,r4,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// stb r30,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r30.u8);
	// bl 0x823365f0
	sub_823365F0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82336c7c
	if (!cr0.eq) goto loc_82336C7C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x82335150
	sub_82335150(ctx, base);
loc_82336C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82336C84"))) PPC_WEAK_FUNC(sub_82336C84);
PPC_FUNC_IMPL(__imp__sub_82336C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336C88"))) PPC_WEAK_FUNC(sub_82336C88);
PPC_FUNC_IMPL(__imp__sub_82336C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x82336ca8
	if (!cr6.eq) goto loc_82336CA8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
loc_82336CA8:
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r4,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r4.u32);
	// b 0x823365f0
	sub_823365F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336CC0"))) PPC_WEAK_FUNC(sub_82336CC0);
PPC_FUNC_IMPL(__imp__sub_82336CC0) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82336ce8
	if (cr0.eq) goto loc_82336CE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82336388
	sub_82336388(ctx, base);
loc_82336CE8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82336D04"))) PPC_WEAK_FUNC(sub_82336D04);
PPC_FUNC_IMPL(__imp__sub_82336D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336D08"))) PPC_WEAK_FUNC(sub_82336D08);
PPC_FUNC_IMPL(__imp__sub_82336D08) {
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
	// lwz r16,30696(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30696);
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
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82336d48
	if (cr0.eq) goto loc_82336D48;
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
loc_82336D48:
	// li r26,0
	r26.s64 = 0;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r26,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r26.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82336db4
	if (cr0.eq) goto loc_82336DB4;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82336D6C:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwzx r27,r29,r11
	r27.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82336d8c
	if (cr0.eq) goto loc_82336D8C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82336D8C:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwx r26,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r26.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82336d6c
	if (cr6.lt) goto loc_82336D6C;
loc_82336DB4:
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82336dd4
	if (cr0.eq) goto loc_82336DD4;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82336DD4:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82336df4
	if (cr0.eq) goto loc_82336DF4;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82336DF4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82336D10"))) PPC_WEAK_FUNC(sub_82336D10);
PPC_FUNC_IMPL(__imp__sub_82336D10) {
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
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82336d48
	if (cr0.eq) goto loc_82336D48;
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
loc_82336D48:
	// li r26,0
	r26.s64 = 0;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r26,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r26.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82336db4
	if (cr0.eq) goto loc_82336DB4;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82336D6C:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwzx r27,r29,r11
	r27.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82336d8c
	if (cr0.eq) goto loc_82336D8C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82336D8C:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwx r26,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r26.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82336d6c
	if (cr6.lt) goto loc_82336D6C;
loc_82336DB4:
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82336dd4
	if (cr0.eq) goto loc_82336DD4;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82336DD4:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82336df4
	if (cr0.eq) goto loc_82336DF4;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82336DF4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82336DFC"))) PPC_WEAK_FUNC(sub_82336DFC);
PPC_FUNC_IMPL(__imp__sub_82336DFC) {
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
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82336E28"))) PPC_WEAK_FUNC(sub_82336E28);
PPC_FUNC_IMPL(__imp__sub_82336E28) {
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
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
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

__attribute__((alias("__imp__sub_82336E54"))) PPC_WEAK_FUNC(sub_82336E54);
PPC_FUNC_IMPL(__imp__sub_82336E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336E58"))) PPC_WEAK_FUNC(sub_82336E58);
PPC_FUNC_IMPL(__imp__sub_82336E58) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// rlwinm r26,r31,2,0,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r29,r11,r26
	r29.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82335150
	sub_82335150(ctx, base);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// stw r28,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r28.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82336f00
	if (cr6.lt) goto loc_82336F00;
	// bne cr6,0x82336f10
	if (!cr6.eq) goto loc_82336F10;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233fc68
	sub_8233FC68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233fc80
	sub_8233FC80(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82336b20
	sub_82336B20(ctx, base);
	// b 0x82336f10
	goto loc_82336F10;
loc_82336F00:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82336230
	sub_82336230(ctx, base);
loc_82336F10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82336F1C"))) PPC_WEAK_FUNC(sub_82336F1C);
PPC_FUNC_IMPL(__imp__sub_82336F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336F20"))) PPC_WEAK_FUNC(sub_82336F20);
PPC_FUNC_IMPL(__imp__sub_82336F20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82335150
	sub_82335150(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82336f80
	if (!cr6.eq) goto loc_82336F80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,8744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82336180
	sub_82336180(ctx, base);
loc_82336F80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82336F88"))) PPC_WEAK_FUNC(sub_82336F88);
PPC_FUNC_IMPL(__imp__sub_82336F88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82335150
	sub_82335150(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82336fe8
	if (!cr6.eq) goto loc_82336FE8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,8744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82336180
	sub_82336180(ctx, base);
loc_82336FE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82336FF0"))) PPC_WEAK_FUNC(sub_82336FF0);
PPC_FUNC_IMPL(__imp__sub_82336FF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bne cr6,0x8233705c
	if (!cr6.eq) goto loc_8233705C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82335150
	sub_82335150(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8233705c
	if (!cr6.eq) goto loc_8233705C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,8744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82336180
	sub_82336180(ctx, base);
loc_8233705C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82337064"))) PPC_WEAK_FUNC(sub_82337064);
PPC_FUNC_IMPL(__imp__sub_82337064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337068"))) PPC_WEAK_FUNC(sub_82337068);
PPC_FUNC_IMPL(__imp__sub_82337068) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r28,-32139
	r28.s64 = -2106261504;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// lwz r4,-31540(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -31540);
	// bl 0x82330760
	sub_82330760(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-31540(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -31540);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823364b8
	sub_823364B8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r27.u32);
	// stb r26,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r26.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stb r30,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823370E8"))) PPC_WEAK_FUNC(sub_823370E8);
PPC_FUNC_IMPL(__imp__sub_823370E8) {
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
	// lwz r16,30784(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30784);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82337238
	if (cr6.eq) goto loc_82337238;
	// li r28,0
	r28.s64 = 0;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822a2330
	sub_822A2330(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// b 0x82337154
	goto loc_82337154;
loc_82337140:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x8233715c
	if (cr6.eq) goto loc_8233715C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_82337154:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82337140
	if (!cr0.eq) goto loc_82337140;
loc_8233715C:
	// subf r29,r30,r11
	r29.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stbx r28,r29,r11
	PPC_STORE_U8(r29.u32 + r11.u32, r28.u8);
loc_82337178:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82337188
	goto loc_82337188;
loc_82337180:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82337188:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x82337180
	if (cr6.eq) goto loc_82337180;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823371bc
	if (cr6.eq) goto loc_823371BC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82347708
	sub_82347708(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822a2280
	sub_822A2280(ctx, base);
	// b 0x82337178
	goto loc_82337178;
loc_823371BC:
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823371dc
	if (cr0.eq) goto loc_823371DC;
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
loc_823371DC:
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r28,36(r27)
	PPC_STORE_U32(r27.u32 + 36, r28.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337208
	if (cr0.eq) goto loc_82337208;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// bl 0x82348f20
	sub_82348F20(ctx, base);
	// b 0x8233720c
	goto loc_8233720C;
loc_82337208:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8233720C:
	// li r11,1
	r11.s64 = 1;
	// stw r3,36(r27)
	PPC_STORE_U32(r27.u32 + 36, ctx.r3.u32);
	// stb r11,24(r27)
	PPC_STORE_U8(r27.u32 + 24, r11.u8);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82337238
	if (cr6.eq) goto loc_82337238;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82337238:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823370F0"))) PPC_WEAK_FUNC(sub_823370F0);
PPC_FUNC_IMPL(__imp__sub_823370F0) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82337238
	if (cr6.eq) goto loc_82337238;
	// li r28,0
	r28.s64 = 0;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822a2330
	sub_822A2330(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// b 0x82337154
	goto loc_82337154;
loc_82337140:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x8233715c
	if (cr6.eq) goto loc_8233715C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_82337154:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82337140
	if (!cr0.eq) goto loc_82337140;
loc_8233715C:
	// subf r29,r30,r11
	r29.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stbx r28,r29,r11
	PPC_STORE_U8(r29.u32 + r11.u32, r28.u8);
loc_82337178:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x82337188
	goto loc_82337188;
loc_82337180:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82337188:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x82337180
	if (cr6.eq) goto loc_82337180;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823371bc
	if (cr6.eq) goto loc_823371BC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82347708
	sub_82347708(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822a2280
	sub_822A2280(ctx, base);
	// b 0x82337178
	goto loc_82337178;
loc_823371BC:
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823371dc
	if (cr0.eq) goto loc_823371DC;
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
loc_823371DC:
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r28,36(r27)
	PPC_STORE_U32(r27.u32 + 36, r28.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337208
	if (cr0.eq) goto loc_82337208;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// bl 0x82348f20
	sub_82348F20(ctx, base);
	// b 0x8233720c
	goto loc_8233720C;
loc_82337208:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8233720C:
	// li r11,1
	r11.s64 = 1;
	// stw r3,36(r27)
	PPC_STORE_U32(r27.u32 + 36, ctx.r3.u32);
	// stb r11,24(r27)
	PPC_STORE_U8(r27.u32 + 24, r11.u8);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82337238
	if (cr6.eq) goto loc_82337238;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82337238:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82337240"))) PPC_WEAK_FUNC(sub_82337240);
PPC_FUNC_IMPL(__imp__sub_82337240) {
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

__attribute__((alias("__imp__sub_82337268"))) PPC_WEAK_FUNC(sub_82337268);
PPC_FUNC_IMPL(__imp__sub_82337268) {
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

__attribute__((alias("__imp__sub_82337290"))) PPC_WEAK_FUNC(sub_82337290);
PPC_FUNC_IMPL(__imp__sub_82337290) {
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
	// lwz r16,30888(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30888);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,29940
	r11.s64 = r11.s64 + 29940;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,56(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82337300
	if (cr6.eq) goto loc_82337300;
loc_823372D0:
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x823372ec
	if (cr0.eq) goto loc_823372EC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82336cc0
	sub_82336CC0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823372EC:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823372d0
	if (!cr6.eq) goto loc_823372D0;
loc_82337300:
	// lwz r29,68(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// b 0x8233732c
	goto loc_8233732C;
loc_82337308:
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82337324
	if (cr0.eq) goto loc_82337324;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82336d10
	sub_82336D10(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82337324:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_8233732C:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82337308
	if (!cr6.eq) goto loc_82337308;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8233733C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x8233733c
	if (cr6.lt) goto loc_8233733C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337384
	if (cr0.eq) goto loc_82337384;
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
loc_82337384:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823373a8
	if (cr0.eq) goto loc_823373A8;
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
loc_823373A8:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823373cc
	if (cr0.eq) goto loc_823373CC;
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
loc_823373CC:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823373f0
	if (cr0.eq) goto loc_823373F0;
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
loc_823373F0:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r28,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337414
	if (cr0.eq) goto loc_82337414;
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
loc_82337414:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337438
	if (cr0.eq) goto loc_82337438;
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
loc_82337438:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8233745c
	if (cr0.eq) goto loc_8233745C;
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
loc_8233745C:
	// lwz r29,52(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r28,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r28.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8233747c
	if (cr0.eq) goto loc_8233747C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82347c58
	sub_82347C58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8233747C:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r28,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823374a0
	if (cr0.eq) goto loc_823374A0;
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
loc_823374A0:
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823374c4
	if (cr0.eq) goto loc_823374C4;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823374C4:
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823374e4
	if (cr0.eq) goto loc_823374E4;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823374E4:
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82337504
	if (cr0.eq) goto loc_82337504;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82337504:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82337298"))) PPC_WEAK_FUNC(sub_82337298);
PPC_FUNC_IMPL(__imp__sub_82337298) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,29940
	r11.s64 = r11.s64 + 29940;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,56(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82337300
	if (cr6.eq) goto loc_82337300;
loc_823372D0:
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x823372ec
	if (cr0.eq) goto loc_823372EC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82336cc0
	sub_82336CC0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823372EC:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823372d0
	if (!cr6.eq) goto loc_823372D0;
loc_82337300:
	// lwz r29,68(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// b 0x8233732c
	goto loc_8233732C;
loc_82337308:
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82337324
	if (cr0.eq) goto loc_82337324;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82336d10
	sub_82336D10(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82337324:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_8233732C:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82337308
	if (!cr6.eq) goto loc_82337308;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8233733C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x8233733c
	if (cr6.lt) goto loc_8233733C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337384
	if (cr0.eq) goto loc_82337384;
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
loc_82337384:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823373a8
	if (cr0.eq) goto loc_823373A8;
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
loc_823373A8:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823373cc
	if (cr0.eq) goto loc_823373CC;
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
loc_823373CC:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823373f0
	if (cr0.eq) goto loc_823373F0;
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
loc_823373F0:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r28,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337414
	if (cr0.eq) goto loc_82337414;
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
loc_82337414:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337438
	if (cr0.eq) goto loc_82337438;
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
loc_82337438:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8233745c
	if (cr0.eq) goto loc_8233745C;
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
loc_8233745C:
	// lwz r29,52(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// stw r28,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r28.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8233747c
	if (cr0.eq) goto loc_8233747C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82347c58
	sub_82347C58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8233747C:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r28,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823374a0
	if (cr0.eq) goto loc_823374A0;
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
loc_823374A0:
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823374c4
	if (cr0.eq) goto loc_823374C4;
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823374C4:
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823374e4
	if (cr0.eq) goto loc_823374E4;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823374E4:
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82337504
	if (cr0.eq) goto loc_82337504;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82337504:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,26336
	r11.s64 = r11.s64 + 26336;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82337518"))) PPC_WEAK_FUNC(sub_82337518);
PPC_FUNC_IMPL(__imp__sub_82337518) {
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
	// bl 0x822ce798
	sub_822CE798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337540"))) PPC_WEAK_FUNC(sub_82337540);
PPC_FUNC_IMPL(__imp__sub_82337540) {
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

__attribute__((alias("__imp__sub_8233756C"))) PPC_WEAK_FUNC(sub_8233756C);
PPC_FUNC_IMPL(__imp__sub_8233756C) {
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

__attribute__((alias("__imp__sub_82337598"))) PPC_WEAK_FUNC(sub_82337598);
PPC_FUNC_IMPL(__imp__sub_82337598) {
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
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
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

__attribute__((alias("__imp__sub_823375C4"))) PPC_WEAK_FUNC(sub_823375C4);
PPC_FUNC_IMPL(__imp__sub_823375C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823375C8"))) PPC_WEAK_FUNC(sub_823375C8);
PPC_FUNC_IMPL(__imp__sub_823375C8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82331698
	sub_82331698(ctx, base);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// bne cr6,0x8233768c
	if (!cr6.eq) goto loc_8233768C;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 13);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8233768c
	if (!cr0.eq) goto loc_8233768C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x8233768c
	if (!cr6.gt) goto loc_8233768C;
	// lbz r11,12(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// li r31,0
	r31.s64 = 0;
loc_8233763C:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8233765c
	if (!cr0.eq) goto loc_8233765C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// blt cr6,0x8233763c
	if (cr6.lt) goto loc_8233763C;
	// li r31,-1
	r31.s64 = -1;
loc_8233765C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,8744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82336180
	sub_82336180(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82336f20
	sub_82336F20(ctx, base);
loc_8233768C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82337698"))) PPC_WEAK_FUNC(sub_82337698);
PPC_FUNC_IMPL(__imp__sub_82337698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x823370f0
	sub_823370F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823376B0"))) PPC_WEAK_FUNC(sub_823376B0);
PPC_FUNC_IMPL(__imp__sub_823376B0) {
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
	// lwz r16,30992(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30992);
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
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
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
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82337068
	sub_82337068(ctx, base);
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

__attribute__((alias("__imp__sub_823376B8"))) PPC_WEAK_FUNC(sub_823376B8);
PPC_FUNC_IMPL(__imp__sub_823376B8) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
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
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82337068
	sub_82337068(ctx, base);
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

__attribute__((alias("__imp__sub_82337730"))) PPC_WEAK_FUNC(sub_82337730);
PPC_FUNC_IMPL(__imp__sub_82337730) {
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

__attribute__((alias("__imp__sub_8233775C"))) PPC_WEAK_FUNC(sub_8233775C);
PPC_FUNC_IMPL(__imp__sub_8233775C) {
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

__attribute__((alias("__imp__sub_82337788"))) PPC_WEAK_FUNC(sub_82337788);
PPC_FUNC_IMPL(__imp__sub_82337788) {
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
	// lwz r16,31056(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 31056);
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
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
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
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// bl 0x82337068
	sub_82337068(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823349a8
	sub_823349A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82337790"))) PPC_WEAK_FUNC(sub_82337790);
PPC_FUNC_IMPL(__imp__sub_82337790) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
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
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// bl 0x82337068
	sub_82337068(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823349a8
	sub_823349A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823377FC"))) PPC_WEAK_FUNC(sub_823377FC);
PPC_FUNC_IMPL(__imp__sub_823377FC) {
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

__attribute__((alias("__imp__sub_82337828"))) PPC_WEAK_FUNC(sub_82337828);
PPC_FUNC_IMPL(__imp__sub_82337828) {
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

__attribute__((alias("__imp__sub_82337854"))) PPC_WEAK_FUNC(sub_82337854);
PPC_FUNC_IMPL(__imp__sub_82337854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337858"))) PPC_WEAK_FUNC(sub_82337858);
PPC_FUNC_IMPL(__imp__sub_82337858) {
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
	// lwz r16,31128(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 31128);
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
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
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
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// bl 0x82337068
	sub_82337068(ctx, base);
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

__attribute__((alias("__imp__sub_82337860"))) PPC_WEAK_FUNC(sub_82337860);
PPC_FUNC_IMPL(__imp__sub_82337860) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
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
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// bl 0x82337068
	sub_82337068(ctx, base);
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

__attribute__((alias("__imp__sub_823378CC"))) PPC_WEAK_FUNC(sub_823378CC);
PPC_FUNC_IMPL(__imp__sub_823378CC) {
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

__attribute__((alias("__imp__sub_823378F8"))) PPC_WEAK_FUNC(sub_823378F8);
PPC_FUNC_IMPL(__imp__sub_823378F8) {
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

__attribute__((alias("__imp__sub_82337924"))) PPC_WEAK_FUNC(sub_82337924);
PPC_FUNC_IMPL(__imp__sub_82337924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337928"))) PPC_WEAK_FUNC(sub_82337928);
PPC_FUNC_IMPL(__imp__sub_82337928) {
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
	// lwz r16,31184(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 31184);
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337970
	if (cr0.eq) goto loc_82337970;
	// lbz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 52);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82337860
	sub_82337860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82337974
	goto loc_82337974;
loc_82337970:
	// li r29,0
	r29.s64 = 0;
loc_82337974:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r11.u32);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x823349a8
	sub_823349A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82337930"))) PPC_WEAK_FUNC(sub_82337930);
PPC_FUNC_IMPL(__imp__sub_82337930) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337970
	if (cr0.eq) goto loc_82337970;
	// lbz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 52);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82337860
	sub_82337860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82337974
	goto loc_82337974;
loc_82337970:
	// li r29,0
	r29.s64 = 0;
loc_82337974:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r11.u32);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x823349a8
	sub_823349A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82337998"))) PPC_WEAK_FUNC(sub_82337998);
PPC_FUNC_IMPL(__imp__sub_82337998) {
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

__attribute__((alias("__imp__sub_823379C0"))) PPC_WEAK_FUNC(sub_823379C0);
PPC_FUNC_IMPL(__imp__sub_823379C0) {
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
	// bl 0x82337298
	sub_82337298(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823379f0
	if (cr0.eq) goto loc_823379F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823379F0:
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

__attribute__((alias("__imp__sub_82337A0C"))) PPC_WEAK_FUNC(sub_82337A0C);
PPC_FUNC_IMPL(__imp__sub_82337A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337A10"))) PPC_WEAK_FUNC(sub_82337A10);
PPC_FUNC_IMPL(__imp__sub_82337A10) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31256(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 31256);
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r29,68
	r30.s64 = r29.s64 + 68;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82337930
	sub_82337930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82335bc0
	sub_82335BC0(ctx, base);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r27,0
	r27.s64 = 0;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82337ab0
	if (cr6.eq) goto loc_82337AB0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82337AB0:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
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
	// beq 0x82337b14
	if (cr0.eq) goto loc_82337B14;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_82337AD4:
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r27,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r27.u8);
	// stb r27,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r27.u8);
	// bl 0x82336708
	sub_82336708(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
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
	// bne 0x82337ad4
	if (!cr0.eq) goto loc_82337AD4;
loc_82337B14:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82337A18"))) PPC_WEAK_FUNC(sub_82337A18);
PPC_FUNC_IMPL(__imp__sub_82337A18) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r29,68
	r30.s64 = r29.s64 + 68;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82337930
	sub_82337930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82335bc0
	sub_82335BC0(ctx, base);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r27,0
	r27.s64 = 0;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,72(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82337ab0
	if (cr6.eq) goto loc_82337AB0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82337AB0:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
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
	// beq 0x82337b14
	if (cr0.eq) goto loc_82337B14;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_82337AD4:
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r27,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r27.u8);
	// stb r27,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r27.u8);
	// bl 0x82336708
	sub_82336708(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
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
	// bne 0x82337ad4
	if (!cr0.eq) goto loc_82337AD4;
loc_82337B14:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82337B28"))) PPC_WEAK_FUNC(sub_82337B28);
PPC_FUNC_IMPL(__imp__sub_82337B28) {
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

__attribute__((alias("__imp__sub_82337B50"))) PPC_WEAK_FUNC(sub_82337B50);
PPC_FUNC_IMPL(__imp__sub_82337B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31344(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 31344);
	// mflr r12
	// bl 0x8239bcc0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// addi r4,r11,31320
	ctx.r4.s64 = r11.s64 + 31320;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r17,r19
	r17.u64 = r19.u64;
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
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82337bc0
	if (cr0.eq) goto loc_82337BC0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
loc_82337BC0:
	// lha r11,8(r20)
	r11.s64 = int16_t(PPC_LOAD_U16(r20.u32 + 8));
	// mr r15,r19
	r15.u64 = r19.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82337e4c
	if (!cr0.gt) goto loc_82337E4C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r18,r19
	r18.u64 = r19.u64;
	// mr r21,r19
	r21.u64 = r19.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_82337BE0:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// add r3,r21,r11
	ctx.r3.u64 = r21.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r19,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r19.u8);
	// stb r19,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r19.u8);
	// bl 0x823350a8
	sub_823350A8(ctx, base);
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82337cac
	if (cr0.eq) goto loc_82337CAC;
	// lwz r30,4(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82337c5c
	if (cr6.eq) goto loc_82337C5C;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82334ce0
	sub_82334CE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82337C5C:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337c98
	if (cr0.eq) goto loc_82337C98;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,52(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwzx r11,r18,r11
	r11.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// bl 0x82337790
	sub_82337790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82337c9c
	goto loc_82337C9C;
loc_82337C98:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82337C9C:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r26,68
	ctx.r3.s64 = r26.s64 + 68;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x82337cdc
	goto loc_82337CDC;
loc_82337CAC:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337ccc
	if (cr0.eq) goto loc_82337CCC;
	// bl 0x823376b8
	sub_823376B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82337cd0
	goto loc_82337CD0;
loc_82337CCC:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82337CD0:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r26,68
	ctx.r3.s64 = r26.s64 + 68;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82337CDC:
	// bl 0x82335bc0
	sub_82335BC0(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82337d00
	if (cr6.eq) goto loc_82337D00;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82330588
	sub_82330588(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82337d04
	goto loc_82337D04;
loc_82337D00:
	// li r23,-1
	r23.s64 = -1;
loc_82337D04:
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82337d1c
	if (cr0.eq) goto loc_82337D1C;
	// lis r11,-32205
	r11.s64 = -2110586880;
	// addi r25,r11,26376
	r25.s64 = r11.s64 + 26376;
	// b 0x82337d24
	goto loc_82337D24;
loc_82337D1C:
	// lis r11,-32205
	r11.s64 = -2110586880;
	// addi r25,r11,26896
	r25.s64 = r11.s64 + 26896;
loc_82337D24:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82337e14
	if (!cr6.eq) goto loc_82337E14;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r19
	r22.u64 = r19.u64;
	// lha r11,8(r27)
	r11.s64 = int16_t(PPC_LOAD_U16(r27.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82337e34
	if (!cr0.gt) goto loc_82337E34;
	// mr r24,r19
	r24.u64 = r19.u64;
loc_82337D58:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r3,r24,r11
	ctx.r3.u64 = r24.u64 + r11.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82337dd8
	if (cr0.eq) goto loc_82337DD8;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82337dfc
	if (!cr6.eq) goto loc_82337DFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82337dfc
	if (!cr0.gt) goto loc_82337DFC;
	// mr r28,r19
	r28.u64 = r19.u64;
loc_82337D94:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r14,r31,96
	r14.s64 = r31.s64 + 96;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82337d94
	if (cr6.lt) goto loc_82337D94;
	// b 0x82337dfc
	goto loc_82337DFC;
loc_82337DD8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82337DFC:
	// lha r11,8(r27)
	r11.s64 = int16_t(PPC_LOAD_U16(r27.u32 + 8));
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82337d58
	if (cr6.lt) goto loc_82337D58;
	// b 0x82337e34
	goto loc_82337E34;
loc_82337E14:
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82337E34:
	// lha r11,8(r20)
	r11.s64 = int16_t(PPC_LOAD_U16(r20.u32 + 8));
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r21,r21,8
	r21.s64 = r21.s64 + 8;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmpw cr6,r15,r11
	cr6.compare<int32_t>(r15.s32, r11.s32, xer);
	// blt cr6,0x82337be0
	if (cr6.lt) goto loc_82337BE0;
loc_82337E4C:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82337B58"))) PPC_WEAK_FUNC(sub_82337B58);
PPC_FUNC_IMPL(__imp__sub_82337B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// addi r4,r11,31320
	ctx.r4.s64 = r11.s64 + 31320;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r17,r19
	r17.u64 = r19.u64;
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
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82337bc0
	if (cr0.eq) goto loc_82337BC0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
loc_82337BC0:
	// lha r11,8(r20)
	r11.s64 = int16_t(PPC_LOAD_U16(r20.u32 + 8));
	// mr r15,r19
	r15.u64 = r19.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82337e4c
	if (!cr0.gt) goto loc_82337E4C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r18,r19
	r18.u64 = r19.u64;
	// mr r21,r19
	r21.u64 = r19.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_82337BE0:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// add r3,r21,r11
	ctx.r3.u64 = r21.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r19,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r19.u8);
	// stb r19,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r19.u8);
	// bl 0x823350a8
	sub_823350A8(ctx, base);
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82337cac
	if (cr0.eq) goto loc_82337CAC;
	// lwz r30,4(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82337c5c
	if (cr6.eq) goto loc_82337C5C;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82334ce0
	sub_82334CE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82337C5C:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337c98
	if (cr0.eq) goto loc_82337C98;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,52(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwzx r11,r18,r11
	r11.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// bl 0x82337790
	sub_82337790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82337c9c
	goto loc_82337C9C;
loc_82337C98:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82337C9C:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r26,68
	ctx.r3.s64 = r26.s64 + 68;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x82337cdc
	goto loc_82337CDC;
loc_82337CAC:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337ccc
	if (cr0.eq) goto loc_82337CCC;
	// bl 0x823376b8
	sub_823376B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82337cd0
	goto loc_82337CD0;
loc_82337CCC:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82337CD0:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r26,68
	ctx.r3.s64 = r26.s64 + 68;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82337CDC:
	// bl 0x82335bc0
	sub_82335BC0(ctx, base);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x82337d00
	if (cr6.eq) goto loc_82337D00;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82330588
	sub_82330588(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82337d04
	goto loc_82337D04;
loc_82337D00:
	// li r23,-1
	r23.s64 = -1;
loc_82337D04:
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82337d1c
	if (cr0.eq) goto loc_82337D1C;
	// lis r11,-32205
	r11.s64 = -2110586880;
	// addi r25,r11,26376
	r25.s64 = r11.s64 + 26376;
	// b 0x82337d24
	goto loc_82337D24;
loc_82337D1C:
	// lis r11,-32205
	r11.s64 = -2110586880;
	// addi r25,r11,26896
	r25.s64 = r11.s64 + 26896;
loc_82337D24:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82337e14
	if (!cr6.eq) goto loc_82337E14;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r19
	r22.u64 = r19.u64;
	// lha r11,8(r27)
	r11.s64 = int16_t(PPC_LOAD_U16(r27.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82337e34
	if (!cr0.gt) goto loc_82337E34;
	// mr r24,r19
	r24.u64 = r19.u64;
loc_82337D58:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r3,r24,r11
	ctx.r3.u64 = r24.u64 + r11.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82337dd8
	if (cr0.eq) goto loc_82337DD8;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82337dfc
	if (!cr6.eq) goto loc_82337DFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82337dfc
	if (!cr0.gt) goto loc_82337DFC;
	// mr r28,r19
	r28.u64 = r19.u64;
loc_82337D94:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r14,r31,96
	r14.s64 = r31.s64 + 96;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82337d94
	if (cr6.lt) goto loc_82337D94;
	// b 0x82337dfc
	goto loc_82337DFC;
loc_82337DD8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82337DFC:
	// lha r11,8(r27)
	r11.s64 = int16_t(PPC_LOAD_U16(r27.u32 + 8));
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82337d58
	if (cr6.lt) goto loc_82337D58;
	// b 0x82337e34
	goto loc_82337E34;
loc_82337E14:
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82337E34:
	// lha r11,8(r20)
	r11.s64 = int16_t(PPC_LOAD_U16(r20.u32 + 8));
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r21,r21,8
	r21.s64 = r21.s64 + 8;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmpw cr6,r15,r11
	cr6.compare<int32_t>(r15.s32, r11.s32, xer);
	// blt cr6,0x82337be0
	if (cr6.lt) goto loc_82337BE0;
loc_82337E4C:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82337E58"))) PPC_WEAK_FUNC(sub_82337E58);
PPC_FUNC_IMPL(__imp__sub_82337E58) {
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

__attribute__((alias("__imp__sub_82337E80"))) PPC_WEAK_FUNC(sub_82337E80);
PPC_FUNC_IMPL(__imp__sub_82337E80) {
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

__attribute__((alias("__imp__sub_82337EA8"))) PPC_WEAK_FUNC(sub_82337EA8);
PPC_FUNC_IMPL(__imp__sub_82337EA8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31488(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 31488);
	// mflr r12
	// bl 0x8239bccc
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r18,r4,2,0,29
	r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r27,68
	r17.s64 = r27.s64 + 68;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwzx r22,r18,r11
	r22.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// lwz r10,56(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// lwz r11,60(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 60);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lha r10,8(r10)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 8));
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82337f00
	if (cr6.lt) goto loc_82337F00;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82337F00:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82337f18
	if (cr0.eq) goto loc_82337F18;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82337a18
	sub_82337A18(ctx, base);
	// b 0x82338204
	goto loc_82338204;
loc_82337F18:
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r24,r27,56
	r24.s64 = r27.s64 + 56;
	// std r23,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r23.u64);
	// ld r11,112(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// srawi r30,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// lwz r10,36(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82337f74
	if (cr6.eq) goto loc_82337F74;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82337F74:
	// mr r29,r23
	r29.u64 = r23.u64;
	// b 0x82337f84
	goto loc_82337F84;
loc_82337F7C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82337F84:
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
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
	// bne 0x82337f7c
	if (!cr0.eq) goto loc_82337F7C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r21,r11,18432
	r21.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337fd4
	if (cr0.eq) goto loc_82337FD4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// b 0x82337fd8
	goto loc_82337FD8;
loc_82337FD4:
	// mr r19,r23
	r19.u64 = r23.u64;
loc_82337FD8:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r25,88(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823380ec
	if (!cr6.gt) goto loc_823380EC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_8233800C:
	// lwz r29,8(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r23,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r23.u32);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8233803c
	if (cr0.eq) goto loc_8233803C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8233803C:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823380a4
	if (cr0.eq) goto loc_823380A4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,28(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lfs f2,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82334818
	sub_82334818(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823380a8
	goto loc_823380A8;
loc_823380A4:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823380A8:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82335b58
	sub_82335B58(ctx, base);
	// addi r6,r31,120
	ctx.r6.s64 = r31.s64 + 120;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// stfs f31,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r23,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r23.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r23,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r23.u8);
	// bl 0x82336708
	sub_82336708(ctx, base);
	// lwz r25,0(r25)
	r25.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x8233800c
	if (!cr0.eq) goto loc_8233800C;
loc_823380EC:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82338118
	if (cr0.eq) goto loc_82338118;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8233811c
	goto loc_8233811C;
loc_82338118:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8233811C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8233815c
	if (cr0.eq) goto loc_8233815C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8233815C:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82338190
	if (cr0.eq) goto loc_82338190;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82338190:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwzx r11,r18,r11
	r11.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// lbz r30,16(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823381d0
	if (cr0.eq) goto loc_823381D0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,44(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// bl 0x82337790
	sub_82337790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823381d4
	goto loc_823381D4;
loc_823381D0:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823381D4:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82335bc0
	sub_82335BC0(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x823381f4
	if (cr6.eq) goto loc_823381F4;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_823381F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
loc_82338204:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_82337EB0"))) PPC_WEAK_FUNC(sub_82337EB0);
PPC_FUNC_IMPL(__imp__sub_82337EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bccc
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r18,r4,2,0,29
	r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r27,68
	r17.s64 = r27.s64 + 68;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwzx r22,r18,r11
	r22.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// lwz r10,56(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 56);
	// lwz r11,60(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 60);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lha r10,8(r10)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 8));
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82337f00
	if (cr6.lt) goto loc_82337F00;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82337F00:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82337f18
	if (cr0.eq) goto loc_82337F18;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82337a18
	sub_82337A18(ctx, base);
	// b 0x82338204
	goto loc_82338204;
loc_82337F18:
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r24,r27,56
	r24.s64 = r27.s64 + 56;
	// std r23,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r23.u64);
	// ld r11,112(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// std r11,88(r31)
	PPC_STORE_U64(r31.u32 + 88, r11.u64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// srawi r30,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// lwz r10,36(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82337f74
	if (cr6.eq) goto loc_82337F74;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82337F74:
	// mr r29,r23
	r29.u64 = r23.u64;
	// b 0x82337f84
	goto loc_82337F84;
loc_82337F7C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82337F84:
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
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
	// bne 0x82337f7c
	if (!cr0.eq) goto loc_82337F7C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r21,r11,18432
	r21.s64 = r11.s64 + 18432;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82337fd4
	if (cr0.eq) goto loc_82337FD4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// b 0x82337fd8
	goto loc_82337FD8;
loc_82337FD4:
	// mr r19,r23
	r19.u64 = r23.u64;
loc_82337FD8:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r25,88(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823380ec
	if (!cr6.gt) goto loc_823380EC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_8233800C:
	// lwz r29,8(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r23,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r23.u32);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8233803c
	if (cr0.eq) goto loc_8233803C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8233803C:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823380a4
	if (cr0.eq) goto loc_823380A4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,28(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lfs f2,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82334818
	sub_82334818(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823380a8
	goto loc_823380A8;
loc_823380A4:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823380A8:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82335b58
	sub_82335B58(ctx, base);
	// addi r6,r31,120
	ctx.r6.s64 = r31.s64 + 120;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// stfs f31,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r23,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r23.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r23,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r23.u8);
	// bl 0x82336708
	sub_82336708(ctx, base);
	// lwz r25,0(r25)
	r25.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x8233800c
	if (!cr0.eq) goto loc_8233800C;
loc_823380EC:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82338118
	if (cr0.eq) goto loc_82338118;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8233811c
	goto loc_8233811C;
loc_82338118:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_8233811C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8233815c
	if (cr0.eq) goto loc_8233815C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8233815C:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82338190
	if (cr0.eq) goto loc_82338190;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82338190:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwzx r11,r18,r11
	r11.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// lbz r30,16(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823381d0
	if (cr0.eq) goto loc_823381D0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,44(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 44);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// bl 0x82337790
	sub_82337790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823381d4
	goto loc_823381D4;
loc_823381D0:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823381D4:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82335bc0
	sub_82335BC0(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x823381f4
	if (cr6.eq) goto loc_823381F4;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_823381F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821bdde8
	sub_821BDDE8(ctx, base);
loc_82338204:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_82338210"))) PPC_WEAK_FUNC(sub_82338210);
PPC_FUNC_IMPL(__imp__sub_82338210) {
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

__attribute__((alias("__imp__sub_82338238"))) PPC_WEAK_FUNC(sub_82338238);
PPC_FUNC_IMPL(__imp__sub_82338238) {
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

__attribute__((alias("__imp__sub_82338260"))) PPC_WEAK_FUNC(sub_82338260);
PPC_FUNC_IMPL(__imp__sub_82338260) {
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

