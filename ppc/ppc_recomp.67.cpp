#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82277798"))) PPC_WEAK_FUNC(sub_82277798);
PPC_FUNC_IMPL(__imp__sub_82277798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x822777ec
	if (cr6.lt) goto loc_822777EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x822777ec
	if (!cr6.lt) goto loc_822777EC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x822777e0
	if (cr6.lt) goto loc_822777E0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r11,28200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28200);
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x822777e4
	if (!cr6.gt) goto loc_822777E4;
loc_822777E0:
	// li r11,0
	r11.s64 = 0;
loc_822777E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_822777EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822777F4"))) PPC_WEAK_FUNC(sub_822777F4);
PPC_FUNC_IMPL(__imp__sub_822777F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822777F8"))) PPC_WEAK_FUNC(sub_822777F8);
PPC_FUNC_IMPL(__imp__sub_822777F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,20
	ctx.r10.s64 = 20;
	// divw. r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
loc_8227780C:
	// srawi r8,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r8.s64 = r11.s32 >> 1;
	// mulli r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 * 20;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x82277840
	if (cr6.lt) goto loc_82277840;
	// bne cr6,0x82277838
	if (!cr6.eq) goto loc_82277838;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x82277840
	if (cr6.lt) goto loc_82277840;
loc_82277838:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82277844
	goto loc_82277844;
loc_82277840:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82277844:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8227785c
	if (cr0.eq) goto loc_8227785C;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82277860
	goto loc_82277860;
loc_8227785C:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82277860:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8227780c
	if (cr6.gt) goto loc_8227780C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227786C"))) PPC_WEAK_FUNC(sub_8227786C);
PPC_FUNC_IMPL(__imp__sub_8227786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277870"))) PPC_WEAK_FUNC(sub_82277870);
PPC_FUNC_IMPL(__imp__sub_82277870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,23840(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23840);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82277a28
	if (cr6.eq) goto loc_82277A28;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82277a28
	if (cr6.eq) goto loc_82277A28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82275fb0
	sub_82275FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82277438
	sub_82277438(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82277438
	sub_82277438(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82277a18
	if (cr6.eq) goto loc_82277A18;
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// beq cr6,0x82277a18
	if (cr6.eq) goto loc_82277A18;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r28,20(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// stw r25,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r25.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x822777f8
	sub_822777F8(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// beq cr6,0x822779fc
	if (cr6.eq) goto loc_822779FC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bne cr6,0x822779fc
	if (!cr6.eq) goto loc_822779FC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bne cr6,0x822779fc
	if (!cr6.eq) goto loc_822779FC;
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x822779c8
	if (!cr6.gt) goto loc_822779C8;
loc_82277974:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8227799c
	if (cr6.lt) goto loc_8227799C;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x822779c8
	if (cr6.lt) goto loc_822779C8;
loc_8227799C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x82277974
	if (cr6.lt) goto loc_82277974;
loc_822779C8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82277a2c
	goto loc_82277A2C;
loc_822779FC:
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r29,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r29.u32);
	// stw r29,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r29.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82277a20
	goto loc_82277A20;
loc_82277A18:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82277A20:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82277A28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82277A2C:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82277878"))) PPC_WEAK_FUNC(sub_82277878);
PPC_FUNC_IMPL(__imp__sub_82277878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82277a28
	if (cr6.eq) goto loc_82277A28;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82277a28
	if (cr6.eq) goto loc_82277A28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82275fb0
	sub_82275FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82277438
	sub_82277438(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82277438
	sub_82277438(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82277a18
	if (cr6.eq) goto loc_82277A18;
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// beq cr6,0x82277a18
	if (cr6.eq) goto loc_82277A18;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r28,20(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// stw r25,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r25.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x822777f8
	sub_822777F8(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// beq cr6,0x822779fc
	if (cr6.eq) goto loc_822779FC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bne cr6,0x822779fc
	if (!cr6.eq) goto loc_822779FC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bne cr6,0x822779fc
	if (!cr6.eq) goto loc_822779FC;
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x822779c8
	if (!cr6.gt) goto loc_822779C8;
loc_82277974:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8227799c
	if (cr6.lt) goto loc_8227799C;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x822779c8
	if (cr6.lt) goto loc_822779C8;
loc_8227799C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r7.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x82277974
	if (cr6.lt) goto loc_82277974;
loc_822779C8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82277a2c
	goto loc_82277A2C;
loc_822779FC:
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r29,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r29.u32);
	// stw r29,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r29.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x82277a20
	goto loc_82277A20;
loc_82277A18:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82277A20:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82277A28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82277A2C:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82277A34"))) PPC_WEAK_FUNC(sub_82277A34);
PPC_FUNC_IMPL(__imp__sub_82277A34) {
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

__attribute__((alias("__imp__sub_82277A5C"))) PPC_WEAK_FUNC(sub_82277A5C);
PPC_FUNC_IMPL(__imp__sub_82277A5C) {
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

__attribute__((alias("__imp__sub_82277A84"))) PPC_WEAK_FUNC(sub_82277A84);
PPC_FUNC_IMPL(__imp__sub_82277A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277A88"))) PPC_WEAK_FUNC(sub_82277A88);
PPC_FUNC_IMPL(__imp__sub_82277A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// divw. r7,r9,r10
	ctx.r7.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x82277adc
	if (!cr0.gt) goto loc_82277ADC;
	// subf r6,r4,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82277AAC:
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + r11.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82277ABC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82277abc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82277ABC;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// bgt 0x82277aac
	if (cr0.gt) goto loc_82277AAC;
loc_82277ADC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277AEC"))) PPC_WEAK_FUNC(sub_82277AEC);
PPC_FUNC_IMPL(__imp__sub_82277AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277AF0"))) PPC_WEAK_FUNC(sub_82277AF0);
PPC_FUNC_IMPL(__imp__sub_82277AF0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// blt cr6,0x82277b28
	if (cr6.lt) goto loc_82277B28;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82277b2c
	if (cr6.lt) goto loc_82277B2C;
loc_82277B28:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82277B2C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82277b80
	if (cr0.eq) goto loc_82277B80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82277B44:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82277b44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82277B44;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// bl 0x82277af0
	sub_82277AF0(ctx, base);
	// b 0x82277cb8
	goto loc_82277CB8;
loc_82277B80:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r26,20
	r26.s64 = 20;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r10,r29,r31
	ctx.r10.s64 = r31.s64 - r29.s64;
	// divw r28,r10,r26
	r28.s32 = ctx.r10.s32 / r26.s32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x82277c44
	if (!cr6.gt) goto loc_82277C44;
	// mulli r27,r11,20
	r27.s64 = r11.s64 * 20;
	// subf r28,r27,r31
	r28.s64 = r31.s64 - r27.s64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b5010
	sub_821B5010(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// divw. r11,r11,r26
	r11.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82277c00
	if (!cr0.gt) goto loc_82277C00;
loc_82277BCC:
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// addi r28,r28,-20
	r28.s64 = r28.s64 + -20;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82277BE4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82277be4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82277BE4;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x82277bcc
	if (cr0.gt) goto loc_82277BCC;
loc_82277C00:
	// add r7,r27,r29
	ctx.r7.u64 = r27.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, xer);
	// beq cr6,0x82277cb8
	if (cr6.eq) goto loc_82277CB8;
loc_82277C10:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82277C20:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82277c20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82277C20;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82277c10
	if (!cr6.eq) goto loc_82277C10;
	// b 0x82277cb8
	goto loc_82277CB8;
loc_82277C44:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ff650
	sub_821FF650(ctx, base);
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
	// bl 0x821b5010
	sub_821B5010(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r28,20
	r11.s64 = r28.s64 * 20;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82277cb8
	if (cr6.eq) goto loc_82277CB8;
loc_82277C88:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82277C98:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82277c98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82277C98;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82277c88
	if (!cr6.eq) goto loc_82277C88;
loc_82277CB8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82277CC0"))) PPC_WEAK_FUNC(sub_82277CC0);
PPC_FUNC_IMPL(__imp__sub_82277CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,24004(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24004);
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
	// li r23,20
	r23.s64 = 20;
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
	// blt cr6,0x82277d20
	if (cr6.lt) goto loc_82277D20;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82277D20:
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
	// bl 0x82277650
	sub_82277650(ctx, base);
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
	// bl 0x821b5010
	sub_821B5010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x82277d98
	if (!cr6.eq) goto loc_82277D98;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82277d90
	if (cr6.eq) goto loc_82277D90;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82277D7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82277d7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82277D7C;
loc_82277D90:
	// addi r29,r3,20
	r29.s64 = ctx.r3.s64 + 20;
	// b 0x82277db0
	goto loc_82277DB0;
loc_82277D98:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821ff650
	sub_821FF650(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82277DB0:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82277dd4
	if (!cr0.eq) goto loc_82277DD4;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821b5010
	sub_821B5010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82277DD4:
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
	// b 0x82277e1c
	goto loc_82277E1C;
loc_82277DFC:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
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
loc_82277E1C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82277dfc
	if (!cr0.eq) goto loc_82277DFC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r25,20
	r11.s64 = r25.s64 * 20;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82277CC8"))) PPC_WEAK_FUNC(sub_82277CC8);
PPC_FUNC_IMPL(__imp__sub_82277CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r23,20
	r23.s64 = 20;
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
	// blt cr6,0x82277d20
	if (cr6.lt) goto loc_82277D20;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82277D20:
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
	// bl 0x82277650
	sub_82277650(ctx, base);
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
	// bl 0x821b5010
	sub_821B5010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x82277d98
	if (!cr6.eq) goto loc_82277D98;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82277d90
	if (cr6.eq) goto loc_82277D90;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82277D7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82277d7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82277D7C;
loc_82277D90:
	// addi r29,r3,20
	r29.s64 = ctx.r3.s64 + 20;
	// b 0x82277db0
	goto loc_82277DB0;
loc_82277D98:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821ff650
	sub_821FF650(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82277DB0:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82277dd4
	if (!cr0.eq) goto loc_82277DD4;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821b5010
	sub_821B5010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82277DD4:
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
	// b 0x82277e1c
	goto loc_82277E1C;
loc_82277DFC:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
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
loc_82277E1C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82277dfc
	if (!cr0.eq) goto loc_82277DFC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mulli r11,r25,20
	r11.s64 = r25.s64 * 20;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82277E5C"))) PPC_WEAK_FUNC(sub_82277E5C);
PPC_FUNC_IMPL(__imp__sub_82277E5C) {
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
	// lwz r16,24004(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24004);
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
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
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
	// lwz r16,24104(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24104);
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
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82277ef8
	if (cr0.eq) goto loc_82277EF8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82277EF8:
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

__attribute__((alias("__imp__sub_82277E64"))) PPC_WEAK_FUNC(sub_82277E64);
PPC_FUNC_IMPL(__imp__sub_82277E64) {
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
	// mulli r3,r11,20
	ctx.r3.s64 = r11.s64 * 20;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82277E98"))) PPC_WEAK_FUNC(sub_82277E98);
PPC_FUNC_IMPL(__imp__sub_82277E98) {
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
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82332528
	sub_82332528(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82277ef8
	if (cr0.eq) goto loc_82277EF8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82277EF8:
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

__attribute__((alias("__imp__sub_82277F10"))) PPC_WEAK_FUNC(sub_82277F10);
PPC_FUNC_IMPL(__imp__sub_82277F10) {
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

__attribute__((alias("__imp__sub_82277F3C"))) PPC_WEAK_FUNC(sub_82277F3C);
PPC_FUNC_IMPL(__imp__sub_82277F3C) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82277F68"))) PPC_WEAK_FUNC(sub_82277F68);
PPC_FUNC_IMPL(__imp__sub_82277F68) {
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
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x82277400
	sub_82277400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277F94"))) PPC_WEAK_FUNC(sub_82277F94);
PPC_FUNC_IMPL(__imp__sub_82277F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277F98"))) PPC_WEAK_FUNC(sub_82277F98);
PPC_FUNC_IMPL(__imp__sub_82277F98) {
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
	// beq cr6,0x82277fec
	if (cr6.eq) goto loc_82277FEC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82277fd8
	if (cr6.lt) goto loc_82277FD8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82277af0
	sub_82277AF0(ctx, base);
	// b 0x82277fec
	goto loc_82277FEC;
loc_82277FD8:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x82277cc8
	sub_82277CC8(ctx, base);
loc_82277FEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82277FFC"))) PPC_WEAK_FUNC(sub_82277FFC);
PPC_FUNC_IMPL(__imp__sub_82277FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278000"))) PPC_WEAK_FUNC(sub_82278000);
PPC_FUNC_IMPL(__imp__sub_82278000) {
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
	// li r8,20
	ctx.r8.s64 = 20;
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
	// bge cr6,0x82278050
	if (!cr6.lt) goto loc_82278050;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82278064
	if (cr6.eq) goto loc_82278064;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x82277a88
	sub_82277A88(ctx, base);
	// b 0x82278064
	goto loc_82278064;
loc_82278050:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x82277f98
	sub_82277F98(ctx, base);
loc_82278064:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278074"))) PPC_WEAK_FUNC(sub_82278074);
PPC_FUNC_IMPL(__imp__sub_82278074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278078"))) PPC_WEAK_FUNC(sub_82278078);
PPC_FUNC_IMPL(__imp__sub_82278078) {
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
	// bl 0x82278000
	sub_82278000(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x822780bc
	goto loc_822780BC;
loc_822780B0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822775d0
	sub_822775D0(ctx, base);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_822780BC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x822780b0
	if (!cr6.eq) goto loc_822780B0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822780D4"))) PPC_WEAK_FUNC(sub_822780D4);
PPC_FUNC_IMPL(__imp__sub_822780D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822780D8"))) PPC_WEAK_FUNC(sub_822780D8);
PPC_FUNC_IMPL(__imp__sub_822780D8) {
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
	// lwz r16,24192(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24192);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24176
	ctx.r3.s64 = r11.s64 + 24176;
	// bl 0x822776c0
	sub_822776C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82357a10
	sub_82357A10(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82357d40
	sub_82357D40(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x823596e8
	sub_823596E8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82278168
	if (cr6.eq) goto loc_82278168;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x822781a4
	goto loc_822781A4;
loc_82278168:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c09a0
	sub_821C09A0(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x822774e0
	sub_822774E0(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82278078
	sub_82278078(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82359168
	sub_82359168(ctx, base);
loc_822781A4:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822780E0"))) PPC_WEAK_FUNC(sub_822780E0);
PPC_FUNC_IMPL(__imp__sub_822780E0) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r29,r30,48
	r29.s64 = r30.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24176
	ctx.r3.s64 = r11.s64 + 24176;
	// bl 0x822776c0
	sub_822776C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82357a10
	sub_82357A10(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82357d40
	sub_82357D40(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x823596e8
	sub_823596E8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82278168
	if (cr6.eq) goto loc_82278168;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// b 0x822781a4
	goto loc_822781A4;
loc_82278168:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x821c09a0
	sub_821C09A0(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x822774e0
	sub_822774E0(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82278078
	sub_82278078(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82359168
	sub_82359168(ctx, base);
loc_822781A4:
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822781B4"))) PPC_WEAK_FUNC(sub_822781B4);
PPC_FUNC_IMPL(__imp__sub_822781B4) {
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
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
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

__attribute__((alias("__imp__sub_822781DC"))) PPC_WEAK_FUNC(sub_822781DC);
PPC_FUNC_IMPL(__imp__sub_822781DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822781E0"))) PPC_WEAK_FUNC(sub_822781E0);
PPC_FUNC_IMPL(__imp__sub_822781E0) {
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
	// lwz r16,24304(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24304);
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
	// li r29,0
	r29.s64 = 0;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// bl 0x822780e0
	sub_822780E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822781E8"))) PPC_WEAK_FUNC(sub_822781E8);
PPC_FUNC_IMPL(__imp__sub_822781E8) {
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
	// li r29,0
	r29.s64 = 0;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// bl 0x822780e0
	sub_822780E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82278258"))) PPC_WEAK_FUNC(sub_82278258);
PPC_FUNC_IMPL(__imp__sub_82278258) {
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

__attribute__((alias("__imp__sub_82278284"))) PPC_WEAK_FUNC(sub_82278284);
PPC_FUNC_IMPL(__imp__sub_82278284) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_822782B0"))) PPC_WEAK_FUNC(sub_822782B0);
PPC_FUNC_IMPL(__imp__sub_822782B0) {
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
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x82277400
	sub_82277400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822782DC"))) PPC_WEAK_FUNC(sub_822782DC);
PPC_FUNC_IMPL(__imp__sub_822782DC) {
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
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
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

__attribute__((alias("__imp__sub_82278308"))) PPC_WEAK_FUNC(sub_82278308);
PPC_FUNC_IMPL(__imp__sub_82278308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24376(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24376);
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
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82278360
	if (cr0.eq) goto loc_82278360;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82278354
	if (cr0.eq) goto loc_82278354;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,19436
	ctx.r4.s64 = r11.s64 + 19436;
	// bl 0x822781e8
	sub_822781E8(ctx, base);
	// b 0x82278358
	goto loc_82278358;
loc_82278354:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278358:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r3,22144(r11)
	PPC_STORE_U32(r11.u32 + 22144, ctx.r3.u32);
loc_82278360:
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r3,r11,22952
	ctx.r3.s64 = r11.s64 + 22952;
	// bl 0x8227eab8
	sub_8227EAB8(ctx, base);
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

__attribute__((alias("__imp__sub_82278310"))) PPC_WEAK_FUNC(sub_82278310);
PPC_FUNC_IMPL(__imp__sub_82278310) {
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
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82278360
	if (cr0.eq) goto loc_82278360;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82278354
	if (cr0.eq) goto loc_82278354;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,19436
	ctx.r4.s64 = r11.s64 + 19436;
	// bl 0x822781e8
	sub_822781E8(ctx, base);
	// b 0x82278358
	goto loc_82278358;
loc_82278354:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278358:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r3,22144(r11)
	PPC_STORE_U32(r11.u32 + 22144, ctx.r3.u32);
loc_82278360:
	// lis r11,-32128
	r11.s64 = -2105540608;
	// addi r3,r11,22952
	ctx.r3.s64 = r11.s64 + 22952;
	// bl 0x8227eab8
	sub_8227EAB8(ctx, base);
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

__attribute__((alias("__imp__sub_82278380"))) PPC_WEAK_FUNC(sub_82278380);
PPC_FUNC_IMPL(__imp__sub_82278380) {
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

__attribute__((alias("__imp__sub_822783A8"))) PPC_WEAK_FUNC(sub_822783A8);
PPC_FUNC_IMPL(__imp__sub_822783A8) {
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
	// lwz r16,24440(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24440);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32136
	r29.s64 = -2106064896;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r30,22144(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 22144);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822783e4
	if (cr6.eq) goto loc_822783E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82277e98
	sub_82277E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822783E4:
	// li r11,0
	r11.s64 = 0;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,22144(r29)
	PPC_STORE_U32(r29.u32 + 22144, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227840c
	if (cr0.eq) goto loc_8227840C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822781e8
	sub_822781E8(ctx, base);
	// b 0x82278410
	goto loc_82278410;
loc_8227840C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278410:
	// stw r3,22144(r29)
	PPC_STORE_U32(r29.u32 + 22144, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822783B0"))) PPC_WEAK_FUNC(sub_822783B0);
PPC_FUNC_IMPL(__imp__sub_822783B0) {
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
	// lis r29,-32136
	r29.s64 = -2106064896;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r30,22144(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 22144);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822783e4
	if (cr6.eq) goto loc_822783E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82277e98
	sub_82277E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822783E4:
	// li r11,0
	r11.s64 = 0;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r11,22144(r29)
	PPC_STORE_U32(r29.u32 + 22144, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227840c
	if (cr0.eq) goto loc_8227840C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822781e8
	sub_822781E8(ctx, base);
	// b 0x82278410
	goto loc_82278410;
loc_8227840C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278410:
	// stw r3,22144(r29)
	PPC_STORE_U32(r29.u32 + 22144, ctx.r3.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8227841C"))) PPC_WEAK_FUNC(sub_8227841C);
PPC_FUNC_IMPL(__imp__sub_8227841C) {
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

__attribute__((alias("__imp__sub_82278444"))) PPC_WEAK_FUNC(sub_82278444);
PPC_FUNC_IMPL(__imp__sub_82278444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278448"))) PPC_WEAK_FUNC(sub_82278448);
PPC_FUNC_IMPL(__imp__sub_82278448) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278450"))) PPC_WEAK_FUNC(sub_82278450);
PPC_FUNC_IMPL(__imp__sub_82278450) {
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
	// li r30,1
	r30.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
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

__attribute__((alias("__imp__sub_822784B0"))) PPC_WEAK_FUNC(sub_822784B0);
PPC_FUNC_IMPL(__imp__sub_822784B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,22148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22148);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822784d0
	if (cr6.eq) goto loc_822784D0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_822784D0:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822784DC"))) PPC_WEAK_FUNC(sub_822784DC);
PPC_FUNC_IMPL(__imp__sub_822784DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822784E0"))) PPC_WEAK_FUNC(sub_822784E0);
PPC_FUNC_IMPL(__imp__sub_822784E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,22148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22148);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822784fc
	if (cr6.eq) goto loc_822784FC;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_822784FC:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278508"))) PPC_WEAK_FUNC(sub_82278508);
PPC_FUNC_IMPL(__imp__sub_82278508) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,22148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22148);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8227853c
	if (cr6.eq) goto loc_8227853C;
	// bl 0x82278450
	sub_82278450(ctx, base);
loc_8227853C:
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

__attribute__((alias("__imp__sub_82278560"))) PPC_WEAK_FUNC(sub_82278560);
PPC_FUNC_IMPL(__imp__sub_82278560) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227859c
	if (cr0.eq) goto loc_8227859C;
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
loc_8227859C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822785ac
	if (cr0.eq) goto loc_822785AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_822785AC:
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

__attribute__((alias("__imp__sub_822785C8"))) PPC_WEAK_FUNC(sub_822785C8);
PPC_FUNC_IMPL(__imp__sub_822785C8) {
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
	// lwz r16,24528(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24528);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// stb r29,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r29.u8);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// bl 0x822771c8
	sub_822771C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,24488
	ctx.r4.s64 = r11.s64 + 24488;
	// bl 0x82352e80
	sub_82352E80(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// bl 0x82280268
	sub_82280268(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82278634
	if (!cr0.eq) goto loc_82278634;
	// b 0x8227866c
	goto loc_8227866C;
loc_82278634:
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4543
	r11.s64 = 4543;
	// li r3,24
	ctx.r3.s64 = 24;
	// sth r11,92(r31)
	PPC_STORE_U16(r31.u32 + 92, r11.u16);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227865c
	if (cr0.eq) goto loc_8227865C;
	// bl 0x8227f810
	sub_8227F810(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8227865C:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227f970
	sub_8227F970(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
loc_8227866C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_822785D0"))) PPC_WEAK_FUNC(sub_822785D0);
PPC_FUNC_IMPL(__imp__sub_822785D0) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// stb r29,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r29.u8);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// bl 0x822771c8
	sub_822771C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,24488
	ctx.r4.s64 = r11.s64 + 24488;
	// bl 0x82352e80
	sub_82352E80(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// bl 0x82280268
	sub_82280268(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82278634
	if (!cr0.eq) goto loc_82278634;
	// b 0x8227866c
	goto loc_8227866C;
loc_82278634:
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,4543
	r11.s64 = 4543;
	// li r3,24
	ctx.r3.s64 = 24;
	// sth r11,92(r31)
	PPC_STORE_U16(r31.u32 + 92, r11.u16);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227865c
	if (cr0.eq) goto loc_8227865C;
	// bl 0x8227f810
	sub_8227F810(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8227865C:
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227f970
	sub_8227F970(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
loc_8227866C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82278680"))) PPC_WEAK_FUNC(sub_82278680);
PPC_FUNC_IMPL(__imp__sub_82278680) {
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

__attribute__((alias("__imp__sub_822786A8"))) PPC_WEAK_FUNC(sub_822786A8);
PPC_FUNC_IMPL(__imp__sub_822786A8) {
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

__attribute__((alias("__imp__sub_822786D0"))) PPC_WEAK_FUNC(sub_822786D0);
PPC_FUNC_IMPL(__imp__sub_822786D0) {
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
	// lwz r16,24656(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24656);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,22156(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22156);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82278718
	if (!cr0.eq) goto loc_82278718;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,22156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22156, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,24624
	ctx.r4.s64 = r11.s64 + 24624;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,22152
	ctx.r3.s64 = r11.s64 + 22152;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82278718:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8227879c
	if (cr6.eq) goto loc_8227879C;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82278794
	if (cr0.eq) goto loc_82278794;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,18448
	r28.s64 = r11.s64 + 18448;
loc_82278738:
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82278794
	if (!cr0.eq) goto loc_82278794;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821d8e60
	sub_821D8E60(ctx, base);
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231aa20
	sub_8231AA20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227877c
	if (cr0.eq) goto loc_8227877C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227877C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82278738
	if (!cr0.eq) goto loc_82278738;
loc_82278794:
	// li r11,0
	r11.s64 = 0;
	// stb r11,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r11.u8);
loc_8227879C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822786D8"))) PPC_WEAK_FUNC(sub_822786D8);
PPC_FUNC_IMPL(__imp__sub_822786D8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,22156(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22156);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82278718
	if (!cr0.eq) goto loc_82278718;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,22156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22156, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,24624
	ctx.r4.s64 = r11.s64 + 24624;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r3,r11,22152
	ctx.r3.s64 = r11.s64 + 22152;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82278718:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8227879c
	if (cr6.eq) goto loc_8227879C;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82278794
	if (cr0.eq) goto loc_82278794;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,18448
	r28.s64 = r11.s64 + 18448;
loc_82278738:
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82278794
	if (!cr0.eq) goto loc_82278794;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821d8e60
	sub_821D8E60(ctx, base);
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231aa20
	sub_8231AA20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8231a748
	sub_8231A748(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227877c
	if (cr0.eq) goto loc_8227877C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227877C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82278738
	if (!cr0.eq) goto loc_82278738;
loc_82278794:
	// li r11,0
	r11.s64 = 0;
	// stb r11,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r11.u8);
loc_8227879C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_822787A4"))) PPC_WEAK_FUNC(sub_822787A4);
PPC_FUNC_IMPL(__imp__sub_822787A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22156
	r11.s64 = r11.s64 + 22156;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,22156
	ctx.r10.s64 = ctx.r10.s64 + 22156;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822787CC"))) PPC_WEAK_FUNC(sub_822787CC);
PPC_FUNC_IMPL(__imp__sub_822787CC) {
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
	// bl 0x82133220
	sub_82133220(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822787F4"))) PPC_WEAK_FUNC(sub_822787F4);
PPC_FUNC_IMPL(__imp__sub_822787F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822787F8"))) PPC_WEAK_FUNC(sub_822787F8);
PPC_FUNC_IMPL(__imp__sub_822787F8) {
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
	// lwz r16,24832(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24832);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,24800
	r29.s64 = r11.s64 + 24800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// clrlwi. r28,r3,24
	r28.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8227886c
	if (cr0.eq) goto loc_8227886C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x82278860
	if (cr0.eq) goto loc_82278860;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24792
	ctx.r3.s64 = r11.s64 + 24792;
	// bl 0x823580f0
	sub_823580F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822785d0
	sub_822785D0(ctx, base);
	// b 0x82278864
	goto loc_82278864;
loc_82278860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278864:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r3,22148(r11)
	PPC_STORE_U32(r11.u32 + 22148, ctx.r3.u32);
loc_8227886C:
	// li r11,0
	r11.s64 = 0;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822788ac
	if (cr0.eq) goto loc_822788AC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822788AC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24772
	ctx.r4.s64 = r11.s64 + 24772;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32216
	r11.s64 = -2111307776;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31568
	ctx.r4.s64 = r11.s64 + -31568;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24752
	ctx.r4.s64 = r11.s64 + 24752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32216
	r11.s64 = -2111307776;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31520
	ctx.r4.s64 = r11.s64 + -31520;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24736
	ctx.r4.s64 = r11.s64 + 24736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32216
	r11.s64 = -2111307776;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31480
	ctx.r4.s64 = r11.s64 + -31480;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82278800"))) PPC_WEAK_FUNC(sub_82278800);
PPC_FUNC_IMPL(__imp__sub_82278800) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,24800
	r29.s64 = r11.s64 + 24800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// clrlwi. r28,r3,24
	r28.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8227886c
	if (cr0.eq) goto loc_8227886C;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x82278860
	if (cr0.eq) goto loc_82278860;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24792
	ctx.r3.s64 = r11.s64 + 24792;
	// bl 0x823580f0
	sub_823580F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822785d0
	sub_822785D0(ctx, base);
	// b 0x82278864
	goto loc_82278864;
loc_82278860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278864:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r3,22148(r11)
	PPC_STORE_U32(r11.u32 + 22148, ctx.r3.u32);
loc_8227886C:
	// li r11,0
	r11.s64 = 0;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822788ac
	if (cr0.eq) goto loc_822788AC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_822788AC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24772
	ctx.r4.s64 = r11.s64 + 24772;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32216
	r11.s64 = -2111307776;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31568
	ctx.r4.s64 = r11.s64 + -31568;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24752
	ctx.r4.s64 = r11.s64 + 24752;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32216
	r11.s64 = -2111307776;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31520
	ctx.r4.s64 = r11.s64 + -31520;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,24736
	ctx.r4.s64 = r11.s64 + 24736;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32216
	r11.s64 = -2111307776;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31480
	ctx.r4.s64 = r11.s64 + -31480;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82278914"))) PPC_WEAK_FUNC(sub_82278914);
PPC_FUNC_IMPL(__imp__sub_82278914) {
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

__attribute__((alias("__imp__sub_8227893C"))) PPC_WEAK_FUNC(sub_8227893C);
PPC_FUNC_IMPL(__imp__sub_8227893C) {
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

__attribute__((alias("__imp__sub_82278964"))) PPC_WEAK_FUNC(sub_82278964);
PPC_FUNC_IMPL(__imp__sub_82278964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278968"))) PPC_WEAK_FUNC(sub_82278968);
PPC_FUNC_IMPL(__imp__sub_82278968) {
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
	// lis r31,-32136
	r31.s64 = -2106064896;
	// lwz r3,22148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82278990
	if (cr6.eq) goto loc_82278990;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82278560
	sub_82278560(ctx, base);
loc_82278990:
	// li r11,0
	r11.s64 = 0;
	// stw r11,22148(r31)
	PPC_STORE_U32(r31.u32 + 22148, r11.u32);
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

__attribute__((alias("__imp__sub_822789AC"))) PPC_WEAK_FUNC(sub_822789AC);
PPC_FUNC_IMPL(__imp__sub_822789AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822789B0"))) PPC_WEAK_FUNC(sub_822789B0);
PPC_FUNC_IMPL(__imp__sub_822789B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823548c8
	sub_823548C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822789B4"))) PPC_WEAK_FUNC(sub_822789B4);
PPC_FUNC_IMPL(__imp__sub_822789B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822789B8"))) PPC_WEAK_FUNC(sub_822789B8);
PPC_FUNC_IMPL(__imp__sub_822789B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,24908
	r11.s64 = r11.s64 + 24908;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822789C8"))) PPC_WEAK_FUNC(sub_822789C8);
PPC_FUNC_IMPL(__imp__sub_822789C8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
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

__attribute__((alias("__imp__sub_822789F8"))) PPC_WEAK_FUNC(sub_822789F8);
PPC_FUNC_IMPL(__imp__sub_822789F8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,24908
	r11.s64 = r11.s64 + 24908;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82278a24
	if (cr0.eq) goto loc_82278A24;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82278A24:
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

__attribute__((alias("__imp__sub_82278A3C"))) PPC_WEAK_FUNC(sub_82278A3C);
PPC_FUNC_IMPL(__imp__sub_82278A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278A40"))) PPC_WEAK_FUNC(sub_82278A40);
PPC_FUNC_IMPL(__imp__sub_82278A40) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x823567c0
	sub_823567C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82278A4C"))) PPC_WEAK_FUNC(sub_82278A4C);
PPC_FUNC_IMPL(__imp__sub_82278A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278A50"))) PPC_WEAK_FUNC(sub_82278A50);
PPC_FUNC_IMPL(__imp__sub_82278A50) {
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
	// lwz r16,25000(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25000);
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
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82278a98
	if (cr0.eq) goto loc_82278A98;
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
loc_82278A98:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
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

__attribute__((alias("__imp__sub_82278A58"))) PPC_WEAK_FUNC(sub_82278A58);
PPC_FUNC_IMPL(__imp__sub_82278A58) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82278a98
	if (cr0.eq) goto loc_82278A98;
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
loc_82278A98:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
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

__attribute__((alias("__imp__sub_82278AC0"))) PPC_WEAK_FUNC(sub_82278AC0);
PPC_FUNC_IMPL(__imp__sub_82278AC0) {
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

__attribute__((alias("__imp__sub_82278AE8"))) PPC_WEAK_FUNC(sub_82278AE8);
PPC_FUNC_IMPL(__imp__sub_82278AE8) {
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
	// lwz r16,25104(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25104);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,22220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22220);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82278b34
	if (!cr0.eq) goto loc_82278B34;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,22220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22220, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,25072
	ctx.r3.s64 = r11.s64 + 25072;
	// bl 0x82353d98
	sub_82353D98(ctx, base);
	// stw r3,22216(r30)
	PPC_STORE_U32(r30.u32 + 22216, ctx.r3.u32);
	// b 0x82278b38
	goto loc_82278B38;
loc_82278B34:
	// lwz r3,22216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22216);
loc_82278B38:
	// bl 0x82354850
	sub_82354850(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r4,r11,25056
	ctx.r4.s64 = r11.s64 + 25056;
	// bl 0x82354ab0
	sub_82354AB0(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// bl 0x823548c8
	sub_823548C8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82278AF0"))) PPC_WEAK_FUNC(sub_82278AF0);
PPC_FUNC_IMPL(__imp__sub_82278AF0) {
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
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,22220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22220);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82278b34
	if (!cr0.eq) goto loc_82278B34;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,22220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22220, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,25072
	ctx.r3.s64 = r11.s64 + 25072;
	// bl 0x82353d98
	sub_82353D98(ctx, base);
	// stw r3,22216(r30)
	PPC_STORE_U32(r30.u32 + 22216, ctx.r3.u32);
	// b 0x82278b38
	goto loc_82278B38;
loc_82278B34:
	// lwz r3,22216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22216);
loc_82278B38:
	// bl 0x82354850
	sub_82354850(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r4,r11,25056
	ctx.r4.s64 = r11.s64 + 25056;
	// bl 0x82354ab0
	sub_82354AB0(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// bl 0x823548c8
	sub_823548C8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82278B60"))) PPC_WEAK_FUNC(sub_82278B60);
PPC_FUNC_IMPL(__imp__sub_82278B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22220
	r11.s64 = r11.s64 + 22220;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,22220
	ctx.r10.s64 = ctx.r10.s64 + 22220;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278B88"))) PPC_WEAK_FUNC(sub_82278B88);
PPC_FUNC_IMPL(__imp__sub_82278B88) {
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
	// bl 0x822789b0
	sub_822789B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278BB0"))) PPC_WEAK_FUNC(sub_82278BB0);
PPC_FUNC_IMPL(__imp__sub_82278BB0) {
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
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_82278C04"))) PPC_WEAK_FUNC(sub_82278C04);
PPC_FUNC_IMPL(__imp__sub_82278C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278C08"))) PPC_WEAK_FUNC(sub_82278C08);
PPC_FUNC_IMPL(__imp__sub_82278C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82278c7c
	if (!cr0.eq) goto loc_82278C7C;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22168
	r11.s64 = r11.s64 + 22168;
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sradi r9,r11,32
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r9.s64 = r11.s64 >> 32;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfs f0,18804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18804);
	f0.f64 = double(temp.f32);
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
loc_82278C7C:
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82278c90
	if (cr0.eq) goto loc_82278C90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82278cf4
	goto loc_82278CF4;
loc_82278C90:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82278cf0
	if (cr0.eq) goto loc_82278CF0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82278cf0
	if (cr0.eq) goto loc_82278CF0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82278cd8
	if (cr0.eq) goto loc_82278CD8;
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
loc_82278CD8:
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stb r10,48(r31)
	PPC_STORE_U8(r31.u32 + 48, ctx.r10.u8);
	// b 0x82278cf4
	goto loc_82278CF4;
loc_82278CF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82278CF4:
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

__attribute__((alias("__imp__sub_82278D08"))) PPC_WEAK_FUNC(sub_82278D08);
PPC_FUNC_IMPL(__imp__sub_82278D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bge cr6,0x82278d28
	if (!cr6.lt) goto loc_82278D28;
	// li r11,0
	r11.s64 = 0;
loc_82278D28:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278D30"))) PPC_WEAK_FUNC(sub_82278D30);
PPC_FUNC_IMPL(__imp__sub_82278D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82278D38"))) PPC_WEAK_FUNC(sub_82278D38);
PPC_FUNC_IMPL(__imp__sub_82278D38) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82278c08
	sub_82278C08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82278d84
	if (cr0.eq) goto loc_82278D84;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
	// b 0x82278d8c
	goto loc_82278D8C;
loc_82278D84:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82278D8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82278D98"))) PPC_WEAK_FUNC(sub_82278D98);
PPC_FUNC_IMPL(__imp__sub_82278D98) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82278c08
	sub_82278C08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82278dd4
	if (!cr0.eq) goto loc_82278DD4;
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82278e08
	goto loc_82278E08;
loc_82278DD4:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82278e00
	if (cr0.eq) goto loc_82278E00;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82278E00:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82278E08:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82278E24"))) PPC_WEAK_FUNC(sub_82278E24);
PPC_FUNC_IMPL(__imp__sub_82278E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278E28"))) PPC_WEAK_FUNC(sub_82278E28);
PPC_FUNC_IMPL(__imp__sub_82278E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// bl 0x82270ce8
	sub_82270CE8(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r31,r11,22168
	r31.s64 = r11.s64 + 22168;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r11,r11,996
	r11.u64 = r11.u64 & 996;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,22164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22164, r11.u32);
	// bl 0x82271840
	sub_82271840(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bne cr6,0x82278e84
	if (!cr6.eq) goto loc_82278E84;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82278E84:
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

__attribute__((alias("__imp__sub_82278E98"))) PPC_WEAK_FUNC(sub_82278E98);
PPC_FUNC_IMPL(__imp__sub_82278E98) {
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
	// beq 0x82278ed8
	if (cr0.eq) goto loc_82278ED8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,19604
	ctx.r3.s64 = r11.s64 + 19604;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82278ee0
	goto loc_82278EE0;
loc_82278ED8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82278EE0:
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

__attribute__((alias("__imp__sub_82278EFC"))) PPC_WEAK_FUNC(sub_82278EFC);
PPC_FUNC_IMPL(__imp__sub_82278EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82278F00"))) PPC_WEAK_FUNC(sub_82278F00);
PPC_FUNC_IMPL(__imp__sub_82278F00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82278f64
	if (cr6.lt) goto loc_82278F64;
	// beq cr6,0x82278f48
	if (cr6.eq) goto loc_82278F48;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x82278f3c
	if (cr6.lt) goto loc_82278F3C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// b 0x82278f94
	goto loc_82278F94;
loc_82278F3C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// b 0x82278f68
	goto loc_82278F68;
loc_82278F48:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// b 0x82278f68
	goto loc_82278F68;
loc_82278F64:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82278F68:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82278f78
	if (!cr6.lt) goto loc_82278F78;
	// li r11,0
	r11.s64 = 0;
	// b 0x82278f88
	goto loc_82278F88;
loc_82278F78:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82278f88
	if (!cr6.gt) goto loc_82278F88;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82278F88:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82278F94:
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
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

__attribute__((alias("__imp__sub_82278FB0"))) PPC_WEAK_FUNC(sub_82278FB0);
PPC_FUNC_IMPL(__imp__sub_82278FB0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,25248(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25248);
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// lfs f0,-31308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31308);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stb r11,48(r30)
	PPC_STORE_U8(r30.u32 + 48, r11.u8);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8227905c
	if (cr0.eq) goto loc_8227905C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82279078
	goto loc_82279078;
loc_8227905C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,9120
	ctx.r5.s64 = r11.s64 + 9120;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82353920
	sub_82353920(ctx, base);
loc_82279078:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82278FB8"))) PPC_WEAK_FUNC(sub_82278FB8);
PPC_FUNC_IMPL(__imp__sub_82278FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// lfs f0,-31308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31308);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stb r11,48(r30)
	PPC_STORE_U8(r30.u32 + 48, r11.u8);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8227905c
	if (cr0.eq) goto loc_8227905C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82279078
	goto loc_82279078;
loc_8227905C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,9120
	ctx.r5.s64 = r11.s64 + 9120;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r11,r11,-2060
	r11.s64 = r11.s64 + -2060;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82353920
	sub_82353920(ctx, base);
loc_82279078:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82279084"))) PPC_WEAK_FUNC(sub_82279084);
PPC_FUNC_IMPL(__imp__sub_82279084) {
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

__attribute__((alias("__imp__sub_822790AC"))) PPC_WEAK_FUNC(sub_822790AC);
PPC_FUNC_IMPL(__imp__sub_822790AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822790B0"))) PPC_WEAK_FUNC(sub_822790B0);
PPC_FUNC_IMPL(__imp__sub_822790B0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,24960
	ctx.r5.s64 = r11.s64 + 24960;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82279124
	if (cr0.eq) goto loc_82279124;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25188
	r11.s64 = r11.s64 + 25188;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x82279128
	goto loc_82279128;
loc_82279124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82279128:
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

__attribute__((alias("__imp__sub_8227913C"))) PPC_WEAK_FUNC(sub_8227913C);
PPC_FUNC_IMPL(__imp__sub_8227913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279140"))) PPC_WEAK_FUNC(sub_82279140);
PPC_FUNC_IMPL(__imp__sub_82279140) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,25188
	ctx.r10.s64 = ctx.r10.s64 + 25188;
	// addi r9,r9,24908
	ctx.r9.s64 = ctx.r9.s64 + 24908;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq 0x82279190
	if (cr0.eq) goto loc_82279190;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_82279190:
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

__attribute__((alias("__imp__sub_822791A8"))) PPC_WEAK_FUNC(sub_822791A8);
PPC_FUNC_IMPL(__imp__sub_822791A8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x822791d4
	goto loc_822791D4;
loc_822791CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82271228
	sub_82271228(ctx, base);
loc_822791D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82278c08
	sub_82278C08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822791cc
	if (cr0.eq) goto loc_822791CC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82279210
	if (cr6.lt) goto loc_82279210;
	// addi r11,r1,164
	r11.s64 = ctx.r1.s64 + 164;
loc_82279210:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227923C"))) PPC_WEAK_FUNC(sub_8227923C);
PPC_FUNC_IMPL(__imp__sub_8227923C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279240"))) PPC_WEAK_FUNC(sub_82279240);
PPC_FUNC_IMPL(__imp__sub_82279240) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822792a8
	if (cr0.eq) goto loc_822792A8;
	// li r30,0
	r30.s64 = 0;
loc_82279270:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82353098
	sub_82353098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x822792b4
	if (!cr0.eq) goto loc_822792B4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82279270
	if (cr6.lt) goto loc_82279270;
loc_822792A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822792AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_822792B4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x822790b0
	sub_822790B0(ctx, base);
	// b 0x822792ac
	goto loc_822792AC;
}

__attribute__((alias("__imp__sub_822792C8"))) PPC_WEAK_FUNC(sub_822792C8);
PPC_FUNC_IMPL(__imp__sub_822792C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279314
	if (cr0.eq) goto loc_82279314;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_822792E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x8227931c
	if (cr6.gt) goto loc_8227931C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x822792e4
	if (cr6.lt) goto loc_822792E4;
loc_82279314:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8227931C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82279324"))) PPC_WEAK_FUNC(sub_82279324);
PPC_FUNC_IMPL(__imp__sub_82279324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279328"))) PPC_WEAK_FUNC(sub_82279328);
PPC_FUNC_IMPL(__imp__sub_82279328) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227938c
	if (cr0.eq) goto loc_8227938C;
	// li r30,0
	r30.s64 = 0;
loc_82279354:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82278c08
	sub_82278C08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279398
	if (cr0.eq) goto loc_82279398;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82279354
	if (cr6.lt) goto loc_82279354;
loc_8227938C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82279390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_82279398:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82279390
	goto loc_82279390;
}

__attribute__((alias("__imp__sub_822793A0"))) PPC_WEAK_FUNC(sub_822793A0);
PPC_FUNC_IMPL(__imp__sub_822793A0) {
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
	// lwz r16,25304(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25304);
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,22160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822793fc
	if (cr6.eq) goto loc_822793FC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,22160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22160);
	// bl 0x82279240
	sub_82279240(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82279400
	goto loc_82279400;
loc_822793FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82279400:
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

__attribute__((alias("__imp__sub_822793A8"))) PPC_WEAK_FUNC(sub_822793A8);
PPC_FUNC_IMPL(__imp__sub_822793A8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32136
	r30.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,22160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x822793fc
	if (cr6.eq) goto loc_822793FC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,22160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 22160);
	// bl 0x82279240
	sub_82279240(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82279400
	goto loc_82279400;
loc_822793FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82279400:
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

__attribute__((alias("__imp__sub_82279418"))) PPC_WEAK_FUNC(sub_82279418);
PPC_FUNC_IMPL(__imp__sub_82279418) {
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

__attribute__((alias("__imp__sub_82279440"))) PPC_WEAK_FUNC(sub_82279440);
PPC_FUNC_IMPL(__imp__sub_82279440) {
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
	// beq cr6,0x8227947c
	if (cr6.eq) goto loc_8227947C;
	// subf. r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8227947c
	if (cr0.eq) goto loc_8227947C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_8227947C:
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

__attribute__((alias("__imp__sub_822794A4"))) PPC_WEAK_FUNC(sub_822794A4);
PPC_FUNC_IMPL(__imp__sub_822794A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822794A8"))) PPC_WEAK_FUNC(sub_822794A8);
PPC_FUNC_IMPL(__imp__sub_822794A8) {
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
	// blt cr6,0x822794f0
	if (cr6.lt) goto loc_822794F0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_822794F0:
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
	// bl 0x82278e98
	sub_82278E98(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82279528
	if (cr0.eq) goto loc_82279528;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82279528:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82279548
	if (cr6.eq) goto loc_82279548;
loc_82279534:
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
	// bne 0x82279534
	if (!cr0.eq) goto loc_82279534;
loc_82279548:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82279570
	if (!cr0.eq) goto loc_82279570;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82279570
	if (cr0.eq) goto loc_82279570;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82279570:
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

__attribute__((alias("__imp__sub_822795A4"))) PPC_WEAK_FUNC(sub_822795A4);
PPC_FUNC_IMPL(__imp__sub_822795A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822795A8"))) PPC_WEAK_FUNC(sub_822795A8);
PPC_FUNC_IMPL(__imp__sub_822795A8) {
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
	// bl 0x82278e98
	sub_82278E98(ctx, base);
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

__attribute__((alias("__imp__sub_822795E8"))) PPC_WEAK_FUNC(sub_822795E8);
PPC_FUNC_IMPL(__imp__sub_822795E8) {
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
	// lwz r16,25368(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25368);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279668
	if (cr0.eq) goto loc_82279668;
	// li r29,0
	r29.s64 = 0;
loc_82279624:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r28,r29,r11
	r28.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82279648
	if (cr0.eq) goto loc_82279648;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82278a58
	sub_82278A58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_82279648:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82279624
	if (cr6.lt) goto loc_82279624;
loc_82279668:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r11,0
	r11.s64 = 0;
	// stw r11,22160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22160, r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82279694
	if (cr0.eq) goto loc_82279694;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82279694:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822795F0"))) PPC_WEAK_FUNC(sub_822795F0);
PPC_FUNC_IMPL(__imp__sub_822795F0) {
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
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279668
	if (cr0.eq) goto loc_82279668;
	// li r29,0
	r29.s64 = 0;
loc_82279624:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r28,r29,r11
	r28.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82279648
	if (cr0.eq) goto loc_82279648;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82278a58
	sub_82278A58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_82279648:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82279624
	if (cr6.lt) goto loc_82279624;
loc_82279668:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r11,0
	r11.s64 = 0;
	// stw r11,22160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22160, r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82279694
	if (cr0.eq) goto loc_82279694;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82279694:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8227969C"))) PPC_WEAK_FUNC(sub_8227969C);
PPC_FUNC_IMPL(__imp__sub_8227969C) {
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

__attribute__((alias("__imp__sub_822796C8"))) PPC_WEAK_FUNC(sub_822796C8);
PPC_FUNC_IMPL(__imp__sub_822796C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279780
	if (cr0.eq) goto loc_82279780;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822796FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lbz r11,48(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8227975c
	if (!cr0.eq) goto loc_8227975C;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8227975c
	if (!cr6.eq) goto loc_8227975C;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8227975c
	if (!cr6.eq) goto loc_8227975C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82278a58
	sub_82278A58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82279440
	sub_82279440(ctx, base);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// b 0x82279760
	goto loc_82279760;
loc_8227975C:
	// stw r27,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r27.u32);
loc_82279760:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x822796fc
	if (cr6.lt) goto loc_822796FC;
loc_82279780:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82279788"))) PPC_WEAK_FUNC(sub_82279788);
PPC_FUNC_IMPL(__imp__sub_82279788) {
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
	PPCRegister f31{};
	PPCRegister temp{};
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
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x822797ec
	if (cr0.eq) goto loc_822797EC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
loc_822797D0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r28,r9,r28
	r28.u64 = ctx.r9.u64 + r28.u64;
	// blt cr6,0x822797d0
	if (cr6.lt) goto loc_822797D0;
loc_822797EC:
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// ble cr6,0x822798d8
	if (!cr6.gt) goto loc_822798D8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_822797FC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822798d8
	if (cr0.eq) goto loc_822798D8;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_82279828:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8227984c
	if (!cr6.eq) goto loc_8227984C;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82279864
	if (cr6.eq) goto loc_82279864;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// blt cr6,0x82279864
	if (cr6.lt) goto loc_82279864;
loc_8227984C:
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// bne cr6,0x82279870
	if (!cr6.eq) goto loc_82279870;
	// lfs f13,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82279870
	if (!cr6.lt) goto loc_82279870;
loc_82279864:
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	f0.f64 = double(temp.f32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82279870:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82279828
	if (cr6.lt) goto loc_82279828;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x822798d8
	if (cr6.eq) goto loc_822798D8;
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r29,r6
	r30.u64 = PPC_LOAD_U32(r29.u32 + ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r28,r11,r28
	r28.s64 = r28.s64 - r11.s64;
	// bl 0x82278a58
	sub_82278A58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82279440
	sub_82279440(ctx, base);
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// bgt cr6,0x822797fc
	if (cr6.gt) goto loc_822797FC;
loc_822798D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_822798E4"))) PPC_WEAK_FUNC(sub_822798E4);
PPC_FUNC_IMPL(__imp__sub_822798E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822798E8"))) PPC_WEAK_FUNC(sub_822798E8);
PPC_FUNC_IMPL(__imp__sub_822798E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22168
	r11.s64 = r11.s64 + 22168;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82279938
	if (cr0.eq) goto loc_82279938;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82279788
	sub_82279788(ctx, base);
loc_82279938:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// lwz r27,22164(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 22164);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x822799a0
	if (cr0.eq) goto loc_822799A0;
	// li r30,0
	r30.s64 = 0;
loc_8227995C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82278c08
	sub_82278C08(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82279980
	if (cr6.eq) goto loc_82279980;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
loc_82279980:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8227995c
	if (cr6.lt) goto loc_8227995C;
loc_822799A0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279a0c
	if (cr0.eq) goto loc_82279A0C;
	// li r30,0
	r30.s64 = 0;
loc_822799BC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82279a0c
	if (cr6.eq) goto loc_82279A0C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lbz r11,48(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x822799ec
	if (!cr0.eq) goto loc_822799EC;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x822799ec
	if (!cr6.eq) goto loc_822799EC;
	// bl 0x82278bb0
	sub_82278BB0(ctx, base);
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
loc_822799EC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x822799bc
	if (cr6.lt) goto loc_822799BC;
loc_82279A0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82279A14"))) PPC_WEAK_FUNC(sub_82279A14);
PPC_FUNC_IMPL(__imp__sub_82279A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279A18"))) PPC_WEAK_FUNC(sub_82279A18);
PPC_FUNC_IMPL(__imp__sub_82279A18) {
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
	// beq cr6,0x82279a58
	if (cr6.eq) goto loc_82279A58;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82279a48
	if (cr0.eq) goto loc_82279A48;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82279A48:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82279a6c
	goto loc_82279A6C;
loc_82279A58:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x822794a8
	sub_822794A8(ctx, base);
loc_82279A6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82279A7C"))) PPC_WEAK_FUNC(sub_82279A7C);
PPC_FUNC_IMPL(__imp__sub_82279A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279A80"))) PPC_WEAK_FUNC(sub_82279A80);
PPC_FUNC_IMPL(__imp__sub_82279A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r3,22160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22160);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22168
	r11.s64 = r11.s64 + 22168;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822798e8
	sub_822798E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82279AC0"))) PPC_WEAK_FUNC(sub_82279AC0);
PPC_FUNC_IMPL(__imp__sub_82279AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82279AC4"))) PPC_WEAK_FUNC(sub_82279AC4);
PPC_FUNC_IMPL(__imp__sub_82279AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279AC8"))) PPC_WEAK_FUNC(sub_82279AC8);
PPC_FUNC_IMPL(__imp__sub_82279AC8) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r29,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r29.u8);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82279af0
	if (cr0.eq) goto loc_82279AF0;
	// bl 0x82279788
	sub_82279788(ctx, base);
loc_82279AF0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279b40
	if (cr0.eq) goto loc_82279B40;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82279B08:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82279b20
	if (!cr6.eq) goto loc_82279B20;
	// bl 0x82278af0
	sub_82278AF0(ctx, base);
loc_82279B20:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82279b08
	if (cr6.lt) goto loc_82279B08;
loc_82279B40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822798e8
	sub_822798E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82279B50"))) PPC_WEAK_FUNC(sub_82279B50);
PPC_FUNC_IMPL(__imp__sub_82279B50) {
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
	// lwz r16,25440(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25440);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279bd0
	if (cr0.eq) goto loc_82279BD0;
	// li r28,0
	r28.s64 = 0;
loc_82279B98:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82353098
	sub_82353098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82279c04
	if (!cr0.eq) goto loc_82279C04;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82279b98
	if (cr6.lt) goto loc_82279B98;
loc_82279BD0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r5,r11,24976
	ctx.r5.s64 = r11.s64 + 24976;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82279c24
	if (cr0.eq) goto loc_82279C24;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82278fb8
	sub_82278FB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82279c28
	goto loc_82279C28;
loc_82279C04:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, r26.s32, xer);
	// bge cr6,0x82279c70
	if (!cr6.lt) goto loc_82279C70;
	// stw r26,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r26.u32);
	// b 0x82279c70
	goto loc_82279C70;
loc_82279C24:
	// li r29,0
	r29.s64 = 0;
loc_82279C28:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279c64
	if (cr0.eq) goto loc_82279C64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82279c70
	if (cr6.eq) goto loc_82279C70;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82278a58
	sub_82278A58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// b 0x82279c70
	goto loc_82279C70;
loc_82279C64:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82279a18
	sub_82279A18(ctx, base);
loc_82279C70:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82279B58"))) PPC_WEAK_FUNC(sub_82279B58);
PPC_FUNC_IMPL(__imp__sub_82279B58) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279bd0
	if (cr0.eq) goto loc_82279BD0;
	// li r28,0
	r28.s64 = 0;
loc_82279B98:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x82353098
	sub_82353098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82279c04
	if (!cr0.eq) goto loc_82279C04;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82279b98
	if (cr6.lt) goto loc_82279B98;
loc_82279BD0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r5,r11,24976
	ctx.r5.s64 = r11.s64 + 24976;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82279c24
	if (cr0.eq) goto loc_82279C24;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82278fb8
	sub_82278FB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82279c28
	goto loc_82279C28;
loc_82279C04:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, r26.s32, xer);
	// bge cr6,0x82279c70
	if (!cr6.lt) goto loc_82279C70;
	// stw r26,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r26.u32);
	// b 0x82279c70
	goto loc_82279C70;
loc_82279C24:
	// li r29,0
	r29.s64 = 0;
loc_82279C28:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82279c64
	if (cr0.eq) goto loc_82279C64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82279c70
	if (cr6.eq) goto loc_82279C70;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82278a58
	sub_82278A58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// b 0x82279c70
	goto loc_82279C70;
loc_82279C64:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82279a18
	sub_82279A18(ctx, base);
loc_82279C70:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82279C78"))) PPC_WEAK_FUNC(sub_82279C78);
PPC_FUNC_IMPL(__imp__sub_82279C78) {
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
	// bl 0x82278a40
	sub_82278A40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82279CA0"))) PPC_WEAK_FUNC(sub_82279CA0);
PPC_FUNC_IMPL(__imp__sub_82279CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// b 0x82279788
	sub_82279788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82279CB0"))) PPC_WEAK_FUNC(sub_82279CB0);
PPC_FUNC_IMPL(__imp__sub_82279CB0) {
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r31,22160(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 22160);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82279ce4
	if (cr6.eq) goto loc_82279CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822795f0
	sub_822795F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82279CE4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,22160(r30)
	PPC_STORE_U32(r30.u32 + 22160, r11.u32);
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

__attribute__((alias("__imp__sub_82279D04"))) PPC_WEAK_FUNC(sub_82279D04);
PPC_FUNC_IMPL(__imp__sub_82279D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279D08"))) PPC_WEAK_FUNC(sub_82279D08);
PPC_FUNC_IMPL(__imp__sub_82279D08) {
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
	// bge cr6,0x82279dc0
	if (!cr6.lt) goto loc_82279DC0;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82279d54
	if (!cr6.gt) goto loc_82279D54;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_82279D54:
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
	// beq cr6,0x82279d94
	if (cr6.eq) goto loc_82279D94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822795a8
	sub_822795A8(ctx, base);
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
	// b 0x82279da4
	goto loc_82279DA4;
loc_82279D94:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82278e98
	sub_82278E98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82279DA4:
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
loc_82279DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82279DC8"))) PPC_WEAK_FUNC(sub_82279DC8);
PPC_FUNC_IMPL(__imp__sub_82279DC8) {
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
	// lwz r16,25528(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25528);
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
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r30,22160(r11)
	PPC_STORE_U32(r11.u32 + 22160, r30.u32);
	// bl 0x82279d08
	sub_82279D08(ctx, base);
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

__attribute__((alias("__imp__sub_82279DD0"))) PPC_WEAK_FUNC(sub_82279DD0);
PPC_FUNC_IMPL(__imp__sub_82279DD0) {
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
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r30,22160(r11)
	PPC_STORE_U32(r11.u32 + 22160, r30.u32);
	// bl 0x82279d08
	sub_82279D08(ctx, base);
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

__attribute__((alias("__imp__sub_82279E38"))) PPC_WEAK_FUNC(sub_82279E38);
PPC_FUNC_IMPL(__imp__sub_82279E38) {
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

__attribute__((alias("__imp__sub_82279E64"))) PPC_WEAK_FUNC(sub_82279E64);
PPC_FUNC_IMPL(__imp__sub_82279E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279E68"))) PPC_WEAK_FUNC(sub_82279E68);
PPC_FUNC_IMPL(__imp__sub_82279E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22224
	r11.s64 = r11.s64 + 22224;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,68(r11)
	PPC_STORE_U8(r11.u32 + 68, ctx.r10.u8);
	// b 0x823b5b20
	sub_823B5B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82279E94"))) PPC_WEAK_FUNC(sub_82279E94);
PPC_FUNC_IMPL(__imp__sub_82279E94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82279E98"))) PPC_WEAK_FUNC(sub_82279E98);
PPC_FUNC_IMPL(__imp__sub_82279E98) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r30,-1
	r30.s64 = -1;
	// addi r31,r11,22293
	r31.s64 = r11.s64 + 22293;
	// lbz r11,-5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -5);
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + -4);
	// rotlwi r11,r11,16
	r11.u64 = __builtin_rotateleft32(r11.u32, 16);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lbz r10,-2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + -2);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82279f5c
	goto loc_82279F5C;
loc_82279ED8:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// addi r10,r31,-65
	ctx.r10.s64 = r31.s64 + -65;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// rotlwi r11,r11,16
	r11.u64 = __builtin_rotateleft32(r11.u32, 16);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// rotlwi r11,r11,16
	r11.u64 = __builtin_rotateleft32(r11.u32, 16);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lhz r7,-4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + -4);
	// addi r10,r31,-65
	ctx.r10.s64 = r31.s64 + -65;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// mulli r8,r11,12
	ctx.r8.s64 = r11.s64 * 12;
	// lbz r11,-5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -5);
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// rotlwi r11,r11,16
	r11.u64 = __builtin_rotateleft32(r11.u32, 16);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// lbz r7,-2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + -2);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 | r11.u64;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_82279F5C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// lbz r11,-1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82279ed8
	if (cr0.eq) goto loc_82279ED8;
	// lbz r11,-5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -5);
	// lhz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + -4);
	// rotlwi r11,r11,16
	r11.u64 = __builtin_rotateleft32(r11.u32, 16);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lbz r10,-2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + -2);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | r11.u64;
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82279FAC"))) PPC_WEAK_FUNC(sub_82279FAC);
PPC_FUNC_IMPL(__imp__sub_82279FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82279FB0"))) PPC_WEAK_FUNC(sub_82279FB0);
PPC_FUNC_IMPL(__imp__sub_82279FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22300
	r11.s64 = r11.s64 + 22300;
	// addi r8,r11,-72
	ctx.r8.s64 = r11.s64 + -72;
	// addi r7,r11,-72
	ctx.r7.s64 = r11.s64 + -72;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// stwx r3,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bltlr cr6
	if (cr6.lt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82279FF0"))) PPC_WEAK_FUNC(sub_82279FF0);
PPC_FUNC_IMPL(__imp__sub_82279FF0) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,22288
	r31.s64 = r11.s64 + 22288;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// beq 0x8227a06c
	if (cr0.eq) goto loc_8227A06C;
	// addi r9,r31,-60
	ctx.r9.s64 = r31.s64 + -60;
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8227a06c
	if (cr6.eq) goto loc_8227A06C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stb r9,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r9.u8);
	// stb r9,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// blt cr6,0x8227a054
	if (cr6.lt) goto loc_8227A054;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8227A054:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8227A06C:
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8227a0a4
	if (!cr0.eq) goto loc_8227A0A4;
	// addi r10,r31,-60
	ctx.r10.s64 = r31.s64 + -60;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8227a0a4
	if (cr6.eq) goto loc_8227A0A4;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// bl 0x823b5b20
	sub_823B5B20(ctx, base);
loc_8227A0A4:
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

__attribute__((alias("__imp__sub_8227A0B8"))) PPC_WEAK_FUNC(sub_8227A0B8);
PPC_FUNC_IMPL(__imp__sub_8227A0B8) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r31,r11,22224
	r31.s64 = r11.s64 + 22224;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x823b5a88
	sub_823B5A88(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227a130
	if (cr0.eq) goto loc_8227A130;
	// lis r11,-32216
	r11.s64 = -2111307776;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-24936
	ctx.r5.s64 = r11.s64 + -24936;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239f6d8
	sub_8239F6D8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8227A130:
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

__attribute__((alias("__imp__sub_8227A144"))) PPC_WEAK_FUNC(sub_8227A144);
PPC_FUNC_IMPL(__imp__sub_8227A144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227A148"))) PPC_WEAK_FUNC(sub_8227A148);
PPC_FUNC_IMPL(__imp__sub_8227A148) {
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
	// lwz r16,25600(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25600);
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
	// lwz r11,22308(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,22304
	r30.s64 = ctx.r9.s64 + 22304;
	// bne 0x8227a194
	if (!cr0.eq) goto loc_8227A194;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,22308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22308, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,25576
	ctx.r4.s64 = r11.s64 + 25576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8227A194:
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

__attribute__((alias("__imp__sub_8227A150"))) PPC_WEAK_FUNC(sub_8227A150);
PPC_FUNC_IMPL(__imp__sub_8227A150) {
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
	// lwz r11,22308(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,22304
	r30.s64 = ctx.r9.s64 + 22304;
	// bne 0x8227a194
	if (!cr0.eq) goto loc_8227A194;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,22308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22308, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,25576
	ctx.r4.s64 = r11.s64 + 25576;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8227A194:
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

__attribute__((alias("__imp__sub_8227A1A8"))) PPC_WEAK_FUNC(sub_8227A1A8);
PPC_FUNC_IMPL(__imp__sub_8227A1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22308
	r11.s64 = r11.s64 + 22308;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,22308
	ctx.r10.s64 = ctx.r10.s64 + 22308;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227A1D0"))) PPC_WEAK_FUNC(sub_8227A1D0);
PPC_FUNC_IMPL(__imp__sub_8227A1D0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82271840
	sub_82271840(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
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
	// bne 0x8227a214
	if (!cr0.eq) goto loc_8227A214;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8227A214:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227A220"))) PPC_WEAK_FUNC(sub_8227A220);
PPC_FUNC_IMPL(__imp__sub_8227A220) {
	PPC_FUNC_PROLOGUE();
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227A228"))) PPC_WEAK_FUNC(sub_8227A228);
PPC_FUNC_IMPL(__imp__sub_8227A228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227A230"))) PPC_WEAK_FUNC(sub_8227A230);
PPC_FUNC_IMPL(__imp__sub_8227A230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227A238"))) PPC_WEAK_FUNC(sub_8227A238);
PPC_FUNC_IMPL(__imp__sub_8227A238) {
	PPC_FUNC_PROLOGUE();
	// stb r4,896(r3)
	PPC_STORE_U8(ctx.r3.u32 + 896, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227A240"))) PPC_WEAK_FUNC(sub_8227A240);
PPC_FUNC_IMPL(__imp__sub_8227A240) {
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
	// beq 0x8227a280
	if (cr0.eq) goto loc_8227A280;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,19656
	ctx.r3.s64 = r11.s64 + 19656;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8227a288
	goto loc_8227A288;
loc_8227A280:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8227A288:
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

__attribute__((alias("__imp__sub_8227A2A4"))) PPC_WEAK_FUNC(sub_8227A2A4);
PPC_FUNC_IMPL(__imp__sub_8227A2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227A2A8"))) PPC_WEAK_FUNC(sub_8227A2A8);
PPC_FUNC_IMPL(__imp__sub_8227A2A8) {
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
	// lwz r16,25696(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25696);
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
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r5,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8227a150
	sub_8227A150(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a318
	if (cr0.eq) goto loc_8227A318;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A318:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a32c
	if (cr0.eq) goto loc_8227A32C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A32C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,25652
	r11.s64 = r11.s64 + 25652;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8227A2B0"))) PPC_WEAK_FUNC(sub_8227A2B0);
PPC_FUNC_IMPL(__imp__sub_8227A2B0) {
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
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r5,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8227a150
	sub_8227A150(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8213deb8
	sub_8213DEB8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a318
	if (cr0.eq) goto loc_8227A318;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A318:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a32c
	if (cr0.eq) goto loc_8227A32C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A32C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,25652
	r11.s64 = r11.s64 + 25652;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8227A354"))) PPC_WEAK_FUNC(sub_8227A354);
PPC_FUNC_IMPL(__imp__sub_8227A354) {
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

__attribute__((alias("__imp__sub_8227A37C"))) PPC_WEAK_FUNC(sub_8227A37C);
PPC_FUNC_IMPL(__imp__sub_8227A37C) {
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

__attribute__((alias("__imp__sub_8227A3A4"))) PPC_WEAK_FUNC(sub_8227A3A4);
PPC_FUNC_IMPL(__imp__sub_8227A3A4) {
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

__attribute__((alias("__imp__sub_8227A3CC"))) PPC_WEAK_FUNC(sub_8227A3CC);
PPC_FUNC_IMPL(__imp__sub_8227A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227A3D0"))) PPC_WEAK_FUNC(sub_8227A3D0);
PPC_FUNC_IMPL(__imp__sub_8227A3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// beq cr6,0x8227a410
	if (cr6.eq) goto loc_8227A410;
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// beq cr6,0x8227a408
	if (cr6.eq) goto loc_8227A408;
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x8227a400
	if (cr6.eq) goto loc_8227A400;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// beq cr6,0x8227a3f8
	if (cr6.eq) goto loc_8227A3F8;
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_8227A3F8:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_8227A400:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_8227A408:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_8227A410:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227A418"))) PPC_WEAK_FUNC(sub_8227A418);
PPC_FUNC_IMPL(__imp__sub_8227A418) {
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
	// lwz r16,25768(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25768);
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821455c0
	sub_821455C0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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
	// beq 0x8227a480
	if (cr0.eq) goto loc_8227A480;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A480:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
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

__attribute__((alias("__imp__sub_8227A420"))) PPC_WEAK_FUNC(sub_8227A420);
PPC_FUNC_IMPL(__imp__sub_8227A420) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821455c0
	sub_821455C0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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
	// beq 0x8227a480
	if (cr0.eq) goto loc_8227A480;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A480:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
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

__attribute__((alias("__imp__sub_8227A4AC"))) PPC_WEAK_FUNC(sub_8227A4AC);
PPC_FUNC_IMPL(__imp__sub_8227A4AC) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_8227A4D4"))) PPC_WEAK_FUNC(sub_8227A4D4);
PPC_FUNC_IMPL(__imp__sub_8227A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227A4D8"))) PPC_WEAK_FUNC(sub_8227A4D8);
PPC_FUNC_IMPL(__imp__sub_8227A4D8) {
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
	// lwz r16,25832(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25832);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8227a520
	if (cr0.lt) goto loc_8227A520;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x8227a630
	if (!cr6.eq) goto loc_8227A630;
loc_8227A520:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lbz r11,896(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 896);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8227a5d4
	if (cr0.eq) goto loc_8227A5D4;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// beq cr6,0x8227a564
	if (cr6.eq) goto loc_8227A564;
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(r30.s32, 18, xer);
	// beq cr6,0x8227a564
	if (cr6.eq) goto loc_8227A564;
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x8227a564
	if (cr6.eq) goto loc_8227A564;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(r30.s32, 17, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8227a568
	if (!cr6.eq) goto loc_8227A568;
loc_8227A564:
	// li r11,1
	r11.s64 = 1;
loc_8227A568:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a5d4
	if (cr0.eq) goto loc_8227A5D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227a3d0
	sub_8227A3D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821455c0
	sub_821455C0(ctx, base);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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
	// beq 0x8227a5c0
	if (cr0.eq) goto loc_8227A5C0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A5C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x8227a604
	goto loc_8227A604;
loc_8227A5D4:
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a608
	if (cr0.eq) goto loc_8227A608;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8227A604:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A608:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a630
	if (cr0.eq) goto loc_8227A630;
	// mulli r11,r27,104
	r11.s64 = r27.s64 * 104;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x8227a1d0
	sub_8227A1D0(ctx, base);
loc_8227A630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8227A4E0"))) PPC_WEAK_FUNC(sub_8227A4E0);
PPC_FUNC_IMPL(__imp__sub_8227A4E0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8227a520
	if (cr0.lt) goto loc_8227A520;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x8227a630
	if (!cr6.eq) goto loc_8227A630;
loc_8227A520:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lbz r11,896(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 896);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8227a5d4
	if (cr0.eq) goto loc_8227A5D4;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// beq cr6,0x8227a564
	if (cr6.eq) goto loc_8227A564;
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(r30.s32, 18, xer);
	// beq cr6,0x8227a564
	if (cr6.eq) goto loc_8227A564;
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x8227a564
	if (cr6.eq) goto loc_8227A564;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(r30.s32, 17, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8227a568
	if (!cr6.eq) goto loc_8227A568;
loc_8227A564:
	// li r11,1
	r11.s64 = 1;
loc_8227A568:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a5d4
	if (cr0.eq) goto loc_8227A5D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227a3d0
	sub_8227A3D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821455c0
	sub_821455C0(ctx, base);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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
	// beq 0x8227a5c0
	if (cr0.eq) goto loc_8227A5C0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A5C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x8227a604
	goto loc_8227A604;
loc_8227A5D4:
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a608
	if (cr0.eq) goto loc_8227A608;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8227A604:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A608:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a630
	if (cr0.eq) goto loc_8227A630;
	// mulli r11,r27,104
	r11.s64 = r27.s64 * 104;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x8227a1d0
	sub_8227A1D0(ctx, base);
loc_8227A630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8227A63C"))) PPC_WEAK_FUNC(sub_8227A63C);
PPC_FUNC_IMPL(__imp__sub_8227A63C) {
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

__attribute__((alias("__imp__sub_8227A664"))) PPC_WEAK_FUNC(sub_8227A664);
PPC_FUNC_IMPL(__imp__sub_8227A664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227A668"))) PPC_WEAK_FUNC(sub_8227A668);
PPC_FUNC_IMPL(__imp__sub_8227A668) {
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
	// lwz r16,25904(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25904);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8227a6b0
	if (cr0.lt) goto loc_8227A6B0;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x8227a7d4
	if (!cr6.eq) goto loc_8227A7D4;
loc_8227A6B0:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lbz r11,896(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 896);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8227a764
	if (cr0.eq) goto loc_8227A764;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// beq cr6,0x8227a6f4
	if (cr6.eq) goto loc_8227A6F4;
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(r30.s32, 18, xer);
	// beq cr6,0x8227a6f4
	if (cr6.eq) goto loc_8227A6F4;
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x8227a6f4
	if (cr6.eq) goto loc_8227A6F4;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(r30.s32, 17, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8227a6f8
	if (!cr6.eq) goto loc_8227A6F8;
loc_8227A6F4:
	// li r11,1
	r11.s64 = 1;
loc_8227A6F8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a764
	if (cr0.eq) goto loc_8227A764;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227a3d0
	sub_8227A3D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8227a2b0
	sub_8227A2B0(ctx, base);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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
	// beq 0x8227a750
	if (cr0.eq) goto loc_8227A750;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A750:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x8227a794
	goto loc_8227A794;
loc_8227A764:
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a798
	if (cr0.eq) goto loc_8227A798;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8227A794:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A798:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a7d4
	if (cr0.eq) goto loc_8227A7D4;
	// mulli r11,r27,104
	r11.s64 = r27.s64 * 104;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r29,r11,64
	r29.s64 = r11.s64 + 64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bne cr6,0x8227a7d4
	if (!cr6.eq) goto loc_8227A7D4;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82271840
	sub_82271840(ctx, base);
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// bl 0x82271840
	sub_82271840(ctx, base);
loc_8227A7D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8227A670"))) PPC_WEAK_FUNC(sub_8227A670);
PPC_FUNC_IMPL(__imp__sub_8227A670) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8227a6b0
	if (cr0.lt) goto loc_8227A6B0;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x8227a7d4
	if (!cr6.eq) goto loc_8227A7D4;
loc_8227A6B0:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lbz r11,896(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 896);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8227a764
	if (cr0.eq) goto loc_8227A764;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// beq cr6,0x8227a6f4
	if (cr6.eq) goto loc_8227A6F4;
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(r30.s32, 18, xer);
	// beq cr6,0x8227a6f4
	if (cr6.eq) goto loc_8227A6F4;
	// cmpwi cr6,r30,19
	cr6.compare<int32_t>(r30.s32, 19, xer);
	// beq cr6,0x8227a6f4
	if (cr6.eq) goto loc_8227A6F4;
	// cmpwi cr6,r30,17
	cr6.compare<int32_t>(r30.s32, 17, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8227a6f8
	if (!cr6.eq) goto loc_8227A6F8;
loc_8227A6F4:
	// li r11,1
	r11.s64 = 1;
loc_8227A6F8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a764
	if (cr0.eq) goto loc_8227A764;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227a3d0
	sub_8227A3D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8227a2b0
	sub_8227A2B0(ctx, base);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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
	// beq 0x8227a750
	if (cr0.eq) goto loc_8227A750;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A750:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x8227a794
	goto loc_8227A794;
loc_8227A764:
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a798
	if (cr0.eq) goto loc_8227A798;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8227A794:
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227A798:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a7d4
	if (cr0.eq) goto loc_8227A7D4;
	// mulli r11,r27,104
	r11.s64 = r27.s64 * 104;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r29,r11,64
	r29.s64 = r11.s64 + 64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bne cr6,0x8227a7d4
	if (!cr6.eq) goto loc_8227A7D4;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82271840
	sub_82271840(ctx, base);
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// bl 0x82271840
	sub_82271840(ctx, base);
loc_8227A7D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8227A7E0"))) PPC_WEAK_FUNC(sub_8227A7E0);
PPC_FUNC_IMPL(__imp__sub_8227A7E0) {
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

__attribute__((alias("__imp__sub_8227A808"))) PPC_WEAK_FUNC(sub_8227A808);
PPC_FUNC_IMPL(__imp__sub_8227A808) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227a848
	if (cr0.eq) goto loc_8227A848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8227A848:
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

__attribute__((alias("__imp__sub_8227A864"))) PPC_WEAK_FUNC(sub_8227A864);
PPC_FUNC_IMPL(__imp__sub_8227A864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227A868"))) PPC_WEAK_FUNC(sub_8227A868);
PPC_FUNC_IMPL(__imp__sub_8227A868) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8227a8bc
	if (!cr0.gt) goto loc_8227A8BC;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r11.u64);
loc_8227A8BC:
	// addi r31,r3,56
	r31.s64 = ctx.r3.s64 + 56;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8227a8f4
	if (!cr0.gt) goto loc_8227A8F4;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
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
loc_8227A8F4:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f0,18804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18804);
	f0.f64 = double(temp.f32);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// clrldi r7,r11,32
	ctx.r7.u64 = r11.u64 & 0xFFFFFFFF;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// sradi r11,r11,32
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFFFFFFFF) != 0);
	r11.s64 = r11.s64 >> 32;
	// sradi r10,r10,32
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f13,f11,f0,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f9.f64));
	// fmadds f0,f10,f0,f12
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f12.f64));
	// bge 0x8227a990
	if (!cr0.lt) goto loc_8227A990;
	// neg r11,r9
	r11.s64 = -ctx.r9.s64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8227A990:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8227a9ac
	if (!cr0.lt) goto loc_8227A9AC;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8227A9AC:
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x8227a9c0
	if (cr6.lt) goto loc_8227A9C0;
	// bl 0x8227a420
	sub_8227A420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8227a9d0
	goto loc_8227A9D0;
loc_8227A9C0:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f2.f64);
	// blt cr6,0x8227a9f0
	if (cr6.lt) goto loc_8227A9F0;
	// bl 0x8227a420
	sub_8227A420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8227A9D0:
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
	// bne 0x8227a9f0
	if (!cr0.eq) goto loc_8227A9F0;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8227A9F0:
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

__attribute__((alias("__imp__sub_8227AA08"))) PPC_WEAK_FUNC(sub_8227AA08);
PPC_FUNC_IMPL(__imp__sub_8227AA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// addi r29,r30,64
	r29.s64 = r30.s64 + 64;
loc_8227AA20:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227a868
	sub_8227A868(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,104
	r29.s64 = r29.s64 + 104;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// blt cr6,0x8227aa20
	if (cr6.lt) goto loc_8227AA20;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227AA50"))) PPC_WEAK_FUNC(sub_8227AA50);
PPC_FUNC_IMPL(__imp__sub_8227AA50) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r11,22312
	r31.s64 = r11.s64 + 22312;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8227aaa8
	if (cr0.eq) goto loc_8227AAA8;
	// li r29,0
	r29.s64 = 0;
loc_8227AA80:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x8227aa08
	sub_8227AA08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x8227aa80
	if (cr6.lt) goto loc_8227AA80;
loc_8227AAA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227AAB0"))) PPC_WEAK_FUNC(sub_8227AAB0);
PPC_FUNC_IMPL(__imp__sub_8227AAB0) {
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
	// lwz r16,26024(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26024);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821417d0
	sub_821417D0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227ab74
	if (cr0.eq) goto loc_8227AB74;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r11,r11,31532
	r11.s64 = r11.s64 + 31532;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227a4e0
	sub_8227A4E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8227ab74
	if (cr6.eq) goto loc_8227AB74;
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
	// beq 0x8227ac5c
	if (cr0.eq) goto loc_8227AC5C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8227AB6C:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8227ac5c
	goto loc_8227AC5C;
loc_8227AB74:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8227a150
	sub_8227A150(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227abf8
	if (cr0.eq) goto loc_8227ABF8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r11,r11,25652
	r11.s64 = r11.s64 + 25652;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227a670
	sub_8227A670(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8227abf8
	if (cr6.eq) goto loc_8227ABF8;
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
	// beq 0x8227ac5c
	if (cr0.eq) goto loc_8227AC5C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8227ab6c
	goto loc_8227AB6C;
loc_8227ABF8:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8227ac50
	if (cr6.eq) goto loc_8227AC50;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8227ac50
	if (cr6.eq) goto loc_8227AC50;
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
	// beq 0x8227ac5c
	if (cr0.eq) goto loc_8227AC5C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8227ab6c
	goto loc_8227AB6C;
loc_8227AC50:
	// li r11,6
	r11.s64 = 6;
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_8227AC5C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8227AAB8"))) PPC_WEAK_FUNC(sub_8227AAB8);
PPC_FUNC_IMPL(__imp__sub_8227AAB8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821417d0
	sub_821417D0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227ab74
	if (cr0.eq) goto loc_8227AB74;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r11,r11,31532
	r11.s64 = r11.s64 + 31532;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227a4e0
	sub_8227A4E0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8227ab74
	if (cr6.eq) goto loc_8227AB74;
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
	// beq 0x8227ac5c
	if (cr0.eq) goto loc_8227AC5C;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8227AB6C:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x8227ac5c
	goto loc_8227AC5C;
loc_8227AB74:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8227a150
	sub_8227A150(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227abf8
	if (cr0.eq) goto loc_8227ABF8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r11,r11,25652
	r11.s64 = r11.s64 + 25652;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r11.u16);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227a670
	sub_8227A670(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8227abf8
	if (cr6.eq) goto loc_8227ABF8;
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
	// beq 0x8227ac5c
	if (cr0.eq) goto loc_8227AC5C;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x8227ab6c
	goto loc_8227AB6C;
loc_8227ABF8:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8227ac50
	if (cr6.eq) goto loc_8227AC50;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
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
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8227ac50
	if (cr6.eq) goto loc_8227AC50;
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
	// beq 0x8227ac5c
	if (cr0.eq) goto loc_8227AC5C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x8227ab6c
	goto loc_8227AB6C;
loc_8227AC50:
	// li r11,6
	r11.s64 = 6;
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_8227AC5C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8227AC68"))) PPC_WEAK_FUNC(sub_8227AC68);
PPC_FUNC_IMPL(__imp__sub_8227AC68) {
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

__attribute__((alias("__imp__sub_8227AC90"))) PPC_WEAK_FUNC(sub_8227AC90);
PPC_FUNC_IMPL(__imp__sub_8227AC90) {
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

__attribute__((alias("__imp__sub_8227ACB8"))) PPC_WEAK_FUNC(sub_8227ACB8);
PPC_FUNC_IMPL(__imp__sub_8227ACB8) {
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

__attribute__((alias("__imp__sub_8227ACE0"))) PPC_WEAK_FUNC(sub_8227ACE0);
PPC_FUNC_IMPL(__imp__sub_8227ACE0) {
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

__attribute__((alias("__imp__sub_8227AD08"))) PPC_WEAK_FUNC(sub_8227AD08);
PPC_FUNC_IMPL(__imp__sub_8227AD08) {
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

__attribute__((alias("__imp__sub_8227AD30"))) PPC_WEAK_FUNC(sub_8227AD30);
PPC_FUNC_IMPL(__imp__sub_8227AD30) {
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
	// beq cr6,0x8227ad6c
	if (cr6.eq) goto loc_8227AD6C;
	// subf. r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8227ad6c
	if (cr0.eq) goto loc_8227AD6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_8227AD6C:
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

__attribute__((alias("__imp__sub_8227AD94"))) PPC_WEAK_FUNC(sub_8227AD94);
PPC_FUNC_IMPL(__imp__sub_8227AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227AD98"))) PPC_WEAK_FUNC(sub_8227AD98);
PPC_FUNC_IMPL(__imp__sub_8227AD98) {
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
	// blt cr6,0x8227ade0
	if (cr6.lt) goto loc_8227ADE0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8227ADE0:
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
	// bl 0x8227a240
	sub_8227A240(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8227ae18
	if (cr0.eq) goto loc_8227AE18;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8227AE18:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8227ae38
	if (cr6.eq) goto loc_8227AE38;
loc_8227AE24:
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
	// bne 0x8227ae24
	if (!cr0.eq) goto loc_8227AE24;
loc_8227AE38:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8227ae60
	if (!cr0.eq) goto loc_8227AE60;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8227ae60
	if (cr0.eq) goto loc_8227AE60;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8227AE60:
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

__attribute__((alias("__imp__sub_8227AE94"))) PPC_WEAK_FUNC(sub_8227AE94);
PPC_FUNC_IMPL(__imp__sub_8227AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227AE98"))) PPC_WEAK_FUNC(sub_8227AE98);
PPC_FUNC_IMPL(__imp__sub_8227AE98) {
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
	// lwz r16,26208(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26208);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,26140
	r11.s64 = r11.s64 + 26140;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8227bc90
	sub_8227BC90(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r29,r11,22312
	r29.s64 = r11.s64 + 22312;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82239570
	sub_82239570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227ad30
	sub_8227AD30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227AEA0"))) PPC_WEAK_FUNC(sub_8227AEA0);
PPC_FUNC_IMPL(__imp__sub_8227AEA0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,26140
	r11.s64 = r11.s64 + 26140;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8227bc90
	sub_8227BC90(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r29,r11,22312
	r29.s64 = r11.s64 + 22312;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82239570
	sub_82239570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227ad30
	sub_8227AD30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227AF08"))) PPC_WEAK_FUNC(sub_8227AF08);
PPC_FUNC_IMPL(__imp__sub_8227AF08) {
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

__attribute__((alias("__imp__sub_8227AF30"))) PPC_WEAK_FUNC(sub_8227AF30);
PPC_FUNC_IMPL(__imp__sub_8227AF30) {
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
	// beq cr6,0x8227af70
	if (cr6.eq) goto loc_8227AF70;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8227af60
	if (cr0.eq) goto loc_8227AF60;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8227AF60:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8227af84
	goto loc_8227AF84;
loc_8227AF70:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8227ad98
	sub_8227AD98(ctx, base);
loc_8227AF84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227AF94"))) PPC_WEAK_FUNC(sub_8227AF94);
PPC_FUNC_IMPL(__imp__sub_8227AF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227AF98"))) PPC_WEAK_FUNC(sub_8227AF98);
PPC_FUNC_IMPL(__imp__sub_8227AF98) {
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
	// bl 0x8227aea0
	sub_8227AEA0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227afc8
	if (cr0.eq) goto loc_8227AFC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8227AFC8:
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

__attribute__((alias("__imp__sub_8227AFE4"))) PPC_WEAK_FUNC(sub_8227AFE4);
PPC_FUNC_IMPL(__imp__sub_8227AFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227AFE8"))) PPC_WEAK_FUNC(sub_8227AFE8);
PPC_FUNC_IMPL(__imp__sub_8227AFE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8227bc70
	sub_8227BC70(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,19648
	r29.s64 = r11.s64 + 19648;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// addi r31,r11,26292
	r31.s64 = r11.s64 + 26292;
	// bge cr6,0x8227b060
	if (!cr6.lt) goto loc_8227B060;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26284
	ctx.r4.s64 = r11.s64 + 26284;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
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
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82319758
	sub_82319758(ctx, base);
loc_8227B060:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,19652
	r30.s64 = r11.s64 + 19652;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x8227b0b0
	if (!cr6.lt) goto loc_8227B0B0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,26272
	ctx.r4.s64 = r11.s64 + 26272;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r31,0(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82319758
	sub_82319758(ctx, base);
loc_8227B0B0:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 52, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,22312
	ctx.r3.s64 = r11.s64 + 22312;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 56, temp.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x8227af30
	sub_8227AF30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8227B0E0"))) PPC_WEAK_FUNC(sub_8227B0E0);
PPC_FUNC_IMPL(__imp__sub_8227B0E0) {
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
	// lwz r16,26312(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26312);
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r28,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r28.u32);
	// addi r11,r11,26140
	r11.s64 = r11.s64 + 26140;
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// lfs f0,-25364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lfs f0,2480(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r11,r9,24
	r11.s64 = ctx.r9.s64 + 24;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_8227B150:
	// li r6,24
	ctx.r6.s64 = 24;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// std r10,-8(r11)
	PPC_STORE_U64(r11.u32 + -8, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r6,18972(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18972);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// std r10,40(r11)
	PPC_STORE_U64(r11.u32 + 40, ctx.r10.u64);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// lwz r6,18972(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18972);
	// stw r6,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r6.u32);
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// addi r11,r11,104
	r11.s64 = r11.s64 + 104;
	// bge 0x8227b150
	if (!cr0.lt) goto loc_8227B150;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,896(r30)
	PPC_STORE_U8(r30.u32 + 896, ctx.r10.u8);
	// bl 0x8227afe8
	sub_8227AFE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8227B0E8"))) PPC_WEAK_FUNC(sub_8227B0E8);
PPC_FUNC_IMPL(__imp__sub_8227B0E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r28,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r28.u32);
	// addi r11,r11,26140
	r11.s64 = r11.s64 + 26140;
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// lfs f0,-25364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lfs f0,2480(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r11,r9,24
	r11.s64 = ctx.r9.s64 + 24;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_8227B150:
	// li r6,24
	ctx.r6.s64 = 24;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// std r10,-8(r11)
	PPC_STORE_U64(r11.u32 + -8, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r6,18972(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18972);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// std r10,40(r11)
	PPC_STORE_U64(r11.u32 + 40, ctx.r10.u64);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// lwz r6,18972(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18972);
	// stw r6,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r6.u32);
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// addi r11,r11,104
	r11.s64 = r11.s64 + 104;
	// bge 0x8227b150
	if (!cr0.lt) goto loc_8227B150;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,896(r30)
	PPC_STORE_U8(r30.u32 + 896, ctx.r10.u8);
	// bl 0x8227afe8
	sub_8227AFE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8227B1C8"))) PPC_WEAK_FUNC(sub_8227B1C8);
PPC_FUNC_IMPL(__imp__sub_8227B1C8) {
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

__attribute__((alias("__imp__sub_8227B1F0"))) PPC_WEAK_FUNC(sub_8227B1F0);
PPC_FUNC_IMPL(__imp__sub_8227B1F0) {
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
	// lwz r16,26368(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26368);
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r11,r11,26140
	r11.s64 = r11.s64 + 26140;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,-25364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stw r7,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r7.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// lfs f0,2480(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r11,r9,24
	r11.s64 = ctx.r9.s64 + 24;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
loc_8227B260:
	// li r6,24
	ctx.r6.s64 = 24;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// std r10,-8(r11)
	PPC_STORE_U64(r11.u32 + -8, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r6,18972(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18972);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// std r10,40(r11)
	PPC_STORE_U64(r11.u32 + 40, ctx.r10.u64);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// lwz r6,18972(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18972);
	// stw r6,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r6.u32);
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// addi r11,r11,104
	r11.s64 = r11.s64 + 104;
	// bge 0x8227b260
	if (!cr0.lt) goto loc_8227B260;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,896(r30)
	PPC_STORE_U8(r30.u32 + 896, ctx.r10.u8);
	// bl 0x8227afe8
	sub_8227AFE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227B1F8"))) PPC_WEAK_FUNC(sub_8227B1F8);
PPC_FUNC_IMPL(__imp__sub_8227B1F8) {
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r11,r11,26140
	r11.s64 = r11.s64 + 26140;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,-25364(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25364);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,64
	ctx.r9.s64 = r30.s64 + 64;
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stw r7,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r7.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// lfs f0,2480(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r11,r9,24
	r11.s64 = ctx.r9.s64 + 24;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
loc_8227B260:
	// li r6,24
	ctx.r6.s64 = 24;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// std r10,-8(r11)
	PPC_STORE_U64(r11.u32 + -8, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r6,18972(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18972);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// std r10,40(r11)
	PPC_STORE_U64(r11.u32 + 40, ctx.r10.u64);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// lwz r6,18972(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18972);
	// stw r6,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r6.u32);
	// stfs f0,72(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// addi r11,r11,104
	r11.s64 = r11.s64 + 104;
	// bge 0x8227b260
	if (!cr0.lt) goto loc_8227B260;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,896(r30)
	PPC_STORE_U8(r30.u32 + 896, ctx.r10.u8);
	// bl 0x8227afe8
	sub_8227AFE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227B2D8"))) PPC_WEAK_FUNC(sub_8227B2D8);
PPC_FUNC_IMPL(__imp__sub_8227B2D8) {
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

__attribute__((alias("__imp__sub_8227B300"))) PPC_WEAK_FUNC(sub_8227B300);
PPC_FUNC_IMPL(__imp__sub_8227B300) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r30,-32253
	r30.s64 = -2113732608;
loc_8227B31C:
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x8227b32c
	if (cr6.lt) goto loc_8227B32C;
	// lwz r3,26672(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 26672);
loc_8227B32C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227bca8
	sub_8227BCA8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// blt cr6,0x8227b31c
	if (cr6.lt) goto loc_8227B31C;
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

__attribute__((alias("__imp__sub_8227B358"))) PPC_WEAK_FUNC(sub_8227B358);
PPC_FUNC_IMPL(__imp__sub_8227B358) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227bbb0
	sub_8227BBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B35C"))) PPC_WEAK_FUNC(sub_8227B35C);
PPC_FUNC_IMPL(__imp__sub_8227B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B360"))) PPC_WEAK_FUNC(sub_8227B360);
PPC_FUNC_IMPL(__imp__sub_8227B360) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227cc98
	sub_8227CC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227B364"))) PPC_WEAK_FUNC(sub_8227B364);
PPC_FUNC_IMPL(__imp__sub_8227B364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B368"))) PPC_WEAK_FUNC(sub_8227B368);
PPC_FUNC_IMPL(__imp__sub_8227B368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,26416
	ctx.r10.s64 = r11.s64 + 26416;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_8227B388:
	// slw r4,r7,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// and. r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8227b3a8
	if (cr0.eq) goto loc_8227B3A8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// slw r4,r7,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | r31.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
loc_8227B3A8:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x8227b388
	if (cr6.lt) goto loc_8227B388;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227b3d0
	if (cr0.eq) goto loc_8227B3D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8227B3D0:
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227b3e4
	if (cr0.eq) goto loc_8227B3E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8227B3E4:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227B3EC"))) PPC_WEAK_FUNC(sub_8227B3EC);
PPC_FUNC_IMPL(__imp__sub_8227B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B3F0"))) PPC_WEAK_FUNC(sub_8227B3F0);
PPC_FUNC_IMPL(__imp__sub_8227B3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsh r11,r4
	r11.s64 = ctx.r4.s16;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f0,26484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26484);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// beq 0x8227b468
	if (cr0.eq) goto loc_8227B468;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfs f13,22324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8227b43c
	if (!cr6.gt) goto loc_8227B43C;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// b 0x8227b44c
	goto loc_8227B44C;
loc_8227B43C:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x8227b460
	if (!cr6.lt) goto loc_8227B460;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
loc_8227B44C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// b 0x8227b468
	goto loc_8227B468;
loc_8227B460:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_8227B468:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,26480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26480);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lbz r11,-9(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// beqlr 
	if (cr0.eq) return;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227B49C"))) PPC_WEAK_FUNC(sub_8227B49C);
PPC_FUNC_IMPL(__imp__sub_8227B49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B4A0"))) PPC_WEAK_FUNC(sub_8227B4A0);
PPC_FUNC_IMPL(__imp__sub_8227B4A0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26292
	ctx.r4.s64 = r11.s64 + 26292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8227ca48
	sub_8227CA48(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,26492
	ctx.r4.s64 = r11.s64 + 26492;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r31,r10,22324
	r31.s64 = ctx.r10.s64 + 22324;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319758
	sub_82319758(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,26488(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// bl 0x8227b300
	sub_8227B300(ctx, base);
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

__attribute__((alias("__imp__sub_8227B534"))) PPC_WEAK_FUNC(sub_8227B534);
PPC_FUNC_IMPL(__imp__sub_8227B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B538"))) PPC_WEAK_FUNC(sub_8227B538);
PPC_FUNC_IMPL(__imp__sub_8227B538) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// bl 0x823b5b68
	sub_823B5B68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8227b578
	if (cr0.eq) goto loc_8227B578;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227b630
	goto loc_8227B630;
loc_8227B578:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lbz r6,87(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// bl 0x8227b368
	sub_8227B368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// bl 0x823b5b60
	sub_823B5B60(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8227b5b8
	if (!cr0.eq) goto loc_8227B5B8;
	// lbz r11,97(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x8227b5b8
	if (!cr6.eq) goto loc_8227B5B8;
	// li r31,1
	r31.s64 = 1;
loc_8227B5B8:
	// clrlwi r9,r31,24
	ctx.r9.u64 = r31.u32 & 0xFF;
	// lhz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8227b3f0
	sub_8227B3F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r4,90(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// bl 0x8227b3f0
	sub_8227B3F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// bl 0x8227b3f0
	sub_8227B3F0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r4,94(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// bl 0x8227b3f0
	sub_8227B3F0(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,24
	r11.s64 = 24;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8227B614:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8227b614
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8227B614;
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	r11.s64 = 0 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
loc_8227B630:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8227B638"))) PPC_WEAK_FUNC(sub_8227B638);
PPC_FUNC_IMPL(__imp__sub_8227B638) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6716
	ctx.r4.s64 = r11.s64 + 6716;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,22328
	r31.s64 = r11.s64 + 22328;
	// li r11,0
	r11.s64 = 0;
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// li r11,1
	r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,26504
	ctx.r4.s64 = r11.s64 + 26504;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-14500
	ctx.r4.s64 = r11.s64 + -14500;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8227b724
	if (!cr0.eq) goto loc_8227B724;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,22344
	r31.s64 = r11.s64 + 22344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82271840
	sub_82271840(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bne cr6,0x8227b708
	if (!cr6.eq) goto loc_8227B708;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8227B708:
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_8227B710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x8227b710
	if (cr6.lt) goto loc_8227B710;
loc_8227B724:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227B72C"))) PPC_WEAK_FUNC(sub_8227B72C);
PPC_FUNC_IMPL(__imp__sub_8227B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B730"))) PPC_WEAK_FUNC(sub_8227B730);
PPC_FUNC_IMPL(__imp__sub_8227B730) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lbz r11,22328(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 22328);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8227b768
	if (!cr0.eq) goto loc_8227B768;
	// li r31,0
	r31.s64 = 0;
loc_8227B754:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x8227b754
	if (cr6.lt) goto loc_8227B754;
loc_8227B768:
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

__attribute__((alias("__imp__sub_8227B77C"))) PPC_WEAK_FUNC(sub_8227B77C);
PPC_FUNC_IMPL(__imp__sub_8227B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B780"))) PPC_WEAK_FUNC(sub_8227B780);
PPC_FUNC_IMPL(__imp__sub_8227B780) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,22328
	r31.s64 = r11.s64 + 22328;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22344
	r11.s64 = r11.s64 + 22344;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// beq 0x8227b8b0
	if (cr0.eq) goto loc_8227B8B0;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8227b8b0
	if (!cr0.eq) goto loc_8227B8B0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sradi r10,r10,32
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0xFFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f0,18804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18804);
	f0.f64 = double(temp.f32);
	// clrldi r11,r9,32
	r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8227b8b0
	if (cr6.gt) goto loc_8227B8B0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,31836(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 31836);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// bne cr6,0x8227b890
	if (!cr6.eq) goto loc_8227B890;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8227b8b0
	if (cr6.eq) goto loc_8227B8B0;
loc_8227B890:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r29.u8);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8227B8B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227B8B8"))) PPC_WEAK_FUNC(sub_8227B8B8);
PPC_FUNC_IMPL(__imp__sub_8227B8B8) {
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
	// beq 0x8227b8f8
	if (cr0.eq) goto loc_8227B8F8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,19756
	ctx.r3.s64 = r11.s64 + 19756;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8227b900
	goto loc_8227B900;
loc_8227B8F8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8227B900:
	// mulli r3,r31,52
	ctx.r3.s64 = r31.s64 * 52;
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

__attribute__((alias("__imp__sub_8227B91C"))) PPC_WEAK_FUNC(sub_8227B91C);
PPC_FUNC_IMPL(__imp__sub_8227B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227B920"))) PPC_WEAK_FUNC(sub_8227B920);
PPC_FUNC_IMPL(__imp__sub_8227B920) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// b 0x8227b95c
	goto loc_8227B95C;
loc_8227B93C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8227b954
	if (cr6.eq) goto loc_8227B954;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8227B954:
	// addi r31,r31,52
	r31.s64 = r31.s64 + 52;
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
loc_8227B95C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8227b93c
	if (!cr6.eq) goto loc_8227B93C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8227B970"))) PPC_WEAK_FUNC(sub_8227B970);
PPC_FUNC_IMPL(__imp__sub_8227B970) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,26620(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26620);
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
	// bl 0x8227b8b8
	sub_8227B8B8(ctx, base);
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
	// bl 0x8227b920
	sub_8227B920(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8227B978"))) PPC_WEAK_FUNC(sub_8227B978);
PPC_FUNC_IMPL(__imp__sub_8227B978) {
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
	// bl 0x8227b8b8
	sub_8227B8B8(ctx, base);
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
	// bl 0x8227b920
	sub_8227B920(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8227B9D4"))) PPC_WEAK_FUNC(sub_8227B9D4);
PPC_FUNC_IMPL(__imp__sub_8227B9D4) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,26620(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26620);
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
	// mulli r3,r11,52
	ctx.r3.s64 = r11.s64 * 52;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,52
	r27.s64 = 52;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x8227bae8
	if (!cr6.lt) goto loc_8227BAE8;
	// lis r11,1260
	r11.s64 = 82575360;
	// ori r11,r11,20164
	r11.u64 = r11.u64 | 20164;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8227ba58
	if (!cr6.gt) goto loc_8227BA58;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_8227BA58:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw r26,r11,r27
	r26.s32 = r11.s32 / r27.s32;
	// beq cr6,0x8227babc
	if (cr6.eq) goto loc_8227BABC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227b978
	sub_8227B978(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8227ba8c
	goto loc_8227BA8C;
loc_8227BA88:
	// addi r11,r11,-52
	r11.s64 = r11.s64 + -52;
loc_8227BA8C:
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
	// bne 0x8227ba88
	if (!cr0.eq) goto loc_8227BA88;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// mulli r3,r11,52
	ctx.r3.s64 = r11.s64 * 52;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8227bacc
	goto loc_8227BACC;
loc_8227BABC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227b8b8
	sub_8227B8B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8227BACC:
	// mulli r10,r26,52
	ctx.r10.s64 = r26.s64 * 52;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mulli r11,r29,52
	r11.s64 = r29.s64 * 52;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8227BAE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8227B9DC"))) PPC_WEAK_FUNC(sub_8227B9DC);
PPC_FUNC_IMPL(__imp__sub_8227B9DC) {
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
	// mulli r3,r11,52
	ctx.r3.s64 = r11.s64 * 52;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_8227BA08"))) PPC_WEAK_FUNC(sub_8227BA08);
PPC_FUNC_IMPL(__imp__sub_8227BA08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,52
	r27.s64 = 52;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x8227bae8
	if (!cr6.lt) goto loc_8227BAE8;
	// lis r11,1260
	r11.s64 = 82575360;
	// ori r11,r11,20164
	r11.u64 = r11.u64 | 20164;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8227ba58
	if (!cr6.gt) goto loc_8227BA58;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_8227BA58:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw r26,r11,r27
	r26.s32 = r11.s32 / r27.s32;
	// beq cr6,0x8227babc
	if (cr6.eq) goto loc_8227BABC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227b978
	sub_8227B978(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8227ba8c
	goto loc_8227BA8C;
loc_8227BA88:
	// addi r11,r11,-52
	r11.s64 = r11.s64 + -52;
loc_8227BA8C:
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
	// bne 0x8227ba88
	if (!cr0.eq) goto loc_8227BA88;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r27
	r11.s32 = r11.s32 / r27.s32;
	// mulli r3,r11,52
	ctx.r3.s64 = r11.s64 * 52;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8227bacc
	goto loc_8227BACC;
loc_8227BABC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227b8b8
	sub_8227B8B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8227BACC:
	// mulli r10,r26,52
	ctx.r10.s64 = r26.s64 * 52;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mulli r11,r29,52
	r11.s64 = r29.s64 * 52;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8227BAE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8227BAF0"))) PPC_WEAK_FUNC(sub_8227BAF0);
PPC_FUNC_IMPL(__imp__sub_8227BAF0) {
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
	// lis r11,-32128
	r11.s64 = -2105540608;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,22992
	ctx.r3.s64 = r11.s64 + 22992;
	// bl 0x8227ba08
	sub_8227BA08(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,22392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22392, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BB28"))) PPC_WEAK_FUNC(sub_8227BB28);
PPC_FUNC_IMPL(__imp__sub_8227BB28) {
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
	// lwz r16,26704(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26704);
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
	// lwz r11,22880(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22880);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,22876
	r30.s64 = ctx.r9.s64 + 22876;
	// bne 0x8227bb74
	if (!cr0.eq) goto loc_8227BB74;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,22880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22880, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,26680
	ctx.r4.s64 = r11.s64 + 26680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8227BB74:
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

__attribute__((alias("__imp__sub_8227BB30"))) PPC_WEAK_FUNC(sub_8227BB30);
PPC_FUNC_IMPL(__imp__sub_8227BB30) {
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
	// lwz r11,22880(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22880);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,22876
	r30.s64 = ctx.r9.s64 + 22876;
	// bne 0x8227bb74
	if (!cr0.eq) goto loc_8227BB74;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,22880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22880, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,26680
	ctx.r4.s64 = r11.s64 + 26680;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8227BB74:
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

__attribute__((alias("__imp__sub_8227BB88"))) PPC_WEAK_FUNC(sub_8227BB88);
PPC_FUNC_IMPL(__imp__sub_8227BB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,22880
	r11.s64 = r11.s64 + 22880;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,22880
	ctx.r10.s64 = ctx.r10.s64 + 22880;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BBB0"))) PPC_WEAK_FUNC(sub_8227BBB0);
PPC_FUNC_IMPL(__imp__sub_8227BBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r11,0
	r11.s64 = 0;
	// stb r11,22416(r10)
	PPC_STORE_U8(ctx.r10.u32 + 22416, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BBC0"))) PPC_WEAK_FUNC(sub_8227BBC0);
PPC_FUNC_IMPL(__imp__sub_8227BBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f0.f64 = double(temp.f32);
	// li r11,19
	r11.s64 = 19;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8227BBD0:
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8227bbf0
	if (!cr6.gt) goto loc_8227BBF0;
	// addi r8,r11,-2
	ctx.r8.s64 = r11.s64 + -2;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// b 0x8227bc08
	goto loc_8227BC08;
loc_8227BBF0:
	// fneg f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8227bc0c
	if (!cr6.lt) goto loc_8227BC0C;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r7,r10,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_8227BC08:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_8227BC0C:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8227bc20
	if (!cr6.gt) goto loc_8227BC20;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// b 0x8227bc30
	goto loc_8227BC30;
loc_8227BC20:
	// fneg f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8227bc40
	if (!cr6.lt) goto loc_8227BC40;
	// addi r8,r11,-3
	ctx.r8.s64 = r11.s64 + -3;
loc_8227BC30:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_8227BC40:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// blt cr6,0x8227bbd0
	if (cr6.lt) goto loc_8227BBD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BC54"))) PPC_WEAK_FUNC(sub_8227BC54);
PPC_FUNC_IMPL(__imp__sub_8227BC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227BC58"))) PPC_WEAK_FUNC(sub_8227BC58);
PPC_FUNC_IMPL(__imp__sub_8227BC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,22424
	r11.s64 = r11.s64 + 22424;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BC6C"))) PPC_WEAK_FUNC(sub_8227BC6C);
PPC_FUNC_IMPL(__imp__sub_8227BC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227BC70"))) PPC_WEAK_FUNC(sub_8227BC70);
PPC_FUNC_IMPL(__imp__sub_8227BC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22808
	ctx.r3.s64 = r11.s64 + 22808;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r6,18972(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x823262c8
	sub_823262C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227BC8C"))) PPC_WEAK_FUNC(sub_8227BC8C);
PPC_FUNC_IMPL(__imp__sub_8227BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227BC90"))) PPC_WEAK_FUNC(sub_8227BC90);
PPC_FUNC_IMPL(__imp__sub_8227BC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22808
	ctx.r3.s64 = r11.s64 + 22808;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r5,18972(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// b 0x823257c0
	sub_823257C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227BCA8"))) PPC_WEAK_FUNC(sub_8227BCA8);
PPC_FUNC_IMPL(__imp__sub_8227BCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mulli r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 * 48;
	// addi r11,r11,22424
	r11.s64 = r11.s64 + 22424;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BCC0"))) PPC_WEAK_FUNC(sub_8227BCC0);
PPC_FUNC_IMPL(__imp__sub_8227BCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lis r8,-32136
	ctx.r8.s64 = -2106064896;
	// addi r9,r11,22424
	ctx.r9.s64 = r11.s64 + 22424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,28
	r11.s64 = ctx.r9.s64 + 28;
	// addi r8,r8,22400
	ctx.r8.s64 = ctx.r8.s64 + 22400;
loc_8227BCD8:
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x8227bcf0
	if (!cr0.eq) goto loc_8227BCF0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r7,r3
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, xer);
	// beq cr6,0x8227bd0c
	if (cr6.eq) goto loc_8227BD0C;
loc_8227BCF0:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r7,r9,412
	ctx.r7.s64 = ctx.r9.s64 + 412;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x8227bcd8
	if (cr6.lt) goto loc_8227BCD8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8227BD0C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BD14"))) PPC_WEAK_FUNC(sub_8227BD14);
PPC_FUNC_IMPL(__imp__sub_8227BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227BD18"))) PPC_WEAK_FUNC(sub_8227BD18);
PPC_FUNC_IMPL(__imp__sub_8227BD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,22424
	r11.s64 = r11.s64 + 22424;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BD30"))) PPC_WEAK_FUNC(sub_8227BD30);
PPC_FUNC_IMPL(__imp__sub_8227BD30) {
	PPC_FUNC_PROLOGUE();
	// b 0x8227bcc0
	sub_8227BCC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227BD34"))) PPC_WEAK_FUNC(sub_8227BD34);
PPC_FUNC_IMPL(__imp__sub_8227BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227BD38"))) PPC_WEAK_FUNC(sub_8227BD38);
PPC_FUNC_IMPL(__imp__sub_8227BD38) {
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
	// bl 0x8227bcc0
	sub_8227BCC0(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227BD6C"))) PPC_WEAK_FUNC(sub_8227BD6C);
PPC_FUNC_IMPL(__imp__sub_8227BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227BD70"))) PPC_WEAK_FUNC(sub_8227BD70);
PPC_FUNC_IMPL(__imp__sub_8227BD70) {
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
	// lwz r16,26816(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26816);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r6,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8227bb30
	sub_8227BB30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,104
	ctx.r7.s64 = r31.s64 + 104;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82145488
	sub_82145488(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227bdf0
	if (cr0.eq) goto loc_8227BDF0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227BDF0:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227be04
	if (cr0.eq) goto loc_8227BE04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227BE04:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227be18
	if (cr0.eq) goto loc_8227BE18;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227BE18:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,26756
	r11.s64 = r11.s64 + 26756;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8227BD78"))) PPC_WEAK_FUNC(sub_8227BD78);
PPC_FUNC_IMPL(__imp__sub_8227BD78) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r6,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8227bb30
	sub_8227BB30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r31,104
	ctx.r7.s64 = r31.s64 + 104;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82145488
	sub_82145488(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227bdf0
	if (cr0.eq) goto loc_8227BDF0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227BDF0:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227be04
	if (cr0.eq) goto loc_8227BE04;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227BE04:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8227be18
	if (cr0.eq) goto loc_8227BE18;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8227BE18:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,26756
	r11.s64 = r11.s64 + 26756;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_8227BE40"))) PPC_WEAK_FUNC(sub_8227BE40);
PPC_FUNC_IMPL(__imp__sub_8227BE40) {
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

__attribute__((alias("__imp__sub_8227BE68"))) PPC_WEAK_FUNC(sub_8227BE68);
PPC_FUNC_IMPL(__imp__sub_8227BE68) {
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

__attribute__((alias("__imp__sub_8227BE90"))) PPC_WEAK_FUNC(sub_8227BE90);
PPC_FUNC_IMPL(__imp__sub_8227BE90) {
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

