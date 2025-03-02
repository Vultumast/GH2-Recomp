#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821A9D74"))) PPC_WEAK_FUNC(sub_821A9D74);
PPC_FUNC_IMPL(__imp__sub_821A9D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9D78"))) PPC_WEAK_FUNC(sub_821A9D78);
PPC_FUNC_IMPL(__imp__sub_821A9D78) {
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
	// beq cr6,0x821a9dc8
	if (cr6.eq) goto loc_821A9DC8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x821a9db4
	if (cr6.lt) goto loc_821A9DB4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9aa8
	sub_821A9AA8(ctx, base);
	// b 0x821a9dc8
	goto loc_821A9DC8;
loc_821A9DB4:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x82193898
	sub_82193898(ctx, base);
loc_821A9DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9DD8"))) PPC_WEAK_FUNC(sub_821A9DD8);
PPC_FUNC_IMPL(__imp__sub_821A9DD8) {
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
	// blt cr6,0x821a9e10
	if (cr6.lt) goto loc_821A9E10;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821a9e14
	if (cr6.lt) goto loc_821A9E14;
loc_821A9E10:
	// li r11,0
	r11.s64 = 0;
loc_821A9E14:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821a9e68
	if (cr0.eq) goto loc_821A9E68;
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
	// bl 0x821a9dd8
	sub_821A9DD8(ctx, base);
	// b 0x821a9f98
	goto loc_821A9F98;
loc_821A9E68:
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
	// ble cr6,0x821a9f24
	if (!cr6.gt) goto loc_821A9F24;
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
	// ble 0x821a9ee0
	if (!cr0.gt) goto loc_821A9EE0;
loc_821A9EB0:
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
	// bgt 0x821a9eb0
	if (cr0.gt) goto loc_821A9EB0;
loc_821A9EE0:
	// add r9,r26,r29
	ctx.r9.u64 = r26.u64 + r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x821a9f98
	if (cr6.eq) goto loc_821A9F98;
loc_821A9EF0:
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
	// bne cr6,0x821a9ef0
	if (!cr6.eq) goto loc_821A9EF0;
	// b 0x821a9f98
	goto loc_821A9F98;
loc_821A9F24:
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
	// beq cr6,0x821a9f98
	if (cr6.eq) goto loc_821A9F98;
loc_821A9F68:
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
	// bne cr6,0x821a9f68
	if (!cr6.eq) goto loc_821A9F68;
loc_821A9F98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821A9FA0"))) PPC_WEAK_FUNC(sub_821A9FA0);
PPC_FUNC_IMPL(__imp__sub_821A9FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,-28880(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28880);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r28,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r28.s64 = r11.s32 >> 4;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82124b30
	sub_82124B30(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821A9FA8"))) PPC_WEAK_FUNC(sub_821A9FA8);
PPC_FUNC_IMPL(__imp__sub_821A9FA8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r28,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r28.s64 = r11.s32 >> 4;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82124b30
	sub_82124B30(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AA010"))) PPC_WEAK_FUNC(sub_821AA010);
PPC_FUNC_IMPL(__imp__sub_821AA010) {
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
	// bl 0x821c9380
	sub_821C9380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA038"))) PPC_WEAK_FUNC(sub_821AA038);
PPC_FUNC_IMPL(__imp__sub_821AA038) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x821aa068
	if (cr6.lt) goto loc_821AA068;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821AA068:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821aa0cc
	if (cr0.eq) goto loc_821AA0CC;
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// divw. r9,r10,r9
	ctx.r9.s32 = ctx.r10.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x821aa0b0
	if (!cr0.gt) goto loc_821AA0B0;
	// addi r10,r11,-12
	ctx.r10.s64 = r11.s64 + -12;
loc_821AA088:
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// bgt 0x821aa088
	if (cr0.gt) goto loc_821AA088;
loc_821AA0B0:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x821aa0e4
	goto loc_821AA0E4;
loc_821AA0CC:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821a8ba0
	sub_821A8BA0(ctx, base);
loc_821AA0E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA0F4"))) PPC_WEAK_FUNC(sub_821AA0F4);
PPC_FUNC_IMPL(__imp__sub_821AA0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA0F8"))) PPC_WEAK_FUNC(sub_821AA0F8);
PPC_FUNC_IMPL(__imp__sub_821AA0F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf r30,r29,r31
	r30.s64 = r31.s64 - r29.s64;
	// li r27,12
	r27.s64 = 12;
	// b 0x821aa138
	goto loc_821AA138;
loc_821AA11C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a9a38
	sub_821A9A38(ctx, base);
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
loc_821AA138:
	// divw r11,r30,r27
	r11.s32 = r30.s32 / r27.s32;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x821aa11c
	if (cr6.gt) goto loc_821AA11C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821AA14C"))) PPC_WEAK_FUNC(sub_821AA14C);
PPC_FUNC_IMPL(__imp__sub_821AA14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA150"))) PPC_WEAK_FUNC(sub_821AA150);
PPC_FUNC_IMPL(__imp__sub_821AA150) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x821aa1a0
	if (cr6.eq) goto loc_821AA1A0;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// b 0x821aa198
	goto loc_821AA198;
loc_821AA178:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa038
	sub_821AA038(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_821AA198:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x821aa178
	if (!cr6.eq) goto loc_821AA178;
loc_821AA1A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AA1A8"))) PPC_WEAK_FUNC(sub_821AA1A8);
PPC_FUNC_IMPL(__imp__sub_821AA1A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x821a99b0
	sub_821A99B0(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x821aa25c
	if (!cr6.lt) goto loc_821AA25C;
loc_821AA1E0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x821aa1f8
	if (cr6.lt) goto loc_821AA1F8;
	// li r11,0
	r11.s64 = 0;
loc_821AA1F8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aa250
	if (cr0.eq) goto loc_821AA250;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r9,r30,r29
	ctx.r9.s64 = r29.s64 - r30.s64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// divw r5,r9,r5
	ctx.r5.s32 = ctx.r9.s32 / ctx.r5.s32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821a91f8
	sub_821A91F8(ctx, base);
loc_821AA250:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x821aa1e0
	if (cr6.lt) goto loc_821AA1E0;
loc_821AA25C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa0f8
	sub_821AA0F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821AA274"))) PPC_WEAK_FUNC(sub_821AA274);
PPC_FUNC_IMPL(__imp__sub_821AA274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA278"))) PPC_WEAK_FUNC(sub_821AA278);
PPC_FUNC_IMPL(__imp__sub_821AA278) {
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
	// lwz r16,-28780(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28780);
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
	// blt cr6,0x821aa2d8
	if (cr6.lt) goto loc_821AA2D8;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_821AA2D8:
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
	// bl 0x821a8a38
	sub_821A8A38(ctx, base);
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
	// bne cr6,0x821aa344
	if (!cr6.eq) goto loc_821AA344;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821aa33c
	if (cr6.eq) goto loc_821AA33C;
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
loc_821AA33C:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x821aa35c
	goto loc_821AA35C;
loc_821AA344:
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
loc_821AA35C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aa380
	if (!cr0.eq) goto loc_821AA380;
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
loc_821AA380:
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
	// b 0x821aa3c8
	goto loc_821AA3C8;
loc_821AA3A8:
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
loc_821AA3C8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aa3a8
	if (!cr0.eq) goto loc_821AA3A8;
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

__attribute__((alias("__imp__sub_821AA280"))) PPC_WEAK_FUNC(sub_821AA280);
PPC_FUNC_IMPL(__imp__sub_821AA280) {
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
	// blt cr6,0x821aa2d8
	if (cr6.lt) goto loc_821AA2D8;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_821AA2D8:
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
	// bl 0x821a8a38
	sub_821A8A38(ctx, base);
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
	// bne cr6,0x821aa344
	if (!cr6.eq) goto loc_821AA344;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821aa33c
	if (cr6.eq) goto loc_821AA33C;
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
loc_821AA33C:
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x821aa35c
	goto loc_821AA35C;
loc_821AA344:
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
loc_821AA35C:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aa380
	if (!cr0.eq) goto loc_821AA380;
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
loc_821AA380:
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
	// b 0x821aa3c8
	goto loc_821AA3C8;
loc_821AA3A8:
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
loc_821AA3C8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aa3a8
	if (!cr0.eq) goto loc_821AA3A8;
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

__attribute__((alias("__imp__sub_821AA408"))) PPC_WEAK_FUNC(sub_821AA408);
PPC_FUNC_IMPL(__imp__sub_821AA408) {
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
	// lwz r16,-28780(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28780);
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

__attribute__((alias("__imp__sub_821AA410"))) PPC_WEAK_FUNC(sub_821AA410);
PPC_FUNC_IMPL(__imp__sub_821AA410) {
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

__attribute__((alias("__imp__sub_821AA440"))) PPC_WEAK_FUNC(sub_821AA440);
PPC_FUNC_IMPL(__imp__sub_821AA440) {
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
	// li r10,12
	ctx.r10.s64 = 12;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// ble cr6,0x821aa4a8
	if (!cr6.gt) goto loc_821AA4A8;
	// addi r31,r3,192
	r31.s64 = ctx.r3.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821aa150
	sub_821AA150(ctx, base);
	// b 0x821aa49c
	goto loc_821AA49C;
loc_821AA480:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x821a8ba0
	sub_821A8BA0(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_821AA49C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821aa480
	if (!cr6.eq) goto loc_821AA480;
	// b 0x821aa4b0
	goto loc_821AA4B0;
loc_821AA4A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821aa150
	sub_821AA150(ctx, base);
loc_821AA4B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AA4B8"))) PPC_WEAK_FUNC(sub_821AA4B8);
PPC_FUNC_IMPL(__imp__sub_821AA4B8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x821a9fa8
	sub_821A9FA8(ctx, base);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
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

__attribute__((alias("__imp__sub_821AA528"))) PPC_WEAK_FUNC(sub_821AA528);
PPC_FUNC_IMPL(__imp__sub_821AA528) {
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
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// beq cr6,0x821aa6ac
	if (cr6.eq) goto loc_821AA6AC;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r29,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	r29.s64 = ctx.r9.s32 >> 4;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x821aa5c4
	if (!cr6.gt) goto loc_821AA5C4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821a9c90
	sub_821A9C90(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821aa584
	goto loc_821AA584;
loc_821AA580:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_821AA584:
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
	// bne 0x821aa580
	if (!cr0.eq) goto loc_821AA580;
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
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x821aa69c
	goto loc_821AA69C;
loc_821AA5C4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// blt cr6,0x821aa620
	if (cr6.lt) goto loc_821AA620;
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi. r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x821aa69c
	if (!cr0.gt) goto loc_821AA69C;
loc_821AA5E4:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// bgt 0x821aa5e4
	if (cr0.gt) goto loc_821AA5E4;
	// b 0x821aa69c
	goto loc_821AA69C;
loc_821AA620:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// srawi. r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821aa674
	if (!cr0.gt) goto loc_821AA674;
loc_821AA63C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// bgt 0x821aa63c
	if (cr0.gt) goto loc_821AA63C;
loc_821AA674:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x821c9ab0
	sub_821C9AB0(ctx, base);
loc_821AA69C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_821AA6AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AA6B8"))) PPC_WEAK_FUNC(sub_821AA6B8);
PPC_FUNC_IMPL(__imp__sub_821AA6B8) {
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
	// lwz r16,-28696(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28696);
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
	// beq cr6,0x821aa6e8
	if (cr6.eq) goto loc_821AA6E8;
	// bl 0x821aa4b8
	sub_821AA4B8(ctx, base);
loc_821AA6E8:
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

__attribute__((alias("__imp__sub_821AA6C0"))) PPC_WEAK_FUNC(sub_821AA6C0);
PPC_FUNC_IMPL(__imp__sub_821AA6C0) {
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
	// beq cr6,0x821aa6e8
	if (cr6.eq) goto loc_821AA6E8;
	// bl 0x821aa4b8
	sub_821AA4B8(ctx, base);
loc_821AA6E8:
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

__attribute__((alias("__imp__sub_821AA6FC"))) PPC_WEAK_FUNC(sub_821AA6FC);
PPC_FUNC_IMPL(__imp__sub_821AA6FC) {
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

__attribute__((alias("__imp__sub_821AA728"))) PPC_WEAK_FUNC(sub_821AA728);
PPC_FUNC_IMPL(__imp__sub_821AA728) {
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
	// lwz r16,-28640(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28640);
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
	// beq cr6,0x821aa758
	if (cr6.eq) goto loc_821AA758;
	// bl 0x821aa4b8
	sub_821AA4B8(ctx, base);
loc_821AA758:
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

__attribute__((alias("__imp__sub_821AA730"))) PPC_WEAK_FUNC(sub_821AA730);
PPC_FUNC_IMPL(__imp__sub_821AA730) {
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
	// beq cr6,0x821aa758
	if (cr6.eq) goto loc_821AA758;
	// bl 0x821aa4b8
	sub_821AA4B8(ctx, base);
loc_821AA758:
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

__attribute__((alias("__imp__sub_821AA76C"))) PPC_WEAK_FUNC(sub_821AA76C);
PPC_FUNC_IMPL(__imp__sub_821AA76C) {
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

__attribute__((alias("__imp__sub_821AA798"))) PPC_WEAK_FUNC(sub_821AA798);
PPC_FUNC_IMPL(__imp__sub_821AA798) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x821aa804
	if (!cr6.lt) goto loc_821AA804;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x821a9d20
	sub_821A9D20(ctx, base);
	// b 0x821aa81c
	goto loc_821AA81C;
loc_821AA804:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x821a9d78
	sub_821A9D78(ctx, base);
loc_821AA81C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f29.f64 = double(temp.f32);
	// beq 0x821aa8e0
	if (cr0.eq) goto loc_821AA8E0;
	// li r30,0
	r30.s64 = 0;
loc_821AA844:
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lfs f13,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	f0.f64 = double(temp.f32);
	// lfs f12,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(f0.f64)));
	// beq cr6,0x821aa8ac
	if (cr6.eq) goto loc_821AA8AC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	f31.f64 = double(float(f0.f64 * f31.f64));
loc_821AA8AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stfsx f31,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + r11.u32, temp.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// lfsx f0,r30,r9
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// fadds f30,f0,f30
	f30.f64 = double(float(f0.f64 + f30.f64));
	// blt cr6,0x821aa844
	if (cr6.lt) goto loc_821AA844;
loc_821AA8E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821aa948
	if (cr0.eq) goto loc_821AA948;
	// fdivs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 / f30.f64));
	// li r8,0
	ctx.r8.s64 = 0;
loc_821AA900:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x821aa900
	if (cr6.lt) goto loc_821AA900;
loc_821AA948:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821AA95C"))) PPC_WEAK_FUNC(sub_821AA95C);
PPC_FUNC_IMPL(__imp__sub_821AA95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA960"))) PPC_WEAK_FUNC(sub_821AA960);
PPC_FUNC_IMPL(__imp__sub_821AA960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// bl 0x8239bcfc
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// bl 0x8219bcf8
	sub_8219BCF8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f30,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// li r30,0
	r30.s64 = 0;
	// stfs f29,44(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// lfs f0,-29000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29000);
	f0.f64 = double(temp.f32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821a8f98
	sub_821A8F98(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a8ec8
	sub_821A8EC8(ctx, base);
	// addi r11,r31,56
	r11.s64 = r31.s64 + 56;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// bl 0x821a87c0
	sub_821A87C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfd f13,-28592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -28592);
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// beq 0x821aaab4
	if (cr0.eq) goto loc_821AAAB4;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// twllei r11,0
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r11
	ctx.r8.s32 = ctx.r10.s32 / r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// andc r9,r11,r9
	ctx.r9.u64 = r11.u64 & ~ctx.r9.u64;
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// twlgei r9,-1
	// bge 0x821aaab0
	if (!cr0.lt) goto loc_821AAAB0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_821AAAB0:
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_821AAAB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AAACC"))) PPC_WEAK_FUNC(sub_821AAACC);
PPC_FUNC_IMPL(__imp__sub_821AAACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAAD0"))) PPC_WEAK_FUNC(sub_821AAAD0);
PPC_FUNC_IMPL(__imp__sub_821AAAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x821aaae0
	goto loc_821AAAE0;
loc_821AAADC:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_821AAAE0:
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
	// bne 0x821aaadc
	if (!cr0.eq) goto loc_821AAADC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AAB14"))) PPC_WEAK_FUNC(sub_821AAB14);
PPC_FUNC_IMPL(__imp__sub_821AAB14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAB18"))) PPC_WEAK_FUNC(sub_821AAB18);
PPC_FUNC_IMPL(__imp__sub_821AAB18) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// li r26,12
	r26.s64 = 12;
	// b 0x821aabb4
	goto loc_821AABB4;
loc_821AAB40:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x821aabc4
	if (cr6.eq) goto loc_821AABC4;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// addi r5,r31,-12
	ctx.r5.s64 = r31.s64 + -12;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x821a8b08
	sub_821A8B08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x821a9bf0
	sub_821A9BF0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x821aab18
	sub_821AAB18(ctx, base);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_821AABB4:
	// divw r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x821aab40
	if (cr6.gt) goto loc_821AAB40;
	// b 0x821aabd8
	goto loc_821AABD8;
loc_821AABC4:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821aa1a8
	sub_821AA1A8(ctx, base);
loc_821AABD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821AABE0"))) PPC_WEAK_FUNC(sub_821AABE0);
PPC_FUNC_IMPL(__imp__sub_821AABE0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x821aa528
	sub_821AA528(ctx, base);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// subf r9,r31,r30
	ctx.r9.s64 = r30.s64 - r31.s64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_821AAC1C:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x821aac1c
	if (!cr0.eq) goto loc_821AAC1C;
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

__attribute__((alias("__imp__sub_821AAC4C"))) PPC_WEAK_FUNC(sub_821AAC4C);
PPC_FUNC_IMPL(__imp__sub_821AAC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAC50"))) PPC_WEAK_FUNC(sub_821AAC50);
PPC_FUNC_IMPL(__imp__sub_821AAC50) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x821aac7c
	goto loc_821AAC7C;
loc_821AAC78:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_821AAC7C:
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
	// bne 0x821aac78
	if (!cr0.eq) goto loc_821AAC78;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821aacb0
	if (cr6.eq) goto loc_821AACB0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AACB0:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aacc0
	if (cr0.eq) goto loc_821AACC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821AACC0:
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

__attribute__((alias("__imp__sub_821AACDC"))) PPC_WEAK_FUNC(sub_821AACDC);
PPC_FUNC_IMPL(__imp__sub_821AACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AACE0"))) PPC_WEAK_FUNC(sub_821AACE0);
PPC_FUNC_IMPL(__imp__sub_821AACE0) {
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
	// beq cr6,0x821aad30
	if (cr6.eq) goto loc_821AAD30;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821aad20
	if (cr0.eq) goto loc_821AAD20;
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
loc_821AAD20:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x821aad44
	goto loc_821AAD44;
loc_821AAD30:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x821aa280
	sub_821AA280(ctx, base);
loc_821AAD44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAD54"))) PPC_WEAK_FUNC(sub_821AAD54);
PPC_FUNC_IMPL(__imp__sub_821AAD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAD58"))) PPC_WEAK_FUNC(sub_821AAD58);
PPC_FUNC_IMPL(__imp__sub_821AAD58) {
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
	// beq cr6,0x821aada8
	if (cr6.eq) goto loc_821AADA8;
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
	// blt cr6,0x821aad94
	if (cr6.lt) goto loc_821AAD94;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821a9dd8
	sub_821A9DD8(ctx, base);
	// b 0x821aada8
	goto loc_821AADA8;
loc_821AAD94:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8218b508
	sub_8218B508(ctx, base);
loc_821AADA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AADB8"))) PPC_WEAK_FUNC(sub_821AADB8);
PPC_FUNC_IMPL(__imp__sub_821AADB8) {
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
	// beq cr6,0x821aae24
	if (cr6.eq) goto loc_821AAE24;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// b 0x821aadf4
	goto loc_821AADF4;
loc_821AADEC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_821AADF4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x821aadec
	if (!cr6.eq) goto loc_821AADEC;
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
	// bl 0x821aab18
	sub_821AAB18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aa440
	sub_821AA440(ctx, base);
loc_821AAE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AAE2C"))) PPC_WEAK_FUNC(sub_821AAE2C);
PPC_FUNC_IMPL(__imp__sub_821AAE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAE30"))) PPC_WEAK_FUNC(sub_821AAE30);
PPC_FUNC_IMPL(__imp__sub_821AAE30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d5dc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f28,f4
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f4.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f5
	f31.f64 = ctx.f5.f64;
	// stfs f28,244(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fmr f26,f1
	f26.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fsubs f0,f31,f28
	f0.f64 = double(float(f31.f64 - f28.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// ble cr6,0x821aaf5c
	if (!cr6.gt) goto loc_821AAF5C;
	// fadds f0,f30,f29
	f0.f64 = double(float(f30.f64 + f29.f64));
	// li r30,12
	r30.s64 = 12;
	// fadds f25,f0,f28
	f25.f64 = double(float(f0.f64 + f28.f64));
	// stfs f25,80(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_821AAE88:
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f29.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f31,f25
	cr6.compare(f31.f64, f25.f64);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// blt cr6,0x821aaea4
	if (cr6.lt) goto loc_821AAEA4;
	// addi r10,r1,252
	ctx.r10.s64 = ctx.r1.s64 + 252;
loc_821AAEA4:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f28.f64);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// blt cr6,0x821aaeb4
	if (cr6.lt) goto loc_821AAEB4;
	// addi r11,r1,244
	r11.s64 = ctx.r1.s64 + 244;
loc_821AAEB4:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfs f3,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x821a9068
	sub_821A9068(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aaf5c
	if (cr0.eq) goto loc_821AAF5C;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// lfs f27,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f27.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821aaf24
	if (cr0.eq) goto loc_821AAF24;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_821AAEF8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// beq cr6,0x821aaf5c
	if (cr6.eq) goto loc_821AAF5C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r9,r30
	ctx.r9.s32 = ctx.r9.s32 / r30.s32;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x821aaef8
	if (cr6.lt) goto loc_821AAEF8;
loc_821AAF24:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x821aace0
	sub_821AACE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f31.f64;
	// fadds f4,f27,f30
	ctx.f4.f64 = double(float(f27.f64 + f30.f64));
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x821aae30
	sub_821AAE30(ctx, base);
	// fsubs f31,f27,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f27.f64 - f30.f64));
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fsubs f0,f31,f28
	f0.f64 = double(float(f31.f64 - f28.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bgt cr6,0x821aae88
	if (cr6.gt) goto loc_821AAE88;
loc_821AAF5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d628
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

__attribute__((alias("__imp__sub_821AAF7C"))) PPC_WEAK_FUNC(sub_821AAF7C);
PPC_FUNC_IMPL(__imp__sub_821AAF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAF80"))) PPC_WEAK_FUNC(sub_821AAF80);
PPC_FUNC_IMPL(__imp__sub_821AAF80) {
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
	// b 0x821aafbc
	goto loc_821AAFBC;
loc_821AAFA0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-32
	ctx.r3.s64 = r11.s64 + -32;
	// bl 0x821aac50
	sub_821AAC50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_821AAFBC:
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
	// bne 0x821aafa0
	if (!cr0.eq) goto loc_821AAFA0;
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

__attribute__((alias("__imp__sub_821AAFF4"))) PPC_WEAK_FUNC(sub_821AAFF4);
PPC_FUNC_IMPL(__imp__sub_821AAFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAFF8"))) PPC_WEAK_FUNC(sub_821AAFF8);
PPC_FUNC_IMPL(__imp__sub_821AAFF8) {
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
	PPCRegister f0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r31,r30,68
	r31.s64 = r30.s64 + 68;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8218b408
	sub_8218B408(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f29,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// lfs f0,-28584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28584);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 * f0.f64));
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f30,f28
	cr6.compare(f30.f64, f28.f64);
	// bne cr6,0x821ab060
	if (!cr6.eq) goto loc_821AB060;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f2,-29000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29000);
	ctx.f2.f64 = double(temp.f32);
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// b 0x821ab06c
	goto loc_821AB06C;
loc_821AB060:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f28.f64);
	// bne cr6,0x821ab06c
	if (!cr6.eq) goto loc_821AB06C;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_821AB06C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f4,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// fnmsubs f3,f2,f0,f30
	ctx.f3.f64 = double(float(-(ctx.f2.f64 * f0.f64 - f30.f64)));
	// bl 0x821aae30
	sub_821AAE30(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821aadb8
	sub_821AADB8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ab120
	if (!cr0.eq) goto loc_821AB120;
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f28.f64);
	// ble cr6,0x821ab120
	if (!cr6.gt) goto loc_821AB120;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lfs f3,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	f0.f64 = double(temp.f32);
	// fsubs f0,f3,f0
	f0.f64 = double(float(ctx.f3.f64 - f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x821ab120
	if (!cr6.gt) goto loc_821AB120;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fsubs f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 - f31.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x821a9068
	sub_821A9068(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ab120
	if (cr0.eq) goto loc_821AB120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aace0
	sub_821AACE0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x821aadb8
	sub_821AADB8(ctx, base);
loc_821AB120:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r28,12
	r28.s64 = 12;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r28
	r11.s32 = r11.s32 / r28.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821ab19c
	if (!cr6.gt) goto loc_821AB19C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_821AB148:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,-12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x821ab178
	if (!cr6.lt) goto loc_821AB178;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821a9948
	sub_821A9948(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
loc_821AB178:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r28
	r11.s32 = r11.s32 / r28.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x821ab148
	if (cr6.lt) goto loc_821AB148;
loc_821AB19C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d634
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AB1AC"))) PPC_WEAK_FUNC(sub_821AB1AC);
PPC_FUNC_IMPL(__imp__sub_821AB1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB1B0"))) PPC_WEAK_FUNC(sub_821AB1B0);
PPC_FUNC_IMPL(__imp__sub_821AB1B0) {
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
	// bge cr6,0x821ab1fc
	if (!cr6.lt) goto loc_821AB1FC;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x821ab210
	if (cr6.eq) goto loc_821AB210;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821ca490
	sub_821CA490(ctx, base);
	// b 0x821ab210
	goto loc_821AB210;
loc_821AB1FC:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x821aad58
	sub_821AAD58(ctx, base);
loc_821AB210:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AB220"))) PPC_WEAK_FUNC(sub_821AB220);
PPC_FUNC_IMPL(__imp__sub_821AB220) {
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
	// beq cr6,0x821ab25c
	if (cr6.eq) goto loc_821AB25C;
loc_821AB244:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aac50
	sub_821AAC50(ctx, base);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821ab244
	if (!cr6.eq) goto loc_821AB244;
loc_821AB25C:
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

__attribute__((alias("__imp__sub_821AB274"))) PPC_WEAK_FUNC(sub_821AB274);
PPC_FUNC_IMPL(__imp__sub_821AB274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB278"))) PPC_WEAK_FUNC(sub_821AB278);
PPC_FUNC_IMPL(__imp__sub_821AB278) {
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
	// bl 0x8239d5e4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// addi r24,r31,4
	r24.s64 = r31.s64 + 4;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ab4d0
	if (cr0.eq) goto loc_821AB4D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// extsw r11,r6
	r11.s64 = ctx.r6.s32;
	// bne cr6,0x821ab2e4
	if (!cr6.eq) goto loc_821AB2E4;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x821ab2f0
	goto loc_821AB2F0;
loc_821AB2E4:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_821AB2F0:
	// fcfid f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,5736
	r11.s64 = r11.s64 + 5736;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,-9672
	ctx.r4.s64 = r11.s64 + -9672;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,48(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f12,-28580(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28580);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f29,f0,f12
	f29.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fnmsubs f30,f0,f31,f13
	f30.f64 = double(float(-(f0.f64 * f31.f64 - ctx.f13.f64)));
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r27,4
	r27.s64 = 4;
	// lfs f28,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
loc_821AB364:
	// stfs f28,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821ab390
	if (cr6.eq) goto loc_821AB390;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821AB390:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// fadds f30,f29,f30
	f30.f64 = double(float(f29.f64 + f30.f64));
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x821ab364
	if (!cr0.eq) goto loc_821AB364;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lfs f30,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f30.f64 = double(temp.f32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// mullw r4,r11,r25
	ctx.r4.s64 = int64_t(r11.s32) * int64_t(r25.s32);
	// bl 0x821ab1b0
	sub_821AB1B0(ctx, base);
	// extsw r11,r25
	r11.s64 = r25.s32;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// fnmsubs f31,f0,f31,f30
	f31.f64 = double(float(-(f0.f64 * f31.f64 - f30.f64)));
	// ble cr6,0x821ab4d0
	if (!cr6.gt) goto loc_821AB4D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
loc_821AB400:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8219bcf8
	sub_8219BCF8(ctx, base);
	// bl 0x821933b0
	sub_821933B0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215d680
	sub_8215D680(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821a51e0
	sub_821A51E0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821ab4c4
	if (cr0.eq) goto loc_821AB4C4;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r31,r27,4,0,27
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
loc_821AB460:
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
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
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x821ab460
	if (cr6.lt) goto loc_821AB460;
loc_821AB4C4:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// fadds f31,f31,f27
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f27.f64));
	// bne 0x821ab400
	if (!cr0.eq) goto loc_821AB400;
loc_821AB4D0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8239d630
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821AB4E0"))) PPC_WEAK_FUNC(sub_821AB4E0);
PPC_FUNC_IMPL(__imp__sub_821AB4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x821aaf80
	sub_821AAF80(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
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

__attribute__((alias("__imp__sub_821AB540"))) PPC_WEAK_FUNC(sub_821AB540);
PPC_FUNC_IMPL(__imp__sub_821AB540) {
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
	// lwz r16,-28524(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28524);
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
loc_821AB574:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821ab59c
	if (cr6.eq) goto loc_821AB59C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa730
	sub_821AA730(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x821ab574
	goto loc_821AB574;
loc_821AB59C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AB548"))) PPC_WEAK_FUNC(sub_821AB548);
PPC_FUNC_IMPL(__imp__sub_821AB548) {
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
loc_821AB574:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821ab59c
	if (cr6.eq) goto loc_821AB59C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aa730
	sub_821AA730(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x821ab574
	goto loc_821AB574;
loc_821AB59C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AB5A8"))) PPC_WEAK_FUNC(sub_821AB5A8);
PPC_FUNC_IMPL(__imp__sub_821AB5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-28524(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28524);
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
	// bl 0x821ab220
	sub_821AB220(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB5B0"))) PPC_WEAK_FUNC(sub_821AB5B0);
PPC_FUNC_IMPL(__imp__sub_821AB5B0) {
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
	// bl 0x821ab220
	sub_821AB220(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821AB5E0"))) PPC_WEAK_FUNC(sub_821AB5E0);
PPC_FUNC_IMPL(__imp__sub_821AB5E0) {
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
	// lwz r16,-28420(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28420);
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
loc_821AB614:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x821ab63c
	if (cr6.eq) goto loc_821AB63C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821aa730
	sub_821AA730(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x821ab614
	goto loc_821AB614;
loc_821AB63C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AB5E8"))) PPC_WEAK_FUNC(sub_821AB5E8);
PPC_FUNC_IMPL(__imp__sub_821AB5E8) {
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
loc_821AB614:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x821ab63c
	if (cr6.eq) goto loc_821AB63C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821aa730
	sub_821AA730(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x821ab614
	goto loc_821AB614;
loc_821AB63C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AB648"))) PPC_WEAK_FUNC(sub_821AB648);
PPC_FUNC_IMPL(__imp__sub_821AB648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-28420(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28420);
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x821ab220
	sub_821AB220(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB650"))) PPC_WEAK_FUNC(sub_821AB650);
PPC_FUNC_IMPL(__imp__sub_821AB650) {
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
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x821ab220
	sub_821AB220(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821AB680"))) PPC_WEAK_FUNC(sub_821AB680);
PPC_FUNC_IMPL(__imp__sub_821AB680) {
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
	// lwz r16,-28360(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28360);
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
	// bl 0x821aaf80
	sub_821AAF80(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821ab6e8
	if (cr0.eq) goto loc_821AB6E8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AB6E8:
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

__attribute__((alias("__imp__sub_821AB688"))) PPC_WEAK_FUNC(sub_821AB688);
PPC_FUNC_IMPL(__imp__sub_821AB688) {
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
	// bl 0x821aaf80
	sub_821AAF80(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821ab6e8
	if (cr0.eq) goto loc_821AB6E8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AB6E8:
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

__attribute__((alias("__imp__sub_821AB700"))) PPC_WEAK_FUNC(sub_821AB700);
PPC_FUNC_IMPL(__imp__sub_821AB700) {
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
	// bl 0x821a91d0
	sub_821A91D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AB728"))) PPC_WEAK_FUNC(sub_821AB728);
PPC_FUNC_IMPL(__imp__sub_821AB728) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi. r30,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r30.s64 = r11.s32 >> 5;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x821ab76c
	if (!cr0.gt) goto loc_821AB76C;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_821AB754:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aabe0
	sub_821AABE0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// bgt 0x821ab754
	if (cr0.gt) goto loc_821AB754;
loc_821AB76C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ab220
	sub_821AB220(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821AB78C"))) PPC_WEAK_FUNC(sub_821AB78C);
PPC_FUNC_IMPL(__imp__sub_821AB78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB790"))) PPC_WEAK_FUNC(sub_821AB790);
PPC_FUNC_IMPL(__imp__sub_821AB790) {
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
	// lwz r16,-28296(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28296);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x821ab7d4
	if (cr6.lt) goto loc_821AB7D4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821ab7d8
	if (cr6.lt) goto loc_821AB7D8;
loc_821AB7D4:
	// li r11,0
	r11.s64 = 0;
loc_821AB7D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ab858
	if (cr0.eq) goto loc_821AB858;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821aa4b8
	sub_821AA4B8(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x821ab798
	sub_821AB798(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// b 0x821ab820
	goto loc_821AB820;
loc_821AB81C:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_821AB820:
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
	// bne 0x821ab81c
	if (!cr0.eq) goto loc_821AB81C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821ab93c
	if (cr6.eq) goto loc_821AB93C;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x821ab93c
	goto loc_821AB93C;
loc_821AB858:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// srawi r26,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r26.s64 = r11.s32 >> 5;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x821ab8e8
	if (!cr6.gt) goto loc_821AB8E8;
	// rlwinm r26,r27,5,0,26
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821ab5e8
	sub_821AB5E8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// srawi. r29,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r29.s64 = r11.s32 >> 5;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x821ab8bc
	if (!cr0.gt) goto loc_821AB8BC;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_821AB8A4:
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aabe0
	sub_821AABE0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x821ab8a4
	if (cr0.gt) goto loc_821AB8A4;
loc_821AB8BC:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x821ab93c
	if (cr6.eq) goto loc_821AB93C;
loc_821AB8CC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aabe0
	sub_821AABE0(ctx, base);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x821ab8cc
	if (!cr6.eq) goto loc_821AB8CC;
	// b 0x821ab93c
	goto loc_821AB93C;
loc_821AB8E8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r4,r26,r27
	ctx.r4.s64 = r27.s64 - r26.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ab548
	sub_821AB548(ctx, base);
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
	// bl 0x821ab5e8
	sub_821AB5E8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r26,5,0,26
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x821ab934
	goto loc_821AB934;
loc_821AB924:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821aabe0
	sub_821AABE0(ctx, base);
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
loc_821AB934:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x821ab924
	if (!cr6.eq) goto loc_821AB924;
loc_821AB93C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821AB798"))) PPC_WEAK_FUNC(sub_821AB798);
PPC_FUNC_IMPL(__imp__sub_821AB798) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x821ab7d4
	if (cr6.lt) goto loc_821AB7D4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821ab7d8
	if (cr6.lt) goto loc_821AB7D8;
loc_821AB7D4:
	// li r11,0
	r11.s64 = 0;
loc_821AB7D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ab858
	if (cr0.eq) goto loc_821AB858;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821aa4b8
	sub_821AA4B8(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x821ab798
	sub_821AB798(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// b 0x821ab820
	goto loc_821AB820;
loc_821AB81C:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_821AB820:
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
	// bne 0x821ab81c
	if (!cr0.eq) goto loc_821AB81C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821ab93c
	if (cr6.eq) goto loc_821AB93C;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x821ab93c
	goto loc_821AB93C;
loc_821AB858:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// srawi r26,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r26.s64 = r11.s32 >> 5;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x821ab8e8
	if (!cr6.gt) goto loc_821AB8E8;
	// rlwinm r26,r27,5,0,26
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821ab5e8
	sub_821AB5E8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// srawi. r29,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r29.s64 = r11.s32 >> 5;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x821ab8bc
	if (!cr0.gt) goto loc_821AB8BC;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_821AB8A4:
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aabe0
	sub_821AABE0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x821ab8a4
	if (cr0.gt) goto loc_821AB8A4;
loc_821AB8BC:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x821ab93c
	if (cr6.eq) goto loc_821AB93C;
loc_821AB8CC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aabe0
	sub_821AABE0(ctx, base);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x821ab8cc
	if (!cr6.eq) goto loc_821AB8CC;
	// b 0x821ab93c
	goto loc_821AB93C;
loc_821AB8E8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r4,r26,r27
	ctx.r4.s64 = r27.s64 - r26.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ab548
	sub_821AB548(ctx, base);
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
	// bl 0x821ab5e8
	sub_821AB5E8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r26,5,0,26
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x821ab934
	goto loc_821AB934;
loc_821AB924:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821aabe0
	sub_821AABE0(ctx, base);
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
loc_821AB934:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x821ab924
	if (!cr6.eq) goto loc_821AB924;
loc_821AB93C:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821AB944"))) PPC_WEAK_FUNC(sub_821AB944);
PPC_FUNC_IMPL(__imp__sub_821AB944) {
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
	// bl 0x821aaad0
	sub_821AAAD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AB96C"))) PPC_WEAK_FUNC(sub_821AB96C);
PPC_FUNC_IMPL(__imp__sub_821AB96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AB970"))) PPC_WEAK_FUNC(sub_821AB970);
PPC_FUNC_IMPL(__imp__sub_821AB970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-28164(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28164);
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x821ab9cc
	if (cr6.lt) goto loc_821AB9CC;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_821AB9CC:
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
	// bl 0x821a8aa0
	sub_821A8AA0(ctx, base);
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
	// bl 0x821ab5e8
	sub_821AB5E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x821aba34
	if (!cr6.eq) goto loc_821ABA34;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821aa6c0
	sub_821AA6C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// b 0x821aba4c
	goto loc_821ABA4C;
loc_821ABA34:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821ab548
	sub_821AB548(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821ABA4C:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aba74
	if (!cr0.eq) goto loc_821ABA74;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821ab5e8
	sub_821AB5E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821ABA74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ab4e0
	sub_821AB4E0(ctx, base);
	// rlwinm r11,r24,5,0,26
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821AB978"))) PPC_WEAK_FUNC(sub_821AB978);
PPC_FUNC_IMPL(__imp__sub_821AB978) {
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x821ab9cc
	if (cr6.lt) goto loc_821AB9CC;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_821AB9CC:
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
	// bl 0x821a8aa0
	sub_821A8AA0(ctx, base);
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
	// bl 0x821ab5e8
	sub_821AB5E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x821aba34
	if (!cr6.eq) goto loc_821ABA34;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821aa6c0
	sub_821AA6C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// b 0x821aba4c
	goto loc_821ABA4C;
loc_821ABA34:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821ab548
	sub_821AB548(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821ABA4C:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aba74
	if (!cr0.eq) goto loc_821ABA74;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821ab5e8
	sub_821AB5E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821ABA74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ab4e0
	sub_821AB4E0(ctx, base);
	// rlwinm r11,r24,5,0,26
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821ABA98"))) PPC_WEAK_FUNC(sub_821ABA98);
PPC_FUNC_IMPL(__imp__sub_821ABA98) {
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
	// lwz r16,-28164(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28164);
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
	// bl 0x821ab220
	sub_821AB220(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
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
	// beq cr6,0x821abb30
	if (cr6.eq) goto loc_821ABB30;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x821abb1c
	if (cr6.lt) goto loc_821ABB1C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821ab798
	sub_821AB798(ctx, base);
	// b 0x821abb30
	goto loc_821ABB30;
loc_821ABB1C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x821ab978
	sub_821AB978(ctx, base);
loc_821ABB30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ABAA0"))) PPC_WEAK_FUNC(sub_821ABAA0);
PPC_FUNC_IMPL(__imp__sub_821ABAA0) {
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
	// bl 0x821ab220
	sub_821AB220(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821ABAE0"))) PPC_WEAK_FUNC(sub_821ABAE0);
PPC_FUNC_IMPL(__imp__sub_821ABAE0) {
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
	// beq cr6,0x821abb30
	if (cr6.eq) goto loc_821ABB30;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x821abb1c
	if (cr6.lt) goto loc_821ABB1C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821ab798
	sub_821AB798(ctx, base);
	// b 0x821abb30
	goto loc_821ABB30;
loc_821ABB1C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x821ab978
	sub_821AB978(ctx, base);
loc_821ABB30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ABB40"))) PPC_WEAK_FUNC(sub_821ABB40);
PPC_FUNC_IMPL(__imp__sub_821ABB40) {
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
	// srawi r8,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x821abb8c
	if (!cr6.lt) goto loc_821ABB8C;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x821abba0
	if (cr6.eq) goto loc_821ABBA0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821ab728
	sub_821AB728(ctx, base);
	// b 0x821abba0
	goto loc_821ABBA0;
loc_821ABB8C:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x821abae0
	sub_821ABAE0(ctx, base);
loc_821ABBA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ABBB0"))) PPC_WEAK_FUNC(sub_821ABBB0);
PPC_FUNC_IMPL(__imp__sub_821ABBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
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
	// lwz r16,-27856(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27856);
	// mflr r12
	// bl 0x8239bcc0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5b0
	// addi r31,r1,-944
	r31.s64 = ctx.r1.s64 + -944;
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f1,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 980, temp.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r4,972(r31)
	PPC_STORE_U32(r31.u32 + 972, ctx.r4.u32);
	// fmr f14,f2
	f14.f64 = ctx.f2.f64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r25,996(r31)
	PPC_STORE_U32(r31.u32 + 996, r25.u32);
	// bl 0x8219bcf8
	sub_8219BCF8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82194830
	sub_82194830(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x821a60e0
	sub_821A60E0(ctx, base);
	// lwz r11,436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r10,22880
	ctx.r4.s64 = ctx.r10.s64 + 22880;
	// addi r10,r31,436
	ctx.r10.s64 = r31.s64 + 436;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82315150
	sub_82315150(ctx, base);
	// addi r4,r31,432
	ctx.r4.s64 = r31.s64 + 432;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82167d30
	sub_82167D30(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x821527b8
	sub_821527B8(ctx, base);
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821abcb8
	if (cr6.eq) goto loc_821ABCB8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r10,-21088
	r28.s64 = ctx.r10.s64 + -21088;
loc_821ABC6C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x823a1828
	sub_823A1828(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x821abca4
	if (!cr0.eq) goto loc_821ABCA4;
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82193c28
	sub_82193C28(ctx, base);
loc_821ABCA4:
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82152838
	sub_82152838(ctx, base);
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821abc6c
	if (!cr6.eq) goto loc_821ABC6C;
loc_821ABCB8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-9672
	ctx.r4.s64 = r11.s64 + -9672;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,36(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// addi r4,r11,-28032
	ctx.r4.s64 = r11.s64 + -28032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,328
	ctx.r3.s64 = r31.s64 + 328;
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	f21.f64 = ctx.f1.f64;
	// addi r4,r11,-28040
	ctx.r4.s64 = r11.s64 + -28040;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	f20.f64 = ctx.f1.f64;
	// addi r4,r11,-28048
	ctx.r4.s64 = r11.s64 + -28048;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	f19.f64 = ctx.f1.f64;
	// addi r4,r11,-28056
	ctx.r4.s64 = r11.s64 + -28056;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,300
	ctx.r3.s64 = r31.s64 + 300;
	// fmr f18,f1
	ctx.fpscr.disableFlushMode();
	f18.f64 = ctx.f1.f64;
	// addi r4,r11,-28068
	ctx.r4.s64 = r11.s64 + -28068;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// fmr f17,f1
	ctx.fpscr.disableFlushMode();
	f17.f64 = ctx.f1.f64;
	// addi r4,r11,-28080
	ctx.r4.s64 = r11.s64 + -28080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	f16.f64 = ctx.f1.f64;
	// addi r4,r11,-28088
	ctx.r4.s64 = r11.s64 + -28088;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f15,f1
	ctx.fpscr.disableFlushMode();
	f15.f64 = ctx.f1.f64;
	// stw r29,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r29.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r29.u32);
	// stw r29,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r29.u32);
	// stw r29,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r29.u32);
	// stw r29,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r29.u32);
	// stw r29,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r29.u32);
	// addi r5,r31,400
	ctx.r5.s64 = r31.s64 + 400;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bl 0x821abb40
	sub_821ABB40(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f27,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f27.f64 = double(temp.f32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f28,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f28.f64 = double(temp.f32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f27,36(r30)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// fmuls f25,f0,f28
	f25.f64 = double(float(f0.f64 * f28.f64));
	// fadds f0,f12,f11
	f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f24,f0,f28
	f24.f64 = double(float(f0.f64 * f28.f64));
	// ble 0x821ac3d4
	if (!cr0.gt) goto loc_821AC3D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f22,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f22.f64 = double(temp.f32);
	// lfs f26,-28580(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28580);
	f26.f64 = double(temp.f32);
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
loc_821ABE98:
	// extsw r11,r22
	r11.s64 = r22.s32;
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r29,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r29.u32);
	// std r11,304(r31)
	PPC_STORE_U64(r31.u32 + 304, r11.u64);
	// stw r4,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r4.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r10.u32);
	// lfd f12,304(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 304);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fmadds f23,f12,f0,f13
	f23.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r21,r29
	r21.u64 = r29.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821ac388
	if (!cr0.gt) goto loc_821AC388;
	// mr r26,r22
	r26.u64 = r22.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// b 0x821abef4
	goto loc_821ABEF4;
loc_821ABEF0:
	// lwz r26,84(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_821ABEF4:
	// extsw r11,r21
	r11.s64 = r21.s32;
	// lfs f12,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f27
	cr6.compare(ctx.f12.f64, f27.f64);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// std r11,320(r31)
	PPC_STORE_U64(r31.u32 + 320, r11.u64);
	// lfd f12,320(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 320);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// beq cr6,0x821abf88
	if (cr6.eq) goto loc_821ABF88;
	// rotlwi r10,r26,1
	ctx.r10.u64 = __builtin_rotateleft32(r26.u32, 1);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r9,r26,r11
	ctx.r9.s32 = r26.s32 / r11.s32;
	// andc r8,r11,r10
	ctx.r8.u64 = r11.u64 & ~ctx.r10.u64;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// twllei r11,0
	// subf. r10,r10,r26
	ctx.r10.s64 = r26.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// twlgei r8,-1
	// bge 0x821abf50
	if (!cr0.lt) goto loc_821ABF50;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_821ABF50:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821abf88
	if (!cr0.eq) goto loc_821ABF88;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lfs f0,-29000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29000);
	f0.f64 = double(temp.f32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x821ac35c
	goto loc_821AC35C;
loc_821ABF88:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x821ac150
	if (cr6.eq) goto loc_821AC150;
	// li r28,1
	r28.s64 = 1;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// fsubs f0,f23,f0
	f0.f64 = double(float(f23.f64 - f0.f64));
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821abfc4
	if (cr0.eq) goto loc_821ABFC4;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821ABFC4:
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stw r28,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r28.u32);
	// fsubs f0,f0,f23
	f0.f64 = double(float(f0.f64 - f23.f64));
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821abff4
	if (cr0.eq) goto loc_821ABFF4;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821ABFF4:
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac024
	if (cr0.eq) goto loc_821AC024;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC024:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// stw r28,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r28.u32);
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac054
	if (cr0.eq) goto loc_821AC054;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC054:
	// fsubs f0,f23,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f23.f64 - f25.f64));
	// stw r28,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r28.u32);
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac080
	if (cr0.eq) goto loc_821AC080;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC080:
	// fsubs f0,f31,f24
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f24.f64));
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac0ac
	if (cr0.eq) goto loc_821AC0AC;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC0AC:
	// fsubs f0,f23,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f23.f64 - f31.f64));
	// stw r28,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r28.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac0d8
	if (cr0.eq) goto loc_821AC0D8;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC0D8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821ac12c
	if (cr0.eq) goto loc_821AC12C;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_821AC0F4:
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821ac12c
	if (cr0.eq) goto loc_821AC12C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x821ac0f4
	if (cr6.lt) goto loc_821AC0F4;
loc_821AC12C:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x821ac150
	if (!cr6.lt) goto loc_821AC150;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f0,-29000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29000);
	f0.f64 = double(temp.f32);
	// b 0x821ac344
	goto loc_821AC344;
loc_821AC150:
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lfs f31,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 980);
	f31.f64 = double(temp.f32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r28,972(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 972);
	// addi r4,r31,432
	ctx.r4.s64 = r31.s64 + 432;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r31,112
	ctx.r10.s64 = r31.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x821ab278
	sub_821AB278(ctx, base);
	// addi r10,r31,112
	ctx.r10.s64 = r31.s64 + 112;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r31,256
	ctx.r5.s64 = r31.s64 + 256;
	// addi r4,r31,432
	ctx.r4.s64 = r31.s64 + 432;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ab278
	sub_821AB278(ctx, base);
	// fcmpu cr6,f14,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f14.f64, f27.f64);
	// ble cr6,0x821ac254
	if (!cr6.gt) goto loc_821AC254;
	// neg r11,r27
	r11.s64 = -r27.s64;
	// lfs f30,272(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 272);
	f30.f64 = double(temp.f32);
	// addi r9,r31,260
	ctx.r9.s64 = r31.s64 + 260;
	// fmr f31,f26
	f31.f64 = f26.f64;
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// addi r28,r27,16
	r28.s64 = r27.s64 + 16;
	// li r26,3
	r26.s64 = 3;
	// add r24,r11,r9
	r24.u64 = r11.u64 + ctx.r9.u64;
	// add r23,r11,r10
	r23.u64 = r11.u64 + ctx.r10.u64;
loc_821AC1D8:
	// lfsx f0,r24,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r23,r28
	temp.u32 = PPC_LOAD_U32(r23.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// addi r25,r28,4
	r25.s64 = r28.s64 + 4;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - f0.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// fsubs f0,f22,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f22.f64 - f31.f64));
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * f31.f64));
	// mr r28,r25
	r28.u64 = r25.u64;
	// fadds f31,f31,f26
	f31.f64 = double(float(f31.f64 + f26.f64));
	// fmadds f0,f0,f29,f13
	f0.f64 = double(float(f0.f64 * f29.f64 + ctx.f13.f64));
	// fadds f30,f0,f30
	f30.f64 = double(float(f0.f64 + f30.f64));
	// bne 0x821ac1d8
	if (!cr0.eq) goto loc_821AC1D8;
	// lfs f0,28(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 28);
	f0.f64 = double(temp.f32);
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 - f0.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lwz r26,84(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r25,996(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 996);
	// fcmpu cr6,f0,f14
	cr6.compare(f0.f64, f14.f64);
	// ble cr6,0x821ac254
	if (!cr6.gt) goto loc_821AC254;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f0,-29000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29000);
	f0.f64 = double(temp.f32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mullw r11,r21,r11
	r11.s64 = int64_t(r21.s32) * int64_t(r11.s32);
	// b 0x821ac34c
	goto loc_821AC34C;
loc_821AC254:
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac280
	if (cr0.eq) goto loc_821AC280;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821aa798
	sub_821AA798(ctx, base);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_821AC280:
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	f0.f64 = f27.f64;
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r4,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r4.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821ac318
	if (cr0.eq) goto loc_821AC318;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r8,r5,r11
	ctx.r8.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// subfic r6,r9,-4
	xer.ca = ctx.r9.u32 <= 4294967292;
	ctx.r6.s64 = -4 - ctx.r9.s64;
loc_821AC2B4:
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// divwu r3,r10,r8
	ctx.r3.u32 = ctx.r10.u32 / ctx.r8.u32;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r8,0
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f10,r3,r5
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f0,f13,f10,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + f0.f64));
	// blt cr6,0x821ac2b4
	if (cr6.lt) goto loc_821AC2B4;
loc_821AC318:
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f13,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// std r11,336(r31)
	PPC_STORE_U64(r31.u32 + 336, r11.u64);
	// lfd f12,336(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 336);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x821ac344
	if (!cr6.lt) goto loc_821AC344;
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
loc_821AC344:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
loc_821AC34C:
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
loc_821AC35C:
	// addi r10,r26,-1
	ctx.r10.s64 = r26.s64 + -1;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// blt cr6,0x821abef0
	if (cr6.lt) goto loc_821ABEF0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 260);
loc_821AC388:
	// b 0x821ac390
	goto loc_821AC390;
loc_821AC38C:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
loc_821AC390:
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ac38c
	if (!cr0.eq) goto loc_821AC38C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821ac3c4
	if (cr6.eq) goto loc_821AC3C4;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AC3C4:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x821abe98
	if (cr6.lt) goto loc_821ABE98;
loc_821AC3D4:
	// li r30,1
	r30.s64 = 1;
	// stfs f21,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac400
	if (cr0.eq) goto loc_821AC400;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC400:
	// stfs f20,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac428
	if (cr0.eq) goto loc_821AC428;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC428:
	// stfs f19,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac450
	if (cr0.eq) goto loc_821AC450;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC450:
	// stfs f18,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac478
	if (cr0.eq) goto loc_821AC478;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC478:
	// stfs f17,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac4a0
	if (cr0.eq) goto loc_821AC4A0;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC4A0:
	// stfs f16,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac4c8
	if (cr0.eq) goto loc_821AC4C8;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC4C8:
	// stfs f15,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac4f0
	if (cr0.eq) goto loc_821AC4F0;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC4F0:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821ac510
	if (cr6.eq) goto loc_821AC510;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AC510:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x821ab688
	sub_821AB688(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821ac538
	if (cr6.eq) goto loc_821AC538;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AC538:
	// addi r3,r31,608
	ctx.r3.s64 = r31.s64 + 608;
	// bl 0x821a5f80
	sub_821A5F80(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = r31.s64 + 608;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82194330
	sub_82194330(ctx, base);
	// addi r1,r31,944
	ctx.r1.s64 = r31.s64 + 944;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5fc
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_821ABBB8"))) PPC_WEAK_FUNC(sub_821ABBB8);
PPC_FUNC_IMPL(__imp__sub_821ABBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
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
	// bl 0x8239bcc0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5b0
	// addi r31,r1,-944
	r31.s64 = ctx.r1.s64 + -944;
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stfs f1,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 980, temp.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r4,972(r31)
	PPC_STORE_U32(r31.u32 + 972, ctx.r4.u32);
	// fmr f14,f2
	f14.f64 = ctx.f2.f64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r25,996(r31)
	PPC_STORE_U32(r31.u32 + 996, r25.u32);
	// bl 0x8219bcf8
	sub_8219BCF8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82194830
	sub_82194830(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x821a60e0
	sub_821A60E0(ctx, base);
	// lwz r11,436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r10,22880
	ctx.r4.s64 = ctx.r10.s64 + 22880;
	// addi r10,r31,436
	ctx.r10.s64 = r31.s64 + 436;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82315150
	sub_82315150(ctx, base);
	// addi r4,r31,432
	ctx.r4.s64 = r31.s64 + 432;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82167d30
	sub_82167D30(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x821527b8
	sub_821527B8(ctx, base);
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821abcb8
	if (cr6.eq) goto loc_821ABCB8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r10,-21088
	r28.s64 = ctx.r10.s64 + -21088;
loc_821ABC6C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x823a1828
	sub_823A1828(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x821abca4
	if (!cr0.eq) goto loc_821ABCA4;
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82193c28
	sub_82193C28(ctx, base);
loc_821ABCA4:
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x82152838
	sub_82152838(ctx, base);
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821abc6c
	if (!cr6.eq) goto loc_821ABC6C;
loc_821ABCB8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-9672
	ctx.r4.s64 = r11.s64 + -9672;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,36(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// addi r4,r11,-28032
	ctx.r4.s64 = r11.s64 + -28032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,328
	ctx.r3.s64 = r31.s64 + 328;
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	f21.f64 = ctx.f1.f64;
	// addi r4,r11,-28040
	ctx.r4.s64 = r11.s64 + -28040;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	f20.f64 = ctx.f1.f64;
	// addi r4,r11,-28048
	ctx.r4.s64 = r11.s64 + -28048;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	f19.f64 = ctx.f1.f64;
	// addi r4,r11,-28056
	ctx.r4.s64 = r11.s64 + -28056;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,300
	ctx.r3.s64 = r31.s64 + 300;
	// fmr f18,f1
	ctx.fpscr.disableFlushMode();
	f18.f64 = ctx.f1.f64;
	// addi r4,r11,-28068
	ctx.r4.s64 = r11.s64 + -28068;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// fmr f17,f1
	ctx.fpscr.disableFlushMode();
	f17.f64 = ctx.f1.f64;
	// addi r4,r11,-28080
	ctx.r4.s64 = r11.s64 + -28080;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// fmr f16,f1
	ctx.fpscr.disableFlushMode();
	f16.f64 = ctx.f1.f64;
	// addi r4,r11,-28088
	ctx.r4.s64 = r11.s64 + -28088;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f15,f1
	ctx.fpscr.disableFlushMode();
	f15.f64 = ctx.f1.f64;
	// stw r29,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r29.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r29.u32);
	// stw r29,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r29.u32);
	// stw r29,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r29.u32);
	// stw r29,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r29.u32);
	// stw r29,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r29.u32);
	// addi r5,r31,400
	ctx.r5.s64 = r31.s64 + 400;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bl 0x821abb40
	sub_821ABB40(ctx, base);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f27,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f27.f64 = double(temp.f32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f28,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f28.f64 = double(temp.f32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f27,36(r30)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// fmuls f25,f0,f28
	f25.f64 = double(float(f0.f64 * f28.f64));
	// fadds f0,f12,f11
	f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f24,f0,f28
	f24.f64 = double(float(f0.f64 * f28.f64));
	// ble 0x821ac3d4
	if (!cr0.gt) goto loc_821AC3D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f22,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f22.f64 = double(temp.f32);
	// lfs f26,-28580(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28580);
	f26.f64 = double(temp.f32);
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
loc_821ABE98:
	// extsw r11,r22
	r11.s64 = r22.s32;
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r29,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r29.u32);
	// std r11,304(r31)
	PPC_STORE_U64(r31.u32 + 304, r11.u64);
	// stw r4,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r4.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r10.u32);
	// lfd f12,304(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 304);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fmadds f23,f12,f0,f13
	f23.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r21,r29
	r21.u64 = r29.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821ac388
	if (!cr0.gt) goto loc_821AC388;
	// mr r26,r22
	r26.u64 = r22.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// b 0x821abef4
	goto loc_821ABEF4;
loc_821ABEF0:
	// lwz r26,84(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_821ABEF4:
	// extsw r11,r21
	r11.s64 = r21.s32;
	// lfs f12,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f27
	cr6.compare(ctx.f12.f64, f27.f64);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// std r11,320(r31)
	PPC_STORE_U64(r31.u32 + 320, r11.u64);
	// lfd f12,320(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 320);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// beq cr6,0x821abf88
	if (cr6.eq) goto loc_821ABF88;
	// rotlwi r10,r26,1
	ctx.r10.u64 = __builtin_rotateleft32(r26.u32, 1);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r9,r26,r11
	ctx.r9.s32 = r26.s32 / r11.s32;
	// andc r8,r11,r10
	ctx.r8.u64 = r11.u64 & ~ctx.r10.u64;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// twllei r11,0
	// subf. r10,r10,r26
	ctx.r10.s64 = r26.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// twlgei r8,-1
	// bge 0x821abf50
	if (!cr0.lt) goto loc_821ABF50;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_821ABF50:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821abf88
	if (!cr0.eq) goto loc_821ABF88;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lfs f0,-29000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29000);
	f0.f64 = double(temp.f32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x821ac35c
	goto loc_821AC35C;
loc_821ABF88:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x821ac150
	if (cr6.eq) goto loc_821AC150;
	// li r28,1
	r28.s64 = 1;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// fsubs f0,f23,f0
	f0.f64 = double(float(f23.f64 - f0.f64));
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r28,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r28.u32);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821abfc4
	if (cr0.eq) goto loc_821ABFC4;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821ABFC4:
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stw r28,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r28.u32);
	// fsubs f0,f0,f23
	f0.f64 = double(float(f0.f64 - f23.f64));
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821abff4
	if (cr0.eq) goto loc_821ABFF4;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821ABFF4:
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac024
	if (cr0.eq) goto loc_821AC024;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC024:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// stw r28,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r28.u32);
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac054
	if (cr0.eq) goto loc_821AC054;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC054:
	// fsubs f0,f23,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f23.f64 - f25.f64));
	// stw r28,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r28.u32);
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac080
	if (cr0.eq) goto loc_821AC080;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC080:
	// fsubs f0,f31,f24
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f24.f64));
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac0ac
	if (cr0.eq) goto loc_821AC0AC;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC0AC:
	// fsubs f0,f23,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f23.f64 - f31.f64));
	// stw r28,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r28.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac0d8
	if (cr0.eq) goto loc_821AC0D8;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC0D8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821ac12c
	if (cr0.eq) goto loc_821AC12C;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_821AC0F4:
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x82317ef8
	sub_82317EF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821ac12c
	if (cr0.eq) goto loc_821AC12C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x821ac0f4
	if (cr6.lt) goto loc_821AC0F4;
loc_821AC12C:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x821ac150
	if (!cr6.lt) goto loc_821AC150;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f0,-29000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29000);
	f0.f64 = double(temp.f32);
	// b 0x821ac344
	goto loc_821AC344;
loc_821AC150:
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lfs f31,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 980);
	f31.f64 = double(temp.f32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r28,972(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 972);
	// addi r4,r31,432
	ctx.r4.s64 = r31.s64 + 432;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r31,112
	ctx.r10.s64 = r31.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x821ab278
	sub_821AB278(ctx, base);
	// addi r10,r31,112
	ctx.r10.s64 = r31.s64 + 112;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r31,256
	ctx.r5.s64 = r31.s64 + 256;
	// addi r4,r31,432
	ctx.r4.s64 = r31.s64 + 432;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ab278
	sub_821AB278(ctx, base);
	// fcmpu cr6,f14,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f14.f64, f27.f64);
	// ble cr6,0x821ac254
	if (!cr6.gt) goto loc_821AC254;
	// neg r11,r27
	r11.s64 = -r27.s64;
	// lfs f30,272(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 272);
	f30.f64 = double(temp.f32);
	// addi r9,r31,260
	ctx.r9.s64 = r31.s64 + 260;
	// fmr f31,f26
	f31.f64 = f26.f64;
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// addi r28,r27,16
	r28.s64 = r27.s64 + 16;
	// li r26,3
	r26.s64 = 3;
	// add r24,r11,r9
	r24.u64 = r11.u64 + ctx.r9.u64;
	// add r23,r11,r10
	r23.u64 = r11.u64 + ctx.r10.u64;
loc_821AC1D8:
	// lfsx f0,r24,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r23,r28
	temp.u32 = PPC_LOAD_U32(r23.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// addi r25,r28,4
	r25.s64 = r28.s64 + 4;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - f0.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// fsubs f0,f22,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f22.f64 - f31.f64));
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * f31.f64));
	// mr r28,r25
	r28.u64 = r25.u64;
	// fadds f31,f31,f26
	f31.f64 = double(float(f31.f64 + f26.f64));
	// fmadds f0,f0,f29,f13
	f0.f64 = double(float(f0.f64 * f29.f64 + ctx.f13.f64));
	// fadds f30,f0,f30
	f30.f64 = double(float(f0.f64 + f30.f64));
	// bne 0x821ac1d8
	if (!cr0.eq) goto loc_821AC1D8;
	// lfs f0,28(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 28);
	f0.f64 = double(temp.f32);
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 - f0.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lwz r26,84(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r25,996(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 996);
	// fcmpu cr6,f0,f14
	cr6.compare(f0.f64, f14.f64);
	// ble cr6,0x821ac254
	if (!cr6.gt) goto loc_821AC254;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lfs f0,-29000(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29000);
	f0.f64 = double(temp.f32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mullw r11,r21,r11
	r11.s64 = int64_t(r21.s32) * int64_t(r11.s32);
	// b 0x821ac34c
	goto loc_821AC34C;
loc_821AC254:
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac280
	if (cr0.eq) goto loc_821AC280;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821aa798
	sub_821AA798(ctx, base);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_821AC280:
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	f0.f64 = f27.f64;
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r4,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r4.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x821ac318
	if (cr0.eq) goto loc_821AC318;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r8,r5,r11
	ctx.r8.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// subfic r6,r9,-4
	xer.ca = ctx.r9.u32 <= 4294967292;
	ctx.r6.s64 = -4 - ctx.r9.s64;
loc_821AC2B4:
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// divwu r3,r10,r8
	ctx.r3.u32 = ctx.r10.u32 / ctx.r8.u32;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r8,0
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfsx f10,r3,r5
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f0,f13,f10,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + f0.f64));
	// blt cr6,0x821ac2b4
	if (cr6.lt) goto loc_821AC2B4;
loc_821AC318:
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f13,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// std r11,336(r31)
	PPC_STORE_U64(r31.u32 + 336, r11.u64);
	// lfd f12,336(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 336);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x821ac344
	if (!cr6.lt) goto loc_821AC344;
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
loc_821AC344:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
loc_821AC34C:
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
loc_821AC35C:
	// addi r10,r26,-1
	ctx.r10.s64 = r26.s64 + -1;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// blt cr6,0x821abef0
	if (cr6.lt) goto loc_821ABEF0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 260);
loc_821AC388:
	// b 0x821ac390
	goto loc_821AC390;
loc_821AC38C:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
loc_821AC390:
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821ac38c
	if (!cr0.eq) goto loc_821AC38C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821ac3c4
	if (cr6.eq) goto loc_821AC3C4;
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AC3C4:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x821abe98
	if (cr6.lt) goto loc_821ABE98;
loc_821AC3D4:
	// li r30,1
	r30.s64 = 1;
	// stfs f21,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac400
	if (cr0.eq) goto loc_821AC400;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC400:
	// stfs f20,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac428
	if (cr0.eq) goto loc_821AC428;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC428:
	// stfs f19,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac450
	if (cr0.eq) goto loc_821AC450;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC450:
	// stfs f18,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac478
	if (cr0.eq) goto loc_821AC478;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC478:
	// stfs f17,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac4a0
	if (cr0.eq) goto loc_821AC4A0;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC4A0:
	// stfs f16,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac4c8
	if (cr0.eq) goto loc_821AC4C8;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC4C8:
	// stfs f15,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ac4f0
	if (cr0.eq) goto loc_821AC4F0;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AC4F0:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821ac510
	if (cr6.eq) goto loc_821AC510;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AC510:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x821ab688
	sub_821AB688(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821ac538
	if (cr6.eq) goto loc_821AC538;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821AC538:
	// addi r3,r31,608
	ctx.r3.s64 = r31.s64 + 608;
	// bl 0x821a5f80
	sub_821A5F80(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = r31.s64 + 608;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82194330
	sub_82194330(ctx, base);
	// addi r1,r31,944
	ctx.r1.s64 = r31.s64 + 944;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5fc
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_821AC560"))) PPC_WEAK_FUNC(sub_821AC560);
PPC_FUNC_IMPL(__imp__sub_821AC560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82194330
	sub_82194330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AC588"))) PPC_WEAK_FUNC(sub_821AC588);
PPC_FUNC_IMPL(__imp__sub_821AC588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x821887c0
	sub_821887C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AC5B0"))) PPC_WEAK_FUNC(sub_821AC5B0);
PPC_FUNC_IMPL(__imp__sub_821AC5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_821AC5D8"))) PPC_WEAK_FUNC(sub_821AC5D8);
PPC_FUNC_IMPL(__imp__sub_821AC5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x821ab688
	sub_821AB688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AC600"))) PPC_WEAK_FUNC(sub_821AC600);
PPC_FUNC_IMPL(__imp__sub_821AC600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,400
	ctx.r3.s64 = r31.s64 + 400;
	// bl 0x821aaad0
	sub_821AAAD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AC628"))) PPC_WEAK_FUNC(sub_821AC628);
PPC_FUNC_IMPL(__imp__sub_821AC628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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

__attribute__((alias("__imp__sub_821AC650"))) PPC_WEAK_FUNC(sub_821AC650);
PPC_FUNC_IMPL(__imp__sub_821AC650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x821aaad0
	sub_821AAAD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AC678"))) PPC_WEAK_FUNC(sub_821AC678);
PPC_FUNC_IMPL(__imp__sub_821AC678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC6A0"))) PPC_WEAK_FUNC(sub_821AC6A0);
PPC_FUNC_IMPL(__imp__sub_821AC6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC6C8"))) PPC_WEAK_FUNC(sub_821AC6C8);
PPC_FUNC_IMPL(__imp__sub_821AC6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC6F0"))) PPC_WEAK_FUNC(sub_821AC6F0);
PPC_FUNC_IMPL(__imp__sub_821AC6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC718"))) PPC_WEAK_FUNC(sub_821AC718);
PPC_FUNC_IMPL(__imp__sub_821AC718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC740"))) PPC_WEAK_FUNC(sub_821AC740);
PPC_FUNC_IMPL(__imp__sub_821AC740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC768"))) PPC_WEAK_FUNC(sub_821AC768);
PPC_FUNC_IMPL(__imp__sub_821AC768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC790"))) PPC_WEAK_FUNC(sub_821AC790);
PPC_FUNC_IMPL(__imp__sub_821AC790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC7B8"))) PPC_WEAK_FUNC(sub_821AC7B8);
PPC_FUNC_IMPL(__imp__sub_821AC7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC7E0"))) PPC_WEAK_FUNC(sub_821AC7E0);
PPC_FUNC_IMPL(__imp__sub_821AC7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC808"))) PPC_WEAK_FUNC(sub_821AC808);
PPC_FUNC_IMPL(__imp__sub_821AC808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC830"))) PPC_WEAK_FUNC(sub_821AC830);
PPC_FUNC_IMPL(__imp__sub_821AC830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC858"))) PPC_WEAK_FUNC(sub_821AC858);
PPC_FUNC_IMPL(__imp__sub_821AC858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC880"))) PPC_WEAK_FUNC(sub_821AC880);
PPC_FUNC_IMPL(__imp__sub_821AC880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-944
	r31.s64 = r12.s64 + -944;
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

__attribute__((alias("__imp__sub_821AC8A8"))) PPC_WEAK_FUNC(sub_821AC8A8);
PPC_FUNC_IMPL(__imp__sub_821AC8A8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82357598
	sub_82357598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82357518
	sub_82357518(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
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

__attribute__((alias("__imp__sub_821AC918"))) PPC_WEAK_FUNC(sub_821AC918);
PPC_FUNC_IMPL(__imp__sub_821AC918) {
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
	// beq cr6,0x821ac990
	if (cr6.eq) goto loc_821AC990;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1740
	r29.s64 = r11.s64 + 1740;
loc_821AC944:
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
	// bne 0x821ac9e8
	if (!cr0.eq) goto loc_821AC9E8;
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
	// bne cr6,0x821ac944
	if (!cr6.eq) goto loc_821AC944;
loc_821AC990:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ac9e0
	if (cr0.eq) goto loc_821AC9E0;
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
	// beq 0x821ac9e0
	if (cr0.eq) goto loc_821AC9E0;
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
	// bl 0x821ac918
	sub_821AC918(ctx, base);
	// b 0x821ac9e8
	goto loc_821AC9E8;
loc_821AC9E0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_821AC9E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AC9F0"))) PPC_WEAK_FUNC(sub_821AC9F0);
PPC_FUNC_IMPL(__imp__sub_821AC9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r11,r4,r5
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821aca54
	if (cr0.eq) goto loc_821ACA54;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_821ACA0C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x821aca1c
	if (!cr6.eq) goto loc_821ACA1C;
	// li r11,0
	r11.s64 = 0;
	// b 0x821aca2c
	goto loc_821ACA2C;
loc_821ACA1C:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_821ACA2C:
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x821aca54
	if (cr6.eq) goto loc_821ACA54;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r4,r5
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821aca0c
	if (!cr0.eq) goto loc_821ACA0C;
loc_821ACA54:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ACA5C"))) PPC_WEAK_FUNC(sub_821ACA5C);
PPC_FUNC_IMPL(__imp__sub_821ACA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACA60"))) PPC_WEAK_FUNC(sub_821ACA60);
PPC_FUNC_IMPL(__imp__sub_821ACA60) {
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// bne 0x821aca88
	if (!cr0.eq) goto loc_821ACA88;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_821ACA88:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x821acabc
	if (cr6.eq) goto loc_821ACABC;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
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
	// bl 0x821ac918
	sub_821AC918(ctx, base);
	// b 0x821acac4
	goto loc_821ACAC4;
loc_821ACABC:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_821ACAC4:
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

__attribute__((alias("__imp__sub_821ACADC"))) PPC_WEAK_FUNC(sub_821ACADC);
PPC_FUNC_IMPL(__imp__sub_821ACADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACAE0"))) PPC_WEAK_FUNC(sub_821ACAE0);
PPC_FUNC_IMPL(__imp__sub_821ACAE0) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821acb20
	if (cr0.eq) goto loc_821ACB20;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x82133060
	sub_82133060(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x821ac918
	sub_821AC918(ctx, base);
loc_821ACB20:
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

__attribute__((alias("__imp__sub_821ACB38"))) PPC_WEAK_FUNC(sub_821ACB38);
PPC_FUNC_IMPL(__imp__sub_821ACB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x8239d5e8
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-27480
	r30.s64 = r11.s64 + -27480;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// rlwinm r29,r5,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lis r28,-32140
	r28.s64 = -2106327040;
	// lfs f12,-4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f29,f2
	ctx.f11.f64 = double(float(f29.f64 + ctx.f2.f64));
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,27088(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27088);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// frsp f28,f9
	f28.f64 = double(float(ctx.f9.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// fnmsubs f13,f12,f13,f10
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f10.f64)));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfsx f13,r11,r29
	temp.u32 = PPC_LOAD_U32(r11.u32 + r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f29,f13
	ctx.f13.f64 = double(float(f0.f64 * f29.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfsx f12,r11,r29
	temp.u32 = PPC_LOAD_U32(r11.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmadds f0,f11,f0,f12
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,-27472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27472);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f28
	ctx.f11.f64 = double(float(f0.f64 * f28.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r3,27088(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27088);
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmadds f13,f9,f13,f29
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + f29.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fnmsubs f0,f11,f0,f10
	f0.f64 = double(float(-(ctx.f11.f64 * f0.f64 - ctx.f10.f64)));
	// lfs f12,-27476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f12,-4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfsx f0,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	f0.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f13,f8,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + f0.f64));
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d634
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821ACCBC"))) PPC_WEAK_FUNC(sub_821ACCBC);
PPC_FUNC_IMPL(__imp__sub_821ACCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ACCC0"))) PPC_WEAK_FUNC(sub_821ACCC0);
PPC_FUNC_IMPL(__imp__sub_821ACCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x821acd10
	if (!cr6.eq) goto loc_821ACD10;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f31
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,14924
	ctx.r3.s64 = r11.s64 + 14924;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// b 0x821acd20
	goto loc_821ACD20;
loc_821ACD10:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,-27464
	ctx.r3.s64 = r11.s64 + -27464;
	// bl 0x8215d840
	sub_8215D840(ctx, base);
loc_821ACD20:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f0,-27480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27480);
	f0.f64 = double(temp.f32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lfsx f10,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f10,f13,f31,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64 + ctx.f10.f64));
	// lwz r3,27088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,-27476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fnmsubs f13,f13,f0,f11
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f11.f64)));
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821ACDB0"))) PPC_WEAK_FUNC(sub_821ACDB0);
PPC_FUNC_IMPL(__imp__sub_821ACDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,-27480
	r11.s64 = r11.s64 + -27480;
	// lfs f13,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r3,27088(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27088);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fnmsubs f11,f11,f12,f9
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 - ctx.f9.f64)));
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfsx f12,r30,r31
	temp.u32 = PPC_LOAD_U32(r30.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f8,f1,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_821ACE90"))) PPC_WEAK_FUNC(sub_821ACE90);
PPC_FUNC_IMPL(__imp__sub_821ACE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5d4
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r30,36(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsw r10,r26
	ctx.r10.s64 = r26.s32;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// rlwinm r28,r26,2,0,29
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,-27480
	r29.s64 = r11.s64 + -27480;
	// lfs f11,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lis r27,-32140
	r27.s64 = -2106327040;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfsx f9,r11,r28
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	ctx.f9.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,27088(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 27088);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// frsp f26,f12
	f26.f64 = double(float(ctx.f12.f64));
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f9.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 * f26.f64));
	// fnmsubs f13,f11,f13,f10
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f10.f64)));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfsx f10,r11,r28
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f11,f10
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f10.f64));
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,27088(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 27088);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,-26876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26876);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27452(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27452);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x821acfe0
	if (!cr6.gt) goto loc_821ACFE0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	f27.f64 = double(temp.f32);
	// b 0x821acfe4
	goto loc_821ACFE4;
loc_821ACFE0:
	// fmr f27,f31
	ctx.fpscr.disableFlushMode();
	f27.f64 = f31.f64;
loc_821ACFE4:
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f27
	ctx.f1.f64 = double(float(f0.f64 / f27.f64));
	// bl 0x8239e180
	sub_8239E180(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f28,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f28.f64 = double(temp.f32);
	// fmuls f25,f13,f27
	f25.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fmr f30,f25
	f30.f64 = f25.f64;
	// fcmpu cr6,f25,f0
	cr6.compare(f25.f64, f0.f64);
	// bge cr6,0x821ad0d4
	if (!cr6.lt) goto loc_821AD0D4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f23,22980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22980);
	f23.f64 = double(temp.f32);
	// lfs f24,-27476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	f24.f64 = double(temp.f32);
loc_821AD020:
	// lfs f29,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	f29.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f28,96(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82192610
	sub_82192610(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f28.f64);
	// bne cr6,0x821ad050
	if (!cr6.eq) goto loc_821AD050;
	// fmr f29,f24
	f29.f64 = f24.f64;
	// b 0x821ad05c
	goto loc_821AD05C;
loc_821AD050:
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f23,100(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_821AD05C:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,27088(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 27088);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fnmsubs f12,f13,f0,f12
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f29,f0,f13
	f0.f64 = double(float(f29.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fsubs f0,f12,f29
	f0.f64 = double(float(ctx.f12.f64 - f29.f64));
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfsx f0,r11,r28
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	f0.f64 = double(temp.f32);
	// fmadds f0,f11,f30,f0
	f0.f64 = double(float(ctx.f11.f64 * f30.f64 + f0.f64));
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fadds f30,f30,f27
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 + f27.f64));
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// blt cr6,0x821ad020
	if (cr6.lt) goto loc_821AD020;
loc_821AD0D4:
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// bge cr6,0x821ad110
	if (!cr6.lt) goto loc_821AD110;
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// ble cr6,0x821ad110
	if (!cr6.gt) goto loc_821AD110;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x821accc0
	sub_821ACCC0(ctx, base);
loc_821AD110:
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f1,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239e180
	sub_8239E180(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x821accc0
	sub_821ACCC0(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x821accc0
	sub_821ACCC0(ctx, base);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fsubs f1,f30,f27
	ctx.f1.f64 = double(float(f30.f64 - f27.f64));
	// bl 0x821accc0
	sub_821ACCC0(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d620
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821AD198"))) PPC_WEAK_FUNC(sub_821AD198);
PPC_FUNC_IMPL(__imp__sub_821AD198) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f30,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f30.f64 = double(temp.f32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821ad1fc
	if (cr0.eq) goto loc_821AD1FC;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x821a9d20
	sub_821A9D20(ctx, base);
	// b 0x821ad214
	goto loc_821AD214;
loc_821AD1FC:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// neg r5,r11
	ctx.r5.s64 = -r11.s64;
	// bl 0x821a9d78
	sub_821A9D78(ctx, base);
loc_821AD214:
	// lwz r29,52(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x821ad25c
	if (cr0.eq) goto loc_821AD25C;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_821AD224:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x821ad250
	if (!cr6.lt) goto loc_821AD250;
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
loc_821AD250:
	// lwz r29,40(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x821ad224
	if (!cr0.eq) goto loc_821AD224;
loc_821AD25C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27480);
	f0.f64 = double(temp.f32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,27088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27088);
	// lwa r11,64(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r29,52(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x821ad32c
	if (cr0.eq) goto loc_821AD32C;
	// li r28,0
	r28.s64 = 0;
loc_821AD2D8:
	// lwz r27,36(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lfs f1,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239da30
	sub_8239DA30(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r28,r11
	temp.u32 = PPC_LOAD_U32(r28.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fnmadds f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 + ctx.f12.f64)));
	// stfsx f0,r28,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + r11.u32, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f0,24(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r28,r11
	temp.u32 = PPC_LOAD_U32(r28.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x821ad31c
	if (!cr6.lt) goto loc_821AD31C;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_821AD31C:
	// lwz r29,40(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x821ad2d8
	if (!cr0.eq) goto loc_821AD2D8;
loc_821AD32C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-31308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31308);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821ad39c
	if (cr0.eq) goto loc_821AD39C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-26876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26876);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 - f30.f64));
loc_821AD354:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f0,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f10
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x821ad38c
	if (!cr6.lt) goto loc_821AD38C;
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
loc_821AD38C:
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x821ad354
	if (!cr0.eq) goto loc_821AD354;
loc_821AD39C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_821AD3B0"))) PPC_WEAK_FUNC(sub_821AD3B0);
PPC_FUNC_IMPL(__imp__sub_821AD3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-27352(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27352);
	// mflr r12
	// bl 0x8239bcc0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5dc
	// addi r31,r1,-800
	r31.s64 = ctx.r1.s64 + -800;
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// stw r21,828(r31)
	PPC_STORE_U32(r31.u32 + 828, r21.u32);
	// bne cr6,0x821ad3ec
	if (!cr6.eq) goto loc_821AD3EC;
	// b 0x821adb88
	goto loc_821ADB88;
loc_821AD3EC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r25,-32140
	r25.s64 = -2106327040;
	// addi r6,r31,160
	ctx.r6.s64 = r31.s64 + 160;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f31,172(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f30,140(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,-1472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1472);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,27088(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// lwa r11,60(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 60));
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f0,f13,f12
	f0.f64 = double(float(-(f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// bl 0x821ad198
	sub_821AD198(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r20,0
	r20.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// mr r26,r20
	r26.u64 = r20.u64;
	// lwz r4,-2968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r28,r11,-3
	r28.s64 = r11.s64 + -3;
	// bl 0x821aca60
	sub_821ACA60(ctx, base);
	// b 0x821ad4f0
	goto loc_821AD4F0;
loc_821AD4B0:
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// addi r7,r31,92
	ctx.r7.s64 = r31.s64 + 92;
	// addi r6,r31,828
	ctx.r6.s64 = r31.s64 + 828;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x821ac9f0
	sub_821AC9F0(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821ad500
	if (!cr0.eq) goto loc_821AD500;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x821acae0
	sub_821ACAE0(ctx, base);
loc_821AD4F0:
	// lwz r29,300(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x821ad4b0
	if (!cr6.eq) goto loc_821AD4B0;
	// b 0x821ad524
	goto loc_821AD524;
loc_821AD500:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x821ad510
	if (!cr6.eq) goto loc_821AD510;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x821ad524
	goto loc_821AD524;
loc_821AD510:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add. r26,r11,r29
	r26.u64 = r11.u64 + r29.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x821ad524
	if (cr0.eq) goto loc_821AD524;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_821AD524:
	// extsw r9,r28
	ctx.r9.s64 = r28.s32;
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r18,-32254
	r18.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r9,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r31)
	ctx.f10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f12,24112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24112);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,224
	ctx.r5.s64 = r31.s64 + 224;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// lfs f11,5736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	ctx.f11.f64 = double(temp.f32);
	// frsp f28,f10
	f28.f64 = double(float(ctx.f10.f64));
	// lwa r11,64(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// stfs f11,236(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f30,224(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f30,228(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// stfs f30,232(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lfd f10,80(r31)
	ctx.f10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fmuls f9,f28,f0
	ctx.f9.f64 = double(float(f28.f64 * f0.f64));
	// stfs f30,176(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// stfs f29,180(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// fnmsubs f13,f9,f13,f11
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f13.f64 - ctx.f11.f64)));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fnmsubs f0,f0,f12,f13
	f0.f64 = double(float(-(f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fdivs f25,f0,f10
	f25.f64 = double(float(f0.f64 / ctx.f10.f64));
	// fsubs f0,f25,f29
	f0.f64 = double(float(f25.f64 - f29.f64));
	// stfs f0,188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r20,336(r31)
	PPC_STORE_U8(r31.u32 + 336, r20.u8);
	// addi r3,r31,337
	ctx.r3.s64 = r31.s64 + 337;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8216a690
	sub_8216A690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ad618
	if (cr0.eq) goto loc_821AD618;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8216a690
	sub_8216A690(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-27412
	ctx.r3.s64 = r11.s64 + -27412;
	// lfs f1,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8215d840
	sub_8215D840(ctx, base);
	// addi r11,r31,336
	r11.s64 = r31.s64 + 336;
loc_821AD600:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x821ad600
	if (!cr0.eq) goto loc_821AD600;
loc_821AD618:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// addi r28,r31,208
	r28.s64 = r31.s64 + 208;
	// lfs f13,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r31,144
	r27.s64 = r31.s64 + 144;
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r31,336
	r24.s64 = r31.s64 + 336;
	// lfs f12,-27416(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27416);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f31,208(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f31,212(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// stfs f31,216(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f31,220(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f11,-26876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26876);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f11,144(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lfd f11,80(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r11,27088(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fnmsubs f13,f11,f13,f10
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f10.f64)));
	// fmadds f0,f0,f12,f13
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f29,80(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 80);
	f29.f64 = double(temp.f32);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r11,r11,-27428
	r11.s64 = r11.s64 + -27428;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821ac8a8
	sub_821AC8A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x821ad834
	if (cr6.eq) goto loc_821AD834;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r29,1
	r29.s64 = 1;
	// lwz r11,10560(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r28,r9,10552
	r28.s64 = ctx.r9.s64 + 10552;
	// bne 0x821ad780
	if (!cr0.eq) goto loc_821AD780;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10560, r11.u32);
	// lfs f0,-27480(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-27440
	ctx.r4.s64 = r11.s64 + -27440;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ad760
	if (cr0.eq) goto loc_821AD760;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD760:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ad774
	if (cr0.eq) goto loc_821AD774;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD774:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12096
	ctx.r3.s64 = r11.s64 + 12096;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_821AD780:
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f0,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	f0.f64 = double(temp.f32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
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
	// beq 0x821ad7c4
	if (cr0.eq) goto loc_821AD7C4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD7C4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ad800
	if (cr0.eq) goto loc_821AD800;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD800:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
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
	// beq 0x821ad834
	if (cr0.eq) goto loc_821AD834;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD834:
	// lwz r29,52(r21)
	r29.u64 = PPC_LOAD_U32(r21.u32 + 52);
	// mr r28,r20
	r28.u64 = r20.u64;
	// b 0x821ad858
	goto loc_821AD858;
loc_821AD840:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ace90
	sub_821ACE90(ctx, base);
	// lwz r29,40(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_821AD858:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x821ad840
	if (!cr0.eq) goto loc_821AD840;
	// lwz r24,52(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 52);
	// mr r16,r20
	r16.u64 = r20.u64;
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// beq 0x821adb58
	if (cr0.eq) goto loc_821ADB58;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r15,r11,14924
	r15.s64 = r11.s64 + 14924;
	// lfs f26,-27444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27444);
	f26.f64 = double(temp.f32);
	// lfs f29,-27448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27448);
	f29.f64 = double(temp.f32);
	// stw r15,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r15.u32);
loc_821AD88C:
	// lwz r17,40(r24)
	r17.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// cmplwi r17,0
	cr0.compare<uint32_t>(r17.u32, 0, xer);
	// beq 0x821adb58
	if (cr0.eq) goto loc_821ADB58;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// addi r19,r16,1
	r19.s64 = r16.s64 + 1;
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,36(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// bl 0x82165548
	sub_82165548(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lwz r4,36(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// lwz r3,36(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 36);
	// bl 0x8219e3e8
	sub_8219E3E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821adaec
	if (cr0.eq) goto loc_821ADAEC;
	// extsw r10,r19
	ctx.r10.s64 = r19.s32;
	// extsw r9,r16
	ctx.r9.s64 = r16.s32;
	// addi r22,r20,4
	r22.s64 = r20.s64 + 4;
	// li r27,0
	r27.s64 = 0;
	// std r10,256(r31)
	PPC_STORE_U64(r31.u32 + 256, ctx.r10.u64);
	// std r9,264(r31)
	PPC_STORE_U64(r31.u32 + 264, ctx.r9.u64);
	// lfd f0,256(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 256);
	// lfd f13,264(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 264);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f28,f0
	f28.f64 = double(float(f0.f64));
	// frsp f27,f13
	f27.f64 = double(float(ctx.f13.f64));
loc_821AD914:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lfsx f12,r22,r10
	temp.u32 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f13,f0,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// ble cr6,0x821ad970
	if (!cr6.gt) goto loc_821AD970;
	// lfsx f13,r22,r10
	temp.u32 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_821AD948:
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f13
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, f29.f64);
	// bge cr6,0x821ad964
	if (!cr6.lt) goto loc_821AD964;
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
loc_821AD964:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x821ad948
	if (!cr0.eq) goto loc_821AD948;
loc_821AD970:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	f0.f64 = double(temp.f32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,240(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f30,244(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// addi r15,r31,240
	r15.s64 = r31.s64 + 240;
	// std r11,272(r31)
	PPC_STORE_U64(r31.u32 + 272, r11.u64);
	// stfs f30,248(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// lwz r11,27088(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// stfs f31,252(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// addi r14,r31,96
	r14.s64 = r31.s64 + 96;
	// fnmsubs f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// lfd f13,272(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lfsx f12,r20,r11
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// ble cr6,0x821ada4c
	if (!cr6.gt) goto loc_821ADA4C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfsx f12,r20,r11
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_821ADA24:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f12
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, f29.f64);
	// bge cr6,0x821ada40
	if (!cr6.lt) goto loc_821ADA40;
	// addi r23,r23,11
	r23.s64 = r23.s64 + 11;
loc_821ADA40:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x821ada24
	if (!cr0.eq) goto loc_821ADA24;
loc_821ADA4C:
	// extsw r11,r23
	r11.s64 = r23.s32;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmuls f13,f27,f0
	ctx.f13.f64 = double(float(f27.f64 * f0.f64));
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	f0.f64 = double(temp.f32);
	// lwz r15,88(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stfs f30,196(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// std r11,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r11.u64);
	// stfs f30,200(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lwz r11,27088(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// stfs f31,204(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// addi r23,r31,192
	r23.s64 = r31.s64 + 192;
	// addi r14,r31,96
	r14.s64 = r31.s64 + 96;
	// fnmsubs f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// fsubs f0,f0,f26
	f0.f64 = double(float(f0.f64 - f26.f64));
	// lfd f13,280(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x821ad914
	if (cr6.lt) goto loc_821AD914;
loc_821ADAEC:
	// addi r29,r24,12
	r29.s64 = r24.s64 + 12;
	// lfs f0,16(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lfs f2,4(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x821acb38
	sub_821ACB38(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f30,80(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x821adb24
	if (cr6.lt) goto loc_821ADB24;
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
loc_821ADB24:
	// lfs f0,16(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,4(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x821acb38
	sub_821ACB38(ctx, base);
	// lwz r24,40(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// mr r16,r19
	r16.u64 = r19.u64;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// bne 0x821ad88c
	if (!cr0.eq) goto loc_821AD88C;
loc_821ADB58:
	// lwz r29,52(r21)
	r29.u64 = PPC_LOAD_U32(r21.u32 + 52);
	// li r28,0
	r28.s64 = 0;
	// b 0x821adb7c
	goto loc_821ADB7C;
loc_821ADB64:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821acdb0
	sub_821ACDB0(ctx, base);
	// lwz r29,40(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_821ADB7C:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x821adb64
	if (!cr0.eq) goto loc_821ADB64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
loc_821ADB88:
	// addi r1,r31,800
	ctx.r1.s64 = r31.s64 + 800;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d628
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_821AD3B8"))) PPC_WEAK_FUNC(sub_821AD3B8);
PPC_FUNC_IMPL(__imp__sub_821AD3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x8239bcc0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5dc
	// addi r31,r1,-800
	r31.s64 = ctx.r1.s64 + -800;
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// stw r21,828(r31)
	PPC_STORE_U32(r31.u32 + 828, r21.u32);
	// bne cr6,0x821ad3ec
	if (!cr6.eq) goto loc_821AD3EC;
	// b 0x821adb88
	goto loc_821ADB88;
loc_821AD3EC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r25,-32140
	r25.s64 = -2106327040;
	// addi r6,r31,160
	ctx.r6.s64 = r31.s64 + 160;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// stfs f31,164(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f31,172(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f30,140(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,-1472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1472);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,27088(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// lwa r11,60(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 60));
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f0,f13,f12
	f0.f64 = double(float(-(f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// bl 0x821ad198
	sub_821AD198(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r20,0
	r20.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// mr r26,r20
	r26.u64 = r20.u64;
	// lwz r4,-2968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r28,r11,-3
	r28.s64 = r11.s64 + -3;
	// bl 0x821aca60
	sub_821ACA60(ctx, base);
	// b 0x821ad4f0
	goto loc_821AD4F0;
loc_821AD4B0:
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// addi r7,r31,92
	ctx.r7.s64 = r31.s64 + 92;
	// addi r6,r31,828
	ctx.r6.s64 = r31.s64 + 828;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x821ac9f0
	sub_821AC9F0(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821ad500
	if (!cr0.eq) goto loc_821AD500;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x821acae0
	sub_821ACAE0(ctx, base);
loc_821AD4F0:
	// lwz r29,300(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x821ad4b0
	if (!cr6.eq) goto loc_821AD4B0;
	// b 0x821ad524
	goto loc_821AD524;
loc_821AD500:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x821ad510
	if (!cr6.eq) goto loc_821AD510;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x821ad524
	goto loc_821AD524;
loc_821AD510:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add. r26,r11,r29
	r26.u64 = r11.u64 + r29.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x821ad524
	if (cr0.eq) goto loc_821AD524;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_821AD524:
	// extsw r9,r28
	ctx.r9.s64 = r28.s32;
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r18,-32254
	r18.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r9,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r31)
	ctx.f10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f12,24112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24112);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,224
	ctx.r5.s64 = r31.s64 + 224;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// lfs f11,5736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	ctx.f11.f64 = double(temp.f32);
	// frsp f28,f10
	f28.f64 = double(float(ctx.f10.f64));
	// lwa r11,64(r3)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 64));
	// stfs f11,236(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f30,224(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f30,228(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// stfs f30,232(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lfd f10,80(r31)
	ctx.f10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fmuls f9,f28,f0
	ctx.f9.f64 = double(float(f28.f64 * f0.f64));
	// stfs f30,176(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// stfs f29,180(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// fnmsubs f13,f9,f13,f11
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f13.f64 - ctx.f11.f64)));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fnmsubs f0,f0,f12,f13
	f0.f64 = double(float(-(f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fdivs f25,f0,f10
	f25.f64 = double(float(f0.f64 / ctx.f10.f64));
	// fsubs f0,f25,f29
	f0.f64 = double(float(f25.f64 - f29.f64));
	// stfs f0,188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// bl 0x821e1d90
	sub_821E1D90(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r20,336(r31)
	PPC_STORE_U8(r31.u32 + 336, r20.u8);
	// addi r3,r31,337
	ctx.r3.s64 = r31.s64 + 337;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8216a690
	sub_8216A690(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ad618
	if (cr0.eq) goto loc_821AD618;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8216a690
	sub_8216A690(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-27412
	ctx.r3.s64 = r11.s64 + -27412;
	// lfs f1,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8215d840
	sub_8215D840(ctx, base);
	// addi r11,r31,336
	r11.s64 = r31.s64 + 336;
loc_821AD600:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x821ad600
	if (!cr0.eq) goto loc_821AD600;
loc_821AD618:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// addi r28,r31,208
	r28.s64 = r31.s64 + 208;
	// lfs f13,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r31,144
	r27.s64 = r31.s64 + 144;
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r31,336
	r24.s64 = r31.s64 + 336;
	// lfs f12,-27416(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27416);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stfs f31,208(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f31,212(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// stfs f31,216(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f31,220(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f11,-26876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26876);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f11,144(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lfd f11,80(r31)
	ctx.f11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r11,27088(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fnmsubs f13,f11,f13,f10
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f10.f64)));
	// fmadds f0,f0,f12,f13
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f29,80(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 80);
	f29.f64 = double(temp.f32);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r11,r11,-27428
	r11.s64 = r11.s64 + -27428;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x821ac8a8
	sub_821AC8A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x821ad834
	if (cr6.eq) goto loc_821AD834;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r29,1
	r29.s64 = 1;
	// lwz r11,10560(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r28,r9,10552
	r28.s64 = ctx.r9.s64 + 10552;
	// bne 0x821ad780
	if (!cr0.eq) goto loc_821AD780;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10560, r11.u32);
	// lfs f0,-27480(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-27440
	ctx.r4.s64 = r11.s64 + -27440;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,104
	ctx.r6.s64 = r31.s64 + 104;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ad760
	if (cr0.eq) goto loc_821AD760;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD760:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ad774
	if (cr0.eq) goto loc_821AD774;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD774:
	// lis r11,-32146
	r11.s64 = -2106720256;
	// addi r3,r11,12096
	ctx.r3.s64 = r11.s64 + 12096;
	// bl 0x8239d7c8
	sub_8239D7C8(ctx, base);
loc_821AD780:
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f0,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	f0.f64 = double(temp.f32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
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
	// beq 0x821ad7c4
	if (cr0.eq) goto loc_821AD7C4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD7C4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311988
	sub_82311988(ctx, base);
	// stfs f1,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ad800
	if (cr0.eq) goto loc_821AD800;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD800:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
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
	// beq 0x821ad834
	if (cr0.eq) goto loc_821AD834;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AD834:
	// lwz r29,52(r21)
	r29.u64 = PPC_LOAD_U32(r21.u32 + 52);
	// mr r28,r20
	r28.u64 = r20.u64;
	// b 0x821ad858
	goto loc_821AD858;
loc_821AD840:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ace90
	sub_821ACE90(ctx, base);
	// lwz r29,40(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_821AD858:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x821ad840
	if (!cr0.eq) goto loc_821AD840;
	// lwz r24,52(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 52);
	// mr r16,r20
	r16.u64 = r20.u64;
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// beq 0x821adb58
	if (cr0.eq) goto loc_821ADB58;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r15,r11,14924
	r15.s64 = r11.s64 + 14924;
	// lfs f26,-27444(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27444);
	f26.f64 = double(temp.f32);
	// lfs f29,-27448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27448);
	f29.f64 = double(temp.f32);
	// stw r15,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r15.u32);
loc_821AD88C:
	// lwz r17,40(r24)
	r17.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// cmplwi r17,0
	cr0.compare<uint32_t>(r17.u32, 0, xer);
	// beq 0x821adb58
	if (cr0.eq) goto loc_821ADB58;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// addi r19,r16,1
	r19.s64 = r16.s64 + 1;
	// bl 0x8213e710
	sub_8213E710(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,36(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// bl 0x82165548
	sub_82165548(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// bl 0x8213e180
	sub_8213E180(ctx, base);
	// lwz r4,36(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// lwz r3,36(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 36);
	// bl 0x8219e3e8
	sub_8219E3E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821adaec
	if (cr0.eq) goto loc_821ADAEC;
	// extsw r10,r19
	ctx.r10.s64 = r19.s32;
	// extsw r9,r16
	ctx.r9.s64 = r16.s32;
	// addi r22,r20,4
	r22.s64 = r20.s64 + 4;
	// li r27,0
	r27.s64 = 0;
	// std r10,256(r31)
	PPC_STORE_U64(r31.u32 + 256, ctx.r10.u64);
	// std r9,264(r31)
	PPC_STORE_U64(r31.u32 + 264, ctx.r9.u64);
	// lfd f0,256(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 256);
	// lfd f13,264(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 264);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f28,f0
	f28.f64 = double(float(f0.f64));
	// frsp f27,f13
	f27.f64 = double(float(ctx.f13.f64));
loc_821AD914:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lfsx f12,r22,r10
	temp.u32 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f13,f0,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// ble cr6,0x821ad970
	if (!cr6.gt) goto loc_821AD970;
	// lfsx f13,r22,r10
	temp.u32 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_821AD948:
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f13
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, f29.f64);
	// bge cr6,0x821ad964
	if (!cr6.lt) goto loc_821AD964;
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
loc_821AD964:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x821ad948
	if (!cr0.eq) goto loc_821AD948;
loc_821AD970:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	f0.f64 = double(temp.f32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,240(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f30,244(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// addi r15,r31,240
	r15.s64 = r31.s64 + 240;
	// std r11,272(r31)
	PPC_STORE_U64(r31.u32 + 272, r11.u64);
	// stfs f30,248(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// lwz r11,27088(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// stfs f31,252(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// addi r14,r31,96
	r14.s64 = r31.s64 + 96;
	// fnmsubs f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// lfd f13,272(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lfsx f12,r20,r11
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// ble cr6,0x821ada4c
	if (!cr6.gt) goto loc_821ADA4C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfsx f12,r20,r11
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_821ADA24:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f0,f11,f12
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f29
	cr6.compare(ctx.f11.f64, f29.f64);
	// bge cr6,0x821ada40
	if (!cr6.lt) goto loc_821ADA40;
	// addi r23,r23,11
	r23.s64 = r23.s64 + 11;
loc_821ADA40:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x821ada24
	if (!cr0.eq) goto loc_821ADA24;
loc_821ADA4C:
	// extsw r11,r23
	r11.s64 = r23.s32;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmuls f13,f27,f0
	ctx.f13.f64 = double(float(f27.f64 * f0.f64));
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-27480(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + -27480);
	f0.f64 = double(temp.f32);
	// lwz r15,88(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stfs f30,196(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// std r11,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r11.u64);
	// stfs f30,200(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lwz r11,27088(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// stfs f31,204(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// addi r23,r31,192
	r23.s64 = r31.s64 + 192;
	// addi r14,r31,96
	r14.s64 = r31.s64 + 96;
	// fnmsubs f0,f13,f0,f12
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f12.f64)));
	// fsubs f0,f0,f26
	f0.f64 = double(float(f0.f64 - f26.f64));
	// lfd f13,280(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// lwz r3,27088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 27088);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x821ad914
	if (cr6.lt) goto loc_821AD914;
loc_821ADAEC:
	// addi r29,r24,12
	r29.s64 = r24.s64 + 12;
	// lfs f0,16(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lfs f2,4(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x821acb38
	sub_821ACB38(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f30,80(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x821adb24
	if (cr6.lt) goto loc_821ADB24;
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
loc_821ADB24:
	// lfs f0,16(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,4(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x821acb38
	sub_821ACB38(ctx, base);
	// lwz r24,40(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// mr r16,r19
	r16.u64 = r19.u64;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// bne 0x821ad88c
	if (!cr0.eq) goto loc_821AD88C;
loc_821ADB58:
	// lwz r29,52(r21)
	r29.u64 = PPC_LOAD_U32(r21.u32 + 52);
	// li r28,0
	r28.s64 = 0;
	// b 0x821adb7c
	goto loc_821ADB7C;
loc_821ADB64:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821acdb0
	sub_821ACDB0(ctx, base);
	// lwz r29,40(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_821ADB7C:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x821adb64
	if (!cr0.eq) goto loc_821ADB64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
loc_821ADB88:
	// addi r1,r31,800
	ctx.r1.s64 = r31.s64 + 800;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d628
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_821ADB98"))) PPC_WEAK_FUNC(sub_821ADB98);
PPC_FUNC_IMPL(__imp__sub_821ADB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10560
	r11.s64 = r11.s64 + 10560;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10560
	ctx.r10.s64 = ctx.r10.s64 + 10560;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADBC0"))) PPC_WEAK_FUNC(sub_821ADBC0);
PPC_FUNC_IMPL(__imp__sub_821ADBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-800
	r31.s64 = r12.s64 + -800;
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

__attribute__((alias("__imp__sub_821ADBE8"))) PPC_WEAK_FUNC(sub_821ADBE8);
PPC_FUNC_IMPL(__imp__sub_821ADBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-800
	r31.s64 = r12.s64 + -800;
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

__attribute__((alias("__imp__sub_821ADC10"))) PPC_WEAK_FUNC(sub_821ADC10);
PPC_FUNC_IMPL(__imp__sub_821ADC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-800
	r31.s64 = r12.s64 + -800;
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

__attribute__((alias("__imp__sub_821ADC38"))) PPC_WEAK_FUNC(sub_821ADC38);
PPC_FUNC_IMPL(__imp__sub_821ADC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-800
	r31.s64 = r12.s64 + -800;
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

__attribute__((alias("__imp__sub_821ADC60"))) PPC_WEAK_FUNC(sub_821ADC60);
PPC_FUNC_IMPL(__imp__sub_821ADC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-800
	r31.s64 = r12.s64 + -800;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
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

__attribute__((alias("__imp__sub_821ADC88"))) PPC_WEAK_FUNC(sub_821ADC88);
PPC_FUNC_IMPL(__imp__sub_821ADC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-27176(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27176);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ad3b8
	sub_821AD3B8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821adce8
	if (cr6.eq) goto loc_821ADCE8;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821ADCE8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_821ADC90"))) PPC_WEAK_FUNC(sub_821ADC90);
PPC_FUNC_IMPL(__imp__sub_821ADC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821ad3b8
	sub_821AD3B8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821adce8
	if (cr6.eq) goto loc_821ADCE8;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821ADCE8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_821ADD04"))) PPC_WEAK_FUNC(sub_821ADD04);
PPC_FUNC_IMPL(__imp__sub_821ADD04) {
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
	// bl 0x82261a30
	sub_82261A30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ADD2C"))) PPC_WEAK_FUNC(sub_821ADD2C);
PPC_FUNC_IMPL(__imp__sub_821ADD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ADD30"))) PPC_WEAK_FUNC(sub_821ADD30);
PPC_FUNC_IMPL(__imp__sub_821ADD30) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-12792
	ctx.r4.s64 = r11.s64 + -12792;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x821ade30
	if (cr0.eq) goto loc_821ADE30;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// li r26,1
	r26.s64 = 1;
	// lwz r25,36(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r24,36(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821ade30
	if (!cr6.gt) goto loc_821ADE30;
	// li r27,8
	r27.s64 = 8;
loc_821ADD90:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r28,0
	r28.s64 = 0;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x821ade04
	if (!cr0.gt) goto loc_821ADE04;
	// li r29,0
	r29.s64 = 0;
loc_821ADDB8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// or r28,r3,r28
	r28.u64 = ctx.r3.u64 | r28.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lha r11,8(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 8));
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x821addb8
	if (cr6.lt) goto loc_821ADDB8;
loc_821ADE04:
	// and. r11,r28,r25
	r11.u64 = r28.u64 & r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ade1c
	if (cr0.eq) goto loc_821ADE1C;
	// and. r11,r28,r24
	r11.u64 = r28.u64 & r24.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ade1c
	if (cr0.eq) goto loc_821ADE1C;
	// and. r11,r11,r25
	r11.u64 = r11.u64 & r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ade3c
	if (cr0.eq) goto loc_821ADE3C;
loc_821ADE1C:
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x821add90
	if (cr6.lt) goto loc_821ADD90;
loc_821ADE30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821ADE34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_821ADE3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ade34
	goto loc_821ADE34;
}

__attribute__((alias("__imp__sub_821ADE44"))) PPC_WEAK_FUNC(sub_821ADE44);
PPC_FUNC_IMPL(__imp__sub_821ADE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ADE48"))) PPC_WEAK_FUNC(sub_821ADE48);
PPC_FUNC_IMPL(__imp__sub_821ADE48) {
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
	// beq 0x821ade88
	if (cr0.eq) goto loc_821ADE88;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,9272
	ctx.r3.s64 = r11.s64 + 9272;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ade90
	goto loc_821ADE90;
loc_821ADE88:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821ADE90:
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

__attribute__((alias("__imp__sub_821ADEAC"))) PPC_WEAK_FUNC(sub_821ADEAC);
PPC_FUNC_IMPL(__imp__sub_821ADEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ADEB0"))) PPC_WEAK_FUNC(sub_821ADEB0);
PPC_FUNC_IMPL(__imp__sub_821ADEB0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// beq 0x821adf78
	if (cr0.eq) goto loc_821ADF78;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,3824
	r28.s64 = r11.s64 + 3824;
loc_821ADF00:
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
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821adf4c
	if (cr0.eq) goto loc_821ADF4C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82175bb0
	sub_82175BB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x821adf84
	if (!cr0.eq) goto loc_821ADF84;
loc_821ADF4C:
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
	// bne 0x821adf00
	if (!cr0.eq) goto loc_821ADF00;
loc_821ADF78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821ADF7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_821ADF84:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821adf7c
	goto loc_821ADF7C;
}

__attribute__((alias("__imp__sub_821ADF8C"))) PPC_WEAK_FUNC(sub_821ADF8C);
PPC_FUNC_IMPL(__imp__sub_821ADF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ADF90"))) PPC_WEAK_FUNC(sub_821ADF90);
PPC_FUNC_IMPL(__imp__sub_821ADF90) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-27064(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -27064);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bne cr6,0x821adfcc
	if (!cr6.eq) goto loc_821ADFCC;
loc_821ADFC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ae1fc
	goto loc_821AE1FC;
loc_821ADFCC:
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,10572(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10572);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r23,r10,10568
	r23.s64 = ctx.r10.s64 + 10568;
	// bne 0x821ae000
	if (!cr0.eq) goto loc_821AE000;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10572(r30)
	PPC_STORE_U32(r30.u32 + 10572, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-27104
	ctx.r4.s64 = r11.s64 + -27104;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10572(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10572);
loc_821AE000:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r24,r10,10564
	r24.s64 = ctx.r10.s64 + 10564;
	// bne 0x821ae028
	if (!cr0.eq) goto loc_821AE028;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10572(r30)
	PPC_STORE_U32(r30.u32 + 10572, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-27120
	ctx.r4.s64 = r11.s64 + -27120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821AE028:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821ae1f8
	if (!cr6.gt) goto loc_821AE1F8;
	// li r29,8
	r29.s64 = 8;
loc_821AE03C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r11,8(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821ae088
	if (cr6.eq) goto loc_821AE088;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// ori r26,r26,1
	r26.u64 = r26.u64 | 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x8219c8b0
	sub_8219C8B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x821ae08c
	if (cr0.eq) goto loc_821AE08C;
loc_821AE088:
	// li r11,1
	r11.s64 = 1;
loc_821AE08C:
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae0b0
	if (cr0.eq) goto loc_821AE0B0;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r26,r26,0,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae0b0
	if (cr0.eq) goto loc_821AE0B0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AE0B0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x821ae11c
	if (!cr6.eq) goto loc_821AE11C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x821ae11c
	if (!cr6.eq) goto loc_821AE11C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae11c
	if (cr0.eq) goto loc_821AE11C;
	// subf r11,r21,r22
	r11.s64 = r22.s64 - r21.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// b 0x821ae1d4
	goto loc_821AE1D4;
loc_821AE11C:
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x821ae170
	if (!cr6.eq) goto loc_821AE170;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x821ae170
	if (!cr6.eq) goto loc_821AE170;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae170
	if (cr0.eq) goto loc_821AE170;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821adeb0
	sub_821ADEB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821ae1d4
	goto loc_821AE1D4;
loc_821AE170:
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821ae1ac
	if (cr6.eq) goto loc_821AE1AC;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// ori r26,r26,2
	r26.u64 = r26.u64 | 2;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x8219c8b0
	sub_8219C8B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x821ae1b0
	if (cr0.eq) goto loc_821AE1B0;
loc_821AE1AC:
	// li r11,1
	r11.s64 = 1;
loc_821AE1B0:
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// rlwinm. r11,r26,0,30,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae1d4
	if (cr0.eq) goto loc_821AE1D4;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r26,r26,0,31,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae1d4
	if (cr0.eq) goto loc_821AE1D4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AE1D4:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae1e4
	if (cr0.eq) goto loc_821AE1E4;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821adfc4
	if (!cr0.eq) goto loc_821ADFC4;
loc_821AE1E4:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x821ae03c
	if (cr6.lt) goto loc_821AE03C;
loc_821AE1F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AE1FC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_821ADF98"))) PPC_WEAK_FUNC(sub_821ADF98);
PPC_FUNC_IMPL(__imp__sub_821ADF98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bne cr6,0x821adfcc
	if (!cr6.eq) goto loc_821ADFCC;
loc_821ADFC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ae1fc
	goto loc_821AE1FC;
loc_821ADFCC:
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,10572(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10572);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r23,r10,10568
	r23.s64 = ctx.r10.s64 + 10568;
	// bne 0x821ae000
	if (!cr0.eq) goto loc_821AE000;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10572(r30)
	PPC_STORE_U32(r30.u32 + 10572, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-27104
	ctx.r4.s64 = r11.s64 + -27104;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10572(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10572);
loc_821AE000:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r24,r10,10564
	r24.s64 = ctx.r10.s64 + 10564;
	// bne 0x821ae028
	if (!cr0.eq) goto loc_821AE028;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10572(r30)
	PPC_STORE_U32(r30.u32 + 10572, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-27120
	ctx.r4.s64 = r11.s64 + -27120;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821AE028:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821ae1f8
	if (!cr6.gt) goto loc_821AE1F8;
	// li r29,8
	r29.s64 = 8;
loc_821AE03C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r11,8(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821ae088
	if (cr6.eq) goto loc_821AE088;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// ori r26,r26,1
	r26.u64 = r26.u64 | 1;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x8219c8b0
	sub_8219C8B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x821ae08c
	if (cr0.eq) goto loc_821AE08C;
loc_821AE088:
	// li r11,1
	r11.s64 = 1;
loc_821AE08C:
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae0b0
	if (cr0.eq) goto loc_821AE0B0;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r26,r26,0,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae0b0
	if (cr0.eq) goto loc_821AE0B0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AE0B0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x821ae11c
	if (!cr6.eq) goto loc_821AE11C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x821ae11c
	if (!cr6.eq) goto loc_821AE11C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae11c
	if (cr0.eq) goto loc_821AE11C;
	// subf r11,r21,r22
	r11.s64 = r22.s64 - r21.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// b 0x821ae1d4
	goto loc_821AE1D4;
loc_821AE11C:
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x821ae170
	if (!cr6.eq) goto loc_821AE170;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x821ae170
	if (!cr6.eq) goto loc_821AE170;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae170
	if (cr0.eq) goto loc_821AE170;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821adeb0
	sub_821ADEB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821ae1d4
	goto loc_821AE1D4;
loc_821AE170:
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821ae1ac
	if (cr6.eq) goto loc_821AE1AC;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82317b70
	sub_82317B70(ctx, base);
	// ori r26,r26,2
	r26.u64 = r26.u64 | 2;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x8219c8b0
	sub_8219C8B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x821ae1b0
	if (cr0.eq) goto loc_821AE1B0;
loc_821AE1AC:
	// li r11,1
	r11.s64 = 1;
loc_821AE1B0:
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// rlwinm. r11,r26,0,30,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae1d4
	if (cr0.eq) goto loc_821AE1D4;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r26,r26,0,31,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae1d4
	if (cr0.eq) goto loc_821AE1D4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AE1D4:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae1e4
	if (cr0.eq) goto loc_821AE1E4;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821adfc4
	if (!cr0.eq) goto loc_821ADFC4;
loc_821AE1E4:
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x821ae03c
	if (cr6.lt) goto loc_821AE03C;
loc_821AE1F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AE1FC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_821AE204"))) PPC_WEAK_FUNC(sub_821AE204);
PPC_FUNC_IMPL(__imp__sub_821AE204) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10572
	r11.s64 = r11.s64 + 10572;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10572
	ctx.r10.s64 = ctx.r10.s64 + 10572;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE22C"))) PPC_WEAK_FUNC(sub_821AE22C);
PPC_FUNC_IMPL(__imp__sub_821AE22C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10572
	r11.s64 = r11.s64 + 10572;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10572
	ctx.r10.s64 = ctx.r10.s64 + 10572;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE254"))) PPC_WEAK_FUNC(sub_821AE254);
PPC_FUNC_IMPL(__imp__sub_821AE254) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae284
	if (cr0.eq) goto loc_821AE284;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_821AE284:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE294"))) PPC_WEAK_FUNC(sub_821AE294);
PPC_FUNC_IMPL(__imp__sub_821AE294) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae2c4
	if (cr0.eq) goto loc_821AE2C4;
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
loc_821AE2C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE2D4"))) PPC_WEAK_FUNC(sub_821AE2D4);
PPC_FUNC_IMPL(__imp__sub_821AE2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE2D8"))) PPC_WEAK_FUNC(sub_821AE2D8);
PPC_FUNC_IMPL(__imp__sub_821AE2D8) {
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
	// blt cr6,0x821ae320
	if (cr6.lt) goto loc_821AE320;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_821AE320:
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
	// bl 0x821ade48
	sub_821ADE48(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821ae358
	if (cr0.eq) goto loc_821AE358;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_821AE358:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x821ae378
	if (cr6.eq) goto loc_821AE378;
loc_821AE364:
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
	// bne 0x821ae364
	if (!cr0.eq) goto loc_821AE364;
loc_821AE378:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x821ae3a0
	if (!cr0.eq) goto loc_821AE3A0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x821ae3a0
	if (cr0.eq) goto loc_821AE3A0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_821AE3A0:
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

__attribute__((alias("__imp__sub_821AE3D4"))) PPC_WEAK_FUNC(sub_821AE3D4);
PPC_FUNC_IMPL(__imp__sub_821AE3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE3D8"))) PPC_WEAK_FUNC(sub_821AE3D8);
PPC_FUNC_IMPL(__imp__sub_821AE3D8) {
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
	// lwz r16,-26952(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26952);
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
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// beq 0x821ae464
	if (cr0.eq) goto loc_821AE464;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-6848
	ctx.r4.s64 = r11.s64 + -6848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_821AE464:
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

__attribute__((alias("__imp__sub_821AE3E0"))) PPC_WEAK_FUNC(sub_821AE3E0);
PPC_FUNC_IMPL(__imp__sub_821AE3E0) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// beq 0x821ae464
	if (cr0.eq) goto loc_821AE464;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-6848
	ctx.r4.s64 = r11.s64 + -6848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_821AE464:
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

__attribute__((alias("__imp__sub_821AE480"))) PPC_WEAK_FUNC(sub_821AE480);
PPC_FUNC_IMPL(__imp__sub_821AE480) {
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

__attribute__((alias("__imp__sub_821AE4AC"))) PPC_WEAK_FUNC(sub_821AE4AC);
PPC_FUNC_IMPL(__imp__sub_821AE4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE4B0"))) PPC_WEAK_FUNC(sub_821AE4B0);
PPC_FUNC_IMPL(__imp__sub_821AE4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AE4D0"))) PPC_WEAK_FUNC(sub_821AE4D0);
PPC_FUNC_IMPL(__imp__sub_821AE4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE4D4"))) PPC_WEAK_FUNC(sub_821AE4D4);
PPC_FUNC_IMPL(__imp__sub_821AE4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE4D8"))) PPC_WEAK_FUNC(sub_821AE4D8);
PPC_FUNC_IMPL(__imp__sub_821AE4D8) {
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
	// beq cr6,0x821ae518
	if (cr6.eq) goto loc_821AE518;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821ae508
	if (cr0.eq) goto loc_821AE508;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_821AE508:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x821ae52c
	goto loc_821AE52C;
loc_821AE518:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x821ae2d8
	sub_821AE2D8(ctx, base);
loc_821AE52C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE53C"))) PPC_WEAK_FUNC(sub_821AE53C);
PPC_FUNC_IMPL(__imp__sub_821AE53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE540"))) PPC_WEAK_FUNC(sub_821AE540);
PPC_FUNC_IMPL(__imp__sub_821AE540) {
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
	// beq cr6,0x821ae588
	if (cr6.eq) goto loc_821AE588;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x821ae580
	if (cr0.eq) goto loc_821AE580;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x821ae584
	goto loc_821AE584;
loc_821AE580:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_821AE584:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821AE588:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AE594"))) PPC_WEAK_FUNC(sub_821AE594);
PPC_FUNC_IMPL(__imp__sub_821AE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE598"))) PPC_WEAK_FUNC(sub_821AE598);
PPC_FUNC_IMPL(__imp__sub_821AE598) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821ae73c
	if (cr6.eq) goto loc_821AE73C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26840
	ctx.r4.s64 = r11.s64 + -26840;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,40
	ctx.r5.s64 = r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26848
	ctx.r4.s64 = r11.s64 + -26848;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,31084
	ctx.r4.s64 = r11.s64 + 31084;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26856
	ctx.r4.s64 = r11.s64 + -26856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,36
	ctx.r5.s64 = r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26868
	ctx.r4.s64 = r11.s64 + -26868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,20
	ctx.r5.s64 = r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26880
	ctx.r4.s64 = r11.s64 + -26880;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,44
	ctx.r5.s64 = r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26892
	ctx.r4.s64 = r11.s64 + -26892;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,48
	ctx.r5.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-26904
	ctx.r4.s64 = r11.s64 + -26904;
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
	// beq 0x821ae73c
	if (cr0.eq) goto loc_821AE73C;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821ae73c
	if (!cr6.gt) goto loc_821AE73C;
	// addi r28,r30,24
	r28.s64 = r30.s64 + 24;
	// li r30,8
	r30.s64 = 8;
loc_821AE710:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x821ae4d8
	sub_821AE4D8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x821ae710
	if (cr6.lt) goto loc_821AE710;
loc_821AE73C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AE744"))) PPC_WEAK_FUNC(sub_821AE744);
PPC_FUNC_IMPL(__imp__sub_821AE744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE748"))) PPC_WEAK_FUNC(sub_821AE748);
PPC_FUNC_IMPL(__imp__sub_821AE748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// lfs f13,-20976(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20976);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821ae540
	sub_821AE540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AE78C"))) PPC_WEAK_FUNC(sub_821AE78C);
PPC_FUNC_IMPL(__imp__sub_821AE78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AE790"))) PPC_WEAK_FUNC(sub_821AE790);
PPC_FUNC_IMPL(__imp__sub_821AE790) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26760(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26760);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r11,10588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10588);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r25,r10,10584
	r25.s64 = ctx.r10.s64 + 10584;
	// bne 0x821ae7e8
	if (!cr0.eq) goto loc_821AE7E8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10588(r30)
	PPC_STORE_U32(r30.u32 + 10588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-26796
	ctx.r4.s64 = r11.s64 + -26796;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10588);
loc_821AE7E8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r24,r10,10580
	r24.s64 = ctx.r10.s64 + 10580;
	// bne 0x821ae814
	if (!cr0.eq) goto loc_821AE814;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10588(r30)
	PPC_STORE_U32(r30.u32 + 10588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-26804
	ctx.r4.s64 = r11.s64 + -26804;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10588);
loc_821AE814:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r26,r10,10576
	r26.s64 = ctx.r10.s64 + 10576;
	// bne 0x821ae83c
	if (!cr0.eq) goto loc_821AE83C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,10588(r30)
	PPC_STORE_U32(r30.u32 + 10588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = r11.s64 + -26816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821AE83C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821ae748
	sub_821AE748(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-26828
	ctx.r4.s64 = r11.s64 + -26828;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x821ae90c
	if (cr0.eq) goto loc_821AE90C;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821ae90c
	if (!cr6.gt) goto loc_821AE90C;
	// li r28,8
	r28.s64 = 8;
loc_821AE884:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821adf98
	sub_821ADF98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae8f8
	if (cr0.eq) goto loc_821AE8F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x821ae918
	if (!cr0.eq) goto loc_821AE918;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821ae598
	sub_821AE598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ae90c
	if (cr0.eq) goto loc_821AE90C;
loc_821AE8F8:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821ae884
	if (cr6.lt) goto loc_821AE884;
loc_821AE90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AE910:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
loc_821AE918:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ae910
	goto loc_821AE910;
}

__attribute__((alias("__imp__sub_821AE798"))) PPC_WEAK_FUNC(sub_821AE798);
PPC_FUNC_IMPL(__imp__sub_821AE798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r11,10588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10588);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r25,r10,10584
	r25.s64 = ctx.r10.s64 + 10584;
	// bne 0x821ae7e8
	if (!cr0.eq) goto loc_821AE7E8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10588(r30)
	PPC_STORE_U32(r30.u32 + 10588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-26796
	ctx.r4.s64 = r11.s64 + -26796;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10588);
loc_821AE7E8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r24,r10,10580
	r24.s64 = ctx.r10.s64 + 10580;
	// bne 0x821ae814
	if (!cr0.eq) goto loc_821AE814;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10588(r30)
	PPC_STORE_U32(r30.u32 + 10588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-26804
	ctx.r4.s64 = r11.s64 + -26804;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10588);
loc_821AE814:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r26,r10,10576
	r26.s64 = ctx.r10.s64 + 10576;
	// bne 0x821ae83c
	if (!cr0.eq) goto loc_821AE83C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,10588(r30)
	PPC_STORE_U32(r30.u32 + 10588, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-26816
	ctx.r4.s64 = r11.s64 + -26816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821AE83C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821ae748
	sub_821AE748(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-26828
	ctx.r4.s64 = r11.s64 + -26828;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x821ae90c
	if (cr0.eq) goto loc_821AE90C;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821ae90c
	if (!cr6.gt) goto loc_821AE90C;
	// li r28,8
	r28.s64 = 8;
loc_821AE884:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821adf98
	sub_821ADF98(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ae8f8
	if (cr0.eq) goto loc_821AE8F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x821ae918
	if (!cr0.eq) goto loc_821AE918;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821ae598
	sub_821AE598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ae90c
	if (cr0.eq) goto loc_821AE90C;
loc_821AE8F8:
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821ae884
	if (cr6.lt) goto loc_821AE884;
loc_821AE90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AE910:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
loc_821AE918:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ae910
	goto loc_821AE910;
}

__attribute__((alias("__imp__sub_821AE920"))) PPC_WEAK_FUNC(sub_821AE920);
PPC_FUNC_IMPL(__imp__sub_821AE920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10588
	r11.s64 = r11.s64 + 10588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10588
	ctx.r10.s64 = ctx.r10.s64 + 10588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE948"))) PPC_WEAK_FUNC(sub_821AE948);
PPC_FUNC_IMPL(__imp__sub_821AE948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10588
	r11.s64 = r11.s64 + 10588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10588
	ctx.r10.s64 = ctx.r10.s64 + 10588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE970"))) PPC_WEAK_FUNC(sub_821AE970);
PPC_FUNC_IMPL(__imp__sub_821AE970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10588
	r11.s64 = r11.s64 + 10588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10588
	ctx.r10.s64 = ctx.r10.s64 + 10588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AE998"))) PPC_WEAK_FUNC(sub_821AE998);
PPC_FUNC_IMPL(__imp__sub_821AE998) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26640(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26640);
	// mflr r12
	// bl 0x8239bce0
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// bl 0x821a0448
	sub_821A0448(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821add30
	sub_821ADD30(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aebb8
	if (!cr0.eq) goto loc_821AEBB8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ae798
	sub_821AE798(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aebb8
	if (!cr0.eq) goto loc_821AEBB8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-26672
	ctx.r4.s64 = r11.s64 + -26672;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// srawi r11,r11,12
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFF) != 0);
	r11.s64 = r11.s32 >> 12;
	// srawi r10,r10,12
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// blt cr6,0x821aea60
	if (cr6.lt) goto loc_821AEA60;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_821AEA60:
	// lwa r10,0(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 0));
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x821aea8c
	if (!cr6.lt) goto loc_821AEA8C;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_821AEA8C:
	// li r3,80
	ctx.r3.s64 = 80;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821aeacc
	if (cr0.eq) goto loc_821AEACC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f2,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f1,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821aa960
	sub_821AA960(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821aead0
	goto loc_821AEAD0;
loc_821AEACC:
	// li r29,0
	r29.s64 = 0;
loc_821AEAD0:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821aeb80
	if (!cr6.gt) goto loc_821AEB80;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r27,r29,68
	r27.s64 = r29.s64 + 68;
	// addi r26,r30,24
	r26.s64 = r30.s64 + 24;
	// lfs f30,-25404(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25404);
	f30.f64 = double(temp.f32);
	// lfs f31,22976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22976);
	f31.f64 = double(temp.f32);
loc_821AEAF8:
	// li r11,0
	r11.s64 = 0;
	// stw r25,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r25.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aeb24
	if (cr0.eq) goto loc_821AEB24;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AEB24:
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 48);
	f0.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x821abbb8
	sub_821ABBB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f3,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821aaff8
	sub_821AAFF8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aeb80
	if (cr0.eq) goto loc_821AEB80;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x821aeaf8
	if (cr6.lt) goto loc_821AEAF8;
loc_821AEB80:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a8ca8
	sub_821A8CA8(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aebb0
	if (cr0.eq) goto loc_821AEBB0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AEBB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x821aebbc
	goto loc_821AEBBC;
loc_821AEBB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AEBBC:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821AE9A0"))) PPC_WEAK_FUNC(sub_821AE9A0);
PPC_FUNC_IMPL(__imp__sub_821AE9A0) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// bl 0x821a0448
	sub_821A0448(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821add30
	sub_821ADD30(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aebb8
	if (!cr0.eq) goto loc_821AEBB8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ae798
	sub_821AE798(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821aebb8
	if (!cr0.eq) goto loc_821AEBB8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-26672
	ctx.r4.s64 = r11.s64 + -26672;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// srawi r11,r11,12
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFF) != 0);
	r11.s64 = r11.s32 >> 12;
	// srawi r10,r10,12
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// blt cr6,0x821aea60
	if (cr6.lt) goto loc_821AEA60;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_821AEA60:
	// lwa r10,0(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 0));
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x821aea8c
	if (!cr6.lt) goto loc_821AEA8C;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_821AEA8C:
	// li r3,80
	ctx.r3.s64 = 80;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821aeacc
	if (cr0.eq) goto loc_821AEACC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f2,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f1,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821aa960
	sub_821AA960(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821aead0
	goto loc_821AEAD0;
loc_821AEACC:
	// li r29,0
	r29.s64 = 0;
loc_821AEAD0:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821aeb80
	if (!cr6.gt) goto loc_821AEB80;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r27,r29,68
	r27.s64 = r29.s64 + 68;
	// addi r26,r30,24
	r26.s64 = r30.s64 + 24;
	// lfs f30,-25404(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25404);
	f30.f64 = double(temp.f32);
	// lfs f31,22976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22976);
	f31.f64 = double(temp.f32);
loc_821AEAF8:
	// li r11,0
	r11.s64 = 0;
	// stw r25,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r25.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aeb24
	if (cr0.eq) goto loc_821AEB24;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AEB24:
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 48);
	f0.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f2,f13,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x821abbb8
	sub_821ABBB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f3,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821aaff8
	sub_821AAFF8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aeb80
	if (cr0.eq) goto loc_821AEB80;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x821aeaf8
	if (cr6.lt) goto loc_821AEAF8;
loc_821AEB80:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821a8ca8
	sub_821A8CA8(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aebb0
	if (cr0.eq) goto loc_821AEBB0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AEBB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x821aebbc
	goto loc_821AEBBC;
loc_821AEBB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AEBBC:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821AEBCC"))) PPC_WEAK_FUNC(sub_821AEBCC);
PPC_FUNC_IMPL(__imp__sub_821AEBCC) {
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

__attribute__((alias("__imp__sub_821AEBF4"))) PPC_WEAK_FUNC(sub_821AEBF4);
PPC_FUNC_IMPL(__imp__sub_821AEBF4) {
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

__attribute__((alias("__imp__sub_821AEC1C"))) PPC_WEAK_FUNC(sub_821AEC1C);
PPC_FUNC_IMPL(__imp__sub_821AEC1C) {
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

__attribute__((alias("__imp__sub_821AEC44"))) PPC_WEAK_FUNC(sub_821AEC44);
PPC_FUNC_IMPL(__imp__sub_821AEC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AEC48"))) PPC_WEAK_FUNC(sub_821AEC48);
PPC_FUNC_IMPL(__imp__sub_821AEC48) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AEC78"))) PPC_WEAK_FUNC(sub_821AEC78);
PPC_FUNC_IMPL(__imp__sub_821AEC78) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x821aed64
	if (!cr6.eq) goto loc_821AED64;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8214f8a0
	sub_8214F8A0(ctx, base);
	// addi r30,r31,92
	r30.s64 = r31.s64 + 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,10672
	ctx.r3.s64 = r11.s64 + 10672;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8226adc0
	sub_8226ADC0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f12,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// b 0x821af0a0
	goto loc_821AF0A0;
loc_821AED64:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,11556(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821af0a0
	if (cr6.eq) goto loc_821AF0A0;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lbz r11,164(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821aed94
	if (cr0.eq) goto loc_821AED94;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x822697d8
	sub_822697D8(ctx, base);
loc_821AED94:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x821aefd0
	if (cr6.eq) goto loc_821AEFD0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x821aeefc
	if (cr6.eq) goto loc_821AEEFC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821aee30
	if (cr6.eq) goto loc_821AEE30;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x821aedd4
	if (cr6.eq) goto loc_821AEDD4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x821af018
	if (!cr6.eq) goto loc_821AF018;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x821af018
	goto loc_821AF018;
loc_821AEDD4:
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r29,32
	r11.s64 = r29.s64 + 32;
	// lfs f0,56(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 56);
	f0.f64 = double(temp.f32);
	// addi r10,r31,124
	ctx.r10.s64 = r31.s64 + 124;
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,48(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,140(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
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
	// b 0x821af00c
	goto loc_821AF00C;
loc_821AEE30:
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,108
	r30.s64 = r31.s64 + 108;
	// lfs f0,56(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 56);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,48(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,140(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r29,r31,92
	r29.s64 = r31.s64 + 92;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f11,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f10,124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmsubs f13,f9,f13,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// fmsubs f0,f0,f11,f8
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// fmsubs f12,f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f12,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f0,f13,f0,f8
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f8.f64));
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// fmsubs f12,f9,f12,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// fmsubs f13,f10,f11,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// b 0x821af018
	goto loc_821AF018;
loc_821AEEFC:
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 56);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,48(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,140(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lbz r11,164(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821aef44
	if (cr0.eq) goto loc_821AEF44;
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8214f728
	sub_8214F728(ctx, base);
loc_821AEF44:
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// addi r30,r31,92
	r30.s64 = r31.s64 + 92;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f11,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f10,124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmsubs f13,f9,f13,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fmsubs f0,f0,f11,f8
	f0.f64 = double(float(f0.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// fmsubs f12,f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lfs f12,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f10,132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f0,f13,f0,f8
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f8.f64));
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// fmsubs f12,f9,f12,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// fmsubs f13,f10,f11,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// b 0x821af018
	goto loc_821AF018;
loc_821AEFD0:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	f0.f64 = double(temp.f32);
	// lfs f13,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,140(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
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
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
loc_821AF00C:
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8214f7f0
	sub_8214F7F0(ctx, base);
loc_821AF018:
	// lbz r11,164(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821af0a0
	if (cr0.eq) goto loc_821AF0A0;
	// addi r11,r31,92
	r11.s64 = r31.s64 + 92;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_821AF0A0:
	// li r11,1
	r11.s64 = 1;
	// stb r11,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AF0B0"))) PPC_WEAK_FUNC(sub_821AF0B0);
PPC_FUNC_IMPL(__imp__sub_821AF0B0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26520(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26520);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 76);
	f0.f64 = double(temp.f32);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r25,r31,88
	r25.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af11c
	if (cr0.eq) goto loc_821AF11C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF11C:
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af158
	if (cr0.eq) goto loc_821AF158;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF158:
	// lfs f0,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 84);
	f0.f64 = double(temp.f32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af194
	if (cr0.eq) goto loc_821AF194;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF194:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821AF0B8"))) PPC_WEAK_FUNC(sub_821AF0B8);
PPC_FUNC_IMPL(__imp__sub_821AF0B8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 76);
	f0.f64 = double(temp.f32);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r25,r31,88
	r25.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af11c
	if (cr0.eq) goto loc_821AF11C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF11C:
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af158
	if (cr0.eq) goto loc_821AF158;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF158:
	// lfs f0,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 84);
	f0.f64 = double(temp.f32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af194
	if (cr0.eq) goto loc_821AF194;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF194:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821AF1A8"))) PPC_WEAK_FUNC(sub_821AF1A8);
PPC_FUNC_IMPL(__imp__sub_821AF1A8) {
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

__attribute__((alias("__imp__sub_821AF1D0"))) PPC_WEAK_FUNC(sub_821AF1D0);
PPC_FUNC_IMPL(__imp__sub_821AF1D0) {
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

__attribute__((alias("__imp__sub_821AF1F8"))) PPC_WEAK_FUNC(sub_821AF1F8);
PPC_FUNC_IMPL(__imp__sub_821AF1F8) {
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

__attribute__((alias("__imp__sub_821AF220"))) PPC_WEAK_FUNC(sub_821AF220);
PPC_FUNC_IMPL(__imp__sub_821AF220) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r29.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AF288"))) PPC_WEAK_FUNC(sub_821AF288);
PPC_FUNC_IMPL(__imp__sub_821AF288) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26400(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26400);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x82269700
	sub_82269700(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12484);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af328
	if (cr0.eq) goto loc_821AF328;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF328:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af364
	if (cr0.eq) goto loc_821AF364;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF364:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af3a0
	if (cr0.eq) goto loc_821AF3A0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF3A0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821AF290"))) PPC_WEAK_FUNC(sub_821AF290);
PPC_FUNC_IMPL(__imp__sub_821AF290) {
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
	// li r27,0
	r27.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x82269700
	sub_82269700(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12484);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af328
	if (cr0.eq) goto loc_821AF328;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF328:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af364
	if (cr0.eq) goto loc_821AF364;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF364:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af3a0
	if (cr0.eq) goto loc_821AF3A0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF3A0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821AF3B4"))) PPC_WEAK_FUNC(sub_821AF3B4);
PPC_FUNC_IMPL(__imp__sub_821AF3B4) {
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

__attribute__((alias("__imp__sub_821AF3DC"))) PPC_WEAK_FUNC(sub_821AF3DC);
PPC_FUNC_IMPL(__imp__sub_821AF3DC) {
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

__attribute__((alias("__imp__sub_821AF404"))) PPC_WEAK_FUNC(sub_821AF404);
PPC_FUNC_IMPL(__imp__sub_821AF404) {
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

__attribute__((alias("__imp__sub_821AF42C"))) PPC_WEAK_FUNC(sub_821AF42C);
PPC_FUNC_IMPL(__imp__sub_821AF42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF430"))) PPC_WEAK_FUNC(sub_821AF430);
PPC_FUNC_IMPL(__imp__sub_821AF430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x822698a8
	sub_822698A8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f0,-12484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12484);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AF4D4"))) PPC_WEAK_FUNC(sub_821AF4D4);
PPC_FUNC_IMPL(__imp__sub_821AF4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF4D8"))) PPC_WEAK_FUNC(sub_821AF4D8);
PPC_FUNC_IMPL(__imp__sub_821AF4D8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821c5238
	sub_821C5238(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
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

__attribute__((alias("__imp__sub_821AF56C"))) PPC_WEAK_FUNC(sub_821AF56C);
PPC_FUNC_IMPL(__imp__sub_821AF56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF570"))) PPC_WEAK_FUNC(sub_821AF570);
PPC_FUNC_IMPL(__imp__sub_821AF570) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x822697d8
	sub_822697D8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// bl 0x821c5238
	sub_821C5238(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821AF604"))) PPC_WEAK_FUNC(sub_821AF604);
PPC_FUNC_IMPL(__imp__sub_821AF604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF608"))) PPC_WEAK_FUNC(sub_821AF608);
PPC_FUNC_IMPL(__imp__sub_821AF608) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26280(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26280);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x822697d8
	sub_822697D8(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af680
	if (cr0.eq) goto loc_821AF680;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF680:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af6bc
	if (cr0.eq) goto loc_821AF6BC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF6BC:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af6f8
	if (cr0.eq) goto loc_821AF6F8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF6F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821AF610"))) PPC_WEAK_FUNC(sub_821AF610);
PPC_FUNC_IMPL(__imp__sub_821AF610) {
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
	// li r27,0
	r27.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x822697d8
	sub_822697D8(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af680
	if (cr0.eq) goto loc_821AF680;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF680:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af6bc
	if (cr0.eq) goto loc_821AF6BC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF6BC:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821af6f8
	if (cr0.eq) goto loc_821AF6F8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AF6F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821AF70C"))) PPC_WEAK_FUNC(sub_821AF70C);
PPC_FUNC_IMPL(__imp__sub_821AF70C) {
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

__attribute__((alias("__imp__sub_821AF734"))) PPC_WEAK_FUNC(sub_821AF734);
PPC_FUNC_IMPL(__imp__sub_821AF734) {
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

__attribute__((alias("__imp__sub_821AF75C"))) PPC_WEAK_FUNC(sub_821AF75C);
PPC_FUNC_IMPL(__imp__sub_821AF75C) {
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

__attribute__((alias("__imp__sub_821AF784"))) PPC_WEAK_FUNC(sub_821AF784);
PPC_FUNC_IMPL(__imp__sub_821AF784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF788"))) PPC_WEAK_FUNC(sub_821AF788);
PPC_FUNC_IMPL(__imp__sub_821AF788) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x822697d8
	sub_822697D8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821AF7FC"))) PPC_WEAK_FUNC(sub_821AF7FC);
PPC_FUNC_IMPL(__imp__sub_821AF7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF800"))) PPC_WEAK_FUNC(sub_821AF800);
PPC_FUNC_IMPL(__imp__sub_821AF800) {
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
	// lbz r11,156(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821af858
	if (!cr0.eq) goto loc_821AF858;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// li r11,1
	r11.s64 = 1;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stb r11,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, r11.u8);
	// b 0x821af840
	goto loc_821AF840;
loc_821AF834:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821AF840:
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
	// bne 0x821af834
	if (!cr0.eq) goto loc_821AF834;
loc_821AF858:
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

__attribute__((alias("__imp__sub_821AF870"))) PPC_WEAK_FUNC(sub_821AF870);
PPC_FUNC_IMPL(__imp__sub_821AF870) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r10,156(r31)
	PPC_STORE_U8(r31.u32 + 156, ctx.r10.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r31,20
	ctx.r9.s64 = r31.s64 + 20;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x821af8c4
	goto loc_821AF8C4;
loc_821AF8B8:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_821AF8C4:
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821af8b8
	if (!cr0.eq) goto loc_821AF8B8;
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

__attribute__((alias("__imp__sub_821AF8F0"))) PPC_WEAK_FUNC(sub_821AF8F0);
PPC_FUNC_IMPL(__imp__sub_821AF8F0) {
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
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,140
	r11.s64 = r31.s64 + 140;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stb r9,156(r31)
	PPC_STORE_U8(r31.u32 + 156, ctx.r9.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r31,20
	ctx.r9.s64 = r31.s64 + 20;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x821af958
	goto loc_821AF958;
loc_821AF94C:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_821AF958:
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821af94c
	if (!cr0.eq) goto loc_821AF94C;
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

__attribute__((alias("__imp__sub_821AF984"))) PPC_WEAK_FUNC(sub_821AF984);
PPC_FUNC_IMPL(__imp__sub_821AF984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AF988"))) PPC_WEAK_FUNC(sub_821AF988);
PPC_FUNC_IMPL(__imp__sub_821AF988) {
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
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821afa80
	if (cr0.eq) goto loc_821AFA80;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r11,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r11.u8);
	// bne 0x821af9c8
	if (!cr0.eq) goto loc_821AF9C8;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x821afa08
	goto loc_821AFA08;
loc_821AF9C8:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821af9e4
	if (!cr6.eq) goto loc_821AF9E4;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x821afa0c
	goto loc_821AFA0C;
loc_821AF9E4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x821afa18
	if (!cr6.eq) goto loc_821AFA18;
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
loc_821AFA08:
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
loc_821AFA0C:
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x821afa30
	goto loc_821AFA30;
loc_821AFA18:
	// addi r30,r31,92
	r30.s64 = r31.s64 + 92;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
loc_821AFA30:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x821afa58
	if (!cr6.lt) goto loc_821AFA58;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x821afa50
	if (cr6.lt) goto loc_821AFA50;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821afa58
	if (!cr6.eq) goto loc_821AFA58;
loc_821AFA50:
	// li r11,0
	r11.s64 = 0;
	// b 0x821afa5c
	goto loc_821AFA5C;
loc_821AFA58:
	// li r11,1
	r11.s64 = 1;
loc_821AFA5C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x821afa70
	if (cr0.eq) goto loc_821AFA70;
	// bl 0x821aec78
	sub_821AEC78(ctx, base);
	// b 0x821afa80
	goto loc_821AFA80;
loc_821AFA70:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821AFA80:
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
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

__attribute__((alias("__imp__sub_821AFA9C"))) PPC_WEAK_FUNC(sub_821AFA9C);
PPC_FUNC_IMPL(__imp__sub_821AFA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFAA0"))) PPC_WEAK_FUNC(sub_821AFAA0);
PPC_FUNC_IMPL(__imp__sub_821AFAA0) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821afae8
	if (!cr0.eq) goto loc_821AFAE8;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bge cr6,0x821afb04
	if (!cr6.lt) goto loc_821AFB04;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x821afae8
	if (cr6.lt) goto loc_821AFAE8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x821afb04
	if (!cr6.eq) goto loc_821AFB04;
loc_821AFAE8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r10.u32);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// stb r6,164(r31)
	PPC_STORE_U8(r31.u32 + 164, ctx.r6.u8);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
loc_821AFB04:
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

__attribute__((alias("__imp__sub_821AFB18"))) PPC_WEAK_FUNC(sub_821AFB18);
PPC_FUNC_IMPL(__imp__sub_821AFB18) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r3,-228
	ctx.r3.s64 = ctx.r3.s64 + -228;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f31,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	f31.f64 = double(temp.f32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821c4dd8
	sub_821C4DD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_821AFB7C"))) PPC_WEAK_FUNC(sub_821AFB7C);
PPC_FUNC_IMPL(__imp__sub_821AFB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AFB80"))) PPC_WEAK_FUNC(sub_821AFB80);
PPC_FUNC_IMPL(__imp__sub_821AFB80) {
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
	// lwz r11,9304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 9304);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821294d8
	sub_821294D8(ctx, base);
	// lwz r11,-180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -180);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = r11.s64 + -180;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afc10
	if (cr0.eq) goto loc_821AFC10;
	// lwz r11,-180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -180);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-180
	ctx.r3.s64 = r11.s64 + -180;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
loc_821AFC10:
	// addi r29,r31,-156
	r29.s64 = r31.s64 + -156;
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
	// addi r29,r31,-92
	r29.s64 = r31.s64 + -92;
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
	// lwz r11,-24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -24);
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
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// lbz r29,-20(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + -20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// addi r4,r31,-176
	ctx.r4.s64 = r31.s64 + -176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821AFCC8"))) PPC_WEAK_FUNC(sub_821AFCC8);
PPC_FUNC_IMPL(__imp__sub_821AFCC8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26160(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26160);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afd3c
	if (cr0.eq) goto loc_821AFD3C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFD3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r25,r31,88
	r25.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afd80
	if (cr0.eq) goto loc_821AFD80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFD80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afdc4
	if (cr0.eq) goto loc_821AFDC4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFDC4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821AFCD0"))) PPC_WEAK_FUNC(sub_821AFCD0);
PPC_FUNC_IMPL(__imp__sub_821AFCD0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r25,r31,80
	r25.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afd3c
	if (cr0.eq) goto loc_821AFD3C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFD3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r25,r31,88
	r25.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afd80
	if (cr0.eq) goto loc_821AFD80;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFD80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afdc4
	if (cr0.eq) goto loc_821AFDC4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFDC4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821AFDD8"))) PPC_WEAK_FUNC(sub_821AFDD8);
PPC_FUNC_IMPL(__imp__sub_821AFDD8) {
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

__attribute__((alias("__imp__sub_821AFE00"))) PPC_WEAK_FUNC(sub_821AFE00);
PPC_FUNC_IMPL(__imp__sub_821AFE00) {
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

__attribute__((alias("__imp__sub_821AFE28"))) PPC_WEAK_FUNC(sub_821AFE28);
PPC_FUNC_IMPL(__imp__sub_821AFE28) {
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

__attribute__((alias("__imp__sub_821AFE50"))) PPC_WEAK_FUNC(sub_821AFE50);
PPC_FUNC_IMPL(__imp__sub_821AFE50) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-26040(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -26040);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82269700
	sub_82269700(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12484);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afef4
	if (cr0.eq) goto loc_821AFEF4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFEF4:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aff30
	if (cr0.eq) goto loc_821AFF30;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFF30:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aff6c
	if (cr0.eq) goto loc_821AFF6C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFF6C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821AFE58"))) PPC_WEAK_FUNC(sub_821AFE58);
PPC_FUNC_IMPL(__imp__sub_821AFE58) {
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
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82269700
	sub_82269700(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12484);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821afef4
	if (cr0.eq) goto loc_821AFEF4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFEF4:
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// addi r26,r31,88
	r26.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aff30
	if (cr0.eq) goto loc_821AFF30;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFF30:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821aff6c
	if (cr0.eq) goto loc_821AFF6C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821AFF6C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821AFF80"))) PPC_WEAK_FUNC(sub_821AFF80);
PPC_FUNC_IMPL(__imp__sub_821AFF80) {
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

__attribute__((alias("__imp__sub_821AFFA8"))) PPC_WEAK_FUNC(sub_821AFFA8);
PPC_FUNC_IMPL(__imp__sub_821AFFA8) {
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

__attribute__((alias("__imp__sub_821AFFD0"))) PPC_WEAK_FUNC(sub_821AFFD0);
PPC_FUNC_IMPL(__imp__sub_821AFFD0) {
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

__attribute__((alias("__imp__sub_821AFFF8"))) PPC_WEAK_FUNC(sub_821AFFF8);
PPC_FUNC_IMPL(__imp__sub_821AFFF8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lha r11,8(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 8));
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x821b003c
	if (!cr6.gt) goto loc_821B003C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82150450
	sub_82150450(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821B003C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821afaa0
	sub_821AFAA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821B0074"))) PPC_WEAK_FUNC(sub_821B0074);
PPC_FUNC_IMPL(__imp__sub_821B0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0078"))) PPC_WEAK_FUNC(sub_821B0078);
PPC_FUNC_IMPL(__imp__sub_821B0078) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x821b00f4
	if (cr0.lt) goto loc_821B00F4;
	// addi r27,r29,28
	r27.s64 = r29.s64 + 28;
	// rlwinm r29,r31,3,0,28
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_821B00BC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x82150450
	sub_82150450(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bge 0x821b00bc
	if (!cr0.lt) goto loc_821B00BC;
loc_821B00F4:
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

__attribute__((alias("__imp__sub_821B0108"))) PPC_WEAK_FUNC(sub_821B0108);
PPC_FUNC_IMPL(__imp__sub_821B0108) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r29,76
	ctx.r10.s64 = r29.s64 + 76;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
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

__attribute__((alias("__imp__sub_821B01C0"))) PPC_WEAK_FUNC(sub_821B01C0);
PPC_FUNC_IMPL(__imp__sub_821B01C0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfsx f31,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B028C"))) PPC_WEAK_FUNC(sub_821B028C);
PPC_FUNC_IMPL(__imp__sub_821B028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0290"))) PPC_WEAK_FUNC(sub_821B0290);
PPC_FUNC_IMPL(__imp__sub_821B0290) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-25404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 * f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82269fc0
	sub_82269FC0(ctx, base);
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B0350"))) PPC_WEAK_FUNC(sub_821B0350);
PPC_FUNC_IMPL(__imp__sub_821B0350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r28,r29,28
	r28.s64 = r29.s64 + 28;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822698a8
	sub_822698A8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// bl 0x82269fc0
	sub_82269FC0(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// li r5,48
	ctx.r5.s64 = 48;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821B0484"))) PPC_WEAK_FUNC(sub_821B0484);
PPC_FUNC_IMPL(__imp__sub_821B0484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0488"))) PPC_WEAK_FUNC(sub_821B0488);
PPC_FUNC_IMPL(__imp__sub_821B0488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x8239bcf8
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d5d8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stfs f24,100(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f25,104(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f26,112(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,116(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d624
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B05B8"))) PPC_WEAK_FUNC(sub_821B05B8);
PPC_FUNC_IMPL(__imp__sub_821B05B8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// b 0x821b0608
	goto loc_821B0608;
loc_821B05D8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x821b0600
	if (!cr6.eq) goto loc_821B0600;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82165e80
	sub_82165E80(ctx, base);
loc_821B0600:
	// subf r10,r30,r31
	ctx.r10.s64 = r31.s64 - r30.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_821B0608:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x821b05d8
	if (!cr0.eq) goto loc_821B05D8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821B0624"))) PPC_WEAK_FUNC(sub_821B0624);
PPC_FUNC_IMPL(__imp__sub_821B0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0628"))) PPC_WEAK_FUNC(sub_821B0628);
PPC_FUNC_IMPL(__imp__sub_821B0628) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, xer);
	// beq cr6,0x821b0870
	if (cr6.eq) goto loc_821B0870;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x821b068c
	if (cr6.eq) goto loc_821B068C;
	// lwz r11,160(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 160);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x821b0680
	if (!cr6.lt) goto loc_821B0680;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x821b0678
	if (cr6.lt) goto loc_821B0678;
	// lwz r11,176(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821b0680
	if (!cr6.eq) goto loc_821B0680;
loc_821B0678:
	// li r11,0
	r11.s64 = 0;
	// b 0x821b0684
	goto loc_821B0684;
loc_821B0680:
	// li r11,1
	r11.s64 = 1;
loc_821B0684:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b0878
	if (!cr0.eq) goto loc_821B0878;
loc_821B068C:
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b0820
	if (cr0.eq) goto loc_821B0820;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f31,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// beq cr6,0x821b06c4
	if (cr6.eq) goto loc_821B06C4;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x821b06f4
	goto loc_821B06F4;
loc_821B06C4:
	// stfs f30,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,196(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
loc_821B06F4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x821b0718
	if (cr6.eq) goto loc_821B0718;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x821b0748
	goto loc_821B0748;
loc_821B0718:
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_821B0748:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82129420
	sub_82129420(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// addi r5,r31,28
	ctx.r5.s64 = r31.s64 + 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// beq 0x821b0820
	if (cr0.eq) goto loc_821B0820;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,1384
	r28.s64 = r11.s64 + 1384;
loc_821B07B0:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
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
	// beq 0x821b07f4
	if (cr0.eq) goto loc_821B07F4;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x821b07f4
	if (!cr6.eq) goto loc_821B07F4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821c65b8
	sub_821C65B8(ctx, base);
loc_821B07F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
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
	// bne 0x821b07b0
	if (!cr0.eq) goto loc_821B07B0;
loc_821B0820:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b083c
	if (cr0.eq) goto loc_821B083C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x821b05b8
	sub_821B05B8(ctx, base);
loc_821B083C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b0870
	if (cr0.eq) goto loc_821B0870;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82165e18
	sub_82165E18(ctx, base);
loc_821B0870:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
loc_821B0878:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821B0888"))) PPC_WEAK_FUNC(sub_821B0888);
PPC_FUNC_IMPL(__imp__sub_821B0888) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,-168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -168);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b08bc
	if (cr0.eq) goto loc_821B08BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821B08BC:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x821b08f0
	if (!cr6.eq) goto loc_821B08F0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1232
	ctx.r6.s64 = r11.s64 + 1232;
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
	// addi r3,r31,-184
	ctx.r3.s64 = r31.s64 + -184;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
loc_821B08F0:
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

__attribute__((alias("__imp__sub_821B0904"))) PPC_WEAK_FUNC(sub_821B0904);
PPC_FUNC_IMPL(__imp__sub_821B0904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0908"))) PPC_WEAK_FUNC(sub_821B0908);
PPC_FUNC_IMPL(__imp__sub_821B0908) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x821294d8
	sub_821294D8(ctx, base);
	// lwz r11,-180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -180);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = r11.s64 + -180;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b0984
	if (cr0.eq) goto loc_821B0984;
	// lwz r11,-180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -180);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-180
	ctx.r3.s64 = r11.s64 + -180;
	// bl 0x82315258
	sub_82315258(ctx, base);
loc_821B0984:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1232
	ctx.r6.s64 = r11.s64 + 1232;
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
	// beq 0x821b0a14
	if (cr0.eq) goto loc_821B0A14;
	// addi r4,r30,92
	ctx.r4.s64 = r30.s64 + 92;
	// addi r3,r31,-92
	ctx.r3.s64 = r31.s64 + -92;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r31,-156
	ctx.r3.s64 = r31.s64 + -156;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x821b09e8
	if (cr6.eq) goto loc_821B09E8;
	// lbz r11,164(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 164);
	// stb r11,-20(r31)
	PPC_STORE_U8(r31.u32 + -20, r11.u8);
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// stw r11,-24(r31)
	PPC_STORE_U32(r31.u32 + -24, r11.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B09E8:
	// lwz r11,-24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -24);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x821b0a04
	if (!cr6.eq) goto loc_821B0A04;
loc_821B09F8:
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// lwz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
loc_821B0A04:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r3,r31,-184
	ctx.r3.s64 = r31.s64 + -184;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
loc_821B0A14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821B0A1C"))) PPC_WEAK_FUNC(sub_821B0A1C);
PPC_FUNC_IMPL(__imp__sub_821B0A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B0A20"))) PPC_WEAK_FUNC(sub_821B0A20);
PPC_FUNC_IMPL(__imp__sub_821B0A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-25888(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -25888);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x821294d8
	sub_821294D8(ctx, base);
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = r11.s64 + -180;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b0ab0
	if (cr0.eq) goto loc_821B0AB0;
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-180
	ctx.r3.s64 = r11.s64 + -180;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_821B0AB0:
	// lis r23,-32127
	r23.s64 = -2105475072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r11,-4936(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b0b1c
	if (cr0.eq) goto loc_821B0B1C;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// addi r29,r31,272
	r29.s64 = r31.s64 + 272;
	// addi r28,r31,256
	r28.s64 = r31.s64 + 256;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r31,272
	r29.s64 = r31.s64 + 272;
	// addi r28,r31,256
	r28.s64 = r31.s64 + 256;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// b 0x821b0b78
	goto loc_821B0B78;
loc_821B0B1C:
	// addi r29,r30,-156
	r29.s64 = r30.s64 + -156;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r29,r30,-92
	r29.s64 = r30.s64 + -92;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
loc_821B0B78:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bge cr6,0x821b0c28
	if (!cr6.lt) goto loc_821B0C28;
	// addic. r11,r30,-184
	xer.ca = r30.u32 > 183;
	r11.s64 = r30.s64 + -184;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b0ba0
	if (!cr0.eq) goto loc_821B0BA0;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x821b0bb0
	goto loc_821B0BB0;
loc_821B0BA0:
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,-180
	ctx.r10.s64 = r11.s64 + -180;
loc_821B0BB0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r26,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r26.u32);
	// stw r26,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r26.u32);
	// addi r11,r11,548
	r11.s64 = r11.s64 + 548;
	// stw r10,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// stw r26,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r26.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82173c40
	sub_82173C40(ctx, base);
	// lwz r29,152(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b0c1c
	if (cr0.eq) goto loc_821B0C1C;
	// addi r28,r30,-184
	r28.s64 = r30.s64 + -184;
loc_821B0BF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b0bf4
	if (!cr0.eq) goto loc_821B0BF4;
loc_821B0C1C:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82173b70
	sub_82173B70(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0C28:
	// li r24,2
	r24.s64 = 2;
	// li r25,5
	r25.s64 = 5;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x821b0c4c
	if (!cr6.gt) goto loc_821B0C4C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0C4C:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x821b0c98
	if (!cr6.gt) goto loc_821B0C98;
	// addi r29,r30,-24
	r29.s64 = r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x821b0c7c
	if (!cr6.eq) goto loc_821B0C7C;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0C7C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821b0de8
	if (!cr6.gt) goto loc_821B0DE8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x821b0de8
	if (!cr6.lt) goto loc_821B0DE8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_821B0C90:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0C98:
	// bne cr6,0x821b0cf4
	if (!cr6.eq) goto loc_821B0CF4;
	// addi r29,r30,-24
	r29.s64 = r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bgt cr6,0x821b0cc4
	if (cr6.gt) goto loc_821B0CC4;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821B0CC4:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// stb r10,-20(r30)
	PPC_STORE_U8(r30.u32 + -20, ctx.r10.u8);
	// ble cr6,0x821b0cd8
	if (!cr6.gt) goto loc_821B0CD8;
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// b 0x821b0c90
	goto loc_821B0C90;
loc_821B0CD8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821b0ce8
	if (!cr6.gt) goto loc_821B0CE8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x821b0c90
	goto loc_821B0C90;
loc_821B0CE8:
	// bne cr6,0x821b0de8
	if (!cr6.eq) goto loc_821B0DE8;
	// stw r24,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r24.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0CF4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x821b0d8c
	if (cr6.lt) goto loc_821B0D8C;
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
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// stb r10,-20(r30)
	PPC_STORE_U8(r30.u32 + -20, ctx.r10.u8);
	// bgt cr6,0x821b0d4c
	if (cr6.gt) goto loc_821B0D4C;
	// beq cr6,0x821b0d44
	if (cr6.eq) goto loc_821B0D44;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x821b0d84
	if (cr6.eq) goto loc_821B0D84;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x821b0d7c
	if (cr6.eq) goto loc_821B0D7C;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// beq cr6,0x821b0d74
	if (cr6.eq) goto loc_821B0D74;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// b 0x821b0d68
	goto loc_821B0D68;
loc_821B0D44:
	// li r11,1
	r11.s64 = 1;
	// b 0x821b0de4
	goto loc_821B0DE4;
loc_821B0D4C:
	// cmpwi cr6,r11,132
	cr6.compare<int32_t>(r11.s32, 132, xer);
	// beq cr6,0x821b0d84
	if (cr6.eq) goto loc_821B0D84;
	// cmpwi cr6,r11,136
	cr6.compare<int32_t>(r11.s32, 136, xer);
	// beq cr6,0x821b0d7c
	if (cr6.eq) goto loc_821B0D7C;
	// cmpwi cr6,r11,144
	cr6.compare<int32_t>(r11.s32, 144, xer);
	// beq cr6,0x821b0d74
	if (cr6.eq) goto loc_821B0D74;
	// cmpwi cr6,r11,160
	cr6.compare<int32_t>(r11.s32, 160, xer);
loc_821B0D68:
	// bne cr6,0x821b0dd0
	if (!cr6.eq) goto loc_821B0DD0;
	// li r11,8
	r11.s64 = 8;
	// b 0x821b0de4
	goto loc_821B0DE4;
loc_821B0D74:
	// li r11,7
	r11.s64 = 7;
	// b 0x821b0de4
	goto loc_821B0DE4;
loc_821B0D7C:
	// li r11,6
	r11.s64 = 6;
	// b 0x821b0de4
	goto loc_821B0DE4;
loc_821B0D84:
	// stw r25,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, r25.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0D8C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821b0e08
	if (!cr6.gt) goto loc_821B0E08;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// stw r26,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r26.u32);
	// stw r26,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r26.u32);
	// stw r26,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r26.u32);
	// stw r25,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r25.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r11,7
	r11.s64 = 7;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// blt cr6,0x821b0dd8
	if (cr6.lt) goto loc_821B0DD8;
loc_821B0DD0:
	// stw r26,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, r26.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0DD8:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_821B0DE4:
	// stw r11,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, r11.u32);
loc_821B0DE8:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x821b0e08
	if (cr6.gt) goto loc_821B0E08;
	// addi r4,r31,304
	ctx.r4.s64 = r31.s64 + 304;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0E08:
	// addi r10,r11,-2
	ctx.r10.s64 = r11.s64 + -2;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgt cr6,0x821b0e24
	if (cr6.gt) goto loc_821B0E24;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0E24:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// addi r28,r10,-20968
	r28.s64 = ctx.r10.s64 + -20968;
	// ble cr6,0x821b0f18
	if (!cr6.gt) goto loc_821B0F18;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x821b0eb0
	if (!cr6.lt) goto loc_821B0EB0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1204
	ctx.r6.s64 = r11.s64 + 1204;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,1232
	ctx.r5.s64 = r11.s64 + 1232;
	// addi r3,r30,-184
	ctx.r3.s64 = r30.s64 + -184;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821b0eac
	if (cr0.eq) goto loc_821B0EAC;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r31,208
	r11.s64 = r31.s64 + 208;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_821B0E98:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821b0e98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821B0E98;
loc_821B0EAC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0EB0:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x821b0f18
	if (!cr6.gt) goto loc_821B0F18;
	// lbz r11,-4936(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b0f08
	if (cr0.eq) goto loc_821B0F08;
	// addic. r11,r30,-184
	xer.ca = r30.u32 > 183;
	r11.s64 = r30.s64 + -184;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b0ed4
	if (!cr0.eq) goto loc_821B0ED4;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x821b0ee4
	goto loc_821B0EE4;
loc_821B0ED4:
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-180
	r11.s64 = r11.s64 + -180;
loc_821B0EE4:
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r26,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r26.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r28.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// b 0x821b0f14
	goto loc_821B0F14;
loc_821B0F08:
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
loc_821B0F14:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0F18:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x821b0f30
	if (!cr6.gt) goto loc_821B0F30;
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0F30:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x821b0fa8
	if (!cr6.gt) goto loc_821B0FA8;
	// addic. r11,r30,-184
	xer.ca = r30.u32 > 183;
	r11.s64 = r30.s64 + -184;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b0f48
	if (!cr0.eq) goto loc_821B0F48;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x821b0f58
	goto loc_821B0F58;
loc_821B0F48:
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-180
	r11.s64 = r11.s64 + -180;
loc_821B0F58:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// lbz r11,-4936(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b0f90
	if (!cr0.eq) goto loc_821B0F90;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,-184
	ctx.r3.s64 = r30.s64 + -184;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// b 0x821b0fa0
	goto loc_821B0FA0;
loc_821B0F90:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8213dfe8
	sub_8213DFE8(ctx, base);
loc_821B0FA0:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// b 0x821b1008
	goto loc_821B1008;
loc_821B0FA8:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x821b1010
	if (!cr6.gt) goto loc_821B1010;
	// addic. r29,r30,-184
	xer.ca = r30.u32 > 183;
	r29.s64 = r30.s64 + -184;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x821b0fc0
	if (!cr0.eq) goto loc_821B0FC0;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x821b0fd0
	goto loc_821B0FD0;
loc_821B0FC0:
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-180
	r11.s64 = r11.s64 + -180;
loc_821B0FD0:
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r26,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r26.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// beq cr6,0x821b1004
	if (cr6.eq) goto loc_821B1004;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,-184
	ctx.r3.s64 = r30.s64 + -184;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// stw r24,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, r24.u32);
loc_821B1004:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
loc_821B1008:
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// b 0x821b1030
	goto loc_821B1030;
loc_821B1010:
	// bne cr6,0x821b1030
	if (!cr6.eq) goto loc_821B1030;
	// lwz r11,-24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821b1030
	if (!cr6.eq) goto loc_821B1030;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// addi r3,r30,-184
	ctx.r3.s64 = r30.s64 + -184;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
loc_821B1030:
	// addi r1,r31,400
	ctx.r1.s64 = r31.s64 + 400;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821B0A28"))) PPC_WEAK_FUNC(sub_821B0A28);
PPC_FUNC_IMPL(__imp__sub_821B0A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x821294d8
	sub_821294D8(ctx, base);
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = r11.s64 + -180;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b0ab0
	if (cr0.eq) goto loc_821B0AB0;
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-180
	ctx.r3.s64 = r11.s64 + -180;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_821B0AB0:
	// lis r23,-32127
	r23.s64 = -2105475072;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r11,-4936(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b0b1c
	if (cr0.eq) goto loc_821B0B1C;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// addi r29,r31,272
	r29.s64 = r31.s64 + 272;
	// addi r28,r31,256
	r28.s64 = r31.s64 + 256;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r31,272
	r29.s64 = r31.s64 + 272;
	// addi r28,r31,256
	r28.s64 = r31.s64 + 256;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// b 0x821b0b78
	goto loc_821B0B78;
loc_821B0B1C:
	// addi r29,r30,-156
	r29.s64 = r30.s64 + -156;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r29,r30,-92
	r29.s64 = r30.s64 + -92;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
loc_821B0B78:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bge cr6,0x821b0c28
	if (!cr6.lt) goto loc_821B0C28;
	// addic. r11,r30,-184
	xer.ca = r30.u32 > 183;
	r11.s64 = r30.s64 + -184;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b0ba0
	if (!cr0.eq) goto loc_821B0BA0;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x821b0bb0
	goto loc_821B0BB0;
loc_821B0BA0:
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,-180
	ctx.r10.s64 = r11.s64 + -180;
loc_821B0BB0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r26,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r26.u32);
	// stw r26,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r26.u32);
	// addi r11,r11,548
	r11.s64 = r11.s64 + 548;
	// stw r10,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r10.u32);
	// stw r26,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r26.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82173c40
	sub_82173C40(ctx, base);
	// lwz r29,152(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b0c1c
	if (cr0.eq) goto loc_821B0C1C;
	// addi r28,r30,-184
	r28.s64 = r30.s64 + -184;
loc_821B0BF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b0bf4
	if (!cr0.eq) goto loc_821B0BF4;
loc_821B0C1C:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82173b70
	sub_82173B70(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0C28:
	// li r24,2
	r24.s64 = 2;
	// li r25,5
	r25.s64 = 5;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x821b0c4c
	if (!cr6.gt) goto loc_821B0C4C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0C4C:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x821b0c98
	if (!cr6.gt) goto loc_821B0C98;
	// addi r29,r30,-24
	r29.s64 = r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x821b0c7c
	if (!cr6.eq) goto loc_821B0C7C;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0C7C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x821b0de8
	if (!cr6.gt) goto loc_821B0DE8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bge cr6,0x821b0de8
	if (!cr6.lt) goto loc_821B0DE8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_821B0C90:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0C98:
	// bne cr6,0x821b0cf4
	if (!cr6.eq) goto loc_821B0CF4;
	// addi r29,r30,-24
	r29.s64 = r30.s64 + -24;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bgt cr6,0x821b0cc4
	if (cr6.gt) goto loc_821B0CC4;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821B0CC4:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// stb r10,-20(r30)
	PPC_STORE_U8(r30.u32 + -20, ctx.r10.u8);
	// ble cr6,0x821b0cd8
	if (!cr6.gt) goto loc_821B0CD8;
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// b 0x821b0c90
	goto loc_821B0C90;
loc_821B0CD8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x821b0ce8
	if (!cr6.gt) goto loc_821B0CE8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x821b0c90
	goto loc_821B0C90;
loc_821B0CE8:
	// bne cr6,0x821b0de8
	if (!cr6.eq) goto loc_821B0DE8;
	// stw r24,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r24.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0CF4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// blt cr6,0x821b0d8c
	if (cr6.lt) goto loc_821B0D8C;
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
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// stb r10,-20(r30)
	PPC_STORE_U8(r30.u32 + -20, ctx.r10.u8);
	// bgt cr6,0x821b0d4c
	if (cr6.gt) goto loc_821B0D4C;
	// beq cr6,0x821b0d44
	if (cr6.eq) goto loc_821B0D44;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x821b0d84
	if (cr6.eq) goto loc_821B0D84;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x821b0d7c
	if (cr6.eq) goto loc_821B0D7C;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// beq cr6,0x821b0d74
	if (cr6.eq) goto loc_821B0D74;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// b 0x821b0d68
	goto loc_821B0D68;
loc_821B0D44:
	// li r11,1
	r11.s64 = 1;
	// b 0x821b0de4
	goto loc_821B0DE4;
loc_821B0D4C:
	// cmpwi cr6,r11,132
	cr6.compare<int32_t>(r11.s32, 132, xer);
	// beq cr6,0x821b0d84
	if (cr6.eq) goto loc_821B0D84;
	// cmpwi cr6,r11,136
	cr6.compare<int32_t>(r11.s32, 136, xer);
	// beq cr6,0x821b0d7c
	if (cr6.eq) goto loc_821B0D7C;
	// cmpwi cr6,r11,144
	cr6.compare<int32_t>(r11.s32, 144, xer);
	// beq cr6,0x821b0d74
	if (cr6.eq) goto loc_821B0D74;
	// cmpwi cr6,r11,160
	cr6.compare<int32_t>(r11.s32, 160, xer);
loc_821B0D68:
	// bne cr6,0x821b0dd0
	if (!cr6.eq) goto loc_821B0DD0;
	// li r11,8
	r11.s64 = 8;
	// b 0x821b0de4
	goto loc_821B0DE4;
loc_821B0D74:
	// li r11,7
	r11.s64 = 7;
	// b 0x821b0de4
	goto loc_821B0DE4;
loc_821B0D7C:
	// li r11,6
	r11.s64 = 6;
	// b 0x821b0de4
	goto loc_821B0DE4;
loc_821B0D84:
	// stw r25,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, r25.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0D8C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821b0e08
	if (!cr6.gt) goto loc_821B0E08;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// stw r26,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r26.u32);
	// stw r26,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r26.u32);
	// stw r26,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r26.u32);
	// stw r25,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r25.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r11,7
	r11.s64 = 7;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// blt cr6,0x821b0dd8
	if (cr6.lt) goto loc_821B0DD8;
loc_821B0DD0:
	// stw r26,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, r26.u32);
	// b 0x821b0de8
	goto loc_821B0DE8;
loc_821B0DD8:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_821B0DE4:
	// stw r11,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, r11.u32);
loc_821B0DE8:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x821b0e08
	if (cr6.gt) goto loc_821B0E08;
	// addi r4,r31,304
	ctx.r4.s64 = r31.s64 + 304;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0E08:
	// addi r10,r11,-2
	ctx.r10.s64 = r11.s64 + -2;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgt cr6,0x821b0e24
	if (cr6.gt) goto loc_821B0E24;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0E24:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// addi r28,r10,-20968
	r28.s64 = ctx.r10.s64 + -20968;
	// ble cr6,0x821b0f18
	if (!cr6.gt) goto loc_821B0F18;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bge cr6,0x821b0eb0
	if (!cr6.lt) goto loc_821B0EB0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1204
	ctx.r6.s64 = r11.s64 + 1204;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,1232
	ctx.r5.s64 = r11.s64 + 1232;
	// addi r3,r30,-184
	ctx.r3.s64 = r30.s64 + -184;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821b0eac
	if (cr0.eq) goto loc_821B0EAC;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r31,208
	r11.s64 = r31.s64 + 208;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_821B0E98:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821b0e98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821B0E98;
loc_821B0EAC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0EB0:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x821b0f18
	if (!cr6.gt) goto loc_821B0F18;
	// lbz r11,-4936(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821b0f08
	if (cr0.eq) goto loc_821B0F08;
	// addic. r11,r30,-184
	xer.ca = r30.u32 > 183;
	r11.s64 = r30.s64 + -184;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b0ed4
	if (!cr0.eq) goto loc_821B0ED4;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x821b0ee4
	goto loc_821B0EE4;
loc_821B0ED4:
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-180
	r11.s64 = r11.s64 + -180;
loc_821B0EE4:
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r26,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r26.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r28.u32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// b 0x821b0f14
	goto loc_821B0F14;
loc_821B0F08:
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
loc_821B0F14:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0F18:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x821b0f30
	if (!cr6.gt) goto loc_821B0F30;
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821220a8
	sub_821220A8(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_821B0F30:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x821b0fa8
	if (!cr6.gt) goto loc_821B0FA8;
	// addic. r11,r30,-184
	xer.ca = r30.u32 > 183;
	r11.s64 = r30.s64 + -184;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821b0f48
	if (!cr0.eq) goto loc_821B0F48;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x821b0f58
	goto loc_821B0F58;
loc_821B0F48:
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-180
	r11.s64 = r11.s64 + -180;
loc_821B0F58:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// lbz r11,-4936(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821b0f90
	if (!cr0.eq) goto loc_821B0F90;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,-184
	ctx.r3.s64 = r30.s64 + -184;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// b 0x821b0fa0
	goto loc_821B0FA0;
loc_821B0F90:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8213dfe8
	sub_8213DFE8(ctx, base);
loc_821B0FA0:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// b 0x821b1008
	goto loc_821B1008;
loc_821B0FA8:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// ble cr6,0x821b1010
	if (!cr6.gt) goto loc_821B1010;
	// addic. r29,r30,-184
	xer.ca = r30.u32 > 183;
	r29.s64 = r30.s64 + -184;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x821b0fc0
	if (!cr0.eq) goto loc_821B0FC0;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x821b0fd0
	goto loc_821B0FD0;
loc_821B0FC0:
	// lwz r11,-180(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -180);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-180
	r11.s64 = r11.s64 + -180;
loc_821B0FD0:
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r26,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r26.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// beq cr6,0x821b1004
	if (cr6.eq) goto loc_821B1004;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,-184
	ctx.r3.s64 = r30.s64 + -184;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// stw r24,-24(r30)
	PPC_STORE_U32(r30.u32 + -24, r24.u32);
loc_821B1004:
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
loc_821B1008:
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// b 0x821b1030
	goto loc_821B1030;
loc_821B1010:
	// bne cr6,0x821b1030
	if (!cr6.eq) goto loc_821B1030;
	// lwz r11,-24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x821b1030
	if (!cr6.eq) goto loc_821B1030;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// addi r3,r30,-184
	ctx.r3.s64 = r30.s64 + -184;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
loc_821B1030:
	// addi r1,r31,400
	ctx.r1.s64 = r31.s64 + 400;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821B1038"))) PPC_WEAK_FUNC(sub_821B1038);
PPC_FUNC_IMPL(__imp__sub_821B1038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82173b70
	sub_82173B70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1060"))) PPC_WEAK_FUNC(sub_821B1060);
PPC_FUNC_IMPL(__imp__sub_821B1060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_821B1088"))) PPC_WEAK_FUNC(sub_821B1088);
PPC_FUNC_IMPL(__imp__sub_821B1088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_821B10B0"))) PPC_WEAK_FUNC(sub_821B10B0);
PPC_FUNC_IMPL(__imp__sub_821B10B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_821B10D8"))) PPC_WEAK_FUNC(sub_821B10D8);
PPC_FUNC_IMPL(__imp__sub_821B10D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_821B1100"))) PPC_WEAK_FUNC(sub_821B1100);
PPC_FUNC_IMPL(__imp__sub_821B1100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_821B1128"))) PPC_WEAK_FUNC(sub_821B1128);
PPC_FUNC_IMPL(__imp__sub_821B1128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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

__attribute__((alias("__imp__sub_821B1150"))) PPC_WEAK_FUNC(sub_821B1150);
PPC_FUNC_IMPL(__imp__sub_821B1150) {
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
	// lwz r16,-25128(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -25128);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10664
	r29.s64 = ctx.r10.s64 + 10664;
	// bne 0x821b11c0
	if (!cr0.eq) goto loc_821B11C0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25444
	ctx.r4.s64 = r11.s64 + -25444;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B11C0:
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
	// beq 0x821b121c
	if (cr0.eq) goto loc_821B121C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821b0078
	sub_821B0078(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1218
	if (cr6.eq) goto loc_821B1218;
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
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_821B1210:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821b1bc4
	goto loc_821B1BC4;
loc_821B1218:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B121C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10660
	r29.s64 = ctx.r10.s64 + 10660;
	// bne 0x821b1248
	if (!cr0.eq) goto loc_821B1248;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25460
	ctx.r4.s64 = r11.s64 + -25460;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1248:
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
	// beq 0x821b12a0
	if (cr0.eq) goto loc_821B12A0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821afff8
	sub_821AFFF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b129c
	if (cr6.eq) goto loc_821B129C;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B129C:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B12A0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10656
	r29.s64 = ctx.r10.s64 + 10656;
	// bne 0x821b12cc
	if (!cr0.eq) goto loc_821B12CC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25476
	ctx.r4.s64 = r11.s64 + -25476;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B12CC:
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
	// beq 0x821b1324
	if (cr0.eq) goto loc_821B1324;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x821b0290
	sub_821B0290(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1320
	if (cr6.eq) goto loc_821B1320;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1320:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1324:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10652
	r29.s64 = ctx.r10.s64 + 10652;
	// bne 0x821b1350
	if (!cr0.eq) goto loc_821B1350;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25496
	ctx.r4.s64 = r11.s64 + -25496;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1350:
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
	// beq 0x821b13a8
	if (cr0.eq) goto loc_821B13A8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821b0350
	sub_821B0350(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b13a4
	if (cr6.eq) goto loc_821B13A4;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B13A4:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B13A8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10648
	r29.s64 = ctx.r10.s64 + 10648;
	// bne 0x821b13d4
	if (!cr0.eq) goto loc_821B13D4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25516
	ctx.r4.s64 = r11.s64 + -25516;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B13D4:
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
	// beq 0x821b142c
	if (cr0.eq) goto loc_821B142C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821b0488
	sub_821B0488(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1428
	if (cr6.eq) goto loc_821B1428;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1428:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B142C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10644
	r29.s64 = ctx.r10.s64 + 10644;
	// bne 0x821b1458
	if (!cr0.eq) goto loc_821B1458;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25532
	ctx.r4.s64 = r11.s64 + -25532;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1458:
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
	// beq 0x821b14b0
	if (cr0.eq) goto loc_821B14B0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821b0108
	sub_821B0108(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b14ac
	if (cr6.eq) goto loc_821B14AC;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B14AC:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B14B0:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10640
	r29.s64 = ctx.r10.s64 + 10640;
	// bne 0x821b14dc
	if (!cr0.eq) goto loc_821B14DC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25552
	ctx.r4.s64 = r11.s64 + -25552;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B14DC:
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
	// beq 0x821b1534
	if (cr0.eq) goto loc_821B1534;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x821b01c0
	sub_821B01C0(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1530
	if (cr6.eq) goto loc_821B1530;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1530:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1534:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10636
	r29.s64 = ctx.r10.s64 + 10636;
	// bne 0x821b1560
	if (!cr0.eq) goto loc_821B1560;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25568
	ctx.r4.s64 = r11.s64 + -25568;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1560:
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
	// beq 0x821b15b8
	if (cr0.eq) goto loc_821B15B8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821af290
	sub_821AF290(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b15b4
	if (cr6.eq) goto loc_821B15B4;
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
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B15B4:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B15B8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10632
	r29.s64 = ctx.r10.s64 + 10632;
	// bne 0x821b15e4
	if (!cr0.eq) goto loc_821B15E4;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25588
	ctx.r4.s64 = r11.s64 + -25588;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B15E4:
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
	// beq 0x821b163c
	if (cr0.eq) goto loc_821B163C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821af430
	sub_821AF430(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1638
	if (cr6.eq) goto loc_821B1638;
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
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1638:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B163C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10628
	r29.s64 = ctx.r10.s64 + 10628;
	// bne 0x821b1668
	if (!cr0.eq) goto loc_821B1668;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25604
	ctx.r4.s64 = r11.s64 + -25604;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1668:
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
	// beq 0x821b16c0
	if (cr0.eq) goto loc_821B16C0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821af0b8
	sub_821AF0B8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b16bc
	if (cr6.eq) goto loc_821B16BC;
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
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B16BC:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B16C0:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10624
	r29.s64 = ctx.r10.s64 + 10624;
	// bne 0x821b16ec
	if (!cr0.eq) goto loc_821B16EC;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25624
	ctx.r4.s64 = r11.s64 + -25624;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B16EC:
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
	// beq 0x821b1744
	if (cr0.eq) goto loc_821B1744;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821af220
	sub_821AF220(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1740
	if (cr6.eq) goto loc_821B1740;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1740:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1744:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10620
	r29.s64 = ctx.r10.s64 + 10620;
	// bne 0x821b1770
	if (!cr0.eq) goto loc_821B1770;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25640
	ctx.r4.s64 = r11.s64 + -25640;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1770:
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
	// beq 0x821b17c8
	if (cr0.eq) goto loc_821B17C8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821af4d8
	sub_821AF4D8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b17c4
	if (cr6.eq) goto loc_821B17C4;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B17C4:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B17C8:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10616
	r29.s64 = ctx.r10.s64 + 10616;
	// bne 0x821b17f4
	if (!cr0.eq) goto loc_821B17F4;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25664
	ctx.r4.s64 = r11.s64 + -25664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B17F4:
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
	// beq 0x821b184c
	if (cr0.eq) goto loc_821B184C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821af570
	sub_821AF570(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1848
	if (cr6.eq) goto loc_821B1848;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1848:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B184C:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10612
	r29.s64 = ctx.r10.s64 + 10612;
	// bne 0x821b1878
	if (!cr0.eq) goto loc_821B1878;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25680
	ctx.r4.s64 = r11.s64 + -25680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1878:
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
	// beq 0x821b18d0
	if (cr0.eq) goto loc_821B18D0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821af610
	sub_821AF610(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b18cc
	if (cr6.eq) goto loc_821B18CC;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B18CC:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B18D0:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10608
	r29.s64 = ctx.r10.s64 + 10608;
	// bne 0x821b18fc
	if (!cr0.eq) goto loc_821B18FC;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25704
	ctx.r4.s64 = r11.s64 + -25704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B18FC:
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
	// beq 0x821b1954
	if (cr0.eq) goto loc_821B1954;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821af788
	sub_821AF788(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1950
	if (cr6.eq) goto loc_821B1950;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1950:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1954:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10604
	r29.s64 = ctx.r10.s64 + 10604;
	// bne 0x821b1980
	if (!cr0.eq) goto loc_821B1980;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25720
	ctx.r4.s64 = r11.s64 + -25720;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1980:
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
	// beq 0x821b19b4
	if (cr0.eq) goto loc_821B19B4;
	// addi r4,r28,-156
	ctx.r4.s64 = r28.s64 + -156;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8214f7f0
	sub_8214F7F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// b 0x821b1bc8
	goto loc_821B1BC8;
loc_821B19B4:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10600
	r29.s64 = ctx.r10.s64 + 10600;
	// bne 0x821b19e0
	if (!cr0.eq) goto loc_821B19E0;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25740
	ctx.r4.s64 = r11.s64 + -25740;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B19E0:
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
	// beq 0x821b1a38
	if (cr0.eq) goto loc_821B1A38;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821afcd0
	sub_821AFCD0(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1a34
	if (cr6.eq) goto loc_821B1A34;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1A34:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1A38:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10596
	r29.s64 = ctx.r10.s64 + 10596;
	// bne 0x821b1a64
	if (!cr0.eq) goto loc_821B1A64;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25756
	ctx.r4.s64 = r11.s64 + -25756;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1A64:
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
	// beq 0x821b1abc
	if (cr0.eq) goto loc_821B1ABC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x821afe58
	sub_821AFE58(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1ab8
	if (cr6.eq) goto loc_821B1AB8;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1AB8:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1ABC:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10592
	r29.s64 = ctx.r10.s64 + 10592;
	// bne 0x821b1ae4
	if (!cr0.eq) goto loc_821B1AE4;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25776
	ctx.r4.s64 = r11.s64 + -25776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821B1AE4:
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
	// beq 0x821b1b24
	if (cr0.eq) goto loc_821B1B24;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82150450
	sub_82150450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-184
	ctx.r3.s64 = r28.s64 + -184;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// b 0x821b1bc0
	goto loc_821B1BC0;
loc_821B1B24:
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x821294d8
	sub_821294D8(ctx, base);
	// lwz r11,-180(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -180);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = r11.s64 + -180;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bb8
	if (cr0.eq) goto loc_821B1BB8;
	// lwz r11,-180(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -180);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = r11.s64 + -180;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1bb8
	if (cr6.eq) goto loc_821B1BB8;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1BB8:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_821B1BC0:
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
loc_821B1BC4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821B1BC8:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821B1158"))) PPC_WEAK_FUNC(sub_821B1158);
PPC_FUNC_IMPL(__imp__sub_821B1158) {
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
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10664
	r29.s64 = ctx.r10.s64 + 10664;
	// bne 0x821b11c0
	if (!cr0.eq) goto loc_821B11C0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25444
	ctx.r4.s64 = r11.s64 + -25444;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B11C0:
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
	// beq 0x821b121c
	if (cr0.eq) goto loc_821B121C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821b0078
	sub_821B0078(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1218
	if (cr6.eq) goto loc_821B1218;
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
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_821B1210:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821b1bc4
	goto loc_821B1BC4;
loc_821B1218:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B121C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10660
	r29.s64 = ctx.r10.s64 + 10660;
	// bne 0x821b1248
	if (!cr0.eq) goto loc_821B1248;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25460
	ctx.r4.s64 = r11.s64 + -25460;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1248:
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
	// beq 0x821b12a0
	if (cr0.eq) goto loc_821B12A0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x821afff8
	sub_821AFFF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b129c
	if (cr6.eq) goto loc_821B129C;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B129C:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B12A0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10656
	r29.s64 = ctx.r10.s64 + 10656;
	// bne 0x821b12cc
	if (!cr0.eq) goto loc_821B12CC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25476
	ctx.r4.s64 = r11.s64 + -25476;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B12CC:
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
	// beq 0x821b1324
	if (cr0.eq) goto loc_821B1324;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x821b0290
	sub_821B0290(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1320
	if (cr6.eq) goto loc_821B1320;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1320:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1324:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10652
	r29.s64 = ctx.r10.s64 + 10652;
	// bne 0x821b1350
	if (!cr0.eq) goto loc_821B1350;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25496
	ctx.r4.s64 = r11.s64 + -25496;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1350:
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
	// beq 0x821b13a8
	if (cr0.eq) goto loc_821B13A8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821b0350
	sub_821B0350(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b13a4
	if (cr6.eq) goto loc_821B13A4;
	// addi r4,r31,136
	ctx.r4.s64 = r31.s64 + 136;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B13A4:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B13A8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10648
	r29.s64 = ctx.r10.s64 + 10648;
	// bne 0x821b13d4
	if (!cr0.eq) goto loc_821B13D4;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25516
	ctx.r4.s64 = r11.s64 + -25516;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B13D4:
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
	// beq 0x821b142c
	if (cr0.eq) goto loc_821B142C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x821b0488
	sub_821B0488(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1428
	if (cr6.eq) goto loc_821B1428;
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1428:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B142C:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10644
	r29.s64 = ctx.r10.s64 + 10644;
	// bne 0x821b1458
	if (!cr0.eq) goto loc_821B1458;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25532
	ctx.r4.s64 = r11.s64 + -25532;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1458:
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
	// beq 0x821b14b0
	if (cr0.eq) goto loc_821B14B0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821b0108
	sub_821B0108(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b14ac
	if (cr6.eq) goto loc_821B14AC;
	// addi r4,r31,152
	ctx.r4.s64 = r31.s64 + 152;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B14AC:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B14B0:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10640
	r29.s64 = ctx.r10.s64 + 10640;
	// bne 0x821b14dc
	if (!cr0.eq) goto loc_821B14DC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25552
	ctx.r4.s64 = r11.s64 + -25552;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B14DC:
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
	// beq 0x821b1534
	if (cr0.eq) goto loc_821B1534;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x821b01c0
	sub_821B01C0(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1530
	if (cr6.eq) goto loc_821B1530;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1530:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1534:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10636
	r29.s64 = ctx.r10.s64 + 10636;
	// bne 0x821b1560
	if (!cr0.eq) goto loc_821B1560;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25568
	ctx.r4.s64 = r11.s64 + -25568;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1560:
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
	// beq 0x821b15b8
	if (cr0.eq) goto loc_821B15B8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821af290
	sub_821AF290(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b15b4
	if (cr6.eq) goto loc_821B15B4;
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
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B15B4:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B15B8:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10632
	r29.s64 = ctx.r10.s64 + 10632;
	// bne 0x821b15e4
	if (!cr0.eq) goto loc_821B15E4;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25588
	ctx.r4.s64 = r11.s64 + -25588;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B15E4:
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
	// beq 0x821b163c
	if (cr0.eq) goto loc_821B163C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821af430
	sub_821AF430(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1638
	if (cr6.eq) goto loc_821B1638;
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
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1638:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B163C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10628
	r29.s64 = ctx.r10.s64 + 10628;
	// bne 0x821b1668
	if (!cr0.eq) goto loc_821B1668;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25604
	ctx.r4.s64 = r11.s64 + -25604;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1668:
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
	// beq 0x821b16c0
	if (cr0.eq) goto loc_821B16C0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821af0b8
	sub_821AF0B8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b16bc
	if (cr6.eq) goto loc_821B16BC;
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
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B16BC:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B16C0:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10624
	r29.s64 = ctx.r10.s64 + 10624;
	// bne 0x821b16ec
	if (!cr0.eq) goto loc_821B16EC;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25624
	ctx.r4.s64 = r11.s64 + -25624;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B16EC:
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
	// beq 0x821b1744
	if (cr0.eq) goto loc_821B1744;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x821af220
	sub_821AF220(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1740
	if (cr6.eq) goto loc_821B1740;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1740:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1744:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10620
	r29.s64 = ctx.r10.s64 + 10620;
	// bne 0x821b1770
	if (!cr0.eq) goto loc_821B1770;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25640
	ctx.r4.s64 = r11.s64 + -25640;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1770:
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
	// beq 0x821b17c8
	if (cr0.eq) goto loc_821B17C8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821af4d8
	sub_821AF4D8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b17c4
	if (cr6.eq) goto loc_821B17C4;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B17C4:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B17C8:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10616
	r29.s64 = ctx.r10.s64 + 10616;
	// bne 0x821b17f4
	if (!cr0.eq) goto loc_821B17F4;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25664
	ctx.r4.s64 = r11.s64 + -25664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B17F4:
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
	// beq 0x821b184c
	if (cr0.eq) goto loc_821B184C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821af570
	sub_821AF570(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1848
	if (cr6.eq) goto loc_821B1848;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1848:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B184C:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10612
	r29.s64 = ctx.r10.s64 + 10612;
	// bne 0x821b1878
	if (!cr0.eq) goto loc_821B1878;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25680
	ctx.r4.s64 = r11.s64 + -25680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1878:
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
	// beq 0x821b18d0
	if (cr0.eq) goto loc_821B18D0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821af610
	sub_821AF610(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b18cc
	if (cr6.eq) goto loc_821B18CC;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B18CC:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B18D0:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10608
	r29.s64 = ctx.r10.s64 + 10608;
	// bne 0x821b18fc
	if (!cr0.eq) goto loc_821B18FC;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25704
	ctx.r4.s64 = r11.s64 + -25704;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B18FC:
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
	// beq 0x821b1954
	if (cr0.eq) goto loc_821B1954;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x821af788
	sub_821AF788(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1950
	if (cr6.eq) goto loc_821B1950;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1950:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1954:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10604
	r29.s64 = ctx.r10.s64 + 10604;
	// bne 0x821b1980
	if (!cr0.eq) goto loc_821B1980;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25720
	ctx.r4.s64 = r11.s64 + -25720;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1980:
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
	// beq 0x821b19b4
	if (cr0.eq) goto loc_821B19B4;
	// addi r4,r28,-156
	ctx.r4.s64 = r28.s64 + -156;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8214f7f0
	sub_8214F7F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// b 0x821b1bc8
	goto loc_821B1BC8;
loc_821B19B4:
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10600
	r29.s64 = ctx.r10.s64 + 10600;
	// bne 0x821b19e0
	if (!cr0.eq) goto loc_821B19E0;
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25740
	ctx.r4.s64 = r11.s64 + -25740;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B19E0:
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
	// beq 0x821b1a38
	if (cr0.eq) goto loc_821B1A38;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821afcd0
	sub_821AFCD0(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1a34
	if (cr6.eq) goto loc_821B1A34;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1A34:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1A38:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10596
	r29.s64 = ctx.r10.s64 + 10596;
	// bne 0x821b1a64
	if (!cr0.eq) goto loc_821B1A64;
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25756
	ctx.r4.s64 = r11.s64 + -25756;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1A64:
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
	// beq 0x821b1abc
	if (cr0.eq) goto loc_821B1ABC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,-184
	ctx.r4.s64 = r28.s64 + -184;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x821afe58
	sub_821AFE58(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1ab8
	if (cr6.eq) goto loc_821B1AB8;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1AB8:
	// lwz r11,10668(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10668);
loc_821B1ABC:
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10592
	r29.s64 = ctx.r10.s64 + 10592;
	// bne 0x821b1ae4
	if (!cr0.eq) goto loc_821B1AE4;
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,10668(r30)
	PPC_STORE_U32(r30.u32 + 10668, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-25776
	ctx.r4.s64 = r11.s64 + -25776;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821B1AE4:
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
	// beq 0x821b1b24
	if (cr0.eq) goto loc_821B1B24;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82150450
	sub_82150450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,-184
	ctx.r3.s64 = r28.s64 + -184;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// b 0x821b1bc0
	goto loc_821B1BC0;
loc_821B1B24:
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x821294d8
	sub_821294D8(ctx, base);
	// lwz r11,-180(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -180);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = r11.s64 + -180;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bb8
	if (cr0.eq) goto loc_821B1BB8;
	// lwz r11,-180(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -180);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = r11.s64 + -180;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821b1bb8
	if (cr6.eq) goto loc_821B1BB8;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821b1bc4
	if (cr0.eq) goto loc_821B1BC4;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// b 0x821b1210
	goto loc_821B1210;
loc_821B1BB8:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_821B1BC0:
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
loc_821B1BC4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821B1BC8:
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821B1BD0"))) PPC_WEAK_FUNC(sub_821B1BD0);
PPC_FUNC_IMPL(__imp__sub_821B1BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10668
	r11.s64 = r11.s64 + 10668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10668
	ctx.r10.s64 = ctx.r10.s64 + 10668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1BF8"))) PPC_WEAK_FUNC(sub_821B1BF8);
PPC_FUNC_IMPL(__imp__sub_821B1BF8) {
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

__attribute__((alias("__imp__sub_821B1C20"))) PPC_WEAK_FUNC(sub_821B1C20);
PPC_FUNC_IMPL(__imp__sub_821B1C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10668
	r11.s64 = r11.s64 + 10668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10668
	ctx.r10.s64 = ctx.r10.s64 + 10668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1C48"))) PPC_WEAK_FUNC(sub_821B1C48);
PPC_FUNC_IMPL(__imp__sub_821B1C48) {
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

__attribute__((alias("__imp__sub_821B1C70"))) PPC_WEAK_FUNC(sub_821B1C70);
PPC_FUNC_IMPL(__imp__sub_821B1C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10668
	r11.s64 = r11.s64 + 10668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10668
	ctx.r10.s64 = ctx.r10.s64 + 10668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1C98"))) PPC_WEAK_FUNC(sub_821B1C98);
PPC_FUNC_IMPL(__imp__sub_821B1C98) {
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

__attribute__((alias("__imp__sub_821B1CC0"))) PPC_WEAK_FUNC(sub_821B1CC0);
PPC_FUNC_IMPL(__imp__sub_821B1CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10668
	r11.s64 = r11.s64 + 10668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10668
	ctx.r10.s64 = ctx.r10.s64 + 10668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1CE8"))) PPC_WEAK_FUNC(sub_821B1CE8);
PPC_FUNC_IMPL(__imp__sub_821B1CE8) {
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

__attribute__((alias("__imp__sub_821B1D10"))) PPC_WEAK_FUNC(sub_821B1D10);
PPC_FUNC_IMPL(__imp__sub_821B1D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10668
	r11.s64 = r11.s64 + 10668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10668
	ctx.r10.s64 = ctx.r10.s64 + 10668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1D38"))) PPC_WEAK_FUNC(sub_821B1D38);
PPC_FUNC_IMPL(__imp__sub_821B1D38) {
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

__attribute__((alias("__imp__sub_821B1D60"))) PPC_WEAK_FUNC(sub_821B1D60);
PPC_FUNC_IMPL(__imp__sub_821B1D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10668
	r11.s64 = r11.s64 + 10668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10668
	ctx.r10.s64 = ctx.r10.s64 + 10668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1D88"))) PPC_WEAK_FUNC(sub_821B1D88);
PPC_FUNC_IMPL(__imp__sub_821B1D88) {
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

__attribute__((alias("__imp__sub_821B1DB0"))) PPC_WEAK_FUNC(sub_821B1DB0);
PPC_FUNC_IMPL(__imp__sub_821B1DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10668
	r11.s64 = r11.s64 + 10668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10668
	ctx.r10.s64 = ctx.r10.s64 + 10668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B1DD8"))) PPC_WEAK_FUNC(sub_821B1DD8);
PPC_FUNC_IMPL(__imp__sub_821B1DD8) {
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

__attribute__((alias("__imp__sub_821B1E00"))) PPC_WEAK_FUNC(sub_821B1E00);
PPC_FUNC_IMPL(__imp__sub_821B1E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10668
	r11.s64 = r11.s64 + 10668;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10668
	ctx.r10.s64 = ctx.r10.s64 + 10668;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

