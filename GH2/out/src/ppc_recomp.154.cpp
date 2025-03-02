#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825536C8"))) PPC_WEAK_FUNC(sub_825536C8);
PPC_FUNC_IMPL(__imp__sub_825536C8) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,109
	ctx.r6.s64 = 109;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82552f38
	sub_82552F38(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255375c
	if (cr6.eq) goto loc_8255375C;
	// rlwinm r11,r28,0,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r31,-32
	ctx.r10.s64 = r31.s64 + -32;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8255375C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82553768"))) PPC_WEAK_FUNC(sub_82553768);
PPC_FUNC_IMPL(__imp__sub_82553768) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r27,14208
	r27.s64 = 14208;
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825537b8
	if (cr0.eq) goto loc_825537B8;
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
loc_825537B8:
	// li r5,34
	ctx.r5.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825537e4
	if (cr0.eq) goto loc_825537E4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825537E4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r25.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,18,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825538b0
	if (cr0.eq) goto loc_825538B0;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// b 0x82553840
	goto loc_82553840;
loc_8255382C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8255383c
	if (cr6.eq) goto loc_8255383C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8255383C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_82553840:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255382c
	if (!cr0.eq) goto loc_8255382C;
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825538b0
	if (cr0.eq) goto loc_825538B0;
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
	// lwz r28,12(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// b 0x825538a8
	goto loc_825538A8;
loc_8255385C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82553874
	if (cr6.lt) goto loc_82553874;
	// bne cr6,0x8255393c
	if (!cr6.eq) goto loc_8255393C;
	// li r26,72
	r26.s64 = 72;
	// b 0x82553878
	goto loc_82553878;
loc_82553874:
	// li r26,12
	r26.s64 = 12;
loc_82553878:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// lwz r28,4(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 4);
loc_825538A8:
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8255385c
	if (!cr0.eq) goto loc_8255385C;
loc_825538B0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// rlwinm r5,r11,15,27,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x1C;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// addi r10,r11,-111
	ctx.r10.s64 = r11.s64 + -111;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82553948
	if (cr0.eq) goto loc_82553948;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// add r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 + r29.u64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,100(r30)
	PPC_STORE_U32(r30.u32 + 100, ctx.r10.u32);
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwimi r10,r8,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// rlwimi r10,r8,0,3,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x1FFF8000) | (ctx.r10.u64 & 0xFFFFFFFFE0007FFF);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// rlwimi r9,r10,0,3,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFDFFFFFFF) | (ctx.r9.u64 & 0x20000000);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x82553a80
	goto loc_82553A80;
loc_8255393C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82553948:
	// cmplwi cr6,r11,118
	cr6.compare<uint32_t>(r11.u32, 118, xer);
	// bne cr6,0x82553988
	if (!cr6.eq) goto loc_82553988;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824ce3c0
	sub_824CE3C0(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// b 0x82553a80
	goto loc_82553A80;
loc_82553988:
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(r11.u32, 96, xer);
	// beq cr6,0x825539a0
	if (cr6.eq) goto loc_825539A0;
	// cmplwi cr6,r11,98
	cr6.compare<uint32_t>(r11.u32, 98, xer);
	// beq cr6,0x825539a0
	if (cr6.eq) goto loc_825539A0;
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(r11.u32, 99, xer);
	// bne cr6,0x825539a4
	if (!cr6.eq) goto loc_825539A4;
loc_825539A0:
	// li r25,1
	r25.s64 = 1;
loc_825539A4:
	// clrlwi. r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825539f8
	if (cr0.eq) goto loc_825539F8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r29,-24
	r11.s64 = r29.s64 + -24;
	// add r27,r3,r11
	r27.u64 = ctx.r3.u64 + r11.u64;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82553a80
	if (cr0.eq) goto loc_82553A80;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824ce3c0
	sub_824CE3C0(ctx, base);
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// b 0x82553a50
	goto loc_82553A50;
loc_825539F8:
	// addi r11,r11,-95
	r11.s64 = r11.s64 + -95;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82553a80
	if (cr0.eq) goto loc_82553A80;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r29,-20
	r11.s64 = r29.s64 + -20;
	// add r27,r3,r11
	r27.u64 = ctx.r3.u64 + r11.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82553a80
	if (cr0.eq) goto loc_82553A80;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824ce3c0
	sub_824CE3C0(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
loc_82553A50:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// stwx r29,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + r11.u32, r29.u32);
loc_82553A80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82553A8C"))) PPC_WEAK_FUNC(sub_82553A8C);
PPC_FUNC_IMPL(__imp__sub_82553A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553A90"))) PPC_WEAK_FUNC(sub_82553A90);
PPC_FUNC_IMPL(__imp__sub_82553A90) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,12(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15744
	r11.s64 = r11.s64 + -15744;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82553bac
	if (cr0.eq) goto loc_82553BAC;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r29,-8
	r11.s64 = r29.s64 + -8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x82553bac
	if (!cr6.eq) goto loc_82553BAC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82553768
	sub_82553768(ctx, base);
	// rlwinm r11,r30,0,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82553B6C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82553ba0
	if (cr6.eq) goto loc_82553BA0;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82553b98
	if (cr6.eq) goto loc_82553B98;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82553b98
	if (cr6.eq) goto loc_82553B98;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
loc_82553B98:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x82553b6c
	goto loc_82553B6C;
loc_82553BA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_82553BAC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
}

__attribute__((alias("__imp__sub_82553BB8"))) PPC_WEAK_FUNC(sub_82553BB8);
PPC_FUNC_IMPL(__imp__sub_82553BB8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mulli r11,r23,40
	r11.s64 = r23.s64 * 40;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82553bfc
	if (!cr6.eq) goto loc_82553BFC;
	// bl 0x824cf828
	sub_824CF828(ctx, base);
loc_82553BFC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi. r7,r28,24
	ctx.r7.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r24,r30
	r24.u64 = r30.u64;
	// rlwinm r8,r11,29,18,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x3FFF;
	// beq 0x82553c20
	if (cr0.eq) goto loc_82553C20;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r24,r11,28,18,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3FFF;
loc_82553C20:
	// li r27,-1
	r27.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82553c7c
	if (cr6.eq) goto loc_82553C7C;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 28);
loc_82553C3C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r10,28,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r6,r24
	cr6.compare<uint32_t>(ctx.r6.u32, r24.u32, xer);
	// bne cr6,0x82553c64
	if (!cr6.eq) goto loc_82553C64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// or r26,r10,r26
	r26.u64 = ctx.r10.u64 | r26.u64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82553c64
	if (!cr6.lt) goto loc_82553C64;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82553C64:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82553c3c
	if (cr6.lt) goto loc_82553C3C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82553c98
	if (!cr6.eq) goto loc_82553C98;
loc_82553C7C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82553c8c
	if (!cr6.eq) goto loc_82553C8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82553d40
	goto loc_82553D40;
loc_82553C8C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82553C98:
	// addi r11,r25,-103
	r11.s64 = r25.s64 + -103;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r6,r27,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwzx r11,r6,r11
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// rlwinm r11,r11,14,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82553490
	sub_82553490(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82553388
	sub_82553388(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,28,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82553d28
	if (!cr0.eq) goto loc_82553D28;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// b 0x82553d38
	goto loc_82553D38;
loc_82553D28:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82553d3c
	if (!cr6.eq) goto loc_82553D3C;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_82553D38:
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_82553D3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82553D40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82553D48"))) PPC_WEAK_FUNC(sub_82553D48);
PPC_FUNC_IMPL(__imp__sub_82553D48) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addi r31,r28,764
	r31.s64 = r28.s64 + 764;
	// lwz r29,16(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r25,r29,1
	r25.s64 = r29.s64 + 1;
	// mulli r4,r25,40
	ctx.r4.s64 = r25.s64 * 40;
	// cmplwi cr6,r4,132
	cr6.compare<uint32_t>(ctx.r4.u32, 132, xer);
	// ble cr6,0x82553d88
	if (!cr6.gt) goto loc_82553D88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a9e10
	sub_824A9E10(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82553df4
	goto loc_82553DF4;
loc_82553D88:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x82553dac
	if (cr6.lt) goto loc_82553DAC;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// stw r10,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// b 0x82553df0
	goto loc_82553DF0;
loc_82553DAC:
	// rlwinm r11,r4,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	r30.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82553de4
	if (cr0.eq) goto loc_82553DE4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x82553df0
	goto loc_82553DF0;
loc_82553DE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a9530
	sub_824A9530(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82553DF0:
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82553DF4:
	// mulli r29,r29,40
	r29.s64 = r29.s64 * 40;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r30,r29,r27
	r30.u64 = r29.u64 + r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r29,132
	cr6.compare<uint32_t>(r29.u32, 132, xer);
	// ble cr6,0x82553e5c
	if (!cr6.gt) goto loc_82553E5C;
	// addi r3,r11,-12
	ctx.r3.s64 = r11.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// b 0x82553e74
	goto loc_82553E74;
loc_82553E5C:
	// rlwinm r10,r29,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r11.u32);
loc_82553E74:
	// stw r27,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r27.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r25,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r25.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwimi r10,r24,4,25,27
	ctx.r10.u64 = (__builtin_rotateleft32(r24.u32, 4) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82553eb8
	if (cr6.eq) goto loc_82553EB8;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r4,r11,r10
	ctx.r4.s32 = r11.s32 / ctx.r10.s32;
	// bl 0x824cf828
	sub_824CF828(ctx, base);
loc_82553EB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82553EC4"))) PPC_WEAK_FUNC(sub_82553EC4);
PPC_FUNC_IMPL(__imp__sub_82553EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553EC8"))) PPC_WEAK_FUNC(sub_82553EC8);
PPC_FUNC_IMPL(__imp__sub_82553EC8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82521ce8
	sub_82521CE8(ctx, base);
	// rlwinm r23,r27,3,0,28
	r23.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r25,14208
	r25.s64 = 14208;
	// add r22,r23,r3
	r22.u64 = r23.u64 + ctx.r3.u64;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82553f78
	if (!cr6.eq) goto loc_82553F78;
	// rotlwi r31,r10,0
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82553f78
	if (cr0.eq) goto loc_82553F78;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r11,17
	ctx.r10.u64 = r11.u32 & 0x7FFF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82553f78
	if (!cr6.eq) goto loc_82553F78;
	// rlwinm r11,r11,17,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x3FFF;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x825541b0
	if (cr6.eq) goto loc_825541B0;
loc_82553F78:
	// addi r26,r28,16
	r26.s64 = r28.s64 + 16;
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82554004
	if (!cr0.eq) goto loc_82554004;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82554004
	if (cr0.eq) goto loc_82554004;
loc_82553F90:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82553fe0
	if (cr0.eq) goto loc_82553FE0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r11,17
	ctx.r10.u64 = r11.u32 & 0x7FFF;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x82553fe0
	if (!cr6.eq) goto loc_82553FE0;
	// rlwinm r11,r11,17,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x3FFF;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// beq cr6,0x82553ffc
	if (cr6.eq) goto loc_82553FFC;
loc_82553FE0:
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,36(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82554004
	if (!cr0.eq) goto loc_82554004;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82553f90
	if (!cr6.eq) goto loc_82553F90;
	// b 0x82554004
	goto loc_82554004;
loc_82553FFC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82554170
	if (!cr6.eq) goto loc_82554170;
loc_82554004:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82554014
	if (cr0.eq) goto loc_82554014;
	// li r11,0
	r11.s64 = 0;
loc_82554014:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x825540a0
	if (!cr6.eq) goto loc_825540A0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,115
	ctx.r6.s64 = 115;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ori r7,r11,1
	ctx.r7.u64 = r11.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r30,r10,-32
	r30.s64 = ctx.r10.s64 + -32;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,115
	ctx.r4.s64 = 115;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwimi r10,r27,15,3,16
	ctx.r10.u64 = (__builtin_rotateleft32(r27.u32, 15) & 0x1FFF8000) | (ctx.r10.u64 & 0xFFFFFFFFE0007FFF);
	// rlwimi r10,r29,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82554170
	goto loc_82554170;
loc_825540A0:
	// bl 0x82553608
	sub_82553608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwimi r10,r27,15,3,16
	ctx.r10.u64 = (__builtin_rotateleft32(r27.u32, 15) & 0x1FFF8000) | (ctx.r10.u64 & 0xFFFFFFFFE0007FFF);
	// clrlwi r9,r29,17
	ctx.r9.u64 = r29.u32 & 0x7FFF;
	// mulli r28,r29,40
	r28.s64 = r29.s64 * 40;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r8,0,0,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE0000000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82554114
	if (!cr6.eq) goto loc_82554114;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm. r11,r11,0,5,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82554114
	if (cr0.eq) goto loc_82554114;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824cf828
	sub_824CF828(ctx, base);
loc_82554114:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82554170
	if (cr0.eq) goto loc_82554170;
	// lwzx r11,r11,r23
	r11.u64 = PPC_LOAD_U32(r11.u32 + r23.u32);
	// rlwinm r11,r11,14,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82554158
	if (cr6.eq) goto loc_82554158;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82554170
	if (!cr6.eq) goto loc_82554170;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82554170
	if (cr6.eq) goto loc_82554170;
	// ori r11,r11,6
	r11.u64 = r11.u64 | 6;
	// b 0x8255416c
	goto loc_8255416C;
loc_82554158:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x82554170
	if (cr6.eq) goto loc_82554170;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_8255416C:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82554170:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82554190
	if (!cr0.eq) goto loc_82554190;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825541a0
	if (!cr0.eq) goto loc_825541A0;
loc_82554190:
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// stw r31,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r31.u32);
	// rlwimi r10,r11,0,16,14
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r10.u64 & 0x10000);
	// stw r10,4(r22)
	PPC_STORE_U32(r22.u32 + 4, ctx.r10.u32);
loc_825541A0:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// rlwimi r10,r11,0,16,14
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r10.u64 & 0x10000);
	// stw r10,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r10.u32);
loc_825541B0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_825541BC"))) PPC_WEAK_FUNC(sub_825541BC);
PPC_FUNC_IMPL(__imp__sub_825541BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825541C0"))) PPC_WEAK_FUNC(sub_825541C0);
PPC_FUNC_IMPL(__imp__sub_825541C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_825541DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255420c
	if (cr6.eq) goto loc_8255420C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82554204
	if (!cr0.eq) goto loc_82554204;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82554204:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x825541dc
	goto loc_825541DC;
loc_8255420C:
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// lis r11,-32178
	r11.s64 = -2108817408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-30024
	ctx.r5.s64 = r11.s64 + -30024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x824d7fc8
	sub_824D7FC8(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82554230:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825542f0
	if (cr6.eq) goto loc_825542F0;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825542e0
	if (!cr0.eq) goto loc_825542E0;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
loc_82554264:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825542d8
	if (cr6.eq) goto loc_825542D8;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825542d0
	if (!cr0.eq) goto loc_825542D0;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x825542cc
	if (!cr6.eq) goto loc_825542CC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// bne 0x825542ac
	if (!cr0.eq) goto loc_825542AC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_825542AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r11,r9,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r4,r3,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
loc_825542CC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_825542D0:
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82554264
	goto loc_82554264;
loc_825542D8:
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825542e8
	if (cr0.eq) goto loc_825542E8;
loc_825542E0:
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82554230
	goto loc_82554230;
loc_825542E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255431c
	goto loc_8255431C;
loc_825542F0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82554314
	if (cr6.eq) goto loc_82554314;
	// addi r5,r29,-1
	ctx.r5.s64 = r29.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825526a8
	sub_825526A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x82554318
	if (!cr0.eq) goto loc_82554318;
loc_82554314:
	// li r11,1
	r11.s64 = 1;
loc_82554318:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_8255431C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82554324"))) PPC_WEAK_FUNC(sub_82554324);
PPC_FUNC_IMPL(__imp__sub_82554324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554328"))) PPC_WEAK_FUNC(sub_82554328);
PPC_FUNC_IMPL(__imp__sub_82554328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8255432C:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82554358
	if (!cr0.eq) goto loc_82554358;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	xer.ca = r11.u32 > 35;
	r11.s64 = r11.s64 + -36;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82554358
	if (cr0.eq) goto loc_82554358;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8255432c
	if (!cr6.eq) goto loc_8255432C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82554358:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554360"))) PPC_WEAK_FUNC(sub_82554360);
PPC_FUNC_IMPL(__imp__sub_82554360) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825543c0
	if (cr0.eq) goto loc_825543C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825543C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r28,24
	r11.s64 = r28.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82554414"))) PPC_WEAK_FUNC(sub_82554414);
PPC_FUNC_IMPL(__imp__sub_82554414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554418"))) PPC_WEAK_FUNC(sub_82554418);
PPC_FUNC_IMPL(__imp__sub_82554418) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,58
	ctx.r6.s64 = 58;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82554478
	if (cr0.eq) goto loc_82554478;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554478:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r28,24
	r11.s64 = r28.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825544CC"))) PPC_WEAK_FUNC(sub_825544CC);
PPC_FUNC_IMPL(__imp__sub_825544CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825544D0"))) PPC_WEAK_FUNC(sub_825544D0);
PPC_FUNC_IMPL(__imp__sub_825544D0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,59
	ctx.r6.s64 = 59;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82554530
	if (cr0.eq) goto loc_82554530;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554530:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r28,24
	r11.s64 = r28.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82554584"))) PPC_WEAK_FUNC(sub_82554584);
PPC_FUNC_IMPL(__imp__sub_82554584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554588"))) PPC_WEAK_FUNC(sub_82554588);
PPC_FUNC_IMPL(__imp__sub_82554588) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825545e8
	if (cr0.eq) goto loc_825545E8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825545E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r28,24
	r11.s64 = r28.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255463C"))) PPC_WEAK_FUNC(sub_8255463C);
PPC_FUNC_IMPL(__imp__sub_8255463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554640"))) PPC_WEAK_FUNC(sub_82554640);
PPC_FUNC_IMPL(__imp__sub_82554640) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,61
	ctx.r6.s64 = 61;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825546a0
	if (cr0.eq) goto loc_825546A0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825546A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r28,24
	r11.s64 = r28.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825546F4"))) PPC_WEAK_FUNC(sub_825546F4);
PPC_FUNC_IMPL(__imp__sub_825546F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825546F8"))) PPC_WEAK_FUNC(sub_825546F8);
PPC_FUNC_IMPL(__imp__sub_825546F8) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82554760
	if (cr0.eq) goto loc_82554760;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554760:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// stw r3,40(r28)
	PPC_STORE_U32(r28.u32 + 40, ctx.r3.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255479c
	if (cr0.eq) goto loc_8255479C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8255479C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r3,44(r28)
	PPC_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// beq cr6,0x825547e4
	if (cr6.eq) goto loc_825547E4;
	// rlwinm r11,r28,0,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r10,r27,-32
	ctx.r10.s64 = r27.s64 + -32;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_825547E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825547F0"))) PPC_WEAK_FUNC(sub_825547F0);
PPC_FUNC_IMPL(__imp__sub_825547F0) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82554870
	if (cr0.eq) goto loc_82554870;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554870:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// addi r11,r28,24
	r11.s64 = r28.s64 + 24;
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r5,r11,-32
	ctx.r5.s64 = r11.s64 + -32;
	// rlwinm r8,r9,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwimi r7,r8,14,15,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825548DC"))) PPC_WEAK_FUNC(sub_825548DC);
PPC_FUNC_IMPL(__imp__sub_825548DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825548E0"))) PPC_WEAK_FUNC(sub_825548E0);
PPC_FUNC_IMPL(__imp__sub_825548E0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x82523428
	sub_82523428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// addi r11,r29,24
	r11.s64 = r29.s64 + 24;
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r5,r11,-32
	ctx.r5.s64 = r11.s64 + -32;
	// rlwinm r8,r9,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwimi r7,r8,14,15,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825549B0"))) PPC_WEAK_FUNC(sub_825549B0);
PPC_FUNC_IMPL(__imp__sub_825549B0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x82523428
	sub_82523428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// addi r11,r29,24
	r11.s64 = r29.s64 + 24;
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r5,r11,-32
	ctx.r5.s64 = r11.s64 + -32;
	// rlwinm r8,r9,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwimi r7,r8,14,15,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 14) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82554A80"))) PPC_WEAK_FUNC(sub_82554A80);
PPC_FUNC_IMPL(__imp__sub_82554A80) {
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
	// rlwinm r4,r31,30,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3;
	// clrlwi r3,r31,30
	ctx.r3.u64 = r31.u32 & 0x3;
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
	// rlwinm r4,r31,28,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0x3;
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
	// rlwinm r4,r31,26,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 26) & 0x3;
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
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

__attribute__((alias("__imp__sub_82554AC4"))) PPC_WEAK_FUNC(sub_82554AC4);
PPC_FUNC_IMPL(__imp__sub_82554AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82554AC8"))) PPC_WEAK_FUNC(sub_82554AC8);
PPC_FUNC_IMPL(__imp__sub_82554AC8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82554b00
	if (cr0.eq) goto loc_82554B00;
	// rlwinm. r10,r30,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82554b00
	if (cr0.eq) goto loc_82554B00;
loc_82554AF8:
	// li r11,0
	r11.s64 = 0;
	// b 0x82554b28
	goto loc_82554B28;
loc_82554B00:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82554b10
	if (cr0.eq) goto loc_82554B10;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82554af8
	if (!cr0.eq) goto loc_82554AF8;
loc_82554B10:
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82554b24
	if (cr0.eq) goto loc_82554B24;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x82554b28
	if (!cr0.eq) goto loc_82554B28;
loc_82554B24:
	// li r11,1
	r11.s64 = 1;
loc_82554B28:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82554b60
	if (!cr0.eq) goto loc_82554B60;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251f468
	sub_8251F468(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r10,r11,0,4,6
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82554B60:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// clrlwi r11,r10,27
	r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm. r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82554b80
	if (cr0.eq) goto loc_82554B80;
	// rlwinm. r8,r30,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82554b80
	if (cr0.eq) goto loc_82554B80;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82554B80:
	// and r8,r11,r30
	ctx.r8.u64 = r11.u64 & r30.u64;
	// rlwinm. r8,r8,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82554b94
	if (cr0.eq) goto loc_82554B94;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
loc_82554B94:
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82554ba8
	if (cr0.eq) goto loc_82554BA8;
	// rlwinm. r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82554ba8
	if (cr0.eq) goto loc_82554BA8;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82554BA8:
	// rlwinm r7,r10,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r5,r10,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// or r6,r11,r9
	ctx.r6.u64 = r11.u64 | ctx.r9.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82551398
	sub_82551398(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82554BC8"))) PPC_WEAK_FUNC(sub_82554BC8);
PPC_FUNC_IMPL(__imp__sub_82554BC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r28,12(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// beq 0x82554c68
	if (cr0.eq) goto loc_82554C68;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824bc450
	sub_824BC450(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// rlwinm r11,r29,0,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r29
	r28.u64 = r29.u64;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwimi r8,r11,0,7,3
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF1FFFFFF) | (ctx.r8.u64 & 0xE000000);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-32
	ctx.r7.s64 = ctx.r10.s64 + -32;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r11,544(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// addi r6,r11,-32
	ctx.r6.s64 = r11.s64 + -32;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_82554C68:
	// lis r11,-28311
	r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	r11.u64 = r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// li r5,228
	ctx.r5.s64 = 228;
	// rldimi r11,r10,32,0
	r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (r11.u64 & 0xFFFFFFFF);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,7,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// srd r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwimi r11,r10,13,16,18
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xE000) | (r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r8,r11,1,27,30
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x1E) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r8,r11,1,15,17
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// bl 0x825518d8
	sub_825518D8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82554dd8
	if (cr0.eq) goto loc_82554DD8;
	// rlwinm r10,r27,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 28) & 0xFFFFFFF;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,61
	cr6.compare<uint32_t>(ctx.r10.u32, 61, xer);
	// bne cr6,0x82554d20
	if (!cr6.eq) goto loc_82554D20;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82554d28
	goto loc_82554D28;
loc_82554D20:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x82554d2c
	if (cr6.gt) goto loc_82554D2C;
loc_82554D28:
	// li r11,1
	r11.s64 = 1;
loc_82554D2C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82554dd8
	if (cr0.eq) goto loc_82554DD8;
	// lwz r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// lwz r29,92(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x82554dc8
	if (!cr0.eq) goto loc_82554DC8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,116
	ctx.r6.s64 = 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// lwz r11,544(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ori r7,r11,1
	ctx.r7.u64 = r11.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r27,544(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// lwz r5,92(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x82554db8
	if (cr0.eq) goto loc_82554DB8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824bb088
	sub_824BB088(ctx, base);
loc_82554DB8:
	// stw r29,92(r27)
	PPC_STORE_U32(r27.u32 + 92, r29.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_82554DC8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ba888
	sub_824BA888(ctx, base);
loc_82554DD8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82554DF0"))) PPC_WEAK_FUNC(sub_82554DF0);
PPC_FUNC_IMPL(__imp__sub_82554DF0) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,124
	ctx.r4.s64 = 124;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82554e44
	if (cr0.eq) goto loc_82554E44;
	// li r11,0
	r11.s64 = 0;
loc_82554E44:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,124
	ctx.r6.s64 = 124;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82552f38
	sub_82552F38(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82554e8c
	if (cr6.eq) goto loc_82554E8C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r9,r27,40
	ctx.r9.s64 = r27.s64 + 40;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82554E74:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82554e74
	if (!cr0.eq) goto loc_82554E74;
loc_82554E8C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82554ea0
	if (cr0.eq) goto loc_82554EA0;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// rlwimi r10,r11,14,10,17
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 14) & 0x3FC000) | (ctx.r10.u64 & 0xFFFFFFFFFFC03FFF);
	// stw r10,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r10.u32);
loc_82554EA0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82554eb0
	if (cr0.eq) goto loc_82554EB0;
	// li r11,0
	r11.s64 = 0;
loc_82554EB0:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r10,r27,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555004
	if (!cr0.eq) goto loc_82555004;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82555004
	if (cr6.eq) goto loc_82555004;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f13,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
loc_82554F0C:
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// rlwinm r5,r8,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwzx r5,r5,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// srw. r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82554f80
	if (cr0.eq) goto loc_82554F80;
	// li r11,4
	r11.s64 = 4;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82554f78
	if (!cr6.eq) goto loc_82554F78;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82554f68
	if (cr0.lt) goto loc_82554F68;
	// li r11,6
	r11.s64 = 6;
loc_82554F68:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82554fcc
	if (cr6.gt) goto loc_82554FCC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x82554fcc
	goto loc_82554FCC;
loc_82554F78:
	// li r11,6
	r11.s64 = 6;
	// b 0x82554fcc
	goto loc_82554FCC;
loc_82554F80:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82554f90
	if (cr6.lt) goto loc_82554F90;
	// li r11,2
	r11.s64 = 2;
loc_82554F90:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82554f9c
	if (cr6.gt) goto loc_82554F9C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_82554F9C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f12,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f12.u32);
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x82554fcc
	if (!cr6.eq) goto loc_82554FCC;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_82554FCC:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// slw r11,r11,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r7.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82554ff0
	if (cr6.eq) goto loc_82554FF0;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r11.u32);
loc_82554FF0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// bne 0x82554f0c
	if (!cr0.eq) goto loc_82554F0C;
loc_82555004:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82555010"))) PPC_WEAK_FUNC(sub_82555010);
PPC_FUNC_IMPL(__imp__sub_82555010) {
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255506c
	if (cr0.eq) goto loc_8255506C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mulli r31,r28,40
	r31.s64 = r28.s64 * 40;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82555050
	if (!cr6.eq) goto loc_82555050;
	// bl 0x824cf828
	sub_824CF828(ctx, base);
loc_82555050:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// li r27,0
	r27.s64 = 0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r25,r11,28,18,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3FFF;
loc_8255506C:
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// clrlwi. r26,r29,31
	r26.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x82555080
	if (!cr0.eq) goto loc_82555080;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82555080:
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555100
	if (!cr0.eq) goto loc_82555100;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82555100
	if (cr0.eq) goto loc_82555100;
loc_82555094:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15744
	r11.s64 = r11.s64 + -15744;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825550e8
	if (cr0.eq) goto loc_825550E8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r11,17
	ctx.r10.u64 = r11.u32 & 0x7FFF;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bne cr6,0x825550e8
	if (!cr6.eq) goto loc_825550E8;
	// rlwinm r11,r11,17,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x3FFF;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// beq cr6,0x82555148
	if (cr6.eq) goto loc_82555148;
loc_825550E8:
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,36(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555100
	if (!cr0.eq) goto loc_82555100;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82555094
	if (!cr6.eq) goto loc_82555094;
loc_82555100:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82555110
	if (!cr6.eq) goto loc_82555110;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82555110:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// ori r9,r11,3
	ctx.r9.u64 = r11.u64 | 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// bne cr6,0x82555128
	if (!cr6.eq) goto loc_82555128;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_82555128:
	// li r7,123
	ctx.r7.s64 = 123;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82553bb8
	sub_82553BB8(ctx, base);
loc_82555140:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
loc_82555148:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82555140
	goto loc_82555140;
}

__attribute__((alias("__imp__sub_82555150"))) PPC_WEAK_FUNC(sub_82555150);
PPC_FUNC_IMPL(__imp__sub_82555150) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f3,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stfs f4,260(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfs f2,244(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stfs f1,236(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// divwu r10,r11,r9
	ctx.r10.u32 = r11.u32 / ctx.r9.u32;
	// mulli r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 * 7;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,14
	r11.s64 = r11.s64 + 14;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8255527c
	if (cr0.eq) goto loc_8255527C;
	// li r26,1
	r26.s64 = 1;
loc_825551CC:
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r11,r11,0,10,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3FC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555270
	if (!cr0.eq) goto loc_82555270;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// blt cr6,0x82555270
	if (cr6.lt) goto loc_82555270;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255525c
	if (cr6.eq) goto loc_8255525C;
	// addi r6,r4,40
	ctx.r6.s64 = ctx.r4.s64 + 40;
loc_82555200:
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_82555210:
	// lwz r25,0(r9)
	r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r5,r25
	cr6.compare<int32_t>(ctx.r5.s32, r25.s32, xer);
	// bne cr6,0x82555238
	if (!cr6.eq) goto loc_82555238;
	// li r25,3
	r25.s64 = 3;
	// slw r24,r8,r11
	r24.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// slw r23,r26,r10
	r23.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// or r7,r23,r7
	ctx.r7.u64 = r23.u64 | ctx.r7.u64;
	// slw r25,r25,r11
	r25.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// andc r27,r27,r25
	r27.u64 = r27.u64 & ~r25.u64;
	// or r27,r27,r24
	r27.u64 = r27.u64 | r24.u64;
loc_82555238:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x82555210
	if (cr6.lt) goto loc_82555210;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x82555200
	if (cr6.lt) goto loc_82555200;
loc_8255525C:
	// slw r11,r26,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r26.u32 << (r28.u8 & 0x3F));
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825552e0
	if (cr0.eq) goto loc_825552E0;
loc_82555270:
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x825551cc
	if (!cr0.eq) goto loc_825551CC;
loc_8255527C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82554df0
	sub_82554DF0(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// rlwinm r9,r9,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stwx r11,r30,r31
	PPC_STORE_U32(r30.u32 + r31.u32, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// std r10,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_825552D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd34
	return;
loc_825552E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// rlwinm r10,r28,20,9,11
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0x700000;
	// rlwinm r8,r8,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r9,r8,2
	ctx.r9.u64 = ctx.r8.u64 | 2;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// rlwinm r9,r9,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r9,r9,0,7,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r8.u64);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x825552d4
	goto loc_825552D4;
}

__attribute__((alias("__imp__sub_82555330"))) PPC_WEAK_FUNC(sub_82555330);
PPC_FUNC_IMPL(__imp__sub_82555330) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82555374
	if (cr6.eq) goto loc_82555374;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82555360:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// bne 0x82555360
	if (!cr0.eq) goto loc_82555360;
loc_82555374:
	// li r10,7
	ctx.r10.s64 = 7;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 * 7;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,14
	r11.s64 = r11.s64 + 14;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r30
	r27.u64 = r11.u64 + r30.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82555480
	if (cr0.eq) goto loc_82555480;
	// clrlwi r25,r24,24
	r25.u64 = r24.u32 & 0xFF;
loc_825553A4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14592
	cr6.compare<uint32_t>(ctx.r10.u32, 14592, xer);
	// bne cr6,0x82555408
	if (!cr6.eq) goto loc_82555408;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825553d8
	if (cr0.eq) goto loc_825553D8;
	// lwz r11,536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r31,536(r30)
	PPC_STORE_U32(r30.u32 + 536, r31.u32);
	// b 0x82555474
	goto loc_82555474;
loc_825553D8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// bl 0x824a9b30
	sub_824A9B30(ctx, base);
	// b 0x82555474
	goto loc_82555474;
loc_82555408:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,18,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82555470
	if (!cr6.eq) goto loc_82555470;
	// rlwinm r11,r11,18,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// blt cr6,0x82555470
	if (cr6.lt) goto loc_82555470;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82555468
	if (cr6.eq) goto loc_82555468;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8255543C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// bne 0x8255543c
	if (!cr0.eq) goto loc_8255543C;
loc_82555468:
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825554b0
	if (!cr0.eq) goto loc_825554B0;
loc_82555470:
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
loc_82555474:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x825553a4
	if (!cr0.eq) goto loc_825553A4;
loc_82555480:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82554df0
	sub_82554DF0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// b 0x825554b4
	goto loc_825554B4;
loc_825554B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825554B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_825554BC"))) PPC_WEAK_FUNC(sub_825554BC);
PPC_FUNC_IMPL(__imp__sub_825554BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825554C0"))) PPC_WEAK_FUNC(sub_825554C0);
PPC_FUNC_IMPL(__imp__sub_825554C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82555530
	if (cr6.eq) goto loc_82555530;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_825554F4:
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r31,r11,27
	r31.u64 = r11.u32 & 0x1F;
	// rlwinm r7,r11,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// slw r5,r5,r31
	ctx.r5.u64 = r31.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r31.u8 & 0x3F));
	// lwzx r31,r7,r6
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// stwx r5,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// bne 0x825554f4
	if (!cr0.eq) goto loc_825554F4;
loc_82555530:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82555330
	sub_82555330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82555550"))) PPC_WEAK_FUNC(sub_82555550);
PPC_FUNC_IMPL(__imp__sub_82555550) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82555604
	if (cr6.eq) goto loc_82555604;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_82555578:
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// li r31,2
	r31.s64 = 2;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// li r30,-1
	r30.s64 = -1;
	// rlwinm r29,r11,29,3,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r28,r1,188
	r28.s64 = ctx.r1.s64 + 188;
	// lwzx r29,r29,r28
	r29.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// slw r7,r31,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r7.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// slw r31,r30,r8
	r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r8.u8 & 0x3F));
	// and r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 & r29.u64;
	// and r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 & r31.u64;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825555e0
	if (cr6.lt) goto loc_825555E0;
	// beq cr6,0x825555d0
	if (cr6.eq) goto loc_825555D0;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x82555614
	if (!cr6.lt) goto loc_82555614;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// b 0x825555d8
	goto loc_825555D8;
loc_825555D0:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
loc_825555D8:
	// stfiwx f0,0,r9
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// b 0x825555ec
	goto loc_825555EC;
loc_825555E0:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_825555EC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// blt cr6,0x82555578
	if (cr6.lt) goto loc_82555578;
loc_82555604:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82555330
	sub_82555330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
loc_82555614:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
}

__attribute__((alias("__imp__sub_8255561C"))) PPC_WEAK_FUNC(sub_8255561C);
PPC_FUNC_IMPL(__imp__sub_8255561C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555620"))) PPC_WEAK_FUNC(sub_82555620);
PPC_FUNC_IMPL(__imp__sub_82555620) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x824ffec0
	sub_824FFEC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffe38
	sub_824FFE38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825507b8
	sub_825507B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8255566C"))) PPC_WEAK_FUNC(sub_8255566C);
PPC_FUNC_IMPL(__imp__sub_8255566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555670"))) PPC_WEAK_FUNC(sub_82555670);
PPC_FUNC_IMPL(__imp__sub_82555670) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// rlwinm r3,r10,18,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// clrlwi r9,r28,27
	ctx.r9.u64 = r28.u32 & 0x1F;
	// li r8,2
	ctx.r8.s64 = 2;
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,29,3,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// li r7,-1
	ctx.r7.s64 = -1;
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// slw r11,r8,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// slw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r6
	r11.u64 = r11.u64 & ctx.r6.u64;
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x82555700
	if (!cr6.eq) goto loc_82555700;
	// addi r11,r5,10
	r11.s64 = ctx.r5.s64 + 10;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// b 0x82555764
	goto loc_82555764;
loc_82555700:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ffec0
	sub_824FFEC0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x825507b8
	sub_825507B8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82555760
	if (cr6.lt) goto loc_82555760;
	// beq cr6,0x8255574c
	if (cr6.eq) goto loc_8255574C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82555744
	if (cr6.lt) goto loc_82555744;
	// rlwinm r11,r30,0,0,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82555744:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// b 0x82555750
	goto loc_82555750;
loc_8255574C:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
loc_82555750:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(r11.u32, f0.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// b 0x82555764
	goto loc_82555764;
loc_82555760:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
loc_82555764:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82555774"))) PPC_WEAK_FUNC(sub_82555774);
PPC_FUNC_IMPL(__imp__sub_82555774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82555778"))) PPC_WEAK_FUNC(sub_82555778);
PPC_FUNC_IMPL(__imp__sub_82555778) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15872
	r11.s64 = r11.s64 + -15872;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825557f0
	if (cr0.eq) goto loc_825557F0;
	// bl 0x824ffec0
	sub_824FFEC0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823ae098
	sub_823AE098(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825557d0
	if (cr0.eq) goto loc_825557D0;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f31.u64);
	// stfd f31,0(r30)
	PPC_STORE_U64(r30.u32 + 0, f31.u64);
	// b 0x82555888
	goto loc_82555888;
loc_825557D0:
	// lis r11,-128
	r11.s64 = -8388608;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,32640
	r11.s64 = 2139095040;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// b 0x82555884
	goto loc_82555884;
loc_825557F0:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82555840
	if (cr0.eq) goto loc_82555840;
loc_825557FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82555814
	if (cr6.eq) goto loc_82555814;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825557fc
	if (!cr0.eq) goto loc_825557FC;
loc_82555814:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82555840
	if (cr6.eq) goto loc_82555840;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// addi r9,r4,5
	ctx.r9.s64 = ctx.r4.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// lfdx f0,r9,r11
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + r11.u32);
	// stfd f0,0(r30)
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
	// b 0x82555888
	goto loc_82555888;
loc_82555840:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 * 3;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// bl 0x825509e0
	sub_825509E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555888
	if (!cr0.eq) goto loc_82555888;
	// lis r11,-128
	r11.s64 = -8388608;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,32640
	r11.s64 = 2139095040;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
loc_82555884:
	// stfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
loc_82555888:
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

__attribute__((alias("__imp__sub_825558A4"))) PPC_WEAK_FUNC(sub_825558A4);
PPC_FUNC_IMPL(__imp__sub_825558A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825558A8"))) PPC_WEAK_FUNC(sub_825558A8);
PPC_FUNC_IMPL(__imp__sub_825558A8) {
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
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,27,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = r11.u32 & 0x3;
	// bl 0x82555778
	sub_82555778(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi r5,r11,27
	ctx.r5.u64 = r11.u32 & 0x1F;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82550a58
	sub_82550A58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825558F8"))) PPC_WEAK_FUNC(sub_825558F8);
PPC_FUNC_IMPL(__imp__sub_825558F8) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// beq cr6,0x825559ac
	if (cr6.eq) goto loc_825559AC;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// beq cr6,0x82555998
	if (cr6.eq) goto loc_82555998;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x82555968
	if (cr6.eq) goto loc_82555968;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// bne cr6,0x825559c0
	if (!cr6.eq) goto loc_825559C0;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x824ba148
	sub_824BA148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82554588
	sub_82554588(ctx, base);
	// b 0x825559bc
	goto loc_825559BC;
loc_82555968:
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x824ba148
	sub_824BA148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82554640
	sub_82554640(ctx, base);
	// b 0x825559bc
	goto loc_825559BC;
loc_82555998:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82554418
	sub_82554418(ctx, base);
	// b 0x825559bc
	goto loc_825559BC;
loc_825559AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x825544d0
	sub_825544D0(ctx, base);
loc_825559BC:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825559C0:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_825559C4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825559fc
	if (cr6.eq) goto loc_825559FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825559f4
	if (!cr0.eq) goto loc_825559F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
loc_825559F4:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x825559c4
	goto loc_825559C4;
loc_825559FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82555A08"))) PPC_WEAK_FUNC(sub_82555A08);
PPC_FUNC_IMPL(__imp__sub_82555A08) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,15,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82555a48
	if (cr0.eq) goto loc_82555A48;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwimi r10,r11,9,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 9) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// b 0x82555a88
	goto loc_82555A88;
loc_82555A48:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a9130
	sub_824A9130(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555a8c
	if (!cr0.eq) goto loc_82555A8C;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82555a8c
	if (cr0.eq) goto loc_82555A8C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// rlwinm r11,r11,9,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFF;
	// rlwimi r10,r11,27,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
loc_82555A88:
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82555A8C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r10,0,3,3
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82555af0
	if (cr0.eq) goto loc_82555AF0;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82555af0
	if (cr0.eq) goto loc_82555AF0;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_82555AA8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82555ad4
	if (cr6.eq) goto loc_82555AD4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82555ad4
	if (!cr0.eq) goto loc_82555AD4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82555aa8
	goto loc_82555AA8;
loc_82555AD4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// rlwinm r11,r11,0,7,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FE0000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82555af0
	if (!cr6.eq) goto loc_82555AF0;
	// rlwinm r11,r10,0,5,2
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82555AF0:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82555b10
	if (cr6.lt) goto loc_82555B10;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82555b14
	if (!cr6.gt) goto loc_82555B14;
loc_82555B10:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82555B14:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82555e08
	if (cr0.eq) goto loc_82555E08;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,6
	r11.u64 = r11.u32 & 0x3FFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// oris r11,r11,51200
	r11.u64 = r11.u64 | 3355443200;
	// rlwimi r9,r10,24,3,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x1F000000) | (ctx.r9.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82555b58
	if (cr0.eq) goto loc_82555B58;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82555B58:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,15,12,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 15) & 0xF0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_82555B6C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82555bf4
	if (cr6.eq) goto loc_82555BF4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82555bac
	if (cr0.eq) goto loc_82555BAC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82555bb4
	if (!cr0.eq) goto loc_82555BB4;
loc_82555BAC:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82555b6c
	goto loc_82555B6C;
loc_82555BB4:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82555bcc
	if (cr0.eq) goto loc_82555BCC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82555BCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82555be4
	if (cr0.eq) goto loc_82555BE4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82555BE4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,15,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 15) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82555BF4:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r30,r29
	r30.u64 = r29.u64;
	// rlwinm r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82555c64
	if (cr6.lt) goto loc_82555C64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82550fb8
	sub_82550FB8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r10,r11,26,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// rlwimi r9,r11,21,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 21) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm r7,r11,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stb r8,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r8.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// rlwimi r8,r11,22,0,0
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 22) & 0x80000000) | (ctx.r8.u64 & 0xFFFFFFFF7FFFFFFF);
	// stb r7,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r7.u8);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82555C64:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82555ce8
	if (cr6.lt) goto loc_82555CE8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82550fb8
	sub_82550FB8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r10,r11,25,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// rlwimi r9,r11,20,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r7,r11,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stb r8,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r8.u8);
	// stb r7,10(r31)
	PPC_STORE_U8(r31.u32 + 10, ctx.r7.u8);
	// beq 0x82555ce4
	if (cr0.eq) goto loc_82555CE4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82555cdc
	if (cr6.eq) goto loc_82555CDC;
	// rlwimi r10,r11,21,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 21) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// b 0x82555ce0
	goto loc_82555CE0;
loc_82555CDC:
	// rlwimi r10,r11,22,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 22) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
loc_82555CE0:
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82555CE4:
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82555CE8:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// rlwinm r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82555d68
	if (cr6.lt) goto loc_82555D68;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82550fb8
	sub_82550FB8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// rlwimi r9,r11,19,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 19) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwinm r7,r11,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stb r8,7(r31)
	PPC_STORE_U8(r31.u32 + 7, ctx.r8.u8);
	// stb r7,11(r31)
	PPC_STORE_U8(r31.u32 + 11, ctx.r7.u8);
	// beq 0x82555d68
	if (cr0.eq) goto loc_82555D68;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82555d60
	if (cr6.eq) goto loc_82555D60;
	// rlwimi r10,r11,21,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 21) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// b 0x82555d64
	goto loc_82555D64;
loc_82555D60:
	// rlwimi r10,r11,22,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 22) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
loc_82555D64:
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82555D68:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82555d98
	if (cr0.eq) goto loc_82555D98;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82555d98
	if (!cr0.eq) goto loc_82555D98;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555d98
	if (!cr0.eq) goto loc_82555D98;
	// rlwinm r11,r26,0,0,19
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82555D98:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// addi r11,r11,-21
	r11.s64 = r11.s64 + -21;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x825561cc
	if (cr6.gt) goto loc_825561CC;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r9,r11,-2
	ctx.r9.s64 = r11.s64 + -2;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwimi r6,r7,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r9,6,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xC0;
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r7,6,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xC0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// b 0x825561cc
	goto loc_825561CC;
loc_82555E08:
	// clrlwi. r27,r28,24
	r27.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x82555e28
	if (!cr0.eq) goto loc_82555E28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,97
	r11.s64 = 97;
	// rlwimi r10,r11,25,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// rlwimi r10,r11,25,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x82555e74
	goto loc_82555E74;
loc_82555E28:
	// rlwinm r11,r26,0,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82555e40
	if (cr0.eq) goto loc_82555E40;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82555e48
	goto loc_82555E48;
loc_82555E40:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-36
	r11.s64 = r11.s64 + -36;
loc_82555E48:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm. r11,r11,13,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555e60
	if (!cr0.eq) goto loc_82555E60;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82555E60:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82555e74
	if (!cr6.eq) goto loc_82555E74;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82555E74:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,25,7,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,-31
	r11.s64 = r11.s64 + -31;
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82555ea4
	if (cr0.eq) goto loc_82555EA4;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82555EA4:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,19,0,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0xFFF80000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,12,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFF0FFFFF) | (r11.u64 & 0xF00000);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_82555EC0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82555f58
	if (cr6.eq) goto loc_82555F58;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - r29.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82555f00
	if (cr0.eq) goto loc_82555F00;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82555f08
	if (!cr0.eq) goto loc_82555F08;
loc_82555F00:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82555ec0
	goto loc_82555EC0;
loc_82555F08:
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82555f30
	if (cr0.eq) goto loc_82555F30;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,15,26,31
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 15) & 0x3F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x82555fb4
	goto loc_82555FB4;
loc_82555F30:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82555f44
	if (cr0.eq) goto loc_82555F44;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82555F44:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,23,18,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 23) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82555fb4
	goto loc_82555FB4;
loc_82555F58:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a9130
	sub_824A9130(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82555fb4
	if (cr0.eq) goto loc_82555FB4;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82556028
	if (cr0.eq) goto loc_82556028;
	// lwz r30,40(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 40);
loc_82555F78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a9710
	sub_824A9710(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82555fb4
	if (cr0.eq) goto loc_82555FB4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,19,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0xFFF;
	// rlwinm r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// rlwinm r9,r11,16,12,15
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF0000;
	// rlwinm r11,r11,0,22,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F0;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82555FB4:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825561cc
	if (cr0.eq) goto loc_825561CC;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82555fe8
	if (cr6.eq) goto loc_82555FE8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82555fdc
	if (!cr0.eq) goto loc_82555FDC;
	// li r30,1
	r30.s64 = 1;
loc_82555FDC:
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82555fe8
	if (!cr0.eq) goto loc_82555FE8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82555FE8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82550fb8
	sub_82550FB8(ctx, base);
	// add r6,r3,r30
	ctx.r6.u64 = ctx.r3.u64 + r30.u64;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82556074
	if (cr0.eq) goto loc_82556074;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bne cr6,0x8255606c
	if (!cr6.eq) goto loc_8255606C;
	// rlwimi r11,r30,21,1,1
	r11.u64 = (__builtin_rotateleft32(r30.u32, 21) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// b 0x82556070
	goto loc_82556070;
loc_82556028:
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
loc_8255602C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82556058
	if (cr6.eq) goto loc_82556058;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82555f78
	if (!cr0.eq) goto loc_82555F78;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8255602c
	goto loc_8255602C;
loc_82556058:
	// rlwinm r11,r26,0,0,19
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255606C:
	// rlwimi r11,r30,22,0,0
	r11.u64 = (__builtin_rotateleft32(r30.u32, 22) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
loc_82556070:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82556074:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r30,21,11,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 21) & 0x1FFFFF;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// rlwimi r5,r30,24,7,7
	ctx.r5.u64 = (__builtin_rotateleft32(r30.u32, 24) & 0x1000000) | (ctx.r5.u64 & 0xFFFFFFFFFEFFFFFF);
	// stb r11,11(r31)
	PPC_STORE_U8(r31.u32 + 11, r11.u8);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x82556114
	if (cr6.lt) goto loc_82556114;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82550fb8
	sub_82550FB8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r9,21,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0xFF;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825560d8
	if (cr0.eq) goto loc_825560D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r10,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000000;
	// addis r8,r8,1024
	ctx.r8.s64 = ctx.r8.s64 + 67108864;
	// rlwimi r8,r10,0,6,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFC000000);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_825560D8:
	// rlwinm r8,r11,30,28,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xC;
	// rlwinm r7,r11,30,30,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// rlwinm r10,r30,31,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x3;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,6,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xC0;
	// rlwinm r9,r9,31,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x3;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,7(r31)
	PPC_STORE_U8(r31.u32 + 7, ctx.r10.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r10,r11,28,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x825561cc
	goto loc_825561CC;
loc_82556114:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r3,r30,31,24,31
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xFF;
	// rlwimi r11,r30,19,2,2
	r11.u64 = (__builtin_rotateleft32(r30.u32, 19) & 0x20000000) | (r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82550f70
	sub_82550F70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825561a0
	if (cr6.eq) goto loc_825561A0;
	// rlwinm r11,r26,0,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255614c
	if (cr0.eq) goto loc_8255614C;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82556154
	goto loc_82556154;
loc_8255614C:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-36
	r11.s64 = r11.s64 + -36;
loc_82556154:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x825561a0
	if (!cr6.gt) goto loc_825561A0;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// bl 0x82550f70
	sub_82550F70(ctx, base);
	// clrlwi r11,r6,30
	r11.u64 = ctx.r6.u32 & 0x3;
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r9,r11,6,24,25
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xC0;
	// rlwinm r11,r3,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r3,30
	ctx.r8.u64 = ctx.r3.u32 & 0x3;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwimi r11,r10,2,28,29
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xC) | (r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r11,r11,2,26,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3C;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// b 0x825561c8
	goto loc_825561C8;
loc_825561A0:
	// clrlwi r11,r6,30
	r11.u64 = ctx.r6.u32 & 0x3;
	// rlwinm r10,r6,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3;
	// addi r9,r11,-2
	ctx.r9.s64 = r11.s64 + -2;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r11,r11,6,24,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xC0;
	// rlwinm r9,r8,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_825561C8:
	// stb r11,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r11.u8);
loc_825561CC:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825562b0
	if (!cr0.eq) goto loc_825562B0;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825562b0
	if (cr0.eq) goto loc_825562B0;
	// lwz r27,4(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_825561E4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255622c
	if (cr6.eq) goto loc_8255622C;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
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
	// beq 0x82556224
	if (cr0.eq) goto loc_82556224;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255622c
	if (!cr0.eq) goto loc_8255622C;
loc_82556224:
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x825561e4
	goto loc_825561E4;
loc_8255622C:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82556238:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825562dc
	if (cr6.eq) goto loc_825562DC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r10,0,4,6
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825562d4
	if (cr0.eq) goto loc_825562D4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825562d4
	if (cr0.eq) goto loc_825562D4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825562d4
	if (!cr0.eq) goto loc_825562D4;
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// beq cr6,0x825562b8
	if (cr6.eq) goto loc_825562B8;
	// cmplwi cr6,r11,121
	cr6.compare<uint32_t>(r11.u32, 121, xer);
	// beq cr6,0x825562b8
	if (cr6.eq) goto loc_825562B8;
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, xer);
	// beq cr6,0x825562d4
	if (cr6.eq) goto loc_825562D4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824b4400
	sub_824B4400(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825562d4
	if (cr0.eq) goto loc_825562D4;
loc_825562B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_825562B8:
	// addi r11,r11,-121
	r11.s64 = r11.s64 + -121;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r28,1
	r28.s64 = 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
loc_825562D4:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82556238
	goto loc_82556238;
loc_825562DC:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825562b0
	if (cr0.eq) goto loc_825562B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x825562b0
	if (cr0.eq) goto loc_825562B0;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82556300:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825562b0
	if (cr6.eq) goto loc_825562B0;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82556370
	if (cr0.eq) goto loc_82556370;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15488
	cr6.compare<uint32_t>(ctx.r10.u32, 15488, xer);
	// bne cr6,0x82556370
	if (!cr6.eq) goto loc_82556370;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,19,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0xFFF;
	// clrlwi r8,r10,26
	ctx.r8.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r7,r11,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82556370
	if (!cr6.eq) goto loc_82556370;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// rlwinm r8,r11,20,0,11
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r8,r10
	r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,12,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFF0FFFFF) | (r11.u64 & 0xF00000);
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | r11.u64;
	// rlwimi r10,r11,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82556370:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82556300
	goto loc_82556300;
}

__attribute__((alias("__imp__sub_82556378"))) PPC_WEAK_FUNC(sub_82556378);
PPC_FUNC_IMPL(__imp__sub_82556378) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x824a91e8
	sub_824A91E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825563a4
	if (cr0.eq) goto loc_825563A4;
loc_8255639C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82556470
	goto loc_82556470;
loc_825563A4:
	// lwz r23,12(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// li r11,15872
	r11.s64 = 15872;
	// lwz r22,12(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255646c
	if (cr0.eq) goto loc_8255646C;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255646c
	if (cr0.eq) goto loc_8255646C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r27,r11,7,29,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
	// rlwinm r9,r10,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255646c
	if (!cr6.eq) goto loc_8255646C;
	// clrlwi r29,r11,27
	r29.u64 = r11.u32 & 0x1F;
	// clrlwi r28,r10,27
	r28.u64 = ctx.r10.u32 & 0x1F;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255639c
	if (cr6.eq) goto loc_8255639C;
	// li r31,0
	r31.s64 = 0;
loc_82556410:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r11,r11,27,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0xFF;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 >> (r31.u8 & 0x3F));
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = r11.u32 & 0x3;
	// clrlwi r30,r10,30
	r30.u64 = ctx.r10.u32 & 0x3;
	// bl 0x82555620
	sub_82555620(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82555620
	sub_82555620(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bne cr6,0x8255646c
	if (!cr6.eq) goto loc_8255646C;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r24,r27
	cr6.compare<uint32_t>(r24.u32, r27.u32, xer);
	// blt cr6,0x82556410
	if (cr6.lt) goto loc_82556410;
	// b 0x8255639c
	goto loc_8255639C;
loc_8255646C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82556470:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8255647C"))) PPC_WEAK_FUNC(sub_8255647C);
PPC_FUNC_IMPL(__imp__sub_8255647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556480"))) PPC_WEAK_FUNC(sub_82556480);
PPC_FUNC_IMPL(__imp__sub_82556480) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x824b3878
	sub_824B3878(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825564b0
	if (!cr0.eq) goto loc_825564B0;
loc_825564A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82556530
	goto loc_82556530;
loc_825564B0:
	// clrlwi r11,r31,30
	r11.u64 = r31.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82556504
	if (cr6.lt) goto loc_82556504;
	// beq cr6,0x825564e0
	if (cr6.eq) goto loc_825564E0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x825564d8
	if (cr6.lt) goto loc_825564D8;
	// beq cr6,0x825564a8
	if (cr6.eq) goto loc_825564A8;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_825564D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82556530
	goto loc_82556530;
loc_825564E0:
	// rlwinm r29,r31,0,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b3878
	sub_824B3878(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825564d8
	if (cr0.eq) goto loc_825564D8;
	// rlwinm r11,r31,0,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82556524
	if (!cr6.eq) goto loc_82556524;
	// b 0x825564a8
	goto loc_825564A8;
loc_82556504:
	// rlwinm r29,r31,0,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b3878
	sub_824B3878(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825564d8
	if (cr0.eq) goto loc_825564D8;
	// rlwinm r11,r31,0,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x825564d8
	if (cr6.eq) goto loc_825564D8;
loc_82556524:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b4400
	sub_824B4400(ctx, base);
loc_82556530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82556538"))) PPC_WEAK_FUNC(sub_82556538);
PPC_FUNC_IMPL(__imp__sub_82556538) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x824b3d28
	sub_824B3D28(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825565a4
	if (cr0.eq) goto loc_825565A4;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r7,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_82556584:
	// srw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// bne 0x82556584
	if (!cr0.eq) goto loc_82556584;
loc_825565A4:
	// lis r9,-28311
	ctx.r9.s64 = -1855389696;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r9,r9,5192
	ctx.r9.u64 = ctx.r9.u64 | 5192;
	// ori r7,r7,36262
	ctx.r7.u64 = ctx.r7.u64 | 36262;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// li r28,0
	r28.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r26,3
	r26.s64 = 3;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwimi r8,r10,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8255663c
	if (cr6.eq) goto loc_8255663C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825565F8:
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// slw r7,r26,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// andc r8,r11,r8
	ctx.r8.u64 = r11.u64 & ~ctx.r8.u64;
	// andc r6,r28,r7
	ctx.r6.u64 = r28.u64 & ~ctx.r7.u64;
	// subf. r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfic r8,r8,31
	xer.ca = ctx.r8.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r8.s64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// or r28,r6,r8
	r28.u64 = ctx.r6.u64 | ctx.r8.u64;
	// slw r8,r26,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r7.u8 & 0x3F));
	// slw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// andc r8,r29,r8
	ctx.r8.u64 = r29.u64 & ~ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r29,r8,r7
	r29.u64 = ctx.r8.u64 | ctx.r7.u64;
	// bne 0x825565f8
	if (!cr0.eq) goto loc_825565F8;
loc_8255663C:
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// lwz r24,12(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82556744
	if (cr0.eq) goto loc_82556744;
	// lwz r11,24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bne cr6,0x82556744
	if (!cr6.eq) goto loc_82556744;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824ba748
	sub_824BA748(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82556744
	if (cr0.eq) goto loc_82556744;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82556480
	sub_82556480(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82556744
	if (cr0.eq) goto loc_82556744;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82556704
	if (cr0.eq) goto loc_82556704;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r6,r27,40
	ctx.r6.s64 = r27.s64 + 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// li r11,0
	r11.s64 = 0;
	// rlwinm r7,r10,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
loc_825566A4:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_825566AC:
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bge cr6,0x825566f8
	if (!cr6.lt) goto loc_825566F8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// bne cr6,0x825566dc
	if (!cr6.eq) goto loc_825566DC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r4,r28,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 >> (r11.u8 & 0x3F));
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// xor r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r10.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825566e8
	if (cr0.eq) goto loc_825566E8;
loc_825566DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x825566ac
	goto loc_825566AC;
loc_825566E8:
	// slw r10,r9,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// andc r9,r28,r9
	ctx.r9.u64 = r28.u64 & ~ctx.r9.u64;
	// or r28,r9,r10
	r28.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_825566F8:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x825566a4
	if (!cr0.eq) goto loc_825566A4;
loc_82556704:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82556714
	goto loc_82556714;
loc_82556710:
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
loc_82556714:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x82556710
	if (!cr6.eq) goto loc_82556710;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r31,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82556744:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwimi r11,r28,5,19,26
	r11.u64 = (__builtin_rotateleft32(r28.u32, 5) & 0x1FE0) | (r11.u64 & 0xFFFFFFFFFFFFE01F);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x824bc450
	sub_824BC450(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82553388
	sub_82553388(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// rlwinm r11,r10,27,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r8,r11,27,29,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x6;
	// rlwinm r7,r11,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x6;
	// rlwinm r6,r11,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x6;
	// srw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r29,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r29,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r11,r29,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r29.u32 >> (r11.u8 & 0x3F));
	// clrlwi r8,r7,28
	ctx.r8.u64 = ctx.r7.u32 & 0xF;
	// rlwimi r6,r8,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r6,2,0,29
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x825567d8
	goto loc_825567D8;
loc_825567D4:
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
loc_825567D8:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x825567d4
	if (!cr6.eq) goto loc_825567D4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// rlwinm. r11,r11,0,27,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1E;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82556810
	if (cr0.eq) goto loc_82556810;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba9b8
	sub_824BA9B8(ctx, base);
loc_82556810:
	// lbz r11,8(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 8);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82556830
	if (cr0.eq) goto loc_82556830;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d1ab8
	sub_824D1AB8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82556830:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82556838"))) PPC_WEAK_FUNC(sub_82556838);
PPC_FUNC_IMPL(__imp__sub_82556838) {
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
	// bl 0x82556538
	sub_82556538(ctx, base);
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

__attribute__((alias("__imp__sub_8255685C"))) PPC_WEAK_FUNC(sub_8255685C);
PPC_FUNC_IMPL(__imp__sub_8255685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82556860"))) PPC_WEAK_FUNC(sub_82556860);
PPC_FUNC_IMPL(__imp__sub_82556860) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mulli r16,r29,40
	r16.s64 = r29.s64 * 40;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r20,r16,r11
	r20.u64 = r16.u64 + r11.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,24(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825568c0
	if (cr0.eq) goto loc_825568C0;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r17)
	PPC_STORE_U32(r17.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,4(r17)
	PPC_STORE_U32(r17.u32 + 4, r11.u32);
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557274
	if (cr0.eq) goto loc_82557274;
loc_825568C0:
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825504e0
	sub_825504E0(ctx, base);
	// lwz r11,28(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// rlwinm r18,r30,3,0,28
	r18.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,20(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r18,r11
	r11.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// lwz r5,60(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// rlwinm r11,r11,14,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3;
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r22,r11,24
	r22.u64 = r11.u32 & 0xFF;
	// clrlwi r21,r10,24
	r21.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x824cf630
	sub_824CF630(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x825502a0
	sub_825502A0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82527f98
	sub_82527F98(ctx, base);
	// lwz r5,8(r19)
	ctx.r5.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x8255697c
	if (!cr0.eq) goto loc_8255697C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824a97e0
	sub_824A97E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251d160
	sub_8251D160(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3502
	ctx.r4.s64 = 3502;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255697C:
	// lwz r11,28(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// lwzx r6,r18,r11
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// rlwinm. r11,r6,0,5,5
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825569a8
	if (!cr0.eq) goto loc_825569A8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8251d448
	sub_8251D448(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,4502
	ctx.r4.s64 = 4502;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_825569A8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// li r23,0
	r23.s64 = 0;
	// lwz r4,16(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r6,r6,5,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r23.u32);
	// beq 0x82556da4
	if (cr0.eq) goto loc_82556DA4;
	// lis r10,-32138
	ctx.r10.s64 = -2106195968;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r7,r10,-11360
	ctx.r7.s64 = ctx.r10.s64 + -11360;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r8,20
	ctx.r8.s64 = 20;
	// bl 0x82551460
	sub_82551460(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r24,116(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r25,1
	r25.s64 = 1;
	// clrlwi r26,r11,27
	r26.u64 = r11.u32 & 0x1F;
	// rlwinm r27,r11,27,28,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0xF;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(r26.u32, 16, xer);
	// beq cr6,0x82556a40
	if (cr6.eq) goto loc_82556A40;
	// cmplwi cr6,r26,14
	cr6.compare<uint32_t>(r26.u32, 14, xer);
	// beq cr6,0x82556a40
	if (cr6.eq) goto loc_82556A40;
	// cmplwi cr6,r26,15
	cr6.compare<uint32_t>(r26.u32, 15, xer);
	// beq cr6,0x82556a40
	if (cr6.eq) goto loc_82556A40;
	// li r30,16
	r30.s64 = 16;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82556A40:
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(r28.u32, 4, xer);
	// ble cr6,0x82556a54
	if (!cr6.gt) goto loc_82556A54;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82556A54:
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82556aa4
	if (!cr6.gt) goto loc_82556AA4;
	// addi r10,r31,344
	ctx.r10.s64 = r31.s64 + 344;
loc_82556A68:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x82556a90
	if (cr6.eq) goto loc_82556A90;
	// lwz r9,532(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82556a68
	if (cr6.lt) goto loc_82556A68;
	// b 0x82556aa4
	goto loc_82556AA4;
loc_82556A90:
	// addi r11,r11,29
	r11.s64 = r11.s64 + 29;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r29,r11,r31
	r29.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x82556c2c
	if (!cr0.eq) goto loc_82556C2C;
loc_82556AA4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82556adc
	if (cr0.eq) goto loc_82556ADC;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82556ADC:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82552f38
	sub_82552F38(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82556b14
	if (cr0.eq) goto loc_82556B14;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82556B14:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bne cr6,0x82556b70
	if (!cr6.eq) goto loc_82556B70;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82556B70:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bne cr6,0x82556b8c
	if (!cr6.eq) goto loc_82556B8C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82556b8c
	if (cr6.eq) goto loc_82556B8C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82556B8C:
	// addi r11,r11,29
	r11.s64 = r11.s64 + 29;
	// slw r10,r25,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (r25.u32 << (r28.u8 & 0x3F));
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// stwx r29,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r29.u32);
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// lwz r9,344(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 344);
	// rlwimi r9,r30,0,27,31
	ctx.r9.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r9,344(r11)
	PPC_STORE_U32(r11.u32 + 344, ctx.r9.u32);
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r9,344(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 344);
	// rlwinm r9,r9,0,27,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// stw r9,344(r11)
	PPC_STORE_U32(r11.u32 + 344, ctx.r9.u32);
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r9,344(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 344);
	// rlwimi r9,r10,9,19,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x1E00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE1FF);
	// stw r9,344(r11)
	PPC_STORE_U32(r11.u32 + 344, ctx.r9.u32);
	// bne cr6,0x82556c0c
	if (!cr6.eq) goto loc_82556C0C;
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,30316
	r11.s64 = r11.s64 + 30316;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r11,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, r11.u32);
	// b 0x82556c20
	goto loc_82556C20;
loc_82556C0C:
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,340(r11)
	PPC_STORE_U32(r11.u32 + 340, ctx.r10.u32);
loc_82556C20:
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
loc_82556C2C:
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(r26.u32, 16, xer);
	// beq cr6,0x82556d30
	if (cr6.eq) goto loc_82556D30;
	// cmplwi cr6,r26,14
	cr6.compare<uint32_t>(r26.u32, 14, xer);
	// beq cr6,0x82556d30
	if (cr6.eq) goto loc_82556D30;
	// cmplwi cr6,r26,15
	cr6.compare<uint32_t>(r26.u32, 15, xer);
	// beq cr6,0x82556d30
	if (cr6.eq) goto loc_82556D30;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82556c7c
	if (cr0.eq) goto loc_82556C7C;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_82556C7C:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,95
	ctx.r6.s64 = 95;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82552f38
	sub_82552F38(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r30,-20
	r11.s64 = r30.s64 + -20;
	// rlwimi r27,r26,4,0,27
	r27.u64 = (__builtin_rotateleft32(r26.u32, 4) & 0xFFFFFFF0) | (r27.u64 & 0xFFFFFFFF0000000F);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r27,15(r11)
	PPC_STORE_U8(r11.u32 + 15, r27.u8);
	// oris r10,r9,8
	ctx.r10.u64 = ctx.r9.u64 | 524288;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82556cf4
	if (cr0.eq) goto loc_82556CF4;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82556CF4:
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x82556d44
	goto loc_82556D44;
loc_82556D30:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82556d44
	if (cr0.eq) goto loc_82556D44;
	// stw r25,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r25.u32);
loc_82556D44:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82556d80
	if (cr0.eq) goto loc_82556D80;
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// beq 0x82556d6c
	if (cr0.eq) goto loc_82556D6C;
	// andi. r10,r11,2340
	ctx.r10.u64 = r11.u64 & 2340;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi cr6,r10,2340
	cr6.compare<uint32_t>(ctx.r10.u32, 2340, xer);
	// beq cr6,0x82556d80
	if (cr6.eq) goto loc_82556D80;
	// ori r11,r11,2340
	r11.u64 = r11.u64 | 2340;
	// b 0x82556d7c
	goto loc_82556D7C;
loc_82556D6C:
	// andi. r10,r11,3510
	ctx.r10.u64 = r11.u64 & 3510;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi cr6,r10,3510
	cr6.compare<uint32_t>(ctx.r10.u32, 3510, xer);
	// beq cr6,0x82556d80
	if (cr6.eq) goto loc_82556D80;
	// ori r11,r11,3510
	r11.u64 = r11.u64 | 3510;
loc_82556D7C:
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
loc_82556D80:
	// cmplwi cr6,r26,15
	cr6.compare<uint32_t>(r26.u32, 15, xer);
	// bne cr6,0x825571f4
	if (!cr6.eq) goto loc_825571F4;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// andi. r10,r11,3510
	ctx.r10.u64 = r11.u64 & 3510;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi cr6,r10,3510
	cr6.compare<uint32_t>(ctx.r10.u32, 3510, xer);
	// beq cr6,0x825571f4
	if (cr6.eq) goto loc_825571F4;
	// ori r11,r11,3510
	r11.u64 = r11.u64 | 3510;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// b 0x825571f4
	goto loc_825571F4;
loc_82556DA4:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// bl 0x82551748
	sub_82551748(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r30,r23
	r30.u64 = r23.u64;
	// clrlwi r11,r9,27
	r11.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bne cr6,0x82556e24
	if (!cr6.eq) goto loc_82556E24;
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82556e24
	if (!cr6.gt) goto loc_82556E24;
	// addi r10,r31,344
	ctx.r10.s64 = r31.s64 + 344;
loc_82556DD8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r8,17
	cr6.compare<uint32_t>(ctx.r8.u32, 17, xer);
	// beq cr6,0x82556e00
	if (cr6.eq) goto loc_82556E00;
	// lwz r8,532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82556dd8
	if (cr6.lt) goto loc_82556DD8;
	// b 0x82556e24
	goto loc_82556E24;
loc_82556E00:
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
	// addi r11,r11,29
	r11.s64 = r11.s64 + 29;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r30,r11,r31
	r30.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r11,344(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// rlwinm r8,r9,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// stw r11,344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 344, r11.u32);
loc_82556E24:
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,116(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82556e38
	if (cr6.eq) goto loc_82556E38;
	// li r28,4
	r28.s64 = 4;
loc_82556E38:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82557000
	if (!cr6.eq) goto loc_82557000;
	// lwz r29,532(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(r29.u32, 16, xer);
	// bne cr6,0x82556e58
	if (!cr6.eq) goto loc_82556E58;
	// li r4,3530
	ctx.r4.s64 = 3530;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82556E58:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// rlwimi r9,r11,20,14,14
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0x20000) | (ctx.r9.u64 & 0xFFFFFFFFFFFDFFFF);
	// beq cr6,0x82556ea4
	if (cr6.eq) goto loc_82556EA4;
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r31,344
	r11.s64 = r31.s64 + 344;
loc_82556E74:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x82556e90
	if (!cr6.eq) goto loc_82556E90;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm. r10,r10,0,23,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82556fbc
	if (cr0.eq) goto loc_82556FBC;
loc_82556E90:
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82556e74
	if (cr6.lt) goto loc_82556E74;
loc_82556EA4:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,340
	r11.s64 = r11.s64 + 340;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82556f04
	if (cr0.eq) goto loc_82556F04;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82556F04:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82552f38
	sub_82552F38(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82556f3c
	if (cr0.eq) goto loc_82556F3C;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82556F3C:
	// addi r9,r29,29
	ctx.r9.s64 = r29.s64 + 29;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mulli r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 * 12;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r6,r11,-32
	ctx.r6.s64 = r11.s64 + -32;
	// addi r5,r10,-32
	ctx.r5.s64 = ctx.r10.s64 + -32;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// clrlwi. r9,r22,24
	ctx.r9.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, r30.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq 0x82557000
	if (cr0.eq) goto loc_82557000;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82557000
	if (!cr6.eq) goto loc_82557000;
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// beq 0x82556fec
	if (cr0.eq) goto loc_82556FEC;
	// andi. r10,r11,2340
	ctx.r10.u64 = r11.u64 & 2340;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi cr6,r10,2340
	cr6.compare<uint32_t>(ctx.r10.u32, 2340, xer);
	// beq cr6,0x82557000
	if (cr6.eq) goto loc_82557000;
	// ori r11,r11,2340
	r11.u64 = r11.u64 | 2340;
	// b 0x82556ffc
	goto loc_82556FFC;
loc_82556FBC:
	// lwz r11,28(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r6,8(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r18,r11
	r11.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// rlwinm r7,r11,5,28,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xF;
	// bl 0x82550320
	sub_82550320(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,3513
	ctx.r4.s64 = 3513;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82556FEC:
	// andi. r10,r11,3510
	ctx.r10.u64 = r11.u64 & 3510;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi cr6,r10,3510
	cr6.compare<uint32_t>(ctx.r10.u32, 3510, xer);
	// beq cr6,0x82557000
	if (cr6.eq) goto loc_82557000;
	// ori r11,r11,3510
	r11.u64 = r11.u64 | 3510;
loc_82556FFC:
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
loc_82557000:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// beq cr6,0x825571b0
	if (cr6.eq) goto loc_825571B0;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// beq cr6,0x82557174
	if (cr6.eq) goto loc_82557174;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(r27.s32, 3, xer);
	// beq cr6,0x82557050
	if (cr6.eq) goto loc_82557050;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557048
	if (cr0.eq) goto loc_82557048;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82557048:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x825571e4
	goto loc_825571E4;
loc_82557050:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557060
	if (cr0.eq) goto loc_82557060;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_82557060:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554360
	sub_82554360(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82555150
	sub_82555150(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825570a4
	if (cr0.eq) goto loc_825570A4;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825570A4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825549b0
	sub_825549B0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82555150
	sub_82555150(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825570f0
	if (cr0.eq) goto loc_825570F0;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825570F0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825548e0
	sub_825548E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82555150
	sub_82555150(ctx, base);
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bl 0x82523428
	sub_82523428(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824ba148
	sub_824BA148(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255715c
	if (cr0.eq) goto loc_8255715C;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8255715C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825547f0
	sub_825547F0(ctx, base);
	// b 0x825571f0
	goto loc_825571F0;
loc_82557174:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwimi r10,r11,26,4,6
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x824ba148
	sub_824BA148(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,119
	ctx.r10.s64 = 119;
	// rlwimi r11,r10,6,19,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x1FE0) | (r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x825571c0
	goto loc_825571C0;
loc_825571B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825571C0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ba148
	sub_824BA148(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825571dc
	if (cr0.eq) goto loc_825571DC;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825571DC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_825571E4:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f0b10
	sub_824F0B10(ctx, base);
loc_825571F0:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825571F4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r16,r11
	r11.u64 = r16.u64 + r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82557228
	if (!cr6.eq) goto loc_82557228;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,0,15,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFF8;
	// bl 0x824ce3c0
	sub_824CE3C0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r16,r11
	r11.u64 = r16.u64 + r11.u64;
	// stw r3,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r3.u32);
loc_82557228:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82550628
	sub_82550628(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,924
	r11.s64 = r31.s64 + 924;
	// add r10,r16,r10
	ctx.r10.u64 = r16.u64 + ctx.r10.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r17)
	PPC_STORE_U32(r17.u32 + 0, ctx.r9.u32);
	// stw r10,4(r17)
	PPC_STORE_U32(r17.u32 + 4, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r10,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r10.u32);
	// stw r19,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r19.u32);
loc_82557274:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_82557284"))) PPC_WEAK_FUNC(sub_82557284);
PPC_FUNC_IMPL(__imp__sub_82557284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557288"))) PPC_WEAK_FUNC(sub_82557288);
PPC_FUNC_IMPL(__imp__sub_82557288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | r11.u64;
	// bl 0x82555330
	sub_82555330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825572F4"))) PPC_WEAK_FUNC(sub_825572F4);
PPC_FUNC_IMPL(__imp__sub_825572F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825572F8"))) PPC_WEAK_FUNC(sub_825572F8);
PPC_FUNC_IMPL(__imp__sub_825572F8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82557288
	sub_82557288(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r11,0,16,14
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r10.u64 & 0x10000);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8255734C"))) PPC_WEAK_FUNC(sub_8255734C);
PPC_FUNC_IMPL(__imp__sub_8255734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557350"))) PPC_WEAK_FUNC(sub_82557350);
PPC_FUNC_IMPL(__imp__sub_82557350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82555330
	sub_82555330(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82557394"))) PPC_WEAK_FUNC(sub_82557394);
PPC_FUNC_IMPL(__imp__sub_82557394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557398"))) PPC_WEAK_FUNC(sub_82557398);
PPC_FUNC_IMPL(__imp__sub_82557398) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x825573f4
	if (cr6.lt) goto loc_825573F4;
	// beq cr6,0x825573d8
	if (cr6.eq) goto loc_825573D8;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x825573c0
	if (cr6.lt) goto loc_825573C0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_825573C0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825573ec
	goto loc_825573EC;
loc_825573D8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r5,1
	ctx.r5.s64 = 1;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825573EC:
	// bl 0x82557288
	sub_82557288(ctx, base);
	// b 0x8255742c
	goto loc_8255742C;
loc_825573F4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lfs f0,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82555330
	sub_82555330(ctx, base);
loc_8255742C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255743C"))) PPC_WEAK_FUNC(sub_8255743C);
PPC_FUNC_IMPL(__imp__sub_8255743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557440"))) PPC_WEAK_FUNC(sub_82557440);
PPC_FUNC_IMPL(__imp__sub_82557440) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557470
	if (cr0.eq) goto loc_82557470;
loc_82557468:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825576bc
	goto loc_825576BC;
loc_82557470:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r23,0
	r23.s64 = 0;
loc_82557478:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255748c
	if (cr6.eq) goto loc_8255748C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// b 0x82557478
	goto loc_82557478;
loc_8255748C:
	// rlwinm r10,r28,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFF000;
	// lis r11,-32178
	r11.s64 = -2108817408;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r11,-30024
	ctx.r5.s64 = r11.s64 + -30024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,148(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x824d7fc8
	sub_824D7FC8(ctx, base);
	// lwz r30,0(r22)
	r30.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_825574B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255757c
	if (cr6.eq) goto loc_8255757C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lwz r24,12(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r29,1
	r29.s64 = 1;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r26,r11,2,31,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// rlwinm r25,r11,7,29,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
loc_825574D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255756c
	if (cr6.eq) goto loc_8255756C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82557560
	if (!cr6.eq) goto loc_82557560;
	// rlwinm r11,r11,7,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x82557560
	if (!cr6.eq) goto loc_82557560;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8255751c
	if (cr6.eq) goto loc_8255751C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82556378
	sub_82556378(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82557528
	if (!cr0.eq) goto loc_82557528;
	// b 0x82557560
	goto loc_82557560;
loc_8255751C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bne cr6,0x82557560
	if (!cr6.eq) goto loc_82557560;
loc_82557528:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// bne 0x82557540
	if (!cr0.eq) goto loc_82557540;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82557540:
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r29,27
	ctx.r9.u64 = r29.u32 & 0x1F;
	// rlwinm r11,r29,29,3,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFC;
	// li r27,1
	r27.s64 = 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82557560:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x825574d4
	goto loc_825574D4;
loc_8255756C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557468
	if (cr0.eq) goto loc_82557468;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x825574b0
	goto loc_825574B0;
loc_8255757C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x825576b8
	if (cr6.eq) goto loc_825576B8;
	// addi r5,r23,-1
	ctx.r5.s64 = r23.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825526a8
	sub_825526A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82557468
	if (!cr0.eq) goto loc_82557468;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// rlwinm. r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825575d8
	if (cr0.eq) goto loc_825575D8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// ble cr6,0x825575d0
	if (!cr6.gt) goto loc_825575D0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x825575d0
	if (cr6.eq) goto loc_825575D0;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// beq cr6,0x825575d0
	if (cr6.eq) goto loc_825575D0;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x825575d8
	if (cr6.gt) goto loc_825575D8;
loc_825575D0:
	// li r11,1
	r11.s64 = 1;
	// b 0x825575dc
	goto loc_825575DC;
loc_825575D8:
	// li r11,0
	r11.s64 = 0;
loc_825575DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557638
	if (cr0.eq) goto loc_82557638;
	// lwz r4,40(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 40);
	// li r31,2
	r31.s64 = 2;
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// bl 0x82556378
	sub_82556378(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557610
	if (cr0.eq) goto loc_82557610;
	// lwz r4,44(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 44);
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// bl 0x82556378
	sub_82556378(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82557638
	if (!cr0.eq) goto loc_82557638;
loc_82557610:
	// lwz r4,40(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 40);
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// bl 0x82556378
	sub_82556378(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557468
	if (cr0.eq) goto loc_82557468;
	// lwz r4,44(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 44);
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// bl 0x82556378
	sub_82556378(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557468
	if (cr0.eq) goto loc_82557468;
loc_82557638:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r29,r31
	r29.u64 = r31.u64;
	// rlwinm r11,r11,13,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x825576b8
	if (!cr6.lt) goto loc_825576B8;
	// addi r11,r31,10
	r11.s64 = r31.s64 + 10;
	// subf r30,r22,r28
	r30.s64 = r28.s64 - r22.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r22
	r31.u64 = r11.u64 + r22.u64;
loc_8255765C:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82557690
	if (cr0.eq) goto loc_82557690;
	// bl 0x82556378
	sub_82556378(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557468
	if (cr0.eq) goto loc_82557468;
	// b 0x825576a0
	goto loc_825576A0;
loc_82557690:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82557468
	if (!cr6.eq) goto loc_82557468;
loc_825576A0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,13,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8255765c
	if (cr6.lt) goto loc_8255765C;
loc_825576B8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825576BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_825576C4"))) PPC_WEAK_FUNC(sub_825576C4);
PPC_FUNC_IMPL(__imp__sub_825576C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825576C8"))) PPC_WEAK_FUNC(sub_825576C8);
PPC_FUNC_IMPL(__imp__sub_825576C8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bccc
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// lwz r27,12(r22)
	r27.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// clrlwi r28,r11,27
	r28.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r11,27,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0xFF;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r26,r11,30
	r26.u64 = r11.u32 & 0x3;
	// and. r11,r28,r21
	r11.u64 = r28.u64 & r21.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82557cf8
	if (!cr0.eq) goto loc_82557CF8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31368(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
loc_82557728:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r10,25,25,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82557b38
	if (cr6.eq) goto loc_82557B38;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82557a58
	if (cr6.eq) goto loc_82557A58;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x82557948
	if (cr6.eq) goto loc_82557948;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// beq cr6,0x82557878
	if (cr6.eq) goto loc_82557878;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(r11.s32, 111, xer);
	// bne cr6,0x82557c2c
	if (!cr6.eq) goto loc_82557C2C;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82557cf8
	if (!cr6.eq) goto loc_82557CF8;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x8255777c
	if (cr0.eq) goto loc_8255777C;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82557780
	if (!cr6.eq) goto loc_82557780;
loc_8255777C:
	// li r11,0
	r11.s64 = 0;
loc_82557780:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82557cf8
	if (!cr0.eq) goto loc_82557CF8;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r11,r9,27
	r11.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825577b0
	if (cr0.eq) goto loc_825577B0;
	// rlwinm. r10,r28,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825577b0
	if (cr0.eq) goto loc_825577B0;
loc_825577A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825577d8
	goto loc_825577D8;
loc_825577B0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825577c0
	if (cr0.eq) goto loc_825577C0;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825577a8
	if (!cr0.eq) goto loc_825577A8;
loc_825577C0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825577d4
	if (cr0.eq) goto loc_825577D4;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825577d8
	if (!cr0.eq) goto loc_825577D8;
loc_825577D4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825577D8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82557810
	if (cr6.eq) goto loc_82557810;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,24(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,76(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
loc_82557810:
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r7,r10,11,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82557cf8
	if (!cr0.eq) goto loc_82557CF8;
	// rlwinm. r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82557cf8
	if (!cr0.eq) goto loc_82557CF8;
	// rlwinm. r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwinm r26,r9,27,30,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// beq 0x82557844
	if (cr0.eq) goto loc_82557844;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557844
	if (cr0.eq) goto loc_82557844;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82557844:
	// and r9,r11,r28
	ctx.r9.u64 = r11.u64 & r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557858
	if (cr0.eq) goto loc_82557858;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_82557858:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255786c
	if (cr0.eq) goto loc_8255786C;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255786c
	if (cr0.eq) goto loc_8255786C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8255786C:
	// lwz r27,12(r8)
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82557c20
	goto loc_82557C20;
loc_82557878:
	// addi r11,r26,10
	r11.s64 = r26.s64 + 10;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r11,r9,27
	r11.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82557cf8
	if (!cr0.eq) goto loc_82557CF8;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825578ac
	if (cr0.eq) goto loc_825578AC;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825578ac
	if (cr0.eq) goto loc_825578AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825578c4
	goto loc_825578C4;
loc_825578AC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825578c0
	if (cr0.eq) goto loc_825578C0;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825578c4
	if (!cr0.eq) goto loc_825578C4;
loc_825578C0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825578C4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x825578fc
	if (cr6.eq) goto loc_825578FC;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,24(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,76(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
loc_825578FC:
	// rlwinm. r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwinm r26,r9,27,30,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// beq 0x82557918
	if (cr0.eq) goto loc_82557918;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557918
	if (cr0.eq) goto loc_82557918;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82557918:
	// and r9,r11,r28
	ctx.r9.u64 = r11.u64 & r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255792c
	if (cr0.eq) goto loc_8255792C;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_8255792C:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557940
	if (cr0.eq) goto loc_82557940;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557940
	if (cr0.eq) goto loc_82557940;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82557940:
	// lwz r27,12(r8)
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x82557c1c
	goto loc_82557C1C;
loc_82557948:
	// rlwinm r11,r22,0,0,19
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFF000;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// li r4,102
	ctx.r4.s64 = 102;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r27,-4
	r11.s64 = r27.s64 + -4;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x825579bc
	if (cr6.lt) goto loc_825579BC;
	// beq cr6,0x825579ac
	if (cr6.eq) goto loc_825579AC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82557998
	if (cr6.lt) goto loc_82557998;
	// bne cr6,0x82557cf8
	if (!cr6.eq) goto loc_82557CF8;
	// li r25,4
	r25.s64 = 4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x825579c4
	if (!cr6.eq) goto loc_825579C4;
	// li r24,4
	r24.s64 = 4;
	// b 0x825579c4
	goto loc_825579C4;
loc_82557998:
	// li r25,3
	r25.s64 = 3;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x825579b4
	if (!cr6.eq) goto loc_825579B4;
	// li r24,3
	r24.s64 = 3;
	// b 0x825579b4
	goto loc_825579B4;
loc_825579AC:
	// li r25,2
	r25.s64 = 2;
	// li r24,2
	r24.s64 = 2;
loc_825579B4:
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x825579c4
	goto loc_825579C4;
loc_825579BC:
	// li r25,1
	r25.s64 = 1;
	// li r24,1
	r24.s64 = 1;
loc_825579C4:
	// lwz r9,40(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r8,27
	r11.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82557cf8
	if (!cr0.eq) goto loc_82557CF8;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825579f0
	if (cr0.eq) goto loc_825579F0;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825579f0
	if (cr0.eq) goto loc_825579F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82557a08
	goto loc_82557A08;
loc_825579F0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557a04
	if (cr0.eq) goto loc_82557A04;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x82557a08
	if (!cr0.eq) goto loc_82557A08;
loc_82557A04:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82557A08:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82557a40
	if (cr6.eq) goto loc_82557A40;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,24(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,76(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
loc_82557A40:
	// lwz r27,12(r9)
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r9,r8,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// rlwinm r7,r26,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm. r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// b 0x82557bdc
	goto loc_82557BDC;
loc_82557A58:
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// lwz r30,44(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// lwz r29,48(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-15872
	ctx.r10.s64 = ctx.r10.s64 + -15872;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r31,r26,1,0,30
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0xFF;
	// clrlwi r5,r11,27
	ctx.r5.u64 = r11.u32 & 0x1F;
	// srw r11,r10,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = r11.u32 & 0x3;
	// bl 0x82555620
	sub_82555620(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// beq cr6,0x82557aac
	if (cr6.eq) goto loc_82557AAC;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_82557AAC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r8,27
	r11.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82557cf8
	if (!cr0.eq) goto loc_82557CF8;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557ad4
	if (cr0.eq) goto loc_82557AD4;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557ad4
	if (cr0.eq) goto loc_82557AD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82557aec
	goto loc_82557AEC;
loc_82557AD4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557ae8
	if (cr0.eq) goto loc_82557AE8;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x82557aec
	if (!cr0.eq) goto loc_82557AEC;
loc_82557AE8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82557AEC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82557b24
	if (cr6.eq) goto loc_82557B24;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,24(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,76(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
loc_82557B24:
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// lwz r27,12(r9)
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// srw r9,r8,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r31.u8 & 0x3F));
	// b 0x82557bdc
	goto loc_82557BDC;
loc_82557B38:
	// lwz r31,40(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// lwz r4,44(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a91e8
	sub_824A91E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r9,27
	r11.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82557cf8
	if (!cr0.eq) goto loc_82557CF8;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557b78
	if (cr0.eq) goto loc_82557B78;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557b78
	if (cr0.eq) goto loc_82557B78;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82557b90
	goto loc_82557B90;
loc_82557B78:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557b8c
	if (cr0.eq) goto loc_82557B8C;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x82557b90
	if (!cr0.eq) goto loc_82557B90;
loc_82557B8C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82557B90:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82557bc8
	if (cr6.eq) goto loc_82557BC8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r8,24(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,76(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
loc_82557BC8:
	// rlwinm r8,r26,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,12(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm. r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
loc_82557BDC:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// clrlwi r26,r9,30
	r26.u64 = ctx.r9.u32 & 0x3;
	// beq 0x82557bf4
	if (cr0.eq) goto loc_82557BF4;
	// rlwinm. r9,r28,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557bf4
	if (cr0.eq) goto loc_82557BF4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_82557BF4:
	// and r9,r11,r28
	ctx.r9.u64 = r11.u64 & r28.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557c08
	if (cr0.eq) goto loc_82557C08;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
loc_82557C08:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557c1c
	if (cr0.eq) goto loc_82557C1C;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82557c1c
	if (cr0.eq) goto loc_82557C1C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82557C1C:
	// or r28,r11,r10
	r28.u64 = r11.u64 | ctx.r10.u64;
loc_82557C20:
	// and. r11,r28,r21
	r11.u64 = r28.u64 & r21.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82557728
	if (cr0.eq) goto loc_82557728;
	// b 0x82557cf8
	goto loc_82557CF8;
loc_82557C2C:
	// cmpwi cr6,r11,124
	cr6.compare<int32_t>(r11.s32, 124, xer);
	// bne cr6,0x82557cf8
	if (!cr6.eq) goto loc_82557CF8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82557cf8
	if (cr6.eq) goto loc_82557CF8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ffe38
	sub_824FFE38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82557cf8
	if (cr0.eq) goto loc_82557CF8;
	// addi r11,r26,10
	r11.s64 = r26.s64 + 10;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// blt cr6,0x82557cc8
	if (cr6.lt) goto loc_82557CC8;
	// beq cr6,0x82557cb8
	if (cr6.eq) goto loc_82557CB8;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x82557ca0
	if (cr6.lt) goto loc_82557CA0;
	// beq cr6,0x82557c8c
	if (cr6.eq) goto loc_82557C8C;
	// rlwinm r11,r22,0,0,19
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82557C8C:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// li r5,1
	ctx.r5.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82557cb0
	goto loc_82557CB0;
loc_82557CA0:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82557CB0:
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(f0.s64);
	// b 0x82557ce0
	goto loc_82557CE0;
loc_82557CB8:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82557cd4
	goto loc_82557CD4;
loc_82557CC8:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82557CD4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// li r5,0
	ctx.r5.s64 = 0;
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
loc_82557CE0:
	// rlwinm r11,r22,0,0,19
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82557398
	sub_82557398(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
loc_82557CF8:
	// stw r27,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r27.u32);
	// stw r26,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r26.u32);
	// stw r28,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r28.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_82557D10"))) PPC_WEAK_FUNC(sub_82557D10);
PPC_FUNC_IMPL(__imp__sub_82557D10) {
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
	// addi r25,r6,4
	r25.s64 = ctx.r6.s64 + 4;
	// li r24,0
	r24.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82557D38:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82557db8
	if (cr6.eq) goto loc_82557DB8;
	// lwz r11,16(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82557db0
	if (cr0.eq) goto loc_82557DB0;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r10,7,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82557db0
	if (cr0.eq) goto loc_82557DB0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82557dac
	if (cr6.eq) goto loc_82557DAC;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82557D8C:
	// srw r4,r9,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r5,r5,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// bne 0x82557d8c
	if (!cr0.eq) goto loc_82557D8C;
loc_82557DAC:
	// or r30,r8,r30
	r30.u64 = ctx.r8.u64 | r30.u64;
loc_82557DB0:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x82557d38
	goto loc_82557D38;
loc_82557DB8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// srd r8,r8,r11
	ctx.r8.u64 = r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (r11.u8 & 0x7F));
	// srd r8,r8,r11
	ctx.r8.u64 = r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (r11.u8 & 0x7F));
	// srd r11,r8,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (r11.u8 & 0x7F));
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rlwimi r7,r11,25,4,6
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0xE000000) | (ctx.r7.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82557e60
	if (cr6.eq) goto loc_82557E60;
	// mr r11,r24
	r11.u64 = r24.u64;
	// li r7,3
	ctx.r7.s64 = 3;
loc_82557E1C:
	// addi r8,r30,-1
	ctx.r8.s64 = r30.s64 + -1;
	// slw r6,r7,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// andc r8,r30,r8
	ctx.r8.u64 = r30.u64 & ~ctx.r8.u64;
	// andc r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf. r30,r8,r30
	r30.s64 = r30.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// subfic r10,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r10.s64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// andc r6,r29,r6
	ctx.r6.u64 = r29.u64 & ~ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r29,r6,r8
	r29.u64 = ctx.r6.u64 | ctx.r8.u64;
	// bne 0x82557e1c
	if (!cr0.eq) goto loc_82557E1C;
loc_82557E60:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwimi r11,r10,5,19,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x1FE0) | (r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82556538
	sub_82556538(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82557e94
	goto loc_82557E94;
loc_82557E90:
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
loc_82557E94:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82557e90
	if (!cr6.eq) goto loc_82557E90;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x824a9b30
	sub_824A9B30(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_82557EC0:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82557f98
	if (cr0.eq) goto loc_82557F98;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// subf r9,r24,r10
	ctx.r9.s64 = ctx.r10.s64 - r24.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82557f84
	if (cr0.eq) goto loc_82557F84;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r7,r9,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x82557f84
	if (cr0.eq) goto loc_82557F84;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82557f84
	if (cr6.eq) goto loc_82557F84;
	// rlwinm r10,r9,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r7,r9,0,27,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r6,r10,27,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x6;
	// rlwinm r5,r10,29,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x6;
	// rlwinm r4,r10,31,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x6;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// srw r6,r29,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r5,r29,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r5.u8 & 0x3F));
	// srw r4,r29,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwimi r5,r6,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r5,28
	ctx.r6.u64 = ctx.r5.u32 & 0xF;
	// rlwimi r4,r6,2,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r4,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82557f60
	goto loc_82557F60;
loc_82557F5C:
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
loc_82557F60:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82557f5c
	if (!cr6.eq) goto loc_82557F5C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
loc_82557F84:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82557ec0
	if (!cr6.eq) goto loc_82557EC0;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// b 0x82557ec0
	goto loc_82557EC0;
loc_82557F98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82557FA4"))) PPC_WEAK_FUNC(sub_82557FA4);
PPC_FUNC_IMPL(__imp__sub_82557FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82557FA8"))) PPC_WEAK_FUNC(sub_82557FA8);
PPC_FUNC_IMPL(__imp__sub_82557FA8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824ba690
	sub_824BA690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82556538
	sub_82556538(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// b 0x82557ff4
	goto loc_82557FF4;
loc_82557FF0:
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
loc_82557FF4:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82557ff0
	if (!cr6.eq) goto loc_82557FF0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x824a9b30
	sub_824A9B30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82558028"))) PPC_WEAK_FUNC(sub_82558028);
PPC_FUNC_IMPL(__imp__sub_82558028) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mulli r11,r25,40
	r11.s64 = r25.s64 * 40;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82558084
	if (cr0.eq) goto loc_82558084;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// clrlwi r11,r10,30
	r11.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825583dc
	if (cr6.eq) goto loc_825583DC;
loc_82558084:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825504e0
	sub_825504E0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,29,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x3FFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825580d0
	if (!cr6.eq) goto loc_825580D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ce3c0
	sub_824CE3C0(ctx, base);
	// stw r3,24(r28)
	PPC_STORE_U32(r28.u32 + 24, ctx.r3.u32);
loc_825580D0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82558204
	if (!cr0.eq) goto loc_82558204;
	// lwz r24,104(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r6,31
	r11.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82558118
	if (cr0.eq) goto loc_82558118;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82558118:
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// rlwinm r29,r27,3,0,28
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r27,108(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r5,123
	ctx.r5.s64 = 123;
	// lwz r24,100(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,14,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82553490
	sub_82553490(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82558168
	if (cr0.eq) goto loc_82558168;
	// li r11,0
	r11.s64 = 0;
loc_82558168:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,28,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825581b8
	if (!cr0.eq) goto loc_825581B8;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// b 0x825581c8
	goto loc_825581C8;
loc_825581B8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825581cc
	if (!cr6.eq) goto loc_825581CC;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_825581C8:
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_825581CC:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82550628
	sub_82550628(ctx, base);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// b 0x825583dc
	goto loc_825583DC;
loc_82558204:
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x82558228
	if (!cr0.eq) goto loc_82558228;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3619
	ctx.r4.s64 = 3619;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82558228:
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x8251d200
	sub_8251D200(ctx, base);
	// lwz r30,20(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8255824c
	if (cr6.eq) goto loc_8255824C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255824C:
	// li r11,0
	r11.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x824cd248
	sub_824CD248(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82558288
	if (cr0.eq) goto loc_82558288;
	// li r4,4509
	ctx.r4.s64 = 4509;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82558288:
	// lwz r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,119
	ctx.r6.s64 = 119;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r11,r29,1,27,30
	r11.u64 = (__builtin_rotateleft32(r29.u32, 1) & 0x1E) | (r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r27,r27,3,0,28
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r10,r11,17,7,14
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0x1FE0000) | (ctx.r10.u64 & 0xFFFFFFFFFE01FFFF);
	// rlwimi r10,r29,13,15,18
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 13) & 0x1E000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE1FFF);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// rlwinm r11,r11,28,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3FFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82555330
	sub_82555330(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ba690
	sub_824BA690(ctx, base);
	// lwz r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 544);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x825546f8
	sub_825546F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r30,-24
	r11.s64 = r30.s64 + -24;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwimi r10,r29,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// oris r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 131072;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// rlwimi r10,r9,15,3,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 15) & 0x1FFF8000) | (ctx.r10.u64 & 0xFFFFFFFFE0007FFF);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rlwimi r10,r25,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(r25.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwimi r9,r11,2,16,29
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0xFFFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0003);
	// rlwimi r9,r29,0,30,14
	ctx.r9.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0xFFFFFFFFFFFE0003) | (ctx.r9.u64 & 0x1FFFC);
	// stw r9,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r9.u32);
loc_825583DC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_825583E8"))) PPC_WEAK_FUNC(sub_825583E8);
PPC_FUNC_IMPL(__imp__sub_825583E8) {
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mulli r9,r11,40
	ctx.r9.s64 = r11.s64 * 40;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8255846c
	if (cr6.eq) goto loc_8255846C;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82558450
	if (cr6.eq) goto loc_82558450;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x8255843c
	if (cr6.eq) goto loc_8255843C;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x82558450
	if (cr6.eq) goto loc_82558450;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255843C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82556860
	sub_82556860(ctx, base);
	// b 0x8255847c
	goto loc_8255847C;
loc_82558450:
	// lwz r5,544(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82553ec8
	sub_82553EC8(ctx, base);
	// b 0x8255847c
	goto loc_8255847C;
loc_8255846C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82558028
	sub_82558028(ctx, base);
loc_8255847C:
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

__attribute__((alias("__imp__sub_82558494"))) PPC_WEAK_FUNC(sub_82558494);
PPC_FUNC_IMPL(__imp__sub_82558494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82558498"))) PPC_WEAK_FUNC(sub_82558498);
PPC_FUNC_IMPL(__imp__sub_82558498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r27,0(r21)
	PPC_STORE_U64(r21.u32 + 0, r27.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r27,8(r21)
	PPC_STORE_U64(r21.u32 + 8, r27.u64);
	// mr r28,r27
	r28.u64 = r27.u64;
	// std r27,16(r21)
	PPC_STORE_U64(r21.u32 + 16, r27.u64);
	// std r27,24(r21)
	PPC_STORE_U64(r21.u32 + 24, r27.u64);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r19,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, r19.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r15,r19,40
	r15.s64 = r19.s64 + 40;
	// mr r17,r27
	r17.u64 = r27.u64;
	// mr r23,r27
	r23.u64 = r27.u64;
	// rlwinm r14,r10,13,29,31
	r14.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// li r24,1
	r24.s64 = 1;
	// li r29,2
	r29.s64 = 2;
	// li r31,-1
	r31.s64 = -1;
loc_82558514:
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,13,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// bge cr6,0x82558668
	if (!cr6.lt) goto loc_82558668;
	// lwz r26,0(r15)
	r26.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r16,r11,7,29,31
	r16.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
	// cntlzw r11,r16
	r11.u64 = r16.u32 == 0 ? 32 : __builtin_clz(r16.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255a0d8
	if (cr0.eq) goto loc_8255A0D8;
	// mr r22,r27
	r22.u64 = r27.u64;
	// cmplwi r16,0
	cr0.compare<uint32_t>(r16.u32, 0, xer);
	// beq 0x82558658
	if (cr0.eq) goto loc_82558658;
	// mr r25,r27
	r25.u64 = r27.u64;
loc_82558554:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// lwz r18,88(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r11,r18,0,27,28
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a0d8
	if (!cr0.eq) goto loc_8255A0D8;
	// lwz r20,112(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15872
	r11.s64 = r11.s64 + -15872;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82558648
	if (cr0.eq) goto loc_82558648;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r19,80(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r23,27
	ctx.r9.u64 = r23.u32 & 0x1F;
	// rlwinm r11,r23,29,3,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// slw r8,r8,r22
	ctx.r8.u64 = r22.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r22.u8 & 0x3F));
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x824ffe38
	sub_824FFE38(ctx, base);
	// addi r8,r25,1
	ctx.r8.s64 = r25.s64 + 1;
	// clrlwi r11,r25,27
	r11.u64 = r25.u32 & 0x1F;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// rlwinm r10,r25,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 27) & 0x7FFFFFF;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + r17.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// slw r7,r31,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// slw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r8.u8 & 0x3F));
	// slw r11,r24,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r24.u32 << (r11.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// bl 0x824ffec0
	sub_824FFEC0(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x825507b8
	sub_825507B8(ctx, base);
	// add r11,r23,r22
	r11.u64 = r23.u64 + r22.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r19,484(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r24,1
	r24.s64 = 1;
	// stfdx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + ctx.r10.u32, ctx.f1.u64);
loc_82558648:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// cmplw cr6,r22,r16
	cr6.compare<uint32_t>(r22.u32, r16.u32, xer);
	// blt cr6,0x82558554
	if (cr6.lt) goto loc_82558554;
loc_82558658:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// b 0x82558514
	goto loc_82558514;
loc_82558668:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824b3978
	sub_824B3978(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82558e5c
	if (cr0.eq) goto loc_82558E5C;
	// addi r11,r19,40
	r11.s64 = r19.s64 + 40;
	// mr r26,r24
	r26.u64 = r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r22,r11,28
	r22.u64 = r11.u32 & 0xF;
	// rlwinm r20,r11,28,28,31
	r20.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r18,r11,7,29,31
	r18.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f29,-31360(r10)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31360);
	// lfd f30,-31368(r11)
	f30.u64 = PPC_LOAD_U64(r11.u32 + -31368);
loc_825586AC:
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// and r9,r26,r20
	ctx.r9.u64 = r26.u64 & r20.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// and r11,r26,r22
	r11.u64 = r26.u64 & r22.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,27
	cr6.compare<uint32_t>(ctx.r10.u32, 27, xer);
	// bgt cr6,0x82558e48
	if (cr6.gt) goto loc_82558E48;
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-22544
	r12.s64 = r12.s64 + -22544;
	// rlwinm r0,r10,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32170
	r12.s64 = -2108293120;
	// addi r12,r12,-30992
	r12.s64 = r12.s64 + -30992;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_825586F0;
	case 1:
		goto loc_8255878C;
	case 2:
		goto loc_825588D8;
	case 3:
		goto loc_8255881C;
	case 4:
		goto loc_82558914;
	case 5:
		goto loc_82558950;
	case 6:
		goto loc_82558A30;
	case 7:
		goto loc_82558AC0;
	case 8:
		goto loc_82558AF0;
	case 9:
		goto loc_82558B70;
	case 10:
		goto loc_82558B98;
	case 11:
		goto loc_82558BB4;
	case 12:
		goto loc_82558C30;
	case 13:
		goto loc_82558D28;
	case 14:
		goto loc_82558D48;
	case 15:
		goto loc_82558E48;
	case 16:
		goto loc_82558E48;
	case 17:
		goto loc_82558E48;
	case 18:
		goto loc_82558E48;
	case 19:
		goto loc_82558E48;
	case 20:
		goto loc_82558E48;
	case 21:
		goto loc_82558E48;
	case 22:
		goto loc_82558E48;
	case 23:
		goto loc_82558E48;
	case 24:
		goto loc_82558914;
	case 25:
		goto loc_82558950;
	case 26:
		goto loc_82558A30;
	case 27:
		goto loc_82558AC0;
	default:
		__builtin_unreachable();
	}
loc_825586F0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r24,r27,3,0,28
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfdx f0,r24,r11
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r24.u32 + r11.u32);
	// lfdx f13,r24,r10
	ctx.f13.u64 = PPC_LOAD_U64(r24.u32 + ctx.r10.u32);
	// fadd f1,f0,f13
	ctx.f1.f64 = f0.f64 + ctx.f13.f64;
loc_82558718:
	// bl 0x824f7128
	sub_824F7128(ctx, base);
loc_8255871C:
	// stfdx f1,r24,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r24.u32 + r21.u32, ctx.f1.u64);
loc_82558720:
	// rlwinm r25,r27,1,0,30
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r6,r25,1
	ctx.r6.s64 = r25.s64 + 1;
	// addi r7,r25,1
	ctx.r7.s64 = r25.s64 + 1;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r5,r25,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r25,27
	r11.u64 = r25.u32 & 0x1F;
	// clrlwi r10,r25,27
	ctx.r10.u64 = r25.u32 & 0x1F;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r4,r25,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// slw r9,r29,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r6.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r8,r29,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r7.u8 & 0x3F));
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// slw r6,r31,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// and r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srw r4,r9,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// srw r3,r8,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x82558e2c
	goto loc_82558E2C;
loc_8255878C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825587d0
	if (cr6.eq) goto loc_825587D0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825587d8
	if (cr6.eq) goto loc_825587D8;
	// rlwinm r24,r27,3,0,28
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfdx f13,r24,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r24.u32 + r11.u32);
	// lfdx f0,r24,r10
	f0.u64 = PPC_LOAD_U64(r24.u32 + ctx.r10.u32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// beq cr6,0x825587c8
	if (cr6.eq) goto loc_825587C8;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x825587c8
	if (cr6.eq) goto loc_825587C8;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// b 0x82558718
	goto loc_82558718;
loc_825587C8:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x8255871c
	goto loc_8255871C;
loc_825587D0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
loc_825587D8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,29,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x4;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// bl 0x823ae100
	sub_823AE100(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82558e48
	if (cr6.gt) goto loc_82558E48;
	// lis r11,-64
	r11.s64 = -4194304;
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfdx f0,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f0.u64);
	// b 0x82558e48
	goto loc_82558E48;
loc_8255881C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82558850
	if (!cr6.lt) goto loc_82558850;
	// stfdx f0,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f0.u64);
	// b 0x82558854
	goto loc_82558854;
loc_82558850:
	// stfdx f13,r11,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + r21.u32, ctx.f13.u64);
loc_82558854:
	// rlwinm r25,r27,1,0,30
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r6,r25,1
	ctx.r6.s64 = r25.s64 + 1;
	// addi r7,r25,1
	ctx.r7.s64 = r25.s64 + 1;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r5,r25,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r25,27
	r11.u64 = r25.u32 & 0x1F;
	// clrlwi r10,r25,27
	ctx.r10.u64 = r25.u32 & 0x1F;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r4,r25,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// slw r9,r29,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r6.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r8,r29,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r7.u8 & 0x3F));
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// slw r6,r31,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// and r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srw r4,r9,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// srw r3,r8,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
loc_825588BC:
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
	// clrlwi r10,r25,27
	ctx.r10.u64 = r25.u32 & 0x1F;
	// rlwinm r11,r25,29,3,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82558e44
	goto loc_82558E44;
loc_825588D8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8255890c
	if (cr6.lt) goto loc_8255890C;
	// stfdx f0,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f0.u64);
	// b 0x82558720
	goto loc_82558720;
loc_8255890C:
	// stfdx f13,r11,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + r21.u32, ctx.f13.u64);
	// b 0x82558720
	goto loc_82558720;
loc_82558914:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82558948
	if (!cr6.eq) goto loc_82558948;
	// stfdx f29,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f29.u64);
	// b 0x82558720
	goto loc_82558720;
loc_82558948:
	// stfdx f30,r11,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + r21.u32, f30.u64);
	// b 0x82558720
	goto loc_82558720;
loc_82558950:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255898c
	if (cr6.eq) goto loc_8255898C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82558984
	if (!cr6.gt) goto loc_82558984;
loc_8255897C:
	// stfdx f29,r11,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + r21.u32, f29.u64);
	// b 0x82558854
	goto loc_82558854;
loc_82558984:
	// stfdx f30,r11,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + r21.u32, f30.u64);
	// b 0x82558854
	goto loc_82558854;
loc_8255898C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r24,r27,3,0,28
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r24,r11
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r24.u32 + r11.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82558e48
	if (!cr6.eq) goto loc_82558E48;
	// addi r11,r19,40
	r11.s64 = r19.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,27,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x82558e48
	if (!cr6.eq) goto loc_82558E48;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stfdx f30,r24,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r24.u32 + r21.u32, f30.u64);
loc_825589E8:
	// rlwinm r25,r27,1,0,30
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r25,1
	ctx.r9.s64 = r25.s64 + 1;
	// clrlwi r11,r25,27
	r11.u64 = r25.u32 & 0x1F;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r8,r25,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// slw r10,r29,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// srw r24,r10,r11
	r24.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// bl 0x825008e0
	sub_825008E0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x825588bc
	goto loc_825588BC;
loc_82558A30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558a60
	if (cr6.eq) goto loc_82558A60;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82558984
	if (cr6.lt) goto loc_82558984;
	// b 0x8255897c
	goto loc_8255897C;
loc_82558A60:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r24,r27,3,0,28
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r24,r11
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r24.u32 + r11.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82558e48
	if (!cr6.eq) goto loc_82558E48;
	// addi r11,r19,40
	r11.s64 = r19.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,27,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82558e48
	if (!cr6.eq) goto loc_82558E48;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfdx f29,r24,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r24.u32 + r21.u32, f29.u64);
	// b 0x825589e8
	goto loc_825589E8;
loc_82558AC0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82558984
	if (cr6.eq) goto loc_82558984;
	// b 0x8255897c
	goto loc_8255897C;
loc_82558AF0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r25,r27,3,0,28
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f31,r25,r11
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r25.u32 + r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x824f7178
	sub_824F7178(ctx, base);
	// bl 0x823ae068
	sub_823AE068(ctx, base);
	// fadd f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f31.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
loc_82558B18:
	// stfdx f1,r25,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r25.u32 + r21.u32, ctx.f1.u64);
loc_82558B1C:
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r6,r11,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r11,27
	ctx.r5.u64 = r11.u32 & 0x1F;
	// lwzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// slw r11,r29,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r7.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// slw r8,r31,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// srw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r11,r11,r5
	r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r5.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, r11.u32);
	// b 0x82558e48
	goto loc_82558E48;
loc_82558B70:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r25,r27,3,0,28
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lfdx f1,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r25.u32 + r11.u32);
	// bl 0x826a7f20
	sub_826A7F20(ctx, base);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stfdx f0,r25,r21
	PPC_STORE_U64(r25.u32 + r21.u32, f0.u64);
	// b 0x82558b1c
	goto loc_82558B1C;
loc_82558B98:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r25,r27,3,0,28
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f1,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r25.u32 + r11.u32);
	// bl 0x824f7178
	sub_824F7178(ctx, base);
	// b 0x82558b18
	goto loc_82558B18;
loc_82558BB4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// addi r11,r27,8
	r11.s64 = r27.s64 + 8;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82558e48
	if (cr0.eq) goto loc_82558E48;
	// rlwinm r24,r27,3,0,28
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfdx f13,r24,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r24.u32 + r11.u32);
	// lfdx f0,r24,r10
	f0.u64 = PPC_LOAD_U64(r24.u32 + ctx.r10.u32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// beq cr6,0x82558c14
	if (cr6.eq) goto loc_82558C14;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x82558c14
	if (cr6.eq) goto loc_82558C14;
	// fmul f1,f0,f13
	ctx.f1.f64 = f0.f64 * ctx.f13.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// b 0x82558c18
	goto loc_82558C18;
loc_82558C14:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_82558C18:
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lfdx f0,r24,r11
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r24.u32 + r11.u32);
	// fadd f1,f0,f1
	ctx.f1.f64 = f0.f64 + ctx.f1.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// stfdx f1,r24,r21
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r24.u32 + r21.u32, ctx.f1.u64);
	// b 0x82558d90
	goto loc_82558D90;
loc_82558C30:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82558d00
	if (!cr6.eq) goto loc_82558D00;
loc_82558C4C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_82558C58:
	// rlwinm r25,r27,1,0,30
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stfdx f0,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f0.u64);
	// addi r5,r25,1
	ctx.r5.s64 = r25.s64 + 1;
	// rlwinm r4,r25,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r5,27
	ctx.r5.u64 = ctx.r5.u32 & 0x1F;
	// addi r6,r25,1
	ctx.r6.s64 = r25.s64 + 1;
	// addi r23,r25,1
	r23.s64 = r25.s64 + 1;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r23,r23,27
	r23.u64 = r23.u32 & 0x1F;
	// rlwinm r3,r25,29,3,29
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r25,27
	r11.u64 = r25.u32 & 0x1F;
	// clrlwi r10,r25,27
	ctx.r10.u64 = r25.u32 & 0x1F;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r17,r25,29,3,29
	r17.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// clrlwi r24,r25,27
	r24.u64 = r25.u32 & 0x1F;
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// lwzx r7,r17,r7
	ctx.r7.u64 = PPC_LOAD_U32(r17.u32 + ctx.r7.u32);
	// slw r9,r29,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r5.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r8,r29,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r6.u8 & 0x3F));
	// and r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// slw r5,r31,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// slw r9,r29,r23
	ctx.r9.u64 = r23.u8 & 0x20 ? 0 : (r29.u32 << (r23.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 & ctx.r7.u64;
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// and r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 & ctx.r5.u64;
	// slw r6,r31,r24
	ctx.r6.u64 = r24.u8 & 0x20 ? 0 : (r31.u32 << (r24.u8 & 0x3F));
	// and r23,r7,r6
	r23.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srw r4,r9,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// srw r3,r8,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
	// srw r4,r23,r24
	ctx.r4.u64 = r24.u8 & 0x20 ? 0 : (r23.u32 >> (r24.u8 & 0x3F));
	// b 0x825588bc
	goto loc_825588BC;
loc_82558D00:
	// addi r10,r27,8
	ctx.r10.s64 = r27.s64 + 8;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82558e48
	if (cr0.eq) goto loc_82558E48;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// b 0x82558c58
	goto loc_82558C58;
loc_82558D28:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82558d00
	if (cr6.lt) goto loc_82558D00;
	// b 0x82558c4c
	goto loc_82558C4C;
loc_82558D48:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82558e48
	if (cr6.eq) goto loc_82558E48;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bgt cr6,0x82558c4c
	if (cr6.gt) goto loc_82558C4C;
	// addi r10,r27,8
	ctx.r10.s64 = r27.s64 + 8;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82558e48
	if (cr0.eq) goto loc_82558E48;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfdx f0,r11,r10
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// stfdx f0,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f0.u64);
loc_82558D90:
	// rlwinm r25,r27,1,0,30
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r5,r25,1
	ctx.r5.s64 = r25.s64 + 1;
	// rlwinm r4,r25,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r5,27
	ctx.r5.u64 = ctx.r5.u32 & 0x1F;
	// addi r6,r25,1
	ctx.r6.s64 = r25.s64 + 1;
	// addi r23,r25,1
	r23.s64 = r25.s64 + 1;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// clrlwi r23,r23,27
	r23.u64 = r23.u32 & 0x1F;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r3,r25,29,3,29
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r25,27
	r11.u64 = r25.u32 & 0x1F;
	// clrlwi r10,r25,27
	ctx.r10.u64 = r25.u32 & 0x1F;
	// rlwinm r17,r25,29,3,29
	r17.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lwzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// clrlwi r24,r25,27
	r24.u64 = r25.u32 & 0x1F;
	// or r28,r26,r28
	r28.u64 = r26.u64 | r28.u64;
	// lwzx r7,r17,r7
	ctx.r7.u64 = PPC_LOAD_U32(r17.u32 + ctx.r7.u32);
	// slw r9,r29,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r5.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r8,r29,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r6.u8 & 0x3F));
	// and r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// slw r5,r31,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// slw r9,r29,r23
	ctx.r9.u64 = r23.u8 & 0x20 ? 0 : (r29.u32 << (r23.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 & ctx.r7.u64;
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// and r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 & ctx.r5.u64;
	// slw r6,r31,r24
	ctx.r6.u64 = r24.u8 & 0x20 ? 0 : (r31.u32 << (r24.u8 & 0x3F));
	// and r23,r7,r6
	r23.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srw r4,r9,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// srw r3,r8,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
	// srw r4,r23,r24
	ctx.r4.u64 = r24.u8 & 0x20 ? 0 : (r23.u32 >> (r24.u8 & 0x3F));
loc_82558E2C:
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
	// clrlwi r10,r25,27
	ctx.r10.u64 = r25.u32 & 0x1F;
	// rlwinm r11,r25,29,3,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82558E44:
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82558E48:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// rlwinm r26,r26,1,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// blt cr6,0x825586ac
	if (cr6.lt) goto loc_825586AC;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82558E5C:
	// lwz r25,8(r19)
	r25.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r25,25,25,31
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82558e78
	if (cr6.lt) goto loc_82558E78;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// ble cr6,0x82558e7c
	if (!cr6.gt) goto loc_82558E7C;
loc_82558E78:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82558E7C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82559270
	if (cr0.eq) goto loc_82559270;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// beq cr6,0x82559168
	if (cr6.eq) goto loc_82559168;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// beq cr6,0x825590ac
	if (cr6.eq) goto loc_825590AC;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// beq cr6,0x82558fec
	if (cr6.eq) goto loc_82558FEC;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// beq cr6,0x8255a0d8
	if (cr6.eq) goto loc_8255A0D8;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// beq cr6,0x82558f84
	if (cr6.eq) goto loc_82558F84;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(r11.u32, 29, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82558ee0
	if (cr0.eq) goto loc_82558EE0;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// stfd f0,24(r21)
	PPC_STORE_U64(r21.u32 + 24, f0.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r9,0,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// li r28,8
	r28.s64 = 8;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82558EE0:
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82558f08
	if (cr0.eq) goto loc_82558F08;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stfd f0,16(r21)
	PPC_STORE_U64(r21.u32 + 16, f0.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r9,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82558F08:
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82558f70
	if (cr0.eq) goto loc_82558F70;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82558f70
	if (cr0.eq) goto loc_82558F70;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f12,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x82558f44
	if (cr6.eq) goto loc_82558F44;
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82558f44
	if (cr6.eq) goto loc_82558F44;
	// fmul f1,f12,f13
	ctx.f1.f64 = ctx.f12.f64 * ctx.f13.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
loc_82558F44:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfd f0,8(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 8, f0.u64);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// rlwinm r4,r11,30,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// rlwinm r3,r10,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82558F70:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
	// lfd f0,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// stfd f0,0(r21)
	PPC_STORE_U64(r21.u32 + 0, f0.u64);
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82558F84:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f13,168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82558fb0
	if (cr6.lt) goto loc_82558FB0;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82558fb4
	goto loc_82558FB4;
loc_82558FB0:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_82558FB4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x82558fc4
	if (cr6.lt) goto loc_82558FC4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82558fc8
	goto loc_82558FC8;
loc_82558FC4:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f0.f64;
loc_82558FC8:
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x82558fd8
	if (cr6.lt) goto loc_82558FD8;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_82558FD8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfd f13,0(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 0, ctx.f13.u64);
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x82554a80
	sub_82554A80(ctx, base);
	// b 0x82559264
	goto loc_82559264;
loc_82558FEC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// rlwinm r11,r11,0,20,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f31,-31368(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x82559040
	if (cr6.eq) goto loc_82559040;
	// lfd f0,184(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82559040
	if (cr6.eq) goto loc_82559040;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// b 0x82559044
	goto loc_82559044;
loc_82559040:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82559044:
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fadd f1,f0,f1
	ctx.f1.f64 = f0.f64 + ctx.f1.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x82559078
	if (cr6.eq) goto loc_82559078;
	// lfd f0,176(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82559078
	if (cr6.eq) goto loc_82559078;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// b 0x8255907c
	goto loc_8255907C;
loc_82559078:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_8255907C:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f30.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfd f1,0(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 0, ctx.f1.u64);
	// mr r28,r24
	r28.u64 = r24.u64;
	// clrlwi r31,r11,30
	r31.u64 = r11.u32 & 0x3;
	// bl 0x82500938
	sub_82500938(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824f78b8
	sub_824F78B8(ctx, base);
	// b 0x82559264
	goto loc_82559264;
loc_825590AC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// rlwinm r11,r11,0,24,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,112
	cr6.compare<uint32_t>(r11.u32, 112, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f31,-31368(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x825590f8
	if (cr6.eq) goto loc_825590F8;
	// lfd f0,192(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x825590f8
	if (cr6.eq) goto loc_825590F8;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x825590fc
	goto loc_825590FC;
loc_825590F8:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_825590FC:
	// lfd f13,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x82559120
	if (cr6.eq) goto loc_82559120;
	// lfd f0,184(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82559120
	if (cr6.eq) goto loc_82559120;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// b 0x82559124
	goto loc_82559124;
loc_82559120:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82559124:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f30.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82559154
	if (cr6.eq) goto loc_82559154;
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x82559154
	if (cr6.eq) goto loc_82559154;
	// fmul f1,f0,f13
	ctx.f1.f64 = f0.f64 * ctx.f13.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// b 0x82559158
	goto loc_82559158;
loc_82559154:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82559158:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f30.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82559254
	goto loc_82559254;
loc_82559168:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// rlwinm r11,r11,0,24,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,240
	cr6.compare<uint32_t>(r11.u32, 240, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f31,-31368(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x825591b4
	if (cr6.eq) goto loc_825591B4;
	// lfd f0,200(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x825591b4
	if (cr6.eq) goto loc_825591B4;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x825591b8
	goto loc_825591B8;
loc_825591B4:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_825591B8:
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x825591dc
	if (cr6.eq) goto loc_825591DC;
	// lfd f0,192(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x825591dc
	if (cr6.eq) goto loc_825591DC;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// b 0x825591e0
	goto loc_825591E0;
loc_825591DC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_825591E0:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f30.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82559210
	if (cr6.eq) goto loc_82559210;
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x82559210
	if (cr6.eq) goto loc_82559210;
	// fmul f1,f0,f13
	ctx.f1.f64 = f0.f64 * ctx.f13.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// b 0x82559214
	goto loc_82559214;
loc_82559210:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82559214:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f30.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82559244
	if (cr6.eq) goto loc_82559244;
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// beq cr6,0x82559244
	if (cr6.eq) goto loc_82559244;
	// fmul f1,f0,f13
	ctx.f1.f64 = f0.f64 * ctx.f13.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// b 0x82559248
	goto loc_82559248;
loc_82559244:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_82559248:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + f30.f64;
	// bl 0x824f7128
	sub_824F7128(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
loc_82559254:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfd f1,0(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 0, ctx.f1.u64);
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x82500938
	sub_82500938(ctx, base);
loc_82559264:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// or r11,r3,r11
	r11.u64 = ctx.r3.u64 | r11.u64;
	// b 0x8255a0f0
	goto loc_8255A0F0;
loc_82559270:
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// blt cr6,0x82559284
	if (cr6.lt) goto loc_82559284;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(r11.u32, 81, xer);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// ble cr6,0x82559288
	if (!cr6.gt) goto loc_82559288;
loc_82559284:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82559288:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82559608
	if (cr0.eq) goto loc_82559608;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f1,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// addi r11,r11,-38
	r11.s64 = r11.s64 + -38;
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(r11.u32, 42, xer);
	// bgt cr6,0x8255a0d8
	if (cr6.gt) goto loc_8255A0D8;
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-22632
	r12.s64 = r12.s64 + -22632;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32170
	r12.s64 = -2108293120;
	// addi r12,r12,-27916
	r12.s64 = r12.s64 + -27916;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82559514;
	case 1:
		goto loc_82559560;
	case 2:
		goto loc_82559574;
	case 3:
		goto loc_82559550;
	case 4:
		goto loc_8255A0D8;
	case 5:
		goto loc_8255A0D8;
	case 6:
		goto loc_8255A0D8;
	case 7:
		goto loc_825592F4;
	case 8:
		goto loc_82559320;
	case 9:
		goto loc_82559370;
	case 10:
		goto loc_825593A0;
	case 11:
		goto loc_825593E0;
	case 12:
		goto loc_82559434;
	case 13:
		goto loc_82559468;
	case 14:
		goto loc_82559488;
	case 15:
		goto loc_825594A8;
	case 16:
		goto loc_825595A4;
	case 17:
		goto loc_8255A0D8;
	case 18:
		goto loc_8255A0D8;
	case 19:
		goto loc_8255A0D8;
	case 20:
		goto loc_825594F8;
	case 21:
		goto loc_82559514;
	case 22:
		goto loc_82559528;
	case 23:
		goto loc_8255953C;
	case 24:
		goto loc_8255A0D8;
	case 25:
		goto loc_8255A0D8;
	case 26:
		goto loc_8255A0D8;
	case 27:
		goto loc_8255A0D8;
	case 28:
		goto loc_82559514;
	case 29:
		goto loc_82559560;
	case 30:
		goto loc_82559574;
	case 31:
		goto loc_82559550;
	case 32:
		goto loc_82559588;
	case 33:
		goto loc_825594C8;
	case 34:
		goto loc_8255A0D8;
	case 35:
		goto loc_8255A0D8;
	case 36:
		goto loc_8255A0D8;
	case 37:
		goto loc_8255A0D8;
	case 38:
		goto loc_8255A0D8;
	case 39:
		goto loc_8255A0D8;
	case 40:
		goto loc_8255A0D8;
	case 41:
		goto loc_825594E8;
	case 42:
		goto loc_825594F0;
	default:
		__builtin_unreachable();
	}
loc_825592F4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x82559508
	if (cr6.eq) goto loc_82559508;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82559314
	if (!cr6.lt) goto loc_82559314;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82559314:
	// bl 0x8254fe90
	sub_8254FE90(ctx, base);
loc_82559318:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x825595fc
	goto loc_825595FC;
loc_82559320:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x8255959c
	if (cr6.eq) goto loc_8255959C;
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82559348
	if (cr6.gt) goto loc_82559348;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82559348:
	// bl 0x8254ff18
	sub_8254FF18(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823ae100
	sub_823AE100(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x825595fc
	if (!cr6.eq) goto loc_825595FC;
loc_8255935C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfd f31,29128(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 29128);
loc_82559364:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x825595fc
	goto loc_825595FC;
loc_82559370:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x8255959c
	if (cr6.eq) goto loc_8255959C;
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82559398
	if (cr6.gt) goto loc_82559398;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82559398:
	// bl 0x8254ff18
	sub_8254FF18(ctx, base);
	// b 0x82559318
	goto loc_82559318;
loc_825593A0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x825593b8
	if (!cr6.eq) goto loc_825593B8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825593B8:
	// bl 0x825501e0
	sub_825501E0(ctx, base);
loc_825593BC:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823ae100
	sub_823AE100(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8255935c
	if (cr6.eq) goto loc_8255935C;
	// cmpwi cr6,r3,512
	cr6.compare<int32_t>(ctx.r3.s32, 512, xer);
	// bne cr6,0x825595fc
	if (!cr6.eq) goto loc_825595FC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfd f31,29120(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + 29120);
	// b 0x82559364
	goto loc_82559364;
loc_825593E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f30,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x825593f8
	if (!cr6.eq) goto loc_825593F8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825593F8:
	// bl 0x825501e0
	sub_825501E0(ctx, base);
loc_825593FC:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823ae100
	sub_823AE100(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8255941c
	if (cr6.eq) goto loc_8255941C;
	// cmpwi cr6,r3,512
	cr6.compare<int32_t>(ctx.r3.s32, 512, xer);
	// bne cr6,0x825595fc
	if (!cr6.eq) goto loc_825595FC;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// b 0x825595fc
	goto loc_825595FC;
loc_8255941C:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f31.f64 = double(temp.f32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x825595fc
	goto loc_825595FC;
loc_82559434:
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 16);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// bne 0x82559450
	if (!cr0.eq) goto loc_82559450;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x825595fc
	if (cr6.eq) goto loc_825595FC;
loc_82559450:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x82559460
	if (!cr6.eq) goto loc_82559460;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82559460:
	// bl 0x825501e0
	sub_825501E0(ctx, base);
	// b 0x82559318
	goto loc_82559318;
loc_82559468:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82559480
	if (cr6.gt) goto loc_82559480;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82559480:
	// bl 0x82550110
	sub_82550110(ctx, base);
	// b 0x825593bc
	goto loc_825593BC;
loc_82559488:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f30,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// bgt cr6,0x825594a0
	if (cr6.gt) goto loc_825594A0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825594A0:
	// bl 0x82550110
	sub_82550110(ctx, base);
	// b 0x825593fc
	goto loc_825593FC;
loc_825594A8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x825594c0
	if (cr6.gt) goto loc_825594C0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825594C0:
	// bl 0x82550110
	sub_82550110(ctx, base);
	// b 0x82559318
	goto loc_82559318;
loc_825594C8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x825594e0
	if (cr6.gt) goto loc_825594E0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825594E0:
	// bl 0x82550080
	sub_82550080(ctx, base);
	// b 0x82559318
	goto loc_82559318;
loc_825594E8:
	// bl 0x8254ffb0
	sub_8254FFB0(ctx, base);
	// b 0x82559318
	goto loc_82559318;
loc_825594F0:
	// bl 0x82550018
	sub_82550018(ctx, base);
	// b 0x82559318
	goto loc_82559318;
loc_825594F8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
loc_82559504:
	// beq cr6,0x825595fc
	if (cr6.eq) goto loc_825595FC;
loc_82559508:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// b 0x825595fc
	goto loc_825595FC;
loc_82559514:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x825595fc
	if (!cr6.eq) goto loc_825595FC;
	// b 0x82559508
	goto loc_82559508;
loc_82559528:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bgt cr6,0x825595fc
	if (cr6.gt) goto loc_825595FC;
	// b 0x82559508
	goto loc_82559508;
loc_8255953C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x825595fc
	if (!cr6.lt) goto loc_825595FC;
	// b 0x82559508
	goto loc_82559508;
loc_82559550:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// b 0x82559504
	goto loc_82559504;
loc_82559560:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x825595fc
	if (!cr6.gt) goto loc_825595FC;
	// b 0x82559508
	goto loc_82559508;
loc_82559574:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// blt cr6,0x825595fc
	if (cr6.lt) goto loc_825595FC;
	// b 0x82559508
	goto loc_82559508;
loc_82559588:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,-31360(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x825595fc
	if (cr6.eq) goto loc_825595FC;
	// lis r11,-32249
	r11.s64 = -2113470464;
loc_8255959C:
	// lfd f31,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// b 0x825595fc
	goto loc_825595FC;
loc_825595A4:
	// rlwinm. r11,r10,31,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825595fc
	if (cr0.eq) goto loc_825595FC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f30,-28592(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(r11.u32 + -28592);
	// fadd f1,f1,f30
	ctx.f1.f64 = ctx.f1.f64 + f30.f64;
	// bl 0x824f7178
	sub_824F7178(ctx, base);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fadd f1,f0,f30
	ctx.f1.f64 = f0.f64 + f30.f64;
	// bl 0x824f7178
	sub_824F7178(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x825595d8
	if (!cr6.gt) goto loc_825595D8;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_825595D8:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfd f13,-22400(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -22400);
	// fcmpu cr6,f31,f13
	cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x825595f8
	if (cr6.lt) goto loc_825595F8;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f0,2240(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 2240);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x825595fc
	if (!cr6.gt) goto loc_825595FC;
loc_825595F8:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f13.f64;
loc_825595FC:
	// stfd f31,0(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 0, f31.u64);
	// mr r28,r24
	r28.u64 = r24.u64;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82559608:
	// cmplwi cr6,r11,106
	cr6.compare<uint32_t>(r11.u32, 106, xer);
	// bgt cr6,0x82559f98
	if (cr6.gt) goto loc_82559F98;
	// beq cr6,0x82559f34
	if (cr6.eq) goto loc_82559F34;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(r11.u32, 95, xer);
	// beq cr6,0x82559e80
	if (cr6.eq) goto loc_82559E80;
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(r11.u32, 96, xer);
	// beq cr6,0x82559e14
	if (cr6.eq) goto loc_82559E14;
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(r11.u32, 99, xer);
	// beq cr6,0x82559dbc
	if (cr6.eq) goto loc_82559DBC;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(r11.u32, 102, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// rlwinm r26,r19,0,0,19
	r26.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x824f7c30
	sub_824F7C30(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x8255a17c
	if (cr6.gt) goto loc_8255A17C;
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-22664
	r12.s64 = r12.s64 + -22664;
	// rlwinm r0,r3,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32170
	r12.s64 = -2108293120;
	// addi r12,r12,-27016
	r12.s64 = r12.s64 + -27016;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82559678;
	case 1:
		goto loc_82559718;
	case 2:
		goto loc_825597B8;
	case 3:
		goto loc_82559854;
	case 4:
		goto loc_825598F0;
	case 5:
		goto loc_82559B14;
	case 6:
		goto loc_825599E8;
	case 7:
		goto loc_82559B14;
	case 8:
		goto loc_82559B14;
	case 9:
		goto loc_82559B14;
	case 10:
		goto loc_82559C74;
	case 11:
		goto loc_82559C74;
	case 12:
		goto loc_82559C74;
	default:
		__builtin_unreachable();
	}
loc_82559678:
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r21
	r11.u64 = r21.u64;
	// subf r7,r21,r9
	ctx.r7.s64 = ctx.r9.s64 - r21.s64;
loc_82559694:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825596f8
	if (cr0.eq) goto loc_825596F8;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// lfdx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// slw r6,r27,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r5.u8 & 0x3F));
	// slw r5,r24,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r8.u8 & 0x3F));
	// or r28,r5,r28
	r28.u64 = ctx.r5.u64 | r28.u64;
	// lwa r5,80(r1)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfd f0,0(r11)
	PPC_STORE_U64(r11.u32 + 0, f0.u64);
	// lwzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r6.u32);
loc_825596F8:
	// lwz r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82559694
	if (cr6.lt) goto loc_82559694;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82559718:
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r21
	r11.u64 = r21.u64;
	// subf r7,r21,r9
	ctx.r7.s64 = ctx.r9.s64 - r21.s64;
loc_82559734:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82559798
	if (cr0.eq) goto loc_82559798;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// slw r6,r27,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r5.u8 & 0x3F));
	// slw r5,r24,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r8.u8 & 0x3F));
	// or r28,r5,r28
	r28.u64 = ctx.r5.u64 | r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfd f0,0(r11)
	PPC_STORE_U64(r11.u32 + 0, f0.u64);
	// lwzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r6.u32);
loc_82559798:
	// lwz r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82559734
	if (cr6.lt) goto loc_82559734;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_825597B8:
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r21
	r11.u64 = r21.u64;
	// subf r7,r21,r9
	ctx.r7.s64 = ctx.r9.s64 - r21.s64;
loc_825597D4:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82559834
	if (cr0.eq) goto loc_82559834;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// slw r6,r29,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r5.u8 & 0x3F));
	// slw r5,r24,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r8.u8 & 0x3F));
	// or r28,r5,r28
	r28.u64 = ctx.r5.u64 | r28.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,0(r11)
	PPC_STORE_U64(r11.u32 + 0, f0.u64);
	// lwzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r6.u32);
loc_82559834:
	// lwz r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x825597d4
	if (cr6.lt) goto loc_825597D4;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82559854:
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r21
	r11.u64 = r21.u64;
	// subf r7,r21,r9
	ctx.r7.s64 = ctx.r9.s64 - r21.s64;
loc_82559870:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825598d0
	if (cr0.eq) goto loc_825598D0;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// slw r6,r24,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r5.u8 & 0x3F));
	// slw r5,r24,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r8.u8 & 0x3F));
	// or r28,r5,r28
	r28.u64 = ctx.r5.u64 | r28.u64;
	// lwa r5,80(r1)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,0(r11)
	PPC_STORE_U64(r11.u32 + 0, f0.u64);
	// lwzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r6.u32);
loc_825598D0:
	// lwz r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82559870
	if (cr6.lt) goto loc_82559870;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_825598F0:
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// subf r5,r21,r11
	ctx.r5.s64 = r11.s64 - r21.s64;
loc_8255990C:
	// rlwinm r11,r7,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825599c8
	if (cr0.eq) goto loc_825599C8;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lfdx f0,r6,r5
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r5.u32);
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r11,r9,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// slw r3,r31,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// slw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r8.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// bne cr6,0x82559988
	if (!cr6.eq) goto loc_82559988;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r4,r4
	ctx.r4.u64 = ~ctx.r4.u64;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// b 0x825599a8
	goto loc_825599A8;
loc_82559988:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, f0.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// not r4,r4
	ctx.r4.u64 = ~ctx.r4.u64;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
loc_825599A8:
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// slw r8,r24,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// stfd f0,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, f0.u64);
	// or r28,r8,r28
	r28.u64 = ctx.r8.u64 | r28.u64;
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_825599C8:
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// rlwinm r11,r11,18,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// blt cr6,0x8255990c
	if (cr6.lt) goto loc_8255990C;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_825599E8:
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// subf r5,r11,r21
	ctx.r5.s64 = r21.s64 - r11.s64;
loc_82559A04:
	// rlwinm r11,r6,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// clrlwi r7,r6,27
	ctx.r7.u64 = ctx.r6.u32 & 0x1F;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82559af4
	if (cr0.eq) goto loc_82559AF4;
	// addi r11,r6,4
	r11.s64 = ctx.r6.s64 + 4;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// rlwinm r7,r11,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82559af4
	if (cr0.eq) goto loc_82559AF4;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lfd f0,32(r8)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32);
	// clrlwi r11,r9,27
	r11.u64 = ctx.r9.u32 & 0x1F;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfiwx f0,0,r3
	PPC_STORE_U32(ctx.r3.u32, f0.u32);
	// lfd f0,0(r8)
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwzx r4,r10,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// slw r3,r31,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// slw r7,r29,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r7.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// srw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bne cr6,0x82559ab4
	if (!cr6.eq) goto loc_82559AB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r3.u8 & 0x3F));
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f0,120(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// b 0x82559ad4
	goto loc_82559AD4;
loc_82559AB4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, f0.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// sraw r4,r4,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r4.s64 = ctx.r4.s32 >> temp.u32;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
loc_82559AD4:
	// slw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// slw r7,r24,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r6.u8 & 0x3F));
	// stfdx f0,r5,r8
	PPC_STORE_U64(ctx.r5.u32 + ctx.r8.u32, f0.u64);
	// or r28,r7,r28
	r28.u64 = ctx.r7.u64 | r28.u64;
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
loc_82559AF4:
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r11,r11,18,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x82559a04
	if (cr6.lt) goto loc_82559A04;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82559B14:
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// subf r5,r11,r21
	ctx.r5.s64 = r21.s64 - r11.s64;
loc_82559B30:
	// rlwinm r11,r6,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// clrlwi r8,r6,27
	ctx.r8.u64 = ctx.r6.u32 & 0x1F;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82559c44
	if (cr0.eq) goto loc_82559C44;
	// addi r11,r6,4
	r11.s64 = ctx.r6.s64 + 4;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82559c44
	if (cr0.eq) goto loc_82559C44;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfd f0,-32(r7)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + -32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lfd f13,0(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// beq cr6,0x82559bdc
	if (cr6.eq) goto loc_82559BDC;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x82559bcc
	if (cr6.eq) goto loc_82559BCC;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x82559bbc
	if (cr6.eq) goto loc_82559BBC;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// bne cr6,0x82559c64
	if (!cr6.eq) goto loc_82559C64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ r11.u64;
	// b 0x82559be8
	goto loc_82559BE8;
loc_82559BBC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82559be8
	goto loc_82559BE8;
loc_82559BCC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// and r8,r11,r10
	ctx.r8.u64 = r11.u64 & ctx.r10.u64;
	// b 0x82559be8
	goto loc_82559BE8;
loc_82559BDC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
loc_82559BE8:
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrlwi r4,r4,27
	ctx.r4.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfdx f0,r5,r7
	PPC_STORE_U64(ctx.r5.u32 + ctx.r7.u32, f0.u64);
	// slw r8,r29,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r4.u8 & 0x3F));
	// slw r4,r24,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r6.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// or r28,r4,r28
	r28.u64 = ctx.r4.u64 | r28.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// slw r27,r31,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82559C44:
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// rlwinm r11,r11,18,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x82559b30
	if (cr6.lt) goto loc_82559B30;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82559C64:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82559C74:
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// subf r5,r21,r11
	ctx.r5.s64 = r11.s64 - r21.s64;
loc_82559C90:
	// rlwinm r11,r6,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// clrlwi r8,r6,27
	ctx.r8.u64 = ctx.r6.u32 & 0x1F;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82559d7c
	if (cr0.eq) goto loc_82559D7C;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// clrlwi r10,r7,27
	ctx.r10.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r11,r7,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// slw r25,r31,r10
	r25.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// slw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r8.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// and r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 & r25.u64;
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x82559d10
	if (cr6.lt) goto loc_82559D10;
	// beq cr6,0x82559cfc
	if (cr6.eq) goto loc_82559CFC;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x82559d9c
	if (!cr6.lt) goto loc_82559D9C;
	// lfdx f0,r5,r9
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r9.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// b 0x82559d04
	goto loc_82559D04;
loc_82559CFC:
	// lfdx f0,r5,r9
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r9.u32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
loc_82559D04:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r8
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// b 0x82559d1c
	goto loc_82559D1C;
loc_82559D10:
	// lfdx f0,r5,r9
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r9.u32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82559D1C:
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x82559d64
	if (cr6.eq) goto loc_82559D64;
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// beq cr6,0x82559d50
	if (cr6.eq) goto loc_82559D50;
	// cmpwi cr6,r3,12
	cr6.compare<int32_t>(ctx.r3.s32, 12, xer);
	// bne cr6,0x82559dac
	if (!cr6.eq) goto loc_82559DAC;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
loc_82559D44:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, f0.u64);
	// b 0x82559d70
	goto loc_82559D70;
loc_82559D50:
	// lwa r8,80(r1)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// slw r10,r24,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r10.u8 & 0x3F));
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// b 0x82559d44
	goto loc_82559D44;
loc_82559D64:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// stfd f0,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, f0.u64);
loc_82559D70:
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82559D7C:
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r11,r11,18,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x82559c90
	if (cr6.lt) goto loc_82559C90;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82559D9C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82559DAC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82559DBC:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// lfd f0,-31368(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -31368);
loc_82559DCC:
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// srw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82559dfc
	if (cr0.eq) goto loc_82559DFC;
	// li r9,3
	ctx.r9.s64 = 3;
	// stfd f0,0(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 0, f0.u64);
	// stfd f0,8(r21)
	PPC_STORE_U64(r21.u32 + 8, f0.u64);
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// or r28,r9,r28
	r28.u64 = ctx.r9.u64 | r28.u64;
loc_82559DFC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r21,r21,16
	r21.s64 = r21.s64 + 16;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82559dcc
	if (cr6.lt) goto loc_82559DCC;
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82559E14:
	// rlwinm r11,r19,0,0,19
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,148(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824ba520
	sub_824BA520(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,18,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,28,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// bne 0x82559e50
	if (!cr0.eq) goto loc_82559E50;
	// rlwinm r10,r25,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
loc_82559E50:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82559e74
	if (cr6.eq) goto loc_82559E74;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,-31360(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31360);
	// stfdx f0,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f0.u64);
loc_82559E74:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// b 0x82559ee8
	goto loc_82559EE8;
loc_82559E80:
	// rlwinm r11,r19,0,0,19
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,148(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824a9638
	sub_824A9638(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,18,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// bne 0x82559ebc
	if (!cr0.eq) goto loc_82559EBC;
	// rlwinm r10,r25,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
loc_82559EBC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82559ee0
	if (cr6.eq) goto loc_82559EE0;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,-31360(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31360);
	// stfdx f0,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f0.u64);
loc_82559EE0:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,24,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
loc_82559EE8:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82559f0c
	if (!cr0.eq) goto loc_82559F0C;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
loc_82559F0C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255a17c
	if (cr6.eq) goto loc_8255A17C;
	// or r28,r11,r28
	r28.u64 = r11.u64 | r28.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,-31368(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31368);
	// stfdx f0,r11,r21
	PPC_STORE_U64(r11.u32 + r21.u32, f0.u64);
	// b 0x8255a17c
	goto loc_8255A17C;
loc_82559F34:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r10,28,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f2,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bne cr6,0x82559f74
	if (!cr6.eq) goto loc_82559F74;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfd f0,-31360(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// stfd f0,0(r21)
	PPC_STORE_U64(r21.u32 + 0, f0.u64);
loc_82559F64:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// b 0x8255a0ec
	goto loc_8255A0EC;
loc_82559F74:
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// lfd f1,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8255a17c
	if (cr6.lt) goto loc_8255A17C;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfd f1,0(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 0, ctx.f1.u64);
	// b 0x82559f64
	goto loc_82559F64;
loc_82559F98:
	// cmplwi cr6,r11,109
	cr6.compare<uint32_t>(r11.u32, 109, xer);
	// beq cr6,0x8255a0f8
	if (cr6.eq) goto loc_8255A0F8;
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// beq cr6,0x8255a024
	if (cr6.eq) goto loc_8255A024;
	// cmplwi cr6,r11,124
	cr6.compare<uint32_t>(r11.u32, 124, xer);
	// bne cr6,0x8255a17c
	if (!cr6.eq) goto loc_8255A17C;
	// rlwinm. r11,r25,0,15,17
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x1C000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// beq 0x82559fe4
	if (cr0.eq) goto loc_82559FE4;
loc_82559FBC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824ffec0
	sub_824FFEC0(ctx, base);
	// stfd f1,0(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 0, ctx.f1.u64);
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r21,r21,8
	r21.s64 = r21.s64 + 8;
	// rlwinm r11,r11,18,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82559fbc
	if (cr6.lt) goto loc_82559FBC;
loc_82559FE4:
	// rlwinm r11,r19,0,0,19
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// not r9,r11
	ctx.r9.u64 = ~r11.u64;
	// slw r11,r24,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r10.u8 & 0x3F));
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// rlwinm. r10,r9,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255a17c
	if (cr0.eq) goto loc_8255A17C;
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,18,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// b 0x8255a0f0
	goto loc_8255A0F0;
loc_8255A024:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r29,0(r19)
	r29.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r25,r27
	r25.u64 = r27.u64;
	// lfd f31,-31368(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r11.u32 + -31368);
loc_8255A034:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255a0d0
	if (cr6.eq) goto loc_8255A0D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15872
	r11.s64 = r11.s64 + -15872;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a0d8
	if (cr0.eq) goto loc_8255A0D8;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82555620
	sub_82555620(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x824ffe38
	sub_824FFE38(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8255a0b8
	if (!cr6.eq) goto loc_8255A0B8;
	// mr r27,r29
	r27.u64 = r29.u64;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x8255a0c8
	goto loc_8255A0C8;
loc_8255A0B8:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x8255a0d8
	if (!cr6.eq) goto loc_8255A0D8;
	// cmpw cr6,r25,r3
	cr6.compare<int32_t>(r25.s32, ctx.r3.s32, xer);
	// bne cr6,0x8255a0d8
	if (!cr6.eq) goto loc_8255A0D8;
loc_8255A0C8:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x8255a034
	goto loc_8255A034;
loc_8255A0D0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8255a0e0
	if (!cr6.eq) goto loc_8255A0E0;
loc_8255A0D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255a180
	goto loc_8255A180;
loc_8255A0E0:
	// stfd f31,0(r21)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r21.u32 + 0, f31.u64);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// or r11,r25,r11
	r11.u64 = r25.u64 | r11.u64;
loc_8255A0EC:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8255A0F0:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8255a17c
	goto loc_8255A17C;
loc_8255A0F8:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x8255a17c
	if (cr6.eq) goto loc_8255A17C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
loc_8255A110:
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255a160
	if (cr0.eq) goto loc_8255A160;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfd f0,0(r8)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = r11.u32 & 0x1F;
	// stfd f0,0(r21)
	PPC_STORE_U64(r21.u32 + 0, f0.u64);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r4,r24,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// or r28,r4,r28
	r28.u64 = ctx.r4.u64 | r28.u64;
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// slw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r5,r9,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r6.u32);
loc_8255A160:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r21,r21,8
	r21.s64 = r21.s64 + 8;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r14
	cr6.compare<uint32_t>(ctx.r7.u32, r14.u32, xer);
	// blt cr6,0x8255a110
	if (cr6.lt) goto loc_8255A110;
loc_8255A17C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8255A180:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8255A194"))) PPC_WEAK_FUNC(sub_8255A194);
PPC_FUNC_IMPL(__imp__sub_8255A194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A198"))) PPC_WEAK_FUNC(sub_8255A198);
PPC_FUNC_IMPL(__imp__sub_8255A198) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8255a1d8
	if (cr6.eq) goto loc_8255A1D8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8728
	sub_824D8728(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825527c8
	sub_825527C8(ctx, base);
loc_8255A1D8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,7,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a2fc
	if (cr0.eq) goto loc_8255A2FC;
loc_8255A1E4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8255A1E8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255a254
	if (cr6.eq) goto loc_8255A254;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a208
	if (!cr0.eq) goto loc_8255A208;
	// rlwinm. r11,r10,0,4,6
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x8255a20c
	if (cr0.eq) goto loc_8255A20C;
loc_8255A208:
	// li r11,0
	r11.s64 = 0;
loc_8255A20C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a220
	if (cr0.eq) goto loc_8255A220;
	// rlwinm. r11,r10,0,7,18
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8255a224
	if (!cr0.eq) goto loc_8255A224;
loc_8255A220:
	// li r11,0
	r11.s64 = 0;
loc_8255A224:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a234
	if (!cr0.eq) goto loc_8255A234;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8255a1e8
	goto loc_8255A1E8;
loc_8255A234:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,19,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0xFFF;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x8255e770
	sub_8255E770(ctx, base);
	// b 0x8255a1e4
	goto loc_8255A1E4;
loc_8255A254:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,92
	r11.s64 = r11.s64 + 92;
loc_8255A260:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// bne cr6,0x8255a274
	if (!cr6.eq) goto loc_8255A274;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_8255A274:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x8255a260
	if (!cr0.eq) goto loc_8255A260;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,7,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8255a2fc
	goto loc_8255A2FC;
loc_8255A290:
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255a2ac
	if (cr6.eq) goto loc_8255A2AC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82502d68
	sub_82502D68(ctx, base);
loc_8255A2AC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bb028
	sub_824BB028(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255a2fc
	if (cr6.eq) goto loc_8255A2FC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13952
	r11.s64 = r11.s64 + -13952;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a2fc
	if (cr0.eq) goto loc_8255A2FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ba748
	sub_824BA748(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8255a2fc
	if (!cr0.eq) goto loc_8255A2FC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82502e00
	sub_82502E00(ctx, base);
loc_8255A2FC:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x8255a290
	if (!cr0.eq) goto loc_8255A290;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a338
	if (cr0.eq) goto loc_8255A338;
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_8255A338:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r4,111
	cr6.compare<int32_t>(ctx.r4.s32, 111, xer);
	// blt cr6,0x8255a368
	if (cr6.lt) goto loc_8255A368;
	// cmpwi cr6,r4,112
	cr6.compare<int32_t>(ctx.r4.s32, 112, xer);
	// ble cr6,0x8255a358
	if (!cr6.gt) goto loc_8255A358;
	// cmpwi cr6,r4,124
	cr6.compare<int32_t>(ctx.r4.s32, 124, xer);
	// bne cr6,0x8255a368
	if (!cr6.eq) goto loc_8255A368;
loc_8255A358:
	// li r10,57
	ctx.r10.s64 = 57;
	// rlwimi r11,r10,8,18,24
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F80) | (r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8255a3b4
	goto loc_8255A3B4;
loc_8255A368:
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255a390
	if (cr0.eq) goto loc_8255A390;
	// li r10,57
	ctx.r10.s64 = 57;
	// rlwimi r11,r10,8,18,24
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F80) | (r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,536(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 536);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r31,536(r28)
	PPC_STORE_U32(r28.u32 + 536, r31.u32);
	// b 0x8255a3b4
	goto loc_8255A3B4;
loc_8255A390:
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// bl 0x824a9b30
	sub_824A9B30(ctx, base);
loc_8255A3B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8255A3BC"))) PPC_WEAK_FUNC(sub_8255A3BC);
PPC_FUNC_IMPL(__imp__sub_8255A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255A3C0"))) PPC_WEAK_FUNC(sub_8255A3C0);
PPC_FUNC_IMPL(__imp__sub_8255A3C0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// ori r10,r11,4096
	ctx.r10.u64 = r11.u64 | 4096;
	// rlwinm r25,r11,20,31,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x1;
	// stw r10,36(r27)
	PPC_STORE_U32(r27.u32 + 36, ctx.r10.u32);
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r26,r29,4
	r26.s64 = r29.s64 + 4;
	// ori r11,r29,1
	r11.u64 = r29.u64 | 1;
	// ori r10,r26,1
	ctx.r10.u64 = r26.u64 | 1;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_8255A408:
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_8255A40C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255a474
	if (cr6.eq) goto loc_8255A474;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a448
	if (!cr0.eq) goto loc_8255A448;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255a448
	if (cr0.eq) goto loc_8255A448;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255a454
	if (!cr6.gt) goto loc_8255A454;
loc_8255A448:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255A454:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r30.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8255a40c
	goto loc_8255A40C;
loc_8255A474:
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
loc_8255A478:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255a51c
	if (cr6.eq) goto loc_8255A51C;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r31,0
	r11.s64 = r31.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255a514
	if (cr0.eq) goto loc_8255A514;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255a4b4
	if (!cr0.eq) goto loc_8255A4B4;
	// rlwinm. r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x8255a4b8
	if (cr0.eq) goto loc_8255A4B8;
loc_8255A4B4:
	// li r11,0
	r11.s64 = 0;
loc_8255A4B8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a514
	if (cr0.eq) goto loc_8255A514;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a4f0
	if (!cr0.eq) goto loc_8255A4F0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255a4f0
	if (cr0.eq) goto loc_8255A4F0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255a4fc
	if (!cr6.gt) goto loc_8255A4FC;
loc_8255A4F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255A4FC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255A514:
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8255a478
	goto loc_8255A478;
loc_8255A51C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255a198
	sub_8255A198(ctx, base);
loc_8255A530:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255a540
	if (cr0.eq) goto loc_8255A540;
	// li r11,0
	r11.s64 = 0;
loc_8255A540:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a5e4
	if (!cr0.eq) goto loc_8255A5E4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255a55c
	if (cr6.eq) goto loc_8255A55C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255a568
	goto loc_8255A568;
loc_8255A55C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255A568:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8255a5bc
	if (!cr0.eq) goto loc_8255A5BC;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
loc_8255A5BC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r31
	r28.u64 = r31.u64;
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14592
	cr6.compare<uint32_t>(r11.u32, 14592, xer);
	// beq cr6,0x8255a530
	if (cr6.eq) goto loc_8255A530;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a98e8
	sub_824A98E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a530
	if (cr0.eq) goto loc_8255A530;
	// b 0x8255a408
	goto loc_8255A408;
loc_8255A5E4:
	// addi r11,r27,924
	r11.s64 = r27.s64 + 924;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// bl 0x824a9b88
	sub_824A9B88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8255A608"))) PPC_WEAK_FUNC(sub_8255A608);
PPC_FUNC_IMPL(__imp__sub_8255A608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r11,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8255a734
	if (!cr6.eq) goto loc_8255A734;
	// cmpwi cr6,r11,86
	cr6.compare<int32_t>(r11.s32, 86, xer);
	// beq cr6,0x8255a6b8
	if (cr6.eq) goto loc_8255A6B8;
	// cmpwi cr6,r11,89
	cr6.compare<int32_t>(r11.s32, 89, xer);
	// beq cr6,0x8255a658
	if (cr6.eq) goto loc_8255A658;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,30632
	ctx.r5.s64 = r11.s64 + 30632;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255A658:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// lwz r27,24(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r28,r27,12
	r28.s64 = r27.s64 + 12;
	// lwzx r26,r3,r11
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
loc_8255A67C:
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255a790
	if (cr6.eq) goto loc_8255A790;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r5,r26
	cr6.compare<uint32_t>(ctx.r5.u32, r26.u32, xer);
	// beq cr6,0x8255a6a4
	if (cr6.eq) goto loc_8255A6A4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f8830
	sub_824F8830(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_8255A6A4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8255a67c
	if (!cr6.eq) goto loc_8255A67C;
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// b 0x8255a67c
	goto loc_8255A67C;
loc_8255A6B8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,-12
	ctx.r10.s64 = r31.s64 + -12;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r28,r11,r10
	r28.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8255a198
	sub_8255A198(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,85
	ctx.r6.s64 = 85;
	// addi r5,r29,32
	ctx.r5.s64 = r29.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82553560
	sub_82553560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// stwx r28,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + r11.u32, r28.u32);
	// b 0x8255a7a4
	goto loc_8255A7A4;
loc_8255A734:
	// cmpwi cr6,r11,84
	cr6.compare<int32_t>(r11.s32, 84, xer);
	// beq cr6,0x8255a7bc
	if (cr6.eq) goto loc_8255A7BC;
	// cmpwi cr6,r11,86
	cr6.compare<int32_t>(r11.s32, 86, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8255a7ac
	if (cr6.eq) goto loc_8255A7AC;
	// cmpwi cr6,r11,89
	cr6.compare<int32_t>(r11.s32, 89, xer);
	// beq cr6,0x8255a760
	if (cr6.eq) goto loc_8255A760;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,30632
	ctx.r5.s64 = r11.s64 + 30632;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255A760:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,-12
	ctx.r10.s64 = r31.s64 + -12;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x824f8830
	sub_824F8830(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_8255A790:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8255a198
	sub_8255A198(ctx, base);
loc_8255A7A4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x8255a7c0
	goto loc_8255A7C0;
loc_8255A7AC:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-22392
	ctx.r5.s64 = r11.s64 + -22392;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255A7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255A7C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8255A7C8"))) PPC_WEAK_FUNC(sub_8255A7C8);
PPC_FUNC_IMPL(__imp__sub_8255A7C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// ori r11,r30,1
	r11.u64 = r30.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = r28.u64 | 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r11,r26
	r11.u64 = r26.u64;
	// addi r24,r29,4
	r24.s64 = r29.s64 + 4;
	// ori r10,r29,1
	ctx.r10.u64 = r29.u64 | 1;
	// ori r9,r24,1
	ctx.r9.u64 = r24.u64 | 1;
	// li r19,0
	r19.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
loc_8255A844:
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8255A848:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255a998
	if (cr6.eq) goto loc_8255A998;
	// lwz r31,12(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// beq cr6,0x8255aa40
	if (cr6.eq) goto loc_8255AA40;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8255a8a8
	if (cr6.eq) goto loc_8255A8A8;
	// lwz r11,48(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 48);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255a990
	if (cr0.eq) goto loc_8255A990;
loc_8255A8A8:
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255a8d4
	if (cr0.eq) goto loc_8255A8D4;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8255a990
	if (!cr6.eq) goto loc_8255A990;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14208
	r11.s64 = r11.s64 + -14208;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a990
	if (!cr0.eq) goto loc_8255A990;
loc_8255A8D4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255a990
	if (!cr0.eq) goto loc_8255A990;
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a918
	if (!cr0.eq) goto loc_8255A918;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255a918
	if (cr0.eq) goto loc_8255A918;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255a924
	if (!cr6.gt) goto loc_8255A924;
loc_8255A918:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255A924:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255a96c
	if (!cr0.eq) goto loc_8255A96C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255a96c
	if (cr0.eq) goto loc_8255A96C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255a978
	if (!cr6.gt) goto loc_8255A978;
loc_8255A96C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255A978:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255A990:
	// lwz r27,4(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// b 0x8255a848
	goto loc_8255A848;
loc_8255A998:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255a9a8
	if (cr0.eq) goto loc_8255A9A8;
	// li r11,0
	r11.s64 = 0;
loc_8255A9A8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255aa4c
	if (!cr0.eq) goto loc_8255AA4C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255a9c4
	if (cr6.eq) goto loc_8255A9C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255a9d0
	goto loc_8255A9D0;
loc_8255A9C4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255A9D0:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8255aa24
	if (!cr0.eq) goto loc_8255AA24;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
loc_8255AA24:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplwi cr6,r23,40000
	cr6.compare<uint32_t>(r23.u32, 40000, xer);
	// ble cr6,0x8255a844
	if (!cr6.gt) goto loc_8255A844;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255AA40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r19,1
	r19.s64 = 1;
	// bl 0x824b4b58
	sub_824B4B58(ctx, base);
loc_8255AA4C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255aa5c
	if (cr0.eq) goto loc_8255AA5C;
	// li r11,0
	r11.s64 = 0;
loc_8255AA5C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255aae8
	if (!cr0.eq) goto loc_8255AAE8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255aa78
	if (cr6.eq) goto loc_8255AA78;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255aa84
	goto loc_8255AA84;
loc_8255AA78:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255AA84:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8255aad8
	if (!cr0.eq) goto loc_8255AAD8;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
loc_8255AAD8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,3,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8255aa4c
	goto loc_8255AA4C;
loc_8255AAE8:
	// addi r11,r21,924
	r11.s64 = r21.s64 + 924;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(r29.u32, 0);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8255AB10"))) PPC_WEAK_FUNC(sub_8255AB10);
PPC_FUNC_IMPL(__imp__sub_8255AB10) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r20,24(r26)
	r20.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// ori r11,r29,1
	r11.u64 = r29.u64 | 1;
	// ori r10,r27,1
	ctx.r10.u64 = r27.u64 | 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// addi r24,r28,4
	r24.s64 = r28.s64 + 4;
	// ori r11,r28,1
	r11.u64 = r28.u64 | 1;
	// ori r10,r24,1
	ctx.r10.u64 = r24.u64 | 1;
	// li r17,1
	r17.s64 = 1;
	// li r22,0
	r22.s64 = 0;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_8255AB8C:
	// lwz r25,0(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8255AB90:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8255ad20
	if (cr6.eq) goto loc_8255AD20;
	// lwz r30,12(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(r30.u32, r23.u32, xer);
	// bne cr6,0x8255abec
	if (!cr6.eq) goto loc_8255ABEC;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x8255abb4
	if (!cr6.eq) goto loc_8255ABB4;
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255ad10
	if (cr0.eq) goto loc_8255AD10;
loc_8255ABB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r17,0
	r17.s64 = 0;
	// bl 0x824b4b58
	sub_824B4B58(ctx, base);
loc_8255ABC0:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255abd0
	if (cr0.eq) goto loc_8255ABD0;
	// li r11,0
	r11.s64 = 0;
loc_8255ABD0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255ae34
	if (!cr0.eq) goto loc_8255AE34;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255adc4
	if (cr6.eq) goto loc_8255ADC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255add0
	goto loc_8255ADD0;
loc_8255ABEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d1a48
	sub_824D1A48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255ad10
	if (cr0.eq) goto loc_8255AD10;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bne cr6,0x8255ad10
	if (!cr6.eq) goto loc_8255AD10;
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255ac20
	if (cr0.eq) goto loc_8255AC20;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824dc438
	sub_824DC438(ctx, base);
	// b 0x8255ac4c
	goto loc_8255AC4C;
loc_8255AC20:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255AC24:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255ad18
	if (!cr0.eq) goto loc_8255AD18;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	xer.ca = r11.u32 > 35;
	r11.s64 = r11.s64 + -36;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255ad18
	if (cr0.eq) goto loc_8255AD18;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bne cr6,0x8255ac24
	if (!cr6.eq) goto loc_8255AC24;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8255AC4C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255ad10
	if (cr0.eq) goto loc_8255AD10;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255ad10
	if (!cr0.eq) goto loc_8255AD10;
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255ac98
	if (!cr0.eq) goto loc_8255AC98;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255ac98
	if (cr0.eq) goto loc_8255AC98;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255aca4
	if (!cr6.gt) goto loc_8255ACA4;
loc_8255AC98:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255ACA4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r30.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255acec
	if (!cr0.eq) goto loc_8255ACEC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255acec
	if (cr0.eq) goto loc_8255ACEC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255acf8
	if (!cr6.gt) goto loc_8255ACF8;
loc_8255ACEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255ACF8:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r30.u32);
loc_8255AD10:
	// lwz r25,4(r25)
	r25.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// b 0x8255ab90
	goto loc_8255AB90;
loc_8255AD18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255ac4c
	goto loc_8255AC4C;
loc_8255AD20:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255ad30
	if (cr0.eq) goto loc_8255AD30;
	// li r11,0
	r11.s64 = 0;
loc_8255AD30:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255abc0
	if (!cr0.eq) goto loc_8255ABC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255ad4c
	if (cr6.eq) goto loc_8255AD4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255ad58
	goto loc_8255AD58;
loc_8255AD4C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255AD58:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8255adac
	if (!cr0.eq) goto loc_8255ADAC;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
loc_8255ADAC:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplwi cr6,r22,10000
	cr6.compare<uint32_t>(r22.u32, 10000, xer);
	// ble cr6,0x8255ab8c
	if (!cr6.gt) goto loc_8255AB8C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255ADC4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255ADD0:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8255ae24
	if (!cr0.eq) goto loc_8255AE24;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
loc_8255AE24:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,3,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8255abc0
	goto loc_8255ABC0;
loc_8255AE34:
	// addi r11,r21,924
	r11.s64 = r21.s64 + 924;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 0);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_8255AE5C"))) PPC_WEAK_FUNC(sub_8255AE5C);
PPC_FUNC_IMPL(__imp__sub_8255AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255AE60"))) PPC_WEAK_FUNC(sub_8255AE60);
PPC_FUNC_IMPL(__imp__sub_8255AE60) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r22,24(r24)
	r22.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// ori r11,r30,1
	r11.u64 = r30.u64 | 1;
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// ori r10,r27,1
	ctx.r10.u64 = r27.u64 | 1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8255aed4
	if (!cr0.eq) goto loc_8255AED4;
	// rlwinm r11,r10,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255aed4
	if (cr0.eq) goto loc_8255AED4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255aee0
	if (!cr6.gt) goto loc_8255AEE0;
loc_8255AED4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255AEE0:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r24,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r24.u32);
loc_8255AEF8:
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r28,0
	r28.s64 = 0;
loc_8255AF00:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255b068
	if (cr6.eq) goto loc_8255B068;
	// lwz r31,12(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// bne cr6,0x8255af30
	if (!cr6.eq) goto loc_8255AF30;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// bne cr6,0x8255af24
	if (!cr6.eq) goto loc_8255AF24;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b058
	if (cr0.eq) goto loc_8255B058;
loc_8255AF24:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255AF30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d1a48
	sub_824D1A48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b058
	if (cr0.eq) goto loc_8255B058;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bne cr6,0x8255b058
	if (!cr6.eq) goto loc_8255B058;
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255af64
	if (cr0.eq) goto loc_8255AF64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824dc438
	sub_824DC438(ctx, base);
	// b 0x8255af90
	goto loc_8255AF90;
loc_8255AF64:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8255AF68:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255b060
	if (!cr0.eq) goto loc_8255B060;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	xer.ca = r11.u32 > 35;
	r11.s64 = r11.s64 + -36;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b060
	if (cr0.eq) goto loc_8255B060;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x8255af68
	if (!cr6.eq) goto loc_8255AF68;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8255AF90:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b058
	if (cr0.eq) goto loc_8255B058;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82526f20
	sub_82526F20(ctx, base);
loc_8255AFA8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255afd8
	if (!cr6.eq) goto loc_8255AFD8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255afc8
	if (cr0.eq) goto loc_8255AFC8;
	// li r11,0
	r11.s64 = 0;
loc_8255AFC8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8255afdc
	if (cr6.eq) goto loc_8255AFDC;
loc_8255AFD8:
	// li r11,0
	r11.s64 = 0;
loc_8255AFDC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b004
	if (!cr0.eq) goto loc_8255B004;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824df188
	sub_824DF188(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255afa8
	if (!cr6.eq) goto loc_8255AFA8;
	// ori r11,r31,1
	r11.u64 = r31.u64 | 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8255B004:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b034
	if (!cr0.eq) goto loc_8255B034;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255b034
	if (cr0.eq) goto loc_8255B034;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255b040
	if (!cr6.gt) goto loc_8255B040;
loc_8255B034:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255B040:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255B058:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x8255af00
	goto loc_8255AF00;
loc_8255B060:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255af90
	goto loc_8255AF90;
loc_8255B068:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b13c
	if (!cr0.eq) goto loc_8255B13C;
	// rlwinm r11,r26,0,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r6,r11,-32
	ctx.r6.s64 = r11.s64 + -32;
	// addi r8,r10,-32
	ctx.r8.s64 = ctx.r10.s64 + -32;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r5,r5,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b0e8
	if (cr0.eq) goto loc_8255B0E8;
loc_8255B0E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255b0f4
	goto loc_8255B0F4;
loc_8255B0E8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255B0F4:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// bne 0x8255b13c
	if (!cr0.eq) goto loc_8255B13C;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
loc_8255B13C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255b14c
	if (cr0.eq) goto loc_8255B14C;
	// li r11,0
	r11.s64 = 0;
loc_8255B14C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b19c
	if (!cr0.eq) goto loc_8255B19C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255b168
	if (cr6.eq) goto loc_8255B168;
	// li r11,0
	r11.s64 = 0;
	// b 0x8255b174
	goto loc_8255B174;
loc_8255B168:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
loc_8255B174:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255b198
	if (cr0.eq) goto loc_8255B198;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255b0e8
	if (cr6.eq) goto loc_8255B0E8;
	// b 0x8255b0e0
	goto loc_8255B0E0;
loc_8255B198:
	// mr r26,r11
	r26.u64 = r11.u64;
loc_8255B19C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255b1ac
	if (cr0.eq) goto loc_8255B1AC;
	// li r11,0
	r11.s64 = 0;
loc_8255B1AC:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255aef8
	if (cr0.eq) goto loc_8255AEF8;
	// rlwinm r11,r24,0,0,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi. r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r8,r11,-32
	ctx.r8.s64 = r11.s64 + -32;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq 0x8255b21c
	if (cr0.eq) goto loc_8255B21C;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-32
	ctx.r6.s64 = ctx.r10.s64 + -32;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x8255b23c
	goto loc_8255B23C;
loc_8255B21C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8255B23C:
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// addi r11,r20,924
	r11.s64 = r20.s64 + 924;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8255B260"))) PPC_WEAK_FUNC(sub_8255B260);
PPC_FUNC_IMPL(__imp__sub_8255B260) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8255b294
	if (cr6.eq) goto loc_8255B294;
loc_8255B28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255b320
	goto loc_8255B320;
loc_8255B294:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d1a48
	sub_824D1A48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b28c
	if (cr0.eq) goto loc_8255B28C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d1a48
	sub_824D1A48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b2bc
	if (!cr0.eq) goto loc_8255B2BC;
loc_8255B2B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255b320
	goto loc_8255B320;
loc_8255B2BC:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b2d4
	if (cr0.eq) goto loc_8255B2D4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824dc438
	sub_824DC438(ctx, base);
	// b 0x8255b300
	goto loc_8255B300;
loc_8255B2D4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255B2D8:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255b328
	if (!cr0.eq) goto loc_8255B328;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	xer.ca = r11.u32 > 35;
	r11.s64 = r11.s64 + -36;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b328
	if (cr0.eq) goto loc_8255B328;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255b2d8
	if (!cr6.eq) goto loc_8255B2D8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8255B300:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b2b4
	if (!cr0.eq) goto loc_8255B2B4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255ab10
	sub_8255AB10(ctx, base);
loc_8255B320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_8255B328:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255b300
	goto loc_8255B300;
}

__attribute__((alias("__imp__sub_8255B330"))) PPC_WEAK_FUNC(sub_8255B330);
PPC_FUNC_IMPL(__imp__sub_8255B330) {
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
	// lwz r30,24(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r29,64(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// b 0x8255b5d0
	goto loc_8255B5D0;
loc_8255B354:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8255b370
	if (cr6.eq) goto loc_8255B370;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824baa70
	sub_824BAA70(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b5d8
	if (!cr0.eq) goto loc_8255B5D8;
loc_8255B370:
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b3f0
	if (cr0.eq) goto loc_8255B3F0;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255b3b8
	if (cr0.eq) goto loc_8255B3B8;
	// b 0x8255b39c
	goto loc_8255B39C;
loc_8255B390:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255b3a8
	if (cr0.eq) goto loc_8255B3A8;
loc_8255B39C:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255b390
	if (!cr0.eq) goto loc_8255B390;
loc_8255B3A8:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255b39c
	if (!cr0.eq) goto loc_8255B39C;
	// stw r11,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r11.u32);
loc_8255B3B8:
	// lwz r31,112(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8255b410
	if (cr0.eq) goto loc_8255B410;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255b410
	if (cr0.eq) goto loc_8255B410;
	// rlwinm. r11,r11,6,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b3f0
	if (!cr0.eq) goto loc_8255B3F0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255d3d0
	sub_8255D3D0(ctx, base);
loc_8255B3F0:
	// lbz r11,76(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 76);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b504
	if (cr0.eq) goto loc_8255B504;
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255b4dc
	if (cr0.eq) goto loc_8255B4DC;
	// b 0x8255b4c0
	goto loc_8255B4C0;
loc_8255B410:
	// lwz r31,96(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8255b3f0
	if (cr0.eq) goto loc_8255B3F0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255b3f0
	if (!cr0.eq) goto loc_8255B3F0;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x8255b490
	if (cr6.eq) goto loc_8255B490;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b468
	if (!cr0.eq) goto loc_8255B468;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255b468
	if (cr0.eq) goto loc_8255B468;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255b474
	if (!cr6.gt) goto loc_8255B474;
loc_8255B468:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255B474:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
	// b 0x8255b3f0
	goto loc_8255B3F0;
loc_8255B490:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8255B494:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255b3f0
	if (cr6.eq) goto loc_8255B3F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255c810
	sub_8255C810(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8255b494
	goto loc_8255B494;
loc_8255B4B4:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255b4cc
	if (cr0.eq) goto loc_8255B4CC;
loc_8255B4C0:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255b4b4
	if (!cr0.eq) goto loc_8255B4B4;
loc_8255B4CC:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255b4c0
	if (!cr0.eq) goto loc_8255B4C0;
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
loc_8255B4DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b504
	if (!cr0.eq) goto loc_8255B504;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255d3d0
	sub_8255D3D0(ctx, base);
loc_8255B504:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255b520
	if (cr0.eq) goto loc_8255B520;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8255b524
	if (!cr6.eq) goto loc_8255B524;
loc_8255B520:
	// li r11,0
	r11.s64 = 0;
loc_8255B524:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b578
	if (cr0.eq) goto loc_8255B578;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r10,25,25,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(r11.u32, 85, xer);
	// beq cr6,0x8255b558
	if (cr6.eq) goto loc_8255B558;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(r11.u32, 86, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8255b55c
	if (!cr6.eq) goto loc_8255B55C;
loc_8255B558:
	// li r11,1
	r11.s64 = 1;
loc_8255B55C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b578
	if (!cr0.eq) goto loc_8255B578;
	// rlwinm. r11,r10,6,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b578
	if (!cr0.eq) goto loc_8255B578;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255d3d0
	sub_8255D3D0(ctx, base);
loc_8255B578:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255b5d8
	if (cr0.eq) goto loc_8255B5D8;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8255b5c8
	if (cr0.eq) goto loc_8255B5C8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8255B5C8:
	// lwz r29,64(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8255B5D0:
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8255b354
	if (!cr0.eq) goto loc_8255B354;
loc_8255B5D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8255B5E0"))) PPC_WEAK_FUNC(sub_8255B5E0);
PPC_FUNC_IMPL(__imp__sub_8255B5E0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x82558498
	sub_82558498(ctx, base);
	// li r22,1
	r22.s64 = 1;
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x8255b6a0
	if (cr0.eq) goto loc_8255B6A0;
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_8255B630:
	// slw r11,r22,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r22.u32 << (r28.u8 & 0x3F));
	// and. r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b68c
	if (cr0.eq) goto loc_8255B68C;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// lfd f1,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r31,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r9,r8,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// srw r4,r10,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// bl 0x825507b8
	sub_825507B8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x8255b784
	if (cr6.eq) goto loc_8255B784;
loc_8255B68C:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// blt cr6,0x8255b630
	if (cr6.lt) goto loc_8255B630;
loc_8255B6A0:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255bbec
	if (cr0.eq) goto loc_8255BBEC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8255bbec
	if (!cr6.eq) goto loc_8255BBEC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// beq cr6,0x8255b6d0
	if (cr6.eq) goto loc_8255B6D0;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x8255bbec
	if (!cr6.eq) goto loc_8255BBEC;
loc_8255B6D0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, xer);
	// beq cr6,0x8255b6e8
	if (cr6.eq) goto loc_8255B6E8;
	// cmplwi cr6,r10,95
	cr6.compare<uint32_t>(ctx.r10.u32, 95, xer);
	// bne cr6,0x8255bbec
	if (!cr6.eq) goto loc_8255BBEC;
loc_8255B6E8:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r27,r11,31,28,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0xF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x8255bbec
	if (cr0.eq) goto loc_8255BBEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ba748
	sub_824BA748(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x8255b7b0
	if (cr0.eq) goto loc_8255B7B0;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r26,40
	r31.s64 = r26.s64 + 40;
loc_8255B710:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,13,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8255b78c
	if (!cr6.lt) goto loc_8255B78C;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15872
	r11.s64 = r11.s64 + -15872;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b778
	if (cr0.eq) goto loc_8255B778;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82555620
	sub_82555620(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// beq cr6,0x8255b794
	if (cr6.eq) goto loc_8255B794;
loc_8255B778:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8255b710
	goto loc_8255B710;
loc_8255B784:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8255bbf0
	goto loc_8255BBF0;
loc_8255B78C:
	// li r29,0
	r29.s64 = 0;
	// b 0x8255b79c
	goto loc_8255B79C;
loc_8255B794:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255b7b0
	if (!cr6.eq) goto loc_8255B7B0;
loc_8255B79C:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// rlwinm r11,r11,0,10,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8255bbec
	if (cr6.eq) goto loc_8255BBEC;
loc_8255B7B0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// andc r31,r27,r10
	r31.u64 = r27.u64 & ~ctx.r10.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// bne cr6,0x8255b828
	if (!cr6.eq) goto loc_8255B828;
	// cmplwi cr6,r4,96
	cr6.compare<uint32_t>(ctx.r4.u32, 96, xer);
	// bne cr6,0x8255b800
	if (!cr6.eq) goto loc_8255B800;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r30,-24
	r11.s64 = r30.s64 + -24;
	// not r10,r31
	ctx.r10.u64 = ~r31.u64;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// li r9,-241
	ctx.r9.s64 = -241;
	// rlwimi r9,r10,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwimi r10,r31,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft32(r31.u32, 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// b 0x8255b878
	goto loc_8255B878;
loc_8255B800:
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r30,-20
	r11.s64 = r30.s64 + -20;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// not r10,r31
	ctx.r10.u64 = ~r31.u64;
	// ori r9,r9,4095
	ctx.r9.u64 = ctx.r9.u64 | 4095;
	// rlwimi r9,r10,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwimi r10,r31,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(r31.u32, 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x8255b878
	goto loc_8255B878;
loc_8255B828:
	// cmplwi cr6,r4,96
	cr6.compare<uint32_t>(ctx.r4.u32, 96, xer);
	// bne cr6,0x8255b858
	if (!cr6.eq) goto loc_8255B858;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r30,-24
	r11.s64 = r30.s64 + -24;
	// li r9,-16
	ctx.r9.s64 = -16;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// not r10,r31
	ctx.r10.u64 = ~r31.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwimi r9,r31,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(r31.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// b 0x8255b87c
	goto loc_8255B87C;
loc_8255B858:
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r30,-20
	r11.s64 = r30.s64 + -20;
	// not r10,r31
	ctx.r10.u64 = ~r31.u64;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// li r9,-3841
	ctx.r9.s64 = -3841;
	// rlwimi r9,r10,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwimi r10,r31,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
loc_8255B878:
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
loc_8255B87C:
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cntlzw r9,r31
	ctx.r9.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// subfic r23,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	r23.s64 = 31 - ctx.r9.s64;
	// rlwimi r11,r10,0,31,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFFE1) | (r11.u64 & 0x1E);
	// rlwinm r10,r11,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFC000;
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// rlwimi r10,r11,0,18,14
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFE3FFF) | (ctx.r10.u64 & 0x1C000);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// beq cr6,0x8255b914
	if (cr6.eq) goto loc_8255B914;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x824c05f8
	sub_824C05F8(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8255b8cc
	goto loc_8255B8CC;
loc_8255B8C8:
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
loc_8255B8CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x8255b8c8
	if (!cr6.eq) goto loc_8255B8C8;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r23,5,22,26
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0x3E0;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r10,r10,7296
	ctx.r10.u64 = ctx.r10.u64 | 7296;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r11,0,24,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8255b9f4
	goto loc_8255B9F4;
loc_8255B914:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8255b9f4
	if (cr6.eq) goto loc_8255B9F4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f0058
	sub_824F0058(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f0828
	sub_824F0828(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824f0058
	sub_824F0058(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b9e0
	if (cr0.eq) goto loc_8255B9E0;
	// lwz r3,624(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 624);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8255b9d4
	if (cr0.eq) goto loc_8255B9D4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255b998
	if (!cr0.eq) goto loc_8255B998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255b998
	if (cr0.eq) goto loc_8255B998;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x8255b9a4
	if (!cr6.gt) goto loc_8255B9A4;
loc_8255B998:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8255B9A4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// sth r11,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r11.u16);
	// b 0x8255b9e0
	goto loc_8255B9E0;
loc_8255B9D4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f0710
	sub_824F0710(ctx, base);
loc_8255B9E0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255a198
	sub_8255A198(ctx, base);
loc_8255B9F4:
	// lwz r10,672(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 672);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8255bbe4
	if (cr0.eq) goto loc_8255BBE4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255bbe4
	if (cr0.eq) goto loc_8255BBE4;
	// lhz r11,14(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// li r31,0
	r31.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// add r29,r11,r23
	r29.u64 = r11.u64 + r23.u64;
	// rlwinm r25,r29,2,0,29
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r25,r10
	PPC_STORE_U32(r25.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r26,r11,31,28,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0xF;
loc_8255BA2C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8255ba54
	if (cr6.eq) goto loc_8255BA54;
	// addi r11,r26,-1
	r11.s64 = r26.s64 + -1;
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// andc r11,r26,r11
	r11.u64 = r26.u64 & ~r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r4,r11,31
	ctx.r4.s64 = r11.s64 + 31;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// b 0x8255ba5c
	goto loc_8255BA5C;
loc_8255BA54:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,0
	r11.s64 = 0;
loc_8255BA5C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255bad8
	if (cr6.eq) goto loc_8255BAD8;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x8255bac8
	if (cr6.eq) goto loc_8255BAC8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824c58f0
	sub_824C58F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8255ba90
	if (!cr6.eq) goto loc_8255BA90;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824c5da0
	sub_824C5DA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8255BA90:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824c5d58
	sub_824C5D58(ctx, base);
	// clrldi r11,r29,58
	r11.u64 = r29.u64 & 0x3F;
	// rlwinm r10,r29,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFF8;
	// slw r8,r22,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r3.u8 & 0x3F));
	// sld r9,r22,r11
	ctx.r9.u64 = r11.u8 & 0x40 ? 0 : (r22.u64 << (r11.u8 & 0x7F));
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// or r27,r8,r27
	r27.u64 = ctx.r8.u64 | r27.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + r11.u32, ctx.r9.u64);
loc_8255BAC8:
	// addi r11,r26,-1
	r11.s64 = r26.s64 + -1;
	// andc r11,r26,r11
	r11.u64 = r26.u64 & ~r11.u64;
	// subf r26,r11,r26
	r26.s64 = r26.s64 - r11.s64;
	// b 0x8255ba2c
	goto loc_8255BA2C;
loc_8255BAD8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8255baec
	if (!cr6.eq) goto loc_8255BAEC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255BAEC:
	// not r11,r27
	r11.u64 = ~r27.u64;
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r28,r11,31
	xer.ca = r11.u32 <= 31;
	r28.s64 = 31 - r11.s64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x8255bb40
	if (cr6.lt) goto loc_8255BB40;
	// lwz r11,636(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 636);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824a9f38
	sub_824A9F38(ctx, base);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// rlwinm r11,r11,2,27,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1C;
	// stwx r3,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwimi r10,r11,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r10.u32);
loc_8255BB40:
	// clrldi r9,r29,58
	ctx.r9.u64 = r29.u64 & 0x3F;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFF8;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// sld r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (r22.u64 << (ctx.r9.u8 & 0x7F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + r11.u32, ctx.r9.u64);
	// lwz r11,652(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 652);
	// stwx r31,r11,r25
	PPC_STORE_U32(r11.u32 + r25.u32, r31.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r11,31,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0xF;
loc_8255BB70:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255bb98
	if (cr6.eq) goto loc_8255BB98;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// lhz r10,14(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x8255bba0
	goto loc_8255BBA0;
loc_8255BB98:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255BBA0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255bbe4
	if (cr6.eq) goto loc_8255BBE4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8255bbd4
	if (cr6.eq) goto loc_8255BBD4;
	// addi r8,r28,4
	ctx.r8.s64 = r28.s64 + 4;
	// clrldi r7,r11,58
	ctx.r7.u64 = r11.u64 & 0x3F;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFF8;
	// lwzx r11,r8,r31
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// sld r8,r22,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (r22.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stdx r8,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + r11.u32, ctx.r8.u64);
loc_8255BBD4:
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// b 0x8255bb70
	goto loc_8255BB70;
loc_8255BBE4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x8255bbf0
	goto loc_8255BBF0;
loc_8255BBEC:
	// li r3,4
	ctx.r3.s64 = 4;
loc_8255BBF0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8255BC00"))) PPC_WEAK_FUNC(sub_8255BC00);
PPC_FUNC_IMPL(__imp__sub_8255BC00) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x824ba748
	sub_824BA748(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8255bda8
	if (cr0.eq) goto loc_8255BDA8;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8255BC34:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8255bcb0
	if (cr6.eq) goto loc_8255BCB0;
	// lwz r11,16(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255bca8
	if (cr0.eq) goto loc_8255BCA8;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r10,7,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8255bca8
	if (cr0.eq) goto loc_8255BCA8;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255bca4
	if (cr6.eq) goto loc_8255BCA4;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255BC88:
	// srw r4,r9,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r4,r6,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// bne 0x8255bc88
	if (!cr0.eq) goto loc_8255BC88;
loc_8255BCA4:
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
loc_8255BCA8:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x8255bc34
	goto loc_8255BC34;
loc_8255BCB0:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,40
	ctx.r10.s64 = r30.s64 + 40;
	// rlwinm r8,r9,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
loc_8255BCC0:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8255bda8
	if (!cr6.lt) goto loc_8255BDA8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bne cr6,0x8255bce8
	if (!cr6.eq) goto loc_8255BCE8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// cmpw cr6,r9,r31
	cr6.compare<int32_t>(ctx.r9.s32, r31.s32, xer);
	// beq cr6,0x8255bcf4
	if (cr6.eq) goto loc_8255BCF4;
loc_8255BCE8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8255bcc0
	goto loc_8255BCC0;
loc_8255BCF4:
	// slw r11,r6,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// and. r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255bdb8
	if (!cr0.eq) goto loc_8255BDB8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,616(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 616);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82503110
	sub_82503110(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8255bda8
	if (cr0.eq) goto loc_8255BDA8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255bd94
	if (cr0.eq) goto loc_8255BD94;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x824c5858
	sub_824C5858(ctx, base);
	// sth r3,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r3.u16);
	// lwz r3,624(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 624);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255bd70
	if (!cr0.eq) goto loc_8255BD70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255bd70
	if (cr0.eq) goto loc_8255BD70;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x8255bd7c
	if (!cr6.gt) goto loc_8255BD7C;
loc_8255BD70:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8255BD7C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
loc_8255BD94:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,616(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 616);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8255a198
	sub_8255A198(ctx, base);
loc_8255BDA8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,624(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 624);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f70a0
	sub_824F70A0(ctx, base);
loc_8255BDB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255BDC0"))) PPC_WEAK_FUNC(sub_8255BDC0);
PPC_FUNC_IMPL(__imp__sub_8255BDC0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r24,r21,4
	r24.s64 = r21.s64 + 4;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r20,r30
	r20.u64 = r30.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8255BDF4:
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8255c05c
	if (cr0.eq) goto loc_8255C05C;
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255c03c
	if (cr0.eq) goto loc_8255C03C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r10,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255bfec
	if (!cr0.eq) goto loc_8255BFEC;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 24);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8255c03c
	if (!cr6.eq) goto loc_8255C03C;
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255be5c
	if (cr0.eq) goto loc_8255BE5C;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8255be60
	if (cr6.eq) goto loc_8255BE60;
loc_8255BE5C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255BE60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255bf4c
	if (cr0.eq) goto loc_8255BF4C;
	// rlwinm r11,r10,19,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8255befc
	if (cr6.lt) goto loc_8255BEFC;
	// beq cr6,0x8255beec
	if (cr6.eq) goto loc_8255BEEC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8255bedc
	if (cr6.lt) goto loc_8255BEDC;
	// beq cr6,0x8255bec4
	if (cr6.eq) goto loc_8255BEC4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x8255bea0
	if (cr6.eq) goto loc_8255BEA0;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x8255c050
	if (!cr6.eq) goto loc_8255C050;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a90a0
	sub_824A90A0(ctx, base);
	// b 0x8255bf38
	goto loc_8255BF38;
loc_8255BEA0:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// blt cr6,0x8255bebc
	if (cr6.lt) goto loc_8255BEBC;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(r11.u32, 81, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x8255bf34
	if (!cr6.gt) goto loc_8255BF34;
loc_8255BEBC:
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x8255bf34
	goto loc_8255BF34;
loc_8255BEC4:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12928
	r11.s64 = r11.s64 + -12928;
loc_8255BED0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x8255bf34
	goto loc_8255BF34;
loc_8255BEDC:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12800
	r11.s64 = r11.s64 + -12800;
	// b 0x8255bed0
	goto loc_8255BED0;
loc_8255BEEC:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12416
	r11.s64 = r11.s64 + -12416;
	// b 0x8255bed0
	goto loc_8255BED0;
loc_8255BEFC:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255bf10
	if (!cr0.eq) goto loc_8255BF10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8255bf38
	goto loc_8255BF38;
loc_8255BF10:
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// beq cr6,0x8255bf30
	if (cr6.eq) goto loc_8255BF30;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// beq cr6,0x8255bf30
	if (cr6.eq) goto loc_8255BF30;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(r11.u32, 55, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bne cr6,0x8255bf34
	if (!cr6.eq) goto loc_8255BF34;
loc_8255BF30:
	// li r11,1
	r11.s64 = 1;
loc_8255BF34:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_8255BF38:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c03c
	if (cr0.eq) goto loc_8255C03C;
loc_8255BF40:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8255bfc4
	goto loc_8255BFC4;
loc_8255BF4C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255bf60
	if (!cr6.eq) goto loc_8255BF60;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8255bf64
	if (cr6.eq) goto loc_8255BF64;
loc_8255BF60:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255BF64:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255bf40
	if (cr0.eq) goto loc_8255BF40;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x8255bf88
	if (cr6.lt) goto loc_8255BF88;
	// cmplwi cr6,r10,101
	cr6.compare<uint32_t>(ctx.r10.u32, 101, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x8255bf8c
	if (!cr6.gt) goto loc_8255BF8C;
loc_8255BF88:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255BF8C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255bf40
	if (!cr0.eq) goto loc_8255BF40;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	cr6.compare<uint32_t>(r11.u32, 14848, xer);
	// bne cr6,0x8255bfac
	if (!cr6.eq) goto loc_8255BFAC;
	// cmplwi cr6,r10,112
	cr6.compare<uint32_t>(ctx.r10.u32, 112, xer);
	// beq cr6,0x8255bf40
	if (cr6.eq) goto loc_8255BF40;
loc_8255BFAC:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824bb028
	sub_824BB028(ctx, base);
	// b 0x8255c03c
	goto loc_8255C03C;
loc_8255BFC0:
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
loc_8255BFC4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x8255bfc0
	if (!cr6.eq) goto loc_8255BFC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r31,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r31.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
	// b 0x8255c010
	goto loc_8255C010;
loc_8255BFEC:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82552b58
	sub_82552B58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c03c
	if (cr0.eq) goto loc_8255C03C;
loc_8255C010:
	// li r20,1
	r20.s64 = 1;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8255c030
	if (cr6.eq) goto loc_8255C030;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82502d68
	sub_82502D68(ctx, base);
	// b 0x8255c03c
	goto loc_8255C03C;
loc_8255C030:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,6,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_8255C03C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255bdf4
	if (!cr6.eq) goto loc_8255BDF4;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x8255bdf4
	goto loc_8255BDF4;
loc_8255C050:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255C05C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8255c090
	if (cr6.eq) goto loc_8255C090;
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c090
	if (cr0.eq) goto loc_8255C090;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a98e8
	sub_824A98E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c09c
	if (cr0.eq) goto loc_8255C09C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8255a198
	sub_8255A198(ctx, base);
loc_8255C090:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_8255C09C:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255c0b0
	if (!cr0.eq) goto loc_8255C0B0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x8255c0d8
	goto loc_8255C0D8;
loc_8255C0B0:
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// beq cr6,0x8255c0d0
	if (cr6.eq) goto loc_8255C0D0;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// beq cr6,0x8255c0d0
	if (cr6.eq) goto loc_8255C0D0;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(r11.u32, 55, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bne cr6,0x8255c0d4
	if (!cr6.eq) goto loc_8255C0D4;
loc_8255C0D0:
	// li r11,1
	r11.s64 = 1;
loc_8255C0D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_8255C0D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c1a0
	if (cr0.eq) goto loc_8255C1A0;
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
loc_8255C0E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255c140
	if (cr6.eq) goto loc_8255C140;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255c138
	if (cr0.eq) goto loc_8255C138;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255c120
	if (cr0.eq) goto loc_8255C120;
	// rlwinm. r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x8255c124
	if (cr0.eq) goto loc_8255C124;
loc_8255C120:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255C124:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c138
	if (cr0.eq) goto loc_8255C138;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82502e00
	sub_82502E00(ctx, base);
loc_8255C138:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x8255c0e4
	goto loc_8255C0E4;
loc_8255C140:
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
loc_8255C144:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255c1a0
	if (cr6.eq) goto loc_8255C1A0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255c198
	if (cr0.eq) goto loc_8255C198;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255c180
	if (cr0.eq) goto loc_8255C180;
	// rlwinm. r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x8255c184
	if (cr0.eq) goto loc_8255C184;
loc_8255C180:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255C184:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c198
	if (cr0.eq) goto loc_8255C198;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82502e00
	sub_82502E00(ctx, base);
loc_8255C198:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x8255c144
	goto loc_8255C144;
loc_8255C1A0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a90a0
	sub_824A90A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c278
	if (cr0.eq) goto loc_8255C278;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r28,24(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255c278
	if (!cr0.eq) goto loc_8255C278;
	// mr. r29,r11
	r29.u64 = r11.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8255c278
	if (cr0.eq) goto loc_8255C278;
loc_8255C1C8:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// clrlwi r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255c25c
	if (cr0.eq) goto loc_8255C25C;
	// lwz r31,20(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c25c
	if (!cr0.eq) goto loc_8255C25C;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8255c25c
	if (cr0.eq) goto loc_8255C25C;
loc_8255C21C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14208
	r11.s64 = r11.s64 + -14208;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c244
	if (cr0.eq) goto loc_8255C244;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82502d68
	sub_82502D68(ctx, base);
loc_8255C244:
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,36(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c25c
	if (!cr0.eq) goto loc_8255C25C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8255c21c
	if (!cr6.eq) goto loc_8255C21C;
loc_8255C25C:
	// rlwinm r11,r29,0,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255c278
	if (!cr0.eq) goto loc_8255C278;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255c1c8
	if (!cr6.eq) goto loc_8255C1C8;
loc_8255C278:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82502d68
	sub_82502D68(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824a98e8
	sub_824A98E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c090
	if (cr0.eq) goto loc_8255C090;
	// addi r31,r21,40
	r31.s64 = r21.s64 + 40;
loc_8255C29C:
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// rlwinm r11,r11,13,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8255c090
	if (!cr6.lt) goto loc_8255C090;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82502d68
	sub_82502D68(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8255c29c
	goto loc_8255C29C;
}

__attribute__((alias("__imp__sub_8255C2CC"))) PPC_WEAK_FUNC(sub_8255C2CC);
PPC_FUNC_IMPL(__imp__sub_8255C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255C2D0"))) PPC_WEAK_FUNC(sub_8255C2D0);
PPC_FUNC_IMPL(__imp__sub_8255C2D0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// stw r28,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r28.u32);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// stw r28,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r28.u32);
	// mr r22,r31
	r22.u64 = r31.u64;
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// ori r11,r30,1
	r11.u64 = r30.u64 | 1;
	// ori r10,r29,1
	ctx.r10.u64 = r29.u64 | 1;
	// li r24,4
	r24.s64 = 4;
	// li r25,0
	r25.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8255C338:
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(r31.u32, r23.u32, xer);
	// beq cr6,0x8255c4b8
	if (cr6.eq) goto loc_8255C4B8;
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8255C344:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255c4b8
	if (cr6.eq) goto loc_8255C4B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255c410
	if (!cr6.eq) goto loc_8255C410;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-14208
	ctx.r10.s64 = ctx.r10.s64 + -14208;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255c410
	if (cr0.eq) goto loc_8255C410;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(r31.u32, r23.u32, xer);
	// beq cr6,0x8255c410
	if (cr6.eq) goto loc_8255C410;
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c4b0
	if (!cr0.eq) goto loc_8255C4B0;
	// stw r28,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r28.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c3e8
	if (!cr0.eq) goto loc_8255C3E8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255c3e8
	if (cr0.eq) goto loc_8255C3E8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255c3f4
	if (!cr6.gt) goto loc_8255C3F4;
loc_8255C3E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255C3F4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
	// b 0x8255c4b0
	goto loc_8255C4B0;
loc_8255C410:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8255c4a4
	if (cr6.eq) goto loc_8255C4A4;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x8255c434
	if (!cr6.eq) goto loc_8255C434;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x8255c434
	if (!cr6.eq) goto loc_8255C434;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// beq cr6,0x8255c4b0
	if (cr6.eq) goto loc_8255C4B0;
loc_8255C434:
	// lwz r28,0(r22)
	r28.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// li r30,4
	r30.s64 = 4;
	// li r29,0
	r29.s64 = 0;
loc_8255C444:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255c55c
	if (cr6.eq) goto loc_8255C55C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255c548
	if (cr6.eq) goto loc_8255C548;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255c49c
	if (!cr6.eq) goto loc_8255C49C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8255c49c
	if (!cr6.eq) goto loc_8255C49C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x8255c554
	if (cr6.eq) goto loc_8255C554;
loc_8255C49C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255c57c
	goto loc_8255C57C;
loc_8255C4A4:
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r31
	r26.u64 = r31.u64;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_8255C4B0:
	// lwz r27,4(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// b 0x8255c344
	goto loc_8255C344;
loc_8255C4B8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255c4c8
	if (cr0.eq) goto loc_8255C4C8;
	// li r11,0
	r11.s64 = 0;
loc_8255C4C8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c56c
	if (!cr0.eq) goto loc_8255C56C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255c4e4
	if (cr6.eq) goto loc_8255C4E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255c4f0
	goto loc_8255C4F0;
loc_8255C4E4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255C4F0:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8255c338
	if (!cr0.eq) goto loc_8255C338;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
	// b 0x8255c338
	goto loc_8255C338;
loc_8255C548:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,88(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8255C554:
	// lwz r28,4(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// b 0x8255c444
	goto loc_8255C444;
loc_8255C55C:
	// stw r31,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r31.u32);
	// stw r30,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r30.u32);
	// stw r29,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r29.u32);
	// b 0x8255c578
	goto loc_8255C578;
loc_8255C56C:
	// stw r26,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r26.u32);
	// stw r24,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r24.u32);
	// stw r25,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r25.u32);
loc_8255C578:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8255C57C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8255C584"))) PPC_WEAK_FUNC(sub_8255C584);
PPC_FUNC_IMPL(__imp__sub_8255C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255C588"))) PPC_WEAK_FUNC(sub_8255C588);
PPC_FUNC_IMPL(__imp__sub_8255C588) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r28,111
	r28.s64 = 111;
	// b 0x8255c66c
	goto loc_8255C66C;
loc_8255C5B0:
	// cmplwi cr6,r11,124
	cr6.compare<uint32_t>(r11.u32, 124, xer);
	// beq cr6,0x8255c5c4
	if (cr6.eq) goto loc_8255C5C4;
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(r11.u32, 123, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8255c5c8
	if (!cr6.eq) goto loc_8255C5C8;
loc_8255C5C4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8255C5C8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255c684
	if (!cr0.eq) goto loc_8255C684;
	// addi r11,r11,-112
	r11.s64 = r11.s64 + -112;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c684
	if (!cr0.eq) goto loc_8255C684;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14208
	r11.s64 = r11.s64 + -14208;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c684
	if (!cr0.eq) goto loc_8255C684;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8255c684
	if (!cr6.eq) goto loc_8255C684;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c620
	if (cr0.eq) goto loc_8255C620;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824dc438
	sub_824DC438(ctx, base);
	// b 0x8255c64c
	goto loc_8255C64C;
loc_8255C620:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255C624:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255c690
	if (!cr0.eq) goto loc_8255C690;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	xer.ca = r11.u32 > 35;
	r11.s64 = r11.s64 + -36;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c690
	if (cr0.eq) goto loc_8255C690;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255c624
	if (!cr6.eq) goto loc_8255C624;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8255C64C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c698
	if (cr0.eq) goto loc_8255C698;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8255C66C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// subf r10,r28,r11
	ctx.r10.s64 = r11.s64 - r28.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255c5b0
	if (cr0.eq) goto loc_8255C5B0;
loc_8255C684:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255C688:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_8255C690:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255c64c
	goto loc_8255C64C;
loc_8255C698:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8255ab10
	sub_8255AB10(ctx, base);
	// b 0x8255c688
	goto loc_8255C688;
}

__attribute__((alias("__imp__sub_8255C6B4"))) PPC_WEAK_FUNC(sub_8255C6B4);
PPC_FUNC_IMPL(__imp__sub_8255C6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255C6B8"))) PPC_WEAK_FUNC(sub_8255C6B8);
PPC_FUNC_IMPL(__imp__sub_8255C6B8) {
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi r26,r28,24
	r26.u64 = r28.u32 & 0xFF;
loc_8255C6DC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8255c6f4
	if (cr6.eq) goto loc_8255C6F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824dc438
	sub_824DC438(ctx, base);
	// b 0x8255c720
	goto loc_8255C720;
loc_8255C6F4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255C6F8:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255c744
	if (!cr0.eq) goto loc_8255C744;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	xer.ca = r11.u32 > 35;
	r11.s64 = r11.s64 + -36;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c744
	if (cr0.eq) goto loc_8255C744;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255c6f8
	if (!cr6.eq) goto loc_8255C6F8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8255C720:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c74c
	if (cr0.eq) goto loc_8255C74C;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x8255c6dc
	goto loc_8255C6DC;
loc_8255C744:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255c720
	goto loc_8255C720;
loc_8255C74C:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255ae60
	sub_8255AE60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8255C76C"))) PPC_WEAK_FUNC(sub_8255C76C);
PPC_FUNC_IMPL(__imp__sub_8255C76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255C770"))) PPC_WEAK_FUNC(sub_8255C770);
PPC_FUNC_IMPL(__imp__sub_8255C770) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824d1a48
	sub_824D1A48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c800
	if (cr0.eq) goto loc_8255C800;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c7b4
	if (cr0.eq) goto loc_8255C7B4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824dc438
	sub_824DC438(ctx, base);
	// b 0x8255c7e0
	goto loc_8255C7E0;
loc_8255C7B4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8255C7B8:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255c808
	if (!cr0.eq) goto loc_8255C808;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	xer.ca = r11.u32 > 35;
	r11.s64 = r11.s64 + -36;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255c808
	if (cr0.eq) goto loc_8255C808;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255c7b8
	if (!cr6.eq) goto loc_8255C7B8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8255C7E0:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c800
	if (!cr0.eq) goto loc_8255C800;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255c6b8
	sub_8255C6B8(ctx, base);
loc_8255C800:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_8255C808:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8255c7e0
	goto loc_8255C7E0;
}

__attribute__((alias("__imp__sub_8255C810"))) PPC_WEAK_FUNC(sub_8255C810);
PPC_FUNC_IMPL(__imp__sub_8255C810) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r22,14208
	r22.s64 = 14208;
	// addi r24,r26,4
	r24.s64 = r26.s64 + 4;
	// ori r11,r26,1
	r11.u64 = r26.u64 | 1;
	// ori r10,r24,1
	ctx.r10.u64 = r24.u64 | 1;
	// li r23,1
	r23.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r27,12(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_8255C864:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r22,r11
	r11.s64 = r11.s64 - r22.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cca4
	if (cr0.eq) goto loc_8255CCA4;
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cae4
	if (cr0.eq) goto loc_8255CAE4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cb00
	if (cr0.eq) goto loc_8255CB00;
	// lwz r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm. r10,r10,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255cae4
	if (cr0.eq) goto loc_8255CAE4;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r28,24(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255c8fc
	if (!cr0.eq) goto loc_8255C8FC;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
loc_8255C8B8:
	// clrlwi r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// slw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r8,r11
	r11.u64 = ctx.r8.u64 & r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255c8fc
	if (!cr0.eq) goto loc_8255C8FC;
	// lwz r28,52(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// rlwinm. r8,r11,13,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8255c8b8
	if (cr0.eq) goto loc_8255C8B8;
loc_8255C8FC:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255cae4
	if (cr0.eq) goto loc_8255CAE4;
	// clrlwi r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// slw r10,r23,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255cae4
	if (!cr0.eq) goto loc_8255CAE4;
	// lwz r27,8(r9)
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8255C944:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255d120
	if (cr6.eq) goto loc_8255D120;
	// lwz r29,4(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
loc_8255C954:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255c978
	if (cr6.eq) goto loc_8255C978;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x8255c970
	if (cr6.eq) goto loc_8255C970;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8255c954
	goto loc_8255C954;
loc_8255C970:
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x8255c97c
	goto loc_8255C97C;
loc_8255C978:
	// li r11,0
	r11.s64 = 0;
loc_8255C97C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cadc
	if (cr0.eq) goto loc_8255CADC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(r11.u32, 85, xer);
	// beq cr6,0x8255c9b0
	if (cr6.eq) goto loc_8255C9B0;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(r11.u32, 86, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8255c9b4
	if (!cr6.eq) goto loc_8255C9B4;
loc_8255C9B0:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8255C9B4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d1b4
	if (cr0.eq) goto loc_8255D1B4;
	// oris r11,r10,1024
	r11.u64 = ctx.r10.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255c9f4
	if (!cr0.eq) goto loc_8255C9F4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255c9f4
	if (cr0.eq) goto loc_8255C9F4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255ca00
	if (!cr6.gt) goto loc_8255CA00;
loc_8255C9F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255CA00:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cadc
	if (!cr0.eq) goto loc_8255CADC;
	// mr. r30,r11
	r30.u64 = r11.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8255cadc
	if (cr0.eq) goto loc_8255CADC;
loc_8255CA2C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r22,r11
	r11.s64 = r11.s64 - r22.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cac0
	if (cr0.eq) goto loc_8255CAC0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82519da8
	sub_82519DA8(ctx, base);
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255ca9c
	if (!cr0.eq) goto loc_8255CA9C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255ca9c
	if (cr0.eq) goto loc_8255CA9C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255caa8
	if (!cr6.gt) goto loc_8255CAA8;
loc_8255CA9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255CAA8:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255CAC0:
	// rlwinm r11,r30,0,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cadc
	if (!cr0.eq) goto loc_8255CADC;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255ca2c
	if (!cr6.eq) goto loc_8255CA2C;
loc_8255CADC:
	// lwz r27,12(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// b 0x8255c944
	goto loc_8255C944;
loc_8255CAE4:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255cb00
	if (cr0.eq) goto loc_8255CB00;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// bne cr6,0x8255cb04
	if (!cr6.eq) goto loc_8255CB04;
loc_8255CB00:
	// li r11,0
	r11.s64 = 0;
loc_8255CB04:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cca4
	if (cr0.eq) goto loc_8255CCA4;
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r31,8(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8255CB18:
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255cd60
	if (cr6.eq) goto loc_8255CD60;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// slw r9,r23,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255cb68
	if (!cr0.eq) goto loc_8255CB68;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8255cb18
	goto loc_8255CB18;
loc_8255CB68:
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255cb80
	if (!cr0.eq) goto loc_8255CB80;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82506870
	sub_82506870(ctx, base);
loc_8255CB80:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cc58
	if (!cr0.eq) goto loc_8255CC58;
	// mr. r31,r11
	r31.u64 = r11.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8255cc58
	if (cr0.eq) goto loc_8255CC58;
loc_8255CB94:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cc3c
	if (cr0.eq) goto loc_8255CC3C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8255CBA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255cc3c
	if (cr6.eq) goto loc_8255CC3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8255cbc4
	if (!cr0.eq) goto loc_8255CBC4;
	// rlwinm. r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255cbcc
	if (cr0.eq) goto loc_8255CBCC;
loc_8255CBC4:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8255cba4
	goto loc_8255CBA4;
loc_8255CBCC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8255cc3c
	if (cr0.eq) goto loc_8255CC3C;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cc3c
	if (!cr0.eq) goto loc_8255CC3C;
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(r11.u32, 85, xer);
	// beq cr6,0x8255cc24
	if (cr6.eq) goto loc_8255CC24;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(r11.u32, 86, xer);
	// beq cr6,0x8255cc24
	if (cr6.eq) goto loc_8255CC24;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(r11.u32, 88, xer);
	// beq cr6,0x8255cc24
	if (cr6.eq) goto loc_8255CC24;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(r11.u32, 89, xer);
	// beq cr6,0x8255cc24
	if (cr6.eq) goto loc_8255CC24;
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(r11.u32, 83, xer);
	// beq cr6,0x8255cc24
	if (cr6.eq) goto loc_8255CC24;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(r11.u32, 84, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8255cc28
	if (!cr6.eq) goto loc_8255CC28;
loc_8255CC24:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8255CC28:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cc3c
	if (cr0.eq) goto loc_8255CC3C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8255d3d0
	sub_8255D3D0(ctx, base);
loc_8255CC3C:
	// rlwinm r11,r31,0,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cc58
	if (!cr0.eq) goto loc_8255CC58;
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255cb94
	if (!cr6.eq) goto loc_8255CB94;
loc_8255CC58:
	// lwz r11,36(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255cca4
	if (!cr0.eq) goto loc_8255CCA4;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cca4
	if (!cr0.eq) goto loc_8255CCA4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255cca4
	if (cr0.eq) goto loc_8255CCA4;
loc_8255CC78:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255cc8c
	if (cr0.eq) goto loc_8255CC8C;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
loc_8255CC8C:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cca4
	if (!cr0.eq) goto loc_8255CCA4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255cc78
	if (!cr6.eq) goto loc_8255CC78;
loc_8255CCA4:
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8255CCA8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255cf80
	if (cr6.eq) goto loc_8255CF80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255ccc8
	if (!cr0.eq) goto loc_8255CCC8;
	// rlwinm. r11,r10,0,4,6
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8255cccc
	if (cr0.eq) goto loc_8255CCCC;
loc_8255CCC8:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8255CCCC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cf78
	if (cr0.eq) goto loc_8255CF78;
	// rlwinm r11,r10,0,4,6
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255cf0c
	if (cr0.eq) goto loc_8255CF0C;
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cf0c
	if (cr0.eq) goto loc_8255CF0C;
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 24);
loc_8255CCF8:
	// lwz r31,52(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8255ccf8
	if (cr0.eq) goto loc_8255CCF8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	cr6.compare<uint32_t>(r11.u32, 10624, xer);
	// bne cr6,0x8255ccf8
	if (!cr6.eq) goto loc_8255CCF8;
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r31,6,31,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255cf0c
	if (!cr0.eq) goto loc_8255CF0C;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7;
	// rlwinm r4,r31,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0x7F;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r30,-12
	r11.s64 = r30.s64 + -12;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255ce3c
	if (cr0.eq) goto loc_8255CE3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255ce44
	goto loc_8255CE44;
loc_8255CD60:
	// rlwinm. r11,r11,13,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255cdf4
	if (cr0.eq) goto loc_8255CDF4;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8255CD6C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255cca4
	if (cr6.eq) goto loc_8255CCA4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cdec
	if (!cr0.eq) goto loc_8255CDEC;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255cdc8
	if (!cr0.eq) goto loc_8255CDC8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255cdc8
	if (cr0.eq) goto loc_8255CDC8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255cdd4
	if (!cr6.gt) goto loc_8255CDD4;
loc_8255CDC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255CDD4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255CDEC:
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// b 0x8255cd6c
	goto loc_8255CD6C;
loc_8255CDF4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255cca4
	if (cr6.eq) goto loc_8255CCA4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82519da8
	sub_82519DA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8255ce34
	if (cr0.eq) goto loc_8255CE34;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// bl 0x8255b330
	sub_8255B330(ctx, base);
loc_8255CE34:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x8255cdf4
	goto loc_8255CDF4;
loc_8255CE3C:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255CE44:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// oris r11,r31,1024
	r11.u64 = r31.u64 | 67108864;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255ce88
	if (!cr0.eq) goto loc_8255CE88;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255ce88
	if (cr0.eq) goto loc_8255CE88;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255ce94
	if (!cr6.gt) goto loc_8255CE94;
loc_8255CE88:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255CE94:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r30,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r30.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255cee8
	if (!cr0.eq) goto loc_8255CEE8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255cee8
	if (cr0.eq) goto loc_8255CEE8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255cef4
	if (!cr6.gt) goto loc_8255CEF4;
loc_8255CEE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255CEF4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255CF0C:
	// lwz r31,12(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255cf78
	if (!cr0.eq) goto loc_8255CF78;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255cf54
	if (!cr0.eq) goto loc_8255CF54;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255cf54
	if (cr0.eq) goto loc_8255CF54;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255cf60
	if (!cr6.gt) goto loc_8255CF60;
loc_8255CF54:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255CF60:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255CF78:
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x8255cca8
	goto loc_8255CCA8;
loc_8255CF80:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(r11.u32, 21, xer);
	// blt cr6,0x8255cf9c
	if (cr6.lt) goto loc_8255CF9C;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// ble cr6,0x8255cfa0
	if (!cr6.gt) goto loc_8255CFA0;
loc_8255CF9C:
	// li r11,0
	r11.s64 = 0;
loc_8255CFA0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d120
	if (cr0.eq) goto loc_8255D120;
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
loc_8255CFAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255d120
	if (cr6.eq) goto loc_8255D120;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r31,0
	r11.s64 = r31.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255d118
	if (cr0.eq) goto loc_8255D118;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8255d04c
	if (cr0.eq) goto loc_8255D04C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(r11.u32, 21, xer);
	// blt cr6,0x8255d008
	if (cr6.lt) goto loc_8255D008;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// ble cr6,0x8255d00c
	if (!cr6.gt) goto loc_8255D00C;
loc_8255D008:
	// li r11,0
	r11.s64 = 0;
loc_8255D00C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d118
	if (!cr0.eq) goto loc_8255D118;
	// b 0x8255d020
	goto loc_8255D020;
loc_8255D018:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8255D020:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r22,r11
	r11.s64 = r11.s64 - r22.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d018
	if (!cr0.eq) goto loc_8255D018;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255d118
	if (!cr0.eq) goto loc_8255D118;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// b 0x8255d0c0
	goto loc_8255D0C0;
loc_8255D04C:
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d060
	if (cr0.eq) goto loc_8255D060;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// beq cr6,0x8255d064
	if (cr6.eq) goto loc_8255D064;
loc_8255D060:
	// li r11,0
	r11.s64 = 0;
loc_8255D064:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d118
	if (cr0.eq) goto loc_8255D118;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,85
	cr6.compare<uint32_t>(r11.u32, 85, xer);
	// beq cr6,0x8255d0a8
	if (cr6.eq) goto loc_8255D0A8;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(r11.u32, 86, xer);
	// beq cr6,0x8255d0a8
	if (cr6.eq) goto loc_8255D0A8;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(r11.u32, 88, xer);
	// beq cr6,0x8255d0a8
	if (cr6.eq) goto loc_8255D0A8;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(r11.u32, 89, xer);
	// beq cr6,0x8255d0a8
	if (cr6.eq) goto loc_8255D0A8;
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(r11.u32, 83, xer);
	// beq cr6,0x8255d0a8
	if (cr6.eq) goto loc_8255D0A8;
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(r11.u32, 84, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8255d0ac
	if (!cr6.eq) goto loc_8255D0AC;
loc_8255D0A8:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8255D0AC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d118
	if (cr0.eq) goto loc_8255D118;
	// rlwinm. r11,r10,6,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d118
	if (!cr0.eq) goto loc_8255D118;
	// oris r11,r10,1024
	r11.u64 = ctx.r10.u64 | 67108864;
loc_8255D0C0:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d0f4
	if (!cr0.eq) goto loc_8255D0F4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255d0f4
	if (cr0.eq) goto loc_8255D0F4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255d100
	if (!cr6.gt) goto loc_8255D100;
loc_8255D0F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255D100:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255D118:
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8255cfac
	goto loc_8255CFAC;
loc_8255D120:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255d130
	if (cr0.eq) goto loc_8255D130;
	// li r11,0
	r11.s64 = 0;
loc_8255D130:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d1c0
	if (!cr0.eq) goto loc_8255D1C0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255d14c
	if (cr6.eq) goto loc_8255D14C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255d158
	goto loc_8255D158;
loc_8255D14C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255D158:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8255d1ac
	if (!cr0.eq) goto loc_8255D1AC;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
loc_8255D1AC:
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x8255c864
	goto loc_8255C864;
loc_8255D1B4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255D1C0:
	// addi r11,r25,924
	r11.s64 = r25.s64 + 924;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8255D1D8"))) PPC_WEAK_FUNC(sub_8255D1D8);
PPC_FUNC_IMPL(__imp__sub_8255D1D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x824a9858
	sub_824A9858(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// ori r11,r29,1
	r11.u64 = r29.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = r28.u64 | 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8255D220:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8255D224:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255d268
	if (cr6.eq) goto loc_8255D268;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255d244
	if (!cr0.eq) goto loc_8255D244;
	// rlwinm. r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8255d248
	if (cr0.eq) goto loc_8255D248;
loc_8255D244:
	// li r11,1
	r11.s64 = 1;
loc_8255D248:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d260
	if (cr0.eq) goto loc_8255D260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255c810
	sub_8255C810(ctx, base);
loc_8255D260:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8255d224
	goto loc_8255D224;
loc_8255D268:
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_8255D26C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255d324
	if (cr6.eq) goto loc_8255D324;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r31,0
	r11.s64 = r31.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255d31c
	if (cr0.eq) goto loc_8255D31C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255d2a8
	if (!cr0.eq) goto loc_8255D2A8;
	// rlwinm. r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8255d2ac
	if (cr0.eq) goto loc_8255D2AC;
loc_8255D2A8:
	// li r11,1
	r11.s64 = 1;
loc_8255D2AC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d31c
	if (cr0.eq) goto loc_8255D31C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255d31c
	if (!cr0.eq) goto loc_8255D31C;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d2f8
	if (!cr0.eq) goto loc_8255D2F8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255d2f8
	if (cr0.eq) goto loc_8255D2F8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255d304
	if (!cr6.gt) goto loc_8255D304;
loc_8255D2F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255D304:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255D31C:
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8255d26c
	goto loc_8255D26C;
loc_8255D324:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255d334
	if (cr0.eq) goto loc_8255D334;
	// li r11,0
	r11.s64 = 0;
loc_8255D334:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d3b4
	if (!cr0.eq) goto loc_8255D3B4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255d350
	if (cr6.eq) goto loc_8255D350;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255d35c
	goto loc_8255D35C;
loc_8255D350:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255D35C:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r4
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bne 0x8255d220
	if (!cr0.eq) goto loc_8255D220;
	// rlwinm r11,r4,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82496e38
	sub_82496E38(ctx, base);
	// b 0x8255d220
	goto loc_8255D220;
loc_8255D3B4:
	// addi r11,r27,924
	r11.s64 = r27.s64 + 924;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8255D3CC"))) PPC_WEAK_FUNC(sub_8255D3CC);
PPC_FUNC_IMPL(__imp__sub_8255D3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D3D0"))) PPC_WEAK_FUNC(sub_8255D3D0);
PPC_FUNC_IMPL(__imp__sub_8255D3D0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r30,25,25,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(r11.u32, 83, xer);
	// bne cr6,0x8255d444
	if (!cr6.eq) goto loc_8255D444;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x7;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255d42c
	if (cr0.eq) goto loc_8255D42C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255d434
	goto loc_8255D434;
loc_8255D42C:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
loc_8255D434:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824baf98
	sub_824BAF98(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8255d468
	goto loc_8255D468;
loc_8255D444:
	// cmplwi cr6,r11,84
	cr6.compare<uint32_t>(r11.u32, 84, xer);
	// bne cr6,0x8255d468
	if (!cr6.eq) goto loc_8255D468;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-16
	r11.s64 = r31.s64 + -16;
	// lwzx r29,r3,r11
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
loc_8255D468:
	// oris r11,r30,1024
	r11.u64 = r30.u64 | 67108864;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x8255d54c
	if (cr6.eq) goto loc_8255D54C;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d4a8
	if (!cr0.eq) goto loc_8255D4A8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255d4a8
	if (cr0.eq) goto loc_8255D4A8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255d4b4
	if (!cr6.gt) goto loc_8255D4B4;
loc_8255D4A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255D4B4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r31.u32);
loc_8255D4CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255d544
	if (cr6.eq) goto loc_8255D544;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255d544
	if (!cr0.eq) goto loc_8255D544;
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// beq cr6,0x8255d570
	if (cr6.eq) goto loc_8255D570;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d520
	if (!cr0.eq) goto loc_8255D520;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	xer.ca = r11.u32 > 3;
	ctx.r3.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8255d520
	if (cr0.eq) goto loc_8255D520;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8255d52c
	if (!cr6.gt) goto loc_8255D52C;
loc_8255D520:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824b4e50
	sub_824B4E50(ctx, base);
loc_8255D52C:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r29,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, r29.u32);
loc_8255D544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_8255D54C:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8255D550:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255d4cc
	if (cr6.eq) goto loc_8255D4CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255c810
	sub_8255C810(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8255d550
	goto loc_8255D550;
loc_8255D570:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8255D574:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255d544
	if (cr6.eq) goto loc_8255D544;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255c810
	sub_8255C810(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8255d574
	goto loc_8255D574;
}

__attribute__((alias("__imp__sub_8255D594"))) PPC_WEAK_FUNC(sub_8255D594);
PPC_FUNC_IMPL(__imp__sub_8255D594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D598"))) PPC_WEAK_FUNC(sub_8255D598);
PPC_FUNC_IMPL(__imp__sub_8255D598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc4
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r22,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r22.u32);
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// stw r16,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r16.u32);
	// mr r19,r16
	r19.u64 = r16.u64;
	// mr r17,r16
	r17.u64 = r16.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8255d790
	if (cr6.eq) goto loc_8255D790;
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(r11.s32, 54, xer);
	// beq cr6,0x8255d7f4
	if (cr6.eq) goto loc_8255D7F4;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x8255d790
	if (!cr6.gt) goto loc_8255D790;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// ble cr6,0x8255d76c
	if (!cr6.gt) goto loc_8255D76C;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(r11.s32, 111, xer);
	// bne cr6,0x8255d790
	if (!cr6.eq) goto loc_8255D790;
	// addi r25,r21,4
	r25.s64 = r21.s64 + 4;
	// li r24,14208
	r24.s64 = 14208;
loc_8255D618:
	// lwz r26,0(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x8255d790
	if (cr0.eq) goto loc_8255D790;
	// lwz r28,16(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// subf r11,r16,r28
	r11.s64 = r28.s64 - r16.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255d758
	if (cr0.eq) goto loc_8255D758;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d758
	if (cr0.eq) goto loc_8255D758;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// clrlwi r27,r22,30
	r27.u64 = r22.u32 & 0x3;
	// lfd f1,0(r20)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r20.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = r11.u32 & 0x1F;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825507b8
	sub_825507B8(ctx, base);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_8255D678:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255d720
	if (cr6.eq) goto loc_8255D720;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// subf r10,r24,r10
	ctx.r10.s64 = ctx.r10.s64 - r24.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255d758
	if (cr0.eq) goto loc_8255D758;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255d758
	if (cr0.eq) goto loc_8255D758;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255d758
	if (!cr6.eq) goto loc_8255D758;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// addi r10,r10,-15872
	ctx.r10.s64 = ctx.r10.s64 + -15872;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255d758
	if (cr0.eq) goto loc_8255D758;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r31,r11,27,30,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x3;
	// clrlwi r5,r11,27
	ctx.r5.u64 = r11.u32 & 0x1F;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82555620
	sub_82555620(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r31,r11,27
	r31.u64 = r11.u32 & 0x1F;
	// bl 0x824ffe38
	sub_824FFE38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825507b8
	sub_825507B8(ctx, base);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, ctx.f1.f64);
	// bne cr6,0x8255d758
	if (!cr6.eq) goto loc_8255D758;
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x8255d678
	goto loc_8255D678;
loc_8255D720:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82552778
	sub_82552778(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82557398
	sub_82557398(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824ba690
	sub_824BA690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ba7b8
	sub_824BA7B8(ctx, base);
loc_8255D758:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x8255d618
	if (!cr6.eq) goto loc_8255D618;
	// addi r25,r26,8
	r25.s64 = r26.s64 + 8;
	// b 0x8255d618
	goto loc_8255D618;
loc_8255D76C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,0(r20)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(r20.u32 + 0);
	// li r19,1
	r19.s64 = 1;
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8255d78c
	if (cr6.eq) goto loc_8255D78C;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_8255D78C:
	// clrlwi r17,r11,24
	r17.u64 = r11.u32 & 0xFF;
loc_8255D790:
	// mr r11,r16
	r11.u64 = r16.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_8255D79C:
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// li r5,-1
	ctx.r5.s64 = -1;
	// rlwinm r4,r11,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// lwzx r4,r4,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// slw r6,r5,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x8255d988
	if (cr6.lt) goto loc_8255D988;
	// beq cr6,0x8255d978
	if (cr6.eq) goto loc_8255D978;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x8255da74
	if (!cr6.lt) goto loc_8255DA74;
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// b 0x8255d980
	goto loc_8255D980;
loc_8255D7F4:
	// lwz r26,4(r21)
	r26.u64 = PPC_LOAD_U32(r21.u32 + 4);
loc_8255D7F8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8255da88
	if (cr6.eq) goto loc_8255DA88;
	// lwz r29,16(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// subf r11,r16,r29
	r11.s64 = r29.s64 - r16.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255d970
	if (cr0.eq) goto loc_8255D970;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14976
	r11.s64 = r11.s64 + -14976;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d970
	if (cr0.eq) goto loc_8255D970;
	// lwz r27,40(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r31,12(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15744
	r11.s64 = r11.s64 + -15744;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255d970
	if (cr0.eq) goto loc_8255D970;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfd f31,0(r20)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r20.u32 + 0);
	// addi r30,r31,-8
	r30.s64 = r31.s64 + -8;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// rlwinm r31,r10,17,18,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FFF;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f31.f64));
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// clrlwi r4,r11,17
	ctx.r4.u64 = r11.u32 & 0x7FFF;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// bl 0x82555010
	sub_82555010(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8255d970
	if (cr0.eq) goto loc_8255D970;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
loc_8255D8D0:
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8255d970
	if (cr0.eq) goto loc_8255D970;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r16,r11
	r11.s64 = r11.s64 - r16.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255d95c
	if (cr0.eq) goto loc_8255D95C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255d910
	if (!cr0.eq) goto loc_8255D910;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// beq 0x8255d914
	if (cr0.eq) goto loc_8255D914;
loc_8255D910:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8255D914:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255d95c
	if (cr0.eq) goto loc_8255D95C;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0xFF;
	// bl 0x82552b58
	sub_82552B58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255d95c
	if (!cr0.eq) goto loc_8255D95C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8255D95C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255d8d0
	if (!cr6.eq) goto loc_8255D8D0;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x8255d8d0
	goto loc_8255D8D0;
loc_8255D970:
	// lwz r26,8(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8255d7f8
	goto loc_8255D7F8;
loc_8255D978:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
loc_8255D980:
	// stfiwx f0,0,r8
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// b 0x8255d994
	goto loc_8255D994;
loc_8255D988:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8255D994:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x8255d79c
	if (cr6.lt) goto loc_8255D79C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82555330
	sub_82555330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8255bdc0
	sub_8255BDC0(ctx, base);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255da84
	if (cr0.eq) goto loc_8255DA84;
	// addi r28,r21,4
	r28.s64 = r21.s64 + 4;
loc_8255D9F4:
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8255da80
	if (cr0.eq) goto loc_8255DA80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r16,r4
	r11.s64 = ctx.r4.s64 - r16.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8255da60
	if (cr0.eq) goto loc_8255DA60;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255da34
	if (cr0.eq) goto loc_8255DA34;
	// rlwinm. r11,r11,0,4,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x8255da38
	if (cr0.eq) goto loc_8255DA38;
loc_8255DA34:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_8255DA38:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255da60
	if (cr0.eq) goto loc_8255DA60;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8255a608
	sub_8255A608(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// or r11,r11,r30
	r11.u64 = r11.u64 | r30.u64;
	// rlwimi r11,r30,0,0,30
	r11.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8255DA60:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255d9f4
	if (!cr6.eq) goto loc_8255D9F4;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// b 0x8255d9f4
	goto loc_8255D9F4;
loc_8255DA74:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255DA80:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
loc_8255DA84:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
loc_8255DA88:
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// std r11,0(r15)
	PPC_STORE_U64(r15.u32 + 0, r11.u64);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_8255DAA4"))) PPC_WEAK_FUNC(sub_8255DAA4);
PPC_FUNC_IMPL(__imp__sub_8255DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DAA8"))) PPC_WEAK_FUNC(sub_8255DAA8);
PPC_FUNC_IMPL(__imp__sub_8255DAA8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r22,14976
	r22.s64 = 14976;
	// lwz r28,12(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm r29,r11,27,24,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0xFF;
	// clrlwi r30,r11,27
	r30.u64 = r11.u32 & 0x1F;
loc_8255DADC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8255dc68
	if (cr6.eq) goto loc_8255DC68;
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(r11.s32, 103, xer);
	// beq cr6,0x8255dba8
	if (cr6.eq) goto loc_8255DBA8;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(r11.s32, 111, xer);
	// bne cr6,0x8255dda0
	if (!cr6.eq) goto loc_8255DDA0;
	// rlwinm r11,r27,0,0,19
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFF000;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x8255c2d0
	sub_8255C2D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dda0
	if (cr0.eq) goto loc_8255DDA0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255dda0
	if (cr6.eq) goto loc_8255DDA0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r10,0,27,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255db54
	if (cr0.eq) goto loc_8255DB54;
	// rlwinm. r11,r30,0,27,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255db54
	if (cr0.eq) goto loc_8255DB54;
loc_8255DB4C:
	// li r11,0
	r11.s64 = 0;
	// b 0x8255db7c
	goto loc_8255DB7C;
loc_8255DB54:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255db64
	if (cr0.eq) goto loc_8255DB64;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255db4c
	if (!cr0.eq) goto loc_8255DB4C;
loc_8255DB64:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255db78
	if (cr0.eq) goto loc_8255DB78;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x8255db7c
	if (!cr0.eq) goto loc_8255DB7C;
loc_8255DB78:
	// li r11,1
	r11.s64 = 1;
loc_8255DB7C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dda0
	if (cr0.eq) goto loc_8255DDA0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r29,r8,r11
	r29.u64 = ctx.r8.u64 | r11.u64;
	// b 0x8255dd58
	goto loc_8255DD58;
loc_8255DBA8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8255dda0
	if (!cr6.eq) goto loc_8255DDA0;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm. r11,r9,0,27,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255dda0
	if (!cr0.eq) goto loc_8255DDA0;
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r22,r11
	r11.s64 = r11.s64 - r22.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255dda0
	if (!cr0.eq) goto loc_8255DDA0;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm. r11,r10,0,27,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dbf8
	if (cr0.eq) goto loc_8255DBF8;
	// rlwinm. r11,r30,0,27,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dbf8
	if (cr0.eq) goto loc_8255DBF8;
loc_8255DBF0:
	// li r11,0
	r11.s64 = 0;
	// b 0x8255dc20
	goto loc_8255DC20;
loc_8255DBF8:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dc08
	if (cr0.eq) goto loc_8255DC08;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255dbf0
	if (!cr0.eq) goto loc_8255DBF0;
loc_8255DC08:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dc1c
	if (cr0.eq) goto loc_8255DC1C;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x8255dc20
	if (!cr0.eq) goto loc_8255DC20;
loc_8255DC1C:
	// li r11,1
	r11.s64 = 1;
loc_8255DC20:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dda0
	if (cr0.eq) goto loc_8255DDA0;
	// rlwinm r11,r9,27,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r7,r29,27,29,30
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x6;
	// rlwinm r6,r29,29,29,30
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x6;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// rlwinm. r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rlwinm r5,r29,31,29,30
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x6;
	// rlwinm r4,r29,1,29,30
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x6;
	// srw r8,r11,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r7,r11,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r6,r11,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r5.u8 & 0x3F));
	// srw r29,r11,r4
	r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r11,r7,28
	r11.u64 = ctx.r7.u32 & 0xF;
	// rlwimi r6,r11,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r29,r6,2,0,29
	r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
	// b 0x8255dd5c
	goto loc_8255DD5C;
loc_8255DC68:
	// lwz r31,40(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a91e8
	sub_824A91E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dda0
	if (cr0.eq) goto loc_8255DDA0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r8,0,27,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255dda0
	if (!cr0.eq) goto loc_8255DDA0;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// subf r11,r22,r11
	r11.s64 = r11.s64 - r22.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255dda0
	if (!cr0.eq) goto loc_8255DDA0;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm. r11,r10,0,27,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dcc4
	if (cr0.eq) goto loc_8255DCC4;
	// rlwinm. r11,r30,0,27,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dcc4
	if (cr0.eq) goto loc_8255DCC4;
loc_8255DCBC:
	// li r11,0
	r11.s64 = 0;
	// b 0x8255dcec
	goto loc_8255DCEC;
loc_8255DCC4:
	// rlwinm. r11,r10,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dcd4
	if (cr0.eq) goto loc_8255DCD4;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255dcbc
	if (!cr0.eq) goto loc_8255DCBC;
loc_8255DCD4:
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dce8
	if (cr0.eq) goto loc_8255DCE8;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x8255dcec
	if (!cr0.eq) goto loc_8255DCEC;
loc_8255DCE8:
	// li r11,1
	r11.s64 = 1;
loc_8255DCEC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dda0
	if (cr0.eq) goto loc_8255DDA0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8255dd20
	if (cr6.eq) goto loc_8255DD20;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r7,24(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r7,76(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// xor r11,r11,r7
	r11.u64 = r11.u64 ^ ctx.r7.u64;
	// clrlwi r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dda0
	if (cr0.eq) goto loc_8255DDA0;
loc_8255DD20:
	// rlwinm r11,r8,27,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r29,27,29,30
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x6;
	// rlwinm r7,r29,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x6;
	// rlwinm r6,r29,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x6;
	// rlwinm r5,r29,1,29,30
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x6;
	// rlwinm. r4,r10,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r11,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r29,r11,r5
	r29.u64 = ctx.r5.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r11,r7,28
	r11.u64 = ctx.r7.u32 & 0xF;
	// rlwimi r6,r11,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r29,r6,2,0,29
	r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
loc_8255DD58:
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
loc_8255DD5C:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// beq 0x8255dd70
	if (cr0.eq) goto loc_8255DD70;
	// rlwinm. r11,r30,0,30,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dd70
	if (cr0.eq) goto loc_8255DD70;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8255DD70:
	// and r11,r10,r30
	r11.u64 = ctx.r10.u64 & r30.u64;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dd84
	if (cr0.eq) goto loc_8255DD84;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
loc_8255DD84:
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dd98
	if (cr0.eq) goto loc_8255DD98;
	// rlwinm. r11,r9,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255dd98
	if (cr0.eq) goto loc_8255DD98;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8255DD98:
	// or r30,r10,r9
	r30.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x8255dadc
	goto loc_8255DADC;
loc_8255DDA0:
	// stw r28,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r28.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r30,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8255DDB4"))) PPC_WEAK_FUNC(sub_8255DDB4);
PPC_FUNC_IMPL(__imp__sub_8255DDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DDB8"))) PPC_WEAK_FUNC(sub_8255DDB8);
PPC_FUNC_IMPL(__imp__sub_8255DDB8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255de7c
	if (!cr0.eq) goto loc_8255DE7C;
	// rlwinm. r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255de7c
	if (!cr0.eq) goto loc_8255DE7C;
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(r11.u32, 82, xer);
	// blt cr6,0x8255de10
	if (cr6.lt) goto loc_8255DE10;
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(r11.u32, 94, xer);
	// bgt cr6,0x8255de10
	if (cr6.gt) goto loc_8255DE10;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8255DE10:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255de7c
	if (!cr0.eq) goto loc_8255DE7C;
	// addi r11,r11,-124
	r11.s64 = r11.s64 + -124;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255de7c
	if (!cr0.eq) goto loc_8255DE7C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82558498
	sub_82558498(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,18,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8255de80
	if (!cr6.eq) goto loc_8255DE80;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8255d598
	sub_8255D598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8255de88
	goto loc_8255DE88;
loc_8255DE7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8255DE80:
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
loc_8255DE88:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255DE90"))) PPC_WEAK_FUNC(sub_8255DE90);
PPC_FUNC_IMPL(__imp__sub_8255DE90) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r31.u32);
	// rlwinm r11,r11,7,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
	// stw r28,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r28.u32);
	// stw r5,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r5.u32);
	// stw r6,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r6.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x8255daa8
	sub_8255DAA8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13952
	r11.s64 = r11.s64 + -13952;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e400
	if (cr0.eq) goto loc_8255E400;
	// li r14,2
	r14.s64 = 2;
	// li r21,-1
	r21.s64 = -1;
	// b 0x8255df08
	goto loc_8255DF08;
loc_8255DF04:
	// lwz r28,388(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
loc_8255DF08:
	// lwz r11,396(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r15,0(r28)
	r15.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r16,0(r11)
	r16.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r11,r16,30
	r11.u64 = r16.u32 & 0x3;
	// addi r11,r11,10
	r11.s64 = r11.s64 + 10;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lwzx r3,r11,r15
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r15.u32);
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r27,1
	r27.s64 = 1;
	// lwz r22,88(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r20,r11,228
	r20.u64 = r11.u64 | 228;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x8255e290
	if (!cr6.gt) goto loc_8255E290;
	// mr r23,r14
	r23.u64 = r14.u64;
	// addi r17,r1,136
	r17.s64 = ctx.r1.s64 + 136;
loc_8255DF78:
	// srw r11,r16,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (r16.u32 >> (r23.u8 & 0x3F));
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,10
	r11.s64 = r11.s64 + 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r15
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r15.u32);
	// bl 0x825576c8
	sub_825576C8(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lwz r19,116(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,120(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r18,124(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r24,r25
	cr6.compare<uint32_t>(r24.u32, r25.u32, xer);
	// slw r11,r11,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (r11.u32 << (r23.u8 & 0x3F));
	// slw r10,r19,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (r19.u32 << (r23.u8 & 0x3F));
	// andc r11,r20,r11
	r11.u64 = r20.u64 & ~r11.u64;
	// or r20,r11,r10
	r20.u64 = r11.u64 | ctx.r10.u64;
	// beq cr6,0x8255e118
	if (cr6.eq) goto loc_8255E118;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-15872
	r11.s64 = r11.s64 + -15872;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255e110
	if (!cr0.eq) goto loc_8255E110;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82558498
	sub_82558498(ctx, base);
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq cr6,0x8255e0ec
	if (cr6.eq) goto loc_8255E0EC;
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
loc_8255E01C:
	// srw r11,r20,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r20.u32 >> (r30.u8 & 0x3F));
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// and. r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & r26.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8255e400
	if (cr0.eq) goto loc_8255E400;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r31,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lfdx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + ctx.r9.u32);
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// slw r9,r21,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r21.u32 << (r11.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// srw r4,r10,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// bl 0x825507b8
	sub_825507B8(ctx, base);
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfd f1,0(r28)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r28.u32 + 0, ctx.f1.u64);
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// rlwinm r5,r31,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r31,380(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// clrlwi r7,r30,27
	ctx.r7.u64 = r30.u32 & 0x1F;
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// slw r8,r14,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r6.u8 & 0x3F));
	// slw r6,r21,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (r21.u32 << (r11.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// srw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
	// slw r11,r11,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r7.u8 & 0x3F));
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// blt cr6,0x8255e01c
	if (cr6.lt) goto loc_8255E01C;
	// lwz r28,388(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_8255E0EC:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82555550
	sub_82555550(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r20,228
	r20.s64 = 228;
	// li r22,0
	r22.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_8255E110:
	// cmplw cr6,r24,r25
	cr6.compare<uint32_t>(r24.u32, r25.u32, xer);
	// bne cr6,0x8255e120
	if (!cr6.eq) goto loc_8255E120;
loc_8255E118:
	// cmplw cr6,r22,r18
	cr6.compare<uint32_t>(r22.u32, r18.u32, xer);
	// beq cr6,0x8255e278
	if (cr6.eq) goto loc_8255E278;
loc_8255E120:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82558498
	sub_82558498(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r19
	r11.u64 = r19.u8 & 0x20 ? 0 : (r11.u32 << (r19.u8 & 0x3F));
	// and. r11,r3,r11
	r11.u64 = ctx.r3.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e400
	if (cr0.eq) goto loc_8255E400;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// beq cr6,0x8255e1b0
	if (cr6.eq) goto loc_8255E1B0;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8255E15C:
	// srw r11,r20,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 >> (r31.u8 & 0x3F));
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// clrlwi r28,r11,30
	r28.u64 = r11.u32 & 0x3;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82555620
	sub_82555620(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stfd f1,0(r29)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r29.u32 + 0, ctx.f1.u64);
	// rlwinm r26,r31,29,3,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r25,r1,84
	r25.s64 = ctx.r1.s64 + 84;
	// bl 0x824ffe38
	sub_824FFE38(ctx, base);
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// lwzx r10,r26,r25
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// slw r11,r3,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwx r11,r26,r25
	PPC_STORE_U32(r26.u32 + r25.u32, r11.u32);
	// bne 0x8255e15c
	if (!cr0.eq) goto loc_8255E15C;
loc_8255E1B0:
	// rlwinm r11,r19,3,0,28
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r19,1,0,30
	r31.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r31,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lfdx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + ctx.r9.u32);
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// slw r9,r21,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r21.u32 << (r11.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// srw r4,r10,r11
	ctx.r4.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// bl 0x825507b8
	sub_825507B8(ctx, base);
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// stfd f1,0(r17)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r17.u32 + 0, ctx.f1.u64);
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// rlwinm r31,r31,29,3,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r7,r23,27
	ctx.r7.u64 = r23.u32 & 0x1F;
	// rlwinm r10,r23,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwzx r31,r31,r8
	r31.u64 = PPC_LOAD_U32(r31.u32 + ctx.r8.u32);
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// lwzx r30,r10,r9
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// slw r8,r14,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r6.u8 & 0x3F));
	// slw r6,r21,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (r21.u32 << (r11.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 & r31.u64;
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// srw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
	// slw r11,r11,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r7.u8 & 0x3F));
	// or r11,r11,r30
	r11.u64 = r11.u64 | r30.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82555550
	sub_82555550(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r28,388(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r31,380(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r20,228
	r20.s64 = 228;
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r22,0
	r22.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_8255E278:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r17,r17,8
	r17.s64 = r17.s64 + 8;
	// addi r23,r23,2
	r23.s64 = r23.s64 + 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8255df78
	if (cr6.lt) goto loc_8255DF78;
loc_8255E290:
	// rlwinm. r11,r22,0,27,28
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e2a8
	if (cr0.eq) goto loc_8255E2A8;
	// rlwinm. r11,r30,0,27,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e2a8
	if (cr0.eq) goto loc_8255E2A8;
loc_8255E2A0:
	// li r11,0
	r11.s64 = 0;
	// b 0x8255e2d0
	goto loc_8255E2D0;
loc_8255E2A8:
	// rlwinm. r11,r22,0,30,30
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e2b8
	if (cr0.eq) goto loc_8255E2B8;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255e2a0
	if (!cr0.eq) goto loc_8255E2A0;
loc_8255E2B8:
	// rlwinm. r11,r22,0,29,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e2cc
	if (cr0.eq) goto loc_8255E2CC;
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne 0x8255e2d0
	if (!cr0.eq) goto loc_8255E2D0;
loc_8255E2CC:
	// li r11,1
	r11.s64 = 1;
loc_8255E2D0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e400
	if (cr0.eq) goto loc_8255E400;
	// rlwinm. r9,r22,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r22
	r11.u64 = r22.u64;
	// beq 0x8255e2f4
	if (cr0.eq) goto loc_8255E2F4;
	// rlwinm. r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255e2f4
	if (cr0.eq) goto loc_8255E2F4;
	// addi r11,r22,-4
	r11.s64 = r22.s64 + -4;
loc_8255E2F4:
	// and r9,r11,r30
	ctx.r9.u64 = r11.u64 & r30.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255e308
	if (cr0.eq) goto loc_8255E308;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
loc_8255E308:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255e31c
	if (cr0.eq) goto loc_8255E31C;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8255e31c
	if (cr0.eq) goto loc_8255E31C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8255E31C:
	// or r30,r11,r10
	r30.u64 = r11.u64 | ctx.r10.u64;
	// lwz r11,396(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// stw r24,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r24.u32);
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255e38c
	if (!cr0.eq) goto loc_8255E38C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// b 0x8255e364
	goto loc_8255E364;
loc_8255E360:
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
loc_8255E364:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255e360
	if (!cr6.eq) goto loc_8255E360;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x824a9b30
	sub_824A9B30(ctx, base);
loc_8255E38C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x824ba568
	sub_824BA568(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r10,25,4,6
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x824ba148
	sub_824BA148(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r30,388(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r11,r20,5,19,26
	r11.u64 = (__builtin_rotateleft32(r20.u32, 5) & 0x1FE0) | (r11.u64 & 0xFFFFFFFFFFFFE01F);
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8255daa8
	sub_8255DAA8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rotlwi r31,r31,0
	r31.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13952
	r11.s64 = r11.s64 + -13952;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255df04
	if (!cr0.eq) goto loc_8255DF04;
loc_8255E400:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8255e454
	if (!cr0.eq) goto loc_8255E454;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// b 0x8255e42c
	goto loc_8255E42C;
loc_8255E428:
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
loc_8255E42C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8255e428
	if (!cr6.eq) goto loc_8255E428;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x824a9b30
	sub_824A9B30(ctx, base);
loc_8255E454:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8255E45C"))) PPC_WEAK_FUNC(sub_8255E45C);
PPC_FUNC_IMPL(__imp__sub_8255E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E460"))) PPC_WEAK_FUNC(sub_8255E460);
PPC_FUNC_IMPL(__imp__sub_8255E460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8255E464:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255e4b0
	if (cr6.eq) goto loc_8255E4B0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8255e484
	if (!cr0.eq) goto loc_8255E484;
	// rlwinm. r11,r10,0,4,6
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x8255e488
	if (cr0.eq) goto loc_8255E488;
loc_8255E484:
	// li r11,0
	r11.s64 = 0;
loc_8255E488:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e49c
	if (cr0.eq) goto loc_8255E49C;
	// rlwinm. r11,r10,0,7,18
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8255e4a0
	if (!cr0.eq) goto loc_8255E4A0;
loc_8255E49C:
	// li r11,0
	r11.s64 = 0;
loc_8255E4A0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8255e464
	goto loc_8255E464;
loc_8255E4B0:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,7,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E4C0"))) PPC_WEAK_FUNC(sub_8255E4C0);
PPC_FUNC_IMPL(__imp__sub_8255E4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// b 0x8255e4d4
	goto loc_8255E4D4;
loc_8255E4CC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8255E4D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8255e4cc
	if (!cr6.eq) goto loc_8255E4CC;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r4,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E4FC"))) PPC_WEAK_FUNC(sub_8255E4FC);
PPC_FUNC_IMPL(__imp__sub_8255E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E500"))) PPC_WEAK_FUNC(sub_8255E500);
PPC_FUNC_IMPL(__imp__sub_8255E500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8255e514
	goto loc_8255E514;
loc_8255E50C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
loc_8255E514:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x8255e50c
	if (!cr6.eq) goto loc_8255E50C;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E53C"))) PPC_WEAK_FUNC(sub_8255E53C);
PPC_FUNC_IMPL(__imp__sub_8255E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E540"))) PPC_WEAK_FUNC(sub_8255E540);
PPC_FUNC_IMPL(__imp__sub_8255E540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// b 0x8255e54c
	goto loc_8255E54C;
loc_8255E548:
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
loc_8255E54C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x8255e548
	if (!cr6.eq) goto loc_8255E548;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// b 0x8255e574
	goto loc_8255E574;
loc_8255E56C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8255E574:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255e56c
	if (!cr6.eq) goto loc_8255E56C;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E58C"))) PPC_WEAK_FUNC(sub_8255E58C);
PPC_FUNC_IMPL(__imp__sub_8255E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E590"))) PPC_WEAK_FUNC(sub_8255E590);
PPC_FUNC_IMPL(__imp__sub_8255E590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r11.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_8255E5BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r8,r8,13,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8255e5dc
	if (!cr0.eq) goto loc_8255E5DC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8255e5bc
	goto loc_8255E5BC;
loc_8255E5DC:
	// lwz r11,116(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x8255e628
	goto loc_8255E628;
loc_8255E600:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8255e61c
	if (!cr0.eq) goto loc_8255E61C;
	// rlwinm. r10,r10,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8255e630
	if (!cr0.eq) goto loc_8255E630;
loc_8255E61C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_8255E628:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255e600
	if (!cr6.eq) goto loc_8255E600;
loc_8255E630:
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E63C"))) PPC_WEAK_FUNC(sub_8255E63C);
PPC_FUNC_IMPL(__imp__sub_8255E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E640"))) PPC_WEAK_FUNC(sub_8255E640);
PPC_FUNC_IMPL(__imp__sub_8255E640) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_8255E6AC"))) PPC_WEAK_FUNC(sub_8255E6AC);
PPC_FUNC_IMPL(__imp__sub_8255E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E6B0"))) PPC_WEAK_FUNC(sub_8255E6B0);
PPC_FUNC_IMPL(__imp__sub_8255E6B0) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x824b0748
	sub_824B0748(ctx, base);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_8255E71C"))) PPC_WEAK_FUNC(sub_8255E71C);
PPC_FUNC_IMPL(__imp__sub_8255E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E720"))) PPC_WEAK_FUNC(sub_8255E720);
PPC_FUNC_IMPL(__imp__sub_8255E720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
loc_8255E724:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8255e724
	if (!cr0.eq) goto loc_8255E724;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E770"))) PPC_WEAK_FUNC(sub_8255E770);
PPC_FUNC_IMPL(__imp__sub_8255E770) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r26,23
	r11.s64 = r26.s64 + 23;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// b 0x8255e7bc
	goto loc_8255E7BC;
loc_8255E7A0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255e7f4
	if (cr6.eq) goto loc_8255E7F4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824ba910
	sub_824BA910(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8255e800
	if (cr0.eq) goto loc_8255E800;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8255E7BC:
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, xer);
	// bne cr6,0x8255e7a0
	if (!cr6.eq) goto loc_8255E7A0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ba910
	sub_824BA910(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255e84c
	if (cr6.eq) goto loc_8255E84C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255e838
	if (cr6.eq) goto loc_8255E838;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8255e810
	goto loc_8255E810;
loc_8255E7F4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255E800:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_8255E80C:
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
loc_8255E810:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x8255e80c
	if (!cr6.eq) goto loc_8255E80C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r31.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// b 0x8255e864
	goto loc_8255E864;
loc_8255E838:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824bb028
	sub_824BB028(ctx, base);
	// b 0x8255e864
	goto loc_8255E864;
loc_8255E84C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255e85c
	if (cr6.eq) goto loc_8255E85C;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// b 0x8255e860
	goto loc_8255E860;
loc_8255E85C:
	// li r11,0
	r11.s64 = 0;
loc_8255E860:
	// stwx r11,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, r11.u32);
loc_8255E864:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255e87c
	if (cr6.eq) goto loc_8255E87C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824bb028
	sub_824BB028(ctx, base);
loc_8255E87C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255e460
	sub_8255E460(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8255E890"))) PPC_WEAK_FUNC(sub_8255E890);
PPC_FUNC_IMPL(__imp__sub_8255E890) {
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r9,r10,31
	ctx.r9.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8255E8D0:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,1,12,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFE;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// bl 0x824be808
	sub_824BE808(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8255e908
	if (cr0.eq) goto loc_8255E908;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x8255e908
	if (cr6.eq) goto loc_8255E908;
	// lwz r31,64(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x8255e8d0
	if (!cr0.eq) goto loc_8255E8D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255e90c
	goto loc_8255E90C;
loc_8255E908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255E90C:
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

__attribute__((alias("__imp__sub_8255E920"))) PPC_WEAK_FUNC(sub_8255E920);
PPC_FUNC_IMPL(__imp__sub_8255E920) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239cd50
	sub_8239CD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E924"))) PPC_WEAK_FUNC(sub_8255E924);
PPC_FUNC_IMPL(__imp__sub_8255E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E928"))) PPC_WEAK_FUNC(sub_8255E928);
PPC_FUNC_IMPL(__imp__sub_8255E928) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8255e958
	if (cr6.lt) goto loc_8255E958;
	// li r27,43
	r27.s64 = 43;
	// b 0x8255e960
	goto loc_8255E960;
loc_8255E958:
	// li r27,45
	r27.s64 = 45;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_8255E960:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r31,0
	r31.s64 = 0;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsw r11,r28
	r11.s64 = r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,14924
	r29.s64 = r11.s64 + 14924;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fctiwz f0,f31
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f31.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f30,29204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29204);
	f30.f64 = double(temp.f32);
loc_8255E9AC:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fmuls f31,f0,f30
	f31.f64 = double(float(f0.f64 * f30.f64));
	// fctiwz f0,f31
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f31.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(r31.s32, 9, xer);
	// blt cr6,0x8255e9ac
	if (cr6.lt) goto loc_8255E9AC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15816
	ctx.r4.s64 = r11.s64 + -15816;
	// li r11,0
	r11.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// extsb r5,r27
	ctx.r5.s64 = r27.s8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8255EA2C"))) PPC_WEAK_FUNC(sub_8255EA2C);
PPC_FUNC_IMPL(__imp__sub_8255EA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA30"))) PPC_WEAK_FUNC(sub_8255EA30);
PPC_FUNC_IMPL(__imp__sub_8255EA30) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255ea74
	if (!cr6.eq) goto loc_8255EA74;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,733
	ctx.r7.s64 = 733;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255EA74:
	// li r4,127
	ctx.r4.s64 = 127;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8255eae4
	if (!cr6.eq) goto loc_8255EAE4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255eaa4
	if (cr6.eq) goto loc_8255EAA4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255EAA4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255eadc
	if (cr6.eq) goto loc_8255EADC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255eadc
	if (cr6.eq) goto loc_8255EADC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255EADC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255eb3c
	goto loc_8255EB3C;
loc_8255EAE4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255eb00
	if (cr6.eq) goto loc_8255EB00;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255EB00:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255eb38
	if (cr6.eq) goto loc_8255EB38;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255eb38
	if (cr6.eq) goto loc_8255EB38;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255EB38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255EB3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255EB44"))) PPC_WEAK_FUNC(sub_8255EB44);
PPC_FUNC_IMPL(__imp__sub_8255EB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EB48"))) PPC_WEAK_FUNC(sub_8255EB48);
PPC_FUNC_IMPL(__imp__sub_8255EB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8255eb8c
	if (!cr6.eq) goto loc_8255EB8C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,817
	ctx.r7.s64 = 817;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255EB8C:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255ec14
	if (cr6.eq) goto loc_8255EC14;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255ec14
	if (!cr6.eq) goto loc_8255EC14;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255ebd4
	if (cr6.eq) goto loc_8255EBD4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255EBD4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255ec0c
	if (cr6.eq) goto loc_8255EC0C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255ec0c
	if (cr6.eq) goto loc_8255EC0C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255EC0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255ec6c
	goto loc_8255EC6C;
loc_8255EC14:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255ec30
	if (cr6.eq) goto loc_8255EC30;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255EC30:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255ec68
	if (cr6.eq) goto loc_8255EC68;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255ec68
	if (cr6.eq) goto loc_8255EC68;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255EC68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255EC6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8255EC74"))) PPC_WEAK_FUNC(sub_8255EC74);
PPC_FUNC_IMPL(__imp__sub_8255EC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EC78"))) PPC_WEAK_FUNC(sub_8255EC78);
PPC_FUNC_IMPL(__imp__sub_8255EC78) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255ecb0
	if (cr6.eq) goto loc_8255ECB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255ECB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255ece8
	if (cr6.eq) goto loc_8255ECE8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255ece8
	if (cr6.eq) goto loc_8255ECE8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255ECE8:
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

__attribute__((alias("__imp__sub_8255ED04"))) PPC_WEAK_FUNC(sub_8255ED04);
PPC_FUNC_IMPL(__imp__sub_8255ED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ED08"))) PPC_WEAK_FUNC(sub_8255ED08);
PPC_FUNC_IMPL(__imp__sub_8255ED08) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255ed3c
	if (cr6.eq) goto loc_8255ED3C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255ED3C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255ed78
	if (cr6.eq) goto loc_8255ED78;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255ed78
	if (cr6.eq) goto loc_8255ED78;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255ED78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8255ED84"))) PPC_WEAK_FUNC(sub_8255ED84);
PPC_FUNC_IMPL(__imp__sub_8255ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255ED88"))) PPC_WEAK_FUNC(sub_8255ED88);
PPC_FUNC_IMPL(__imp__sub_8255ED88) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255edcc
	if (!cr6.eq) goto loc_8255EDCC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,988
	ctx.r7.s64 = 988;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255EDCC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255ede8
	if (cr6.eq) goto loc_8255EDE8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255EDE8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255ee24
	if (cr6.eq) goto loc_8255EE24;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255ee24
	if (cr6.eq) goto loc_8255EE24;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,63
	ctx.r6.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,252(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 252);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255EE24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255EE30"))) PPC_WEAK_FUNC(sub_8255EE30);
PPC_FUNC_IMPL(__imp__sub_8255EE30) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8255eec0
	if (!cr6.eq) goto loc_8255EEC0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255ee7c
	if (cr6.eq) goto loc_8255EE7C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255EE7C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255eeb8
	if (cr6.eq) goto loc_8255EEB8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255eeb8
	if (cr6.eq) goto loc_8255EEB8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255EEB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255ef1c
	goto loc_8255EF1C;
loc_8255EEC0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255eedc
	if (cr6.eq) goto loc_8255EEDC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255EEDC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255ef18
	if (cr6.eq) goto loc_8255EF18;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255ef18
	if (cr6.eq) goto loc_8255EF18;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255EF18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255EF1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255EF24"))) PPC_WEAK_FUNC(sub_8255EF24);
PPC_FUNC_IMPL(__imp__sub_8255EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EF28"))) PPC_WEAK_FUNC(sub_8255EF28);
PPC_FUNC_IMPL(__imp__sub_8255EF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8255ef6c
	if (!cr6.eq) goto loc_8255EF6C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1097
	ctx.r7.s64 = 1097;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255EF6C:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255eff4
	if (cr6.eq) goto loc_8255EFF4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255eff4
	if (cr6.eq) goto loc_8255EFF4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255efb4
	if (cr6.eq) goto loc_8255EFB4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255EFB4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255efec
	if (cr6.eq) goto loc_8255EFEC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255efec
	if (cr6.eq) goto loc_8255EFEC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255EFEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f04c
	goto loc_8255F04C;
loc_8255EFF4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255f010
	if (cr6.eq) goto loc_8255F010;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F010:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255f048
	if (cr6.eq) goto loc_8255F048;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f048
	if (cr6.eq) goto loc_8255F048;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F04C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8255F054"))) PPC_WEAK_FUNC(sub_8255F054);
PPC_FUNC_IMPL(__imp__sub_8255F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F058"))) PPC_WEAK_FUNC(sub_8255F058);
PPC_FUNC_IMPL(__imp__sub_8255F058) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f09c
	if (!cr6.eq) goto loc_8255F09C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1154
	ctx.r7.s64 = 1154;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F09C:
	// li r4,934
	ctx.r4.s64 = 934;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8255f10c
	if (cr0.eq) goto loc_8255F10C;
	// beq cr6,0x8255f0cc
	if (cr6.eq) goto loc_8255F0CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F0CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f104
	if (cr6.eq) goto loc_8255F104;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f104
	if (cr6.eq) goto loc_8255F104;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F104:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f160
	goto loc_8255F160;
loc_8255F10C:
	// beq cr6,0x8255f124
	if (cr6.eq) goto loc_8255F124;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F124:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f15c
	if (cr6.eq) goto loc_8255F15C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f15c
	if (cr6.eq) goto loc_8255F15C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F15C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F160:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255F168"))) PPC_WEAK_FUNC(sub_8255F168);
PPC_FUNC_IMPL(__imp__sub_8255F168) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f1ac
	if (!cr6.eq) goto loc_8255F1AC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1208
	ctx.r7.s64 = 1208;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F1AC:
	// li r4,935
	ctx.r4.s64 = 935;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x8255f21c
	if (cr0.eq) goto loc_8255F21C;
	// beq cr6,0x8255f1dc
	if (cr6.eq) goto loc_8255F1DC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F1DC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f214
	if (cr6.eq) goto loc_8255F214;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f214
	if (cr6.eq) goto loc_8255F214;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F214:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f270
	goto loc_8255F270;
loc_8255F21C:
	// beq cr6,0x8255f234
	if (cr6.eq) goto loc_8255F234;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F234:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f26c
	if (cr6.eq) goto loc_8255F26C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f26c
	if (cr6.eq) goto loc_8255F26C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F270:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255F278"))) PPC_WEAK_FUNC(sub_8255F278);
PPC_FUNC_IMPL(__imp__sub_8255F278) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f2bc
	if (!cr6.eq) goto loc_8255F2BC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F2BC:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x8255f32c
	if (!cr6.eq) goto loc_8255F32C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f2ec
	if (cr6.eq) goto loc_8255F2EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F2EC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f324
	if (cr6.eq) goto loc_8255F324;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f324
	if (cr6.eq) goto loc_8255F324;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F324:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f384
	goto loc_8255F384;
loc_8255F32C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f348
	if (cr6.eq) goto loc_8255F348;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F348:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f380
	if (cr6.eq) goto loc_8255F380;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f380
	if (cr6.eq) goto loc_8255F380;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F384:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255F38C"))) PPC_WEAK_FUNC(sub_8255F38C);
PPC_FUNC_IMPL(__imp__sub_8255F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F390"))) PPC_WEAK_FUNC(sub_8255F390);
PPC_FUNC_IMPL(__imp__sub_8255F390) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f3d4
	if (!cr6.eq) goto loc_8255F3D4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1316
	ctx.r7.s64 = 1316;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F3D4:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8255f444
	if (!cr0.eq) goto loc_8255F444;
	// beq cr6,0x8255f404
	if (cr6.eq) goto loc_8255F404;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F404:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f43c
	if (cr6.eq) goto loc_8255F43C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f43c
	if (cr6.eq) goto loc_8255F43C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,19
	ctx.r6.s64 = 19;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F43C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f498
	goto loc_8255F498;
loc_8255F444:
	// beq cr6,0x8255f45c
	if (cr6.eq) goto loc_8255F45C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F45C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f494
	if (cr6.eq) goto loc_8255F494;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f494
	if (cr6.eq) goto loc_8255F494;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,19
	ctx.r6.s64 = 19;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255F4A0"))) PPC_WEAK_FUNC(sub_8255F4A0);
PPC_FUNC_IMPL(__imp__sub_8255F4A0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f4e4
	if (!cr6.eq) goto loc_8255F4E4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1367
	ctx.r7.s64 = 1367;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F4E4:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8255f554
	if (!cr6.eq) goto loc_8255F554;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f514
	if (cr6.eq) goto loc_8255F514;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F514:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f54c
	if (cr6.eq) goto loc_8255F54C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f54c
	if (cr6.eq) goto loc_8255F54C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F54C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f5ac
	goto loc_8255F5AC;
loc_8255F554:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f570
	if (cr6.eq) goto loc_8255F570;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F570:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f5a8
	if (cr6.eq) goto loc_8255F5A8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f5a8
	if (cr6.eq) goto loc_8255F5A8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F5A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F5AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255F5B4"))) PPC_WEAK_FUNC(sub_8255F5B4);
PPC_FUNC_IMPL(__imp__sub_8255F5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F5B8"))) PPC_WEAK_FUNC(sub_8255F5B8);
PPC_FUNC_IMPL(__imp__sub_8255F5B8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f5fc
	if (!cr6.eq) goto loc_8255F5FC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F5FC:
	// li r4,171
	ctx.r4.s64 = 171;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8255f66c
	if (!cr6.eq) goto loc_8255F66C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f62c
	if (cr6.eq) goto loc_8255F62C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F62C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f664
	if (cr6.eq) goto loc_8255F664;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f664
	if (cr6.eq) goto loc_8255F664;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,92
	ctx.r6.s64 = 92;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 368);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F664:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f6c4
	goto loc_8255F6C4;
loc_8255F66C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f688
	if (cr6.eq) goto loc_8255F688;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F688:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f6c0
	if (cr6.eq) goto loc_8255F6C0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f6c0
	if (cr6.eq) goto loc_8255F6C0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,92
	ctx.r6.s64 = 92;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 368);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F6C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F6C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255F6CC"))) PPC_WEAK_FUNC(sub_8255F6CC);
PPC_FUNC_IMPL(__imp__sub_8255F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F6D0"))) PPC_WEAK_FUNC(sub_8255F6D0);
PPC_FUNC_IMPL(__imp__sub_8255F6D0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f714
	if (!cr6.eq) goto loc_8255F714;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1471
	ctx.r7.s64 = 1471;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F714:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x8255f784
	if (!cr6.eq) goto loc_8255F784;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f744
	if (cr6.eq) goto loc_8255F744;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F744:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f77c
	if (cr6.eq) goto loc_8255F77C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f77c
	if (cr6.eq) goto loc_8255F77C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F77C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f7dc
	goto loc_8255F7DC;
loc_8255F784:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f7a0
	if (cr6.eq) goto loc_8255F7A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F7A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f7d8
	if (cr6.eq) goto loc_8255F7D8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f7d8
	if (cr6.eq) goto loc_8255F7D8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,21
	ctx.r6.s64 = 21;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F7D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F7DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255F7E4"))) PPC_WEAK_FUNC(sub_8255F7E4);
PPC_FUNC_IMPL(__imp__sub_8255F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F7E8"))) PPC_WEAK_FUNC(sub_8255F7E8);
PPC_FUNC_IMPL(__imp__sub_8255F7E8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f82c
	if (!cr6.eq) goto loc_8255F82C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1521
	ctx.r7.s64 = 1521;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F82C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8255f89c
	if (!cr6.eq) goto loc_8255F89C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f85c
	if (cr6.eq) goto loc_8255F85C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F85C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f894
	if (cr6.eq) goto loc_8255F894;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f894
	if (cr6.eq) goto loc_8255F894;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F894:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255f8f4
	goto loc_8255F8F4;
loc_8255F89C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f8b8
	if (cr6.eq) goto loc_8255F8B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F8B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f8f0
	if (cr6.eq) goto loc_8255F8F0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f8f0
	if (cr6.eq) goto loc_8255F8F0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F8F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255F8F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255F8FC"))) PPC_WEAK_FUNC(sub_8255F8FC);
PPC_FUNC_IMPL(__imp__sub_8255F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255F900"))) PPC_WEAK_FUNC(sub_8255F900);
PPC_FUNC_IMPL(__imp__sub_8255F900) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255f944
	if (!cr6.eq) goto loc_8255F944;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1571
	ctx.r7.s64 = 1571;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255F944:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x8255f9b4
	if (!cr6.eq) goto loc_8255F9B4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f974
	if (cr6.eq) goto loc_8255F974;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F974:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255f9ac
	if (cr6.eq) goto loc_8255F9AC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255f9ac
	if (cr6.eq) goto loc_8255F9AC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255F9AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255fa0c
	goto loc_8255FA0C;
loc_8255F9B4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255f9d0
	if (cr6.eq) goto loc_8255F9D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255F9D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255fa08
	if (cr6.eq) goto loc_8255FA08;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fa08
	if (cr6.eq) goto loc_8255FA08;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FA08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255FA0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255FA14"))) PPC_WEAK_FUNC(sub_8255FA14);
PPC_FUNC_IMPL(__imp__sub_8255FA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FA18"))) PPC_WEAK_FUNC(sub_8255FA18);
PPC_FUNC_IMPL(__imp__sub_8255FA18) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255fa5c
	if (!cr6.eq) goto loc_8255FA5C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1622
	ctx.r7.s64 = 1622;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255FA5C:
	// li r4,615
	ctx.r4.s64 = 615;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8255facc
	if (!cr6.eq) goto loc_8255FACC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255fa8c
	if (cr6.eq) goto loc_8255FA8C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FA8C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255fac4
	if (cr6.eq) goto loc_8255FAC4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fac4
	if (cr6.eq) goto loc_8255FAC4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FAC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255fb24
	goto loc_8255FB24;
loc_8255FACC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255fae8
	if (cr6.eq) goto loc_8255FAE8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FAE8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255fb20
	if (cr6.eq) goto loc_8255FB20;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fb20
	if (cr6.eq) goto loc_8255FB20;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FB20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255FB24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255FB2C"))) PPC_WEAK_FUNC(sub_8255FB2C);
PPC_FUNC_IMPL(__imp__sub_8255FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FB30"))) PPC_WEAK_FUNC(sub_8255FB30);
PPC_FUNC_IMPL(__imp__sub_8255FB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8255fb78
	if (!cr6.eq) goto loc_8255FB78;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1676
	ctx.r7.s64 = 1676;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255FB78:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8255fbf0
	if (!cr6.eq) goto loc_8255FBF0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255fbac
	if (cr6.eq) goto loc_8255FBAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FBAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fbe8
	if (cr6.eq) goto loc_8255FBE8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255fbe8
	if (cr6.eq) goto loc_8255FBE8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FBE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255fc4c
	goto loc_8255FC4C;
loc_8255FBF0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255fc0c
	if (cr6.eq) goto loc_8255FC0C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FC0C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fc48
	if (cr6.eq) goto loc_8255FC48;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255fc48
	if (cr6.eq) goto loc_8255FC48;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FC48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255FC4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8255FC54"))) PPC_WEAK_FUNC(sub_8255FC54);
PPC_FUNC_IMPL(__imp__sub_8255FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FC58"))) PPC_WEAK_FUNC(sub_8255FC58);
PPC_FUNC_IMPL(__imp__sub_8255FC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8255fca0
	if (!cr6.eq) goto loc_8255FCA0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1726
	ctx.r7.s64 = 1726;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255FCA0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x8255fd18
	if (!cr6.eq) goto loc_8255FD18;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255fcd4
	if (cr6.eq) goto loc_8255FCD4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FCD4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fd10
	if (cr6.eq) goto loc_8255FD10;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255fd10
	if (cr6.eq) goto loc_8255FD10;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FD10:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255fd74
	goto loc_8255FD74;
loc_8255FD18:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255fd34
	if (cr6.eq) goto loc_8255FD34;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FD34:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fd70
	if (cr6.eq) goto loc_8255FD70;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255fd70
	if (cr6.eq) goto loc_8255FD70;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FD70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255FD74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8255FD7C"))) PPC_WEAK_FUNC(sub_8255FD7C);
PPC_FUNC_IMPL(__imp__sub_8255FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FD80"))) PPC_WEAK_FUNC(sub_8255FD80);
PPC_FUNC_IMPL(__imp__sub_8255FD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8255fdc8
	if (!cr6.eq) goto loc_8255FDC8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1777
	ctx.r7.s64 = 1777;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255FDC8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x8255fe40
	if (!cr6.eq) goto loc_8255FE40;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255fdfc
	if (cr6.eq) goto loc_8255FDFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FDFC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fe38
	if (cr6.eq) goto loc_8255FE38;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255fe38
	if (cr6.eq) goto loc_8255FE38;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FE38:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255fe9c
	goto loc_8255FE9C;
loc_8255FE40:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8255fe5c
	if (cr6.eq) goto loc_8255FE5C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FE5C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255fe98
	if (cr6.eq) goto loc_8255FE98;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255fe98
	if (cr6.eq) goto loc_8255FE98;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FE98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255FE9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8255FEA4"))) PPC_WEAK_FUNC(sub_8255FEA4);
PPC_FUNC_IMPL(__imp__sub_8255FEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FEA8"))) PPC_WEAK_FUNC(sub_8255FEA8);
PPC_FUNC_IMPL(__imp__sub_8255FEA8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255feec
	if (!cr6.eq) goto loc_8255FEEC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1828
	ctx.r7.s64 = 1828;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8255FEEC:
	// li r4,582
	ctx.r4.s64 = 582;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8255ff5c
	if (!cr6.eq) goto loc_8255FF5C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255ff1c
	if (cr6.eq) goto loc_8255FF1C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FF1C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255ff54
	if (cr6.eq) goto loc_8255FF54;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255ff54
	if (cr6.eq) goto loc_8255FF54;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,38
	ctx.r6.s64 = 38;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FF54:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255ffb4
	goto loc_8255FFB4;
loc_8255FF5C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8255ff78
	if (cr6.eq) goto loc_8255FF78;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8255FF78:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255ffb0
	if (cr6.eq) goto loc_8255FFB0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8255ffb0
	if (cr6.eq) goto loc_8255FFB0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,38
	ctx.r6.s64 = 38;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255FFB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255FFB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8255FFBC"))) PPC_WEAK_FUNC(sub_8255FFBC);
PPC_FUNC_IMPL(__imp__sub_8255FFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255FFC0"))) PPC_WEAK_FUNC(sub_8255FFC0);
PPC_FUNC_IMPL(__imp__sub_8255FFC0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560004
	if (!cr6.eq) goto loc_82560004;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1877
	ctx.r7.s64 = 1877;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560004:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82560020
	if (cr6.eq) goto loc_82560020;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560020:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8256005c
	if (cr6.eq) goto loc_8256005C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8256005c
	if (cr6.eq) goto loc_8256005C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,156(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256005C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82560068"))) PPC_WEAK_FUNC(sub_82560068);
PPC_FUNC_IMPL(__imp__sub_82560068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825600b0
	if (!cr6.eq) goto loc_825600B0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825600B0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82560144
	if (!cr6.eq) goto loc_82560144;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x82560144
	if (!cr6.eq) goto loc_82560144;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82560100
	if (cr6.eq) goto loc_82560100;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560100:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8256013c
	if (cr6.eq) goto loc_8256013C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8256013c
	if (cr6.eq) goto loc_8256013C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256013C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825601a0
	goto loc_825601A0;
loc_82560144:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82560160
	if (cr6.eq) goto loc_82560160;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560160:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8256019c
	if (cr6.eq) goto loc_8256019C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8256019c
	if (cr6.eq) goto loc_8256019C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256019C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825601A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825601A8"))) PPC_WEAK_FUNC(sub_825601A8);
PPC_FUNC_IMPL(__imp__sub_825601A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825601f0
	if (!cr6.eq) goto loc_825601F0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1991
	ctx.r7.s64 = 1991;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825601F0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82560284
	if (!cr0.eq) goto loc_82560284;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x82560284
	if (!cr6.eq) goto loc_82560284;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82560240
	if (cr6.eq) goto loc_82560240;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560240:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8256027c
	if (cr6.eq) goto loc_8256027C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8256027c
	if (cr6.eq) goto loc_8256027C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256027C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825602e0
	goto loc_825602E0;
loc_82560284:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825602a0
	if (cr6.eq) goto loc_825602A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825602A0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825602dc
	if (cr6.eq) goto loc_825602DC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825602dc
	if (cr6.eq) goto loc_825602DC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825602DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825602E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825602E8"))) PPC_WEAK_FUNC(sub_825602E8);
PPC_FUNC_IMPL(__imp__sub_825602E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82560330
	if (!cr6.eq) goto loc_82560330;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560330:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x825603a8
	if (!cr0.eq) goto loc_825603A8;
	// beq cr6,0x82560364
	if (cr6.eq) goto loc_82560364;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560364:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825603a0
	if (cr6.eq) goto loc_825603A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825603a0
	if (cr6.eq) goto loc_825603A0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825603A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82560400
	goto loc_82560400;
loc_825603A8:
	// beq cr6,0x825603c0
	if (cr6.eq) goto loc_825603C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825603C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825603fc
	if (cr6.eq) goto loc_825603FC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825603fc
	if (cr6.eq) goto loc_825603FC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825603FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82560400:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82560408"))) PPC_WEAK_FUNC(sub_82560408);
PPC_FUNC_IMPL(__imp__sub_82560408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82560450
	if (!cr6.eq) goto loc_82560450;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2102
	ctx.r7.s64 = 2102;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560450:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x825604c8
	if (!cr6.eq) goto loc_825604C8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82560484
	if (cr6.eq) goto loc_82560484;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560484:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825604c0
	if (cr6.eq) goto loc_825604C0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825604c0
	if (cr6.eq) goto loc_825604C0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825604C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82560524
	goto loc_82560524;
loc_825604C8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825604e4
	if (cr6.eq) goto loc_825604E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825604E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560520
	if (cr6.eq) goto loc_82560520;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560520
	if (cr6.eq) goto loc_82560520;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82560524:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256052C"))) PPC_WEAK_FUNC(sub_8256052C);
PPC_FUNC_IMPL(__imp__sub_8256052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560530"))) PPC_WEAK_FUNC(sub_82560530);
PPC_FUNC_IMPL(__imp__sub_82560530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82560578
	if (!cr6.eq) goto loc_82560578;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2155
	ctx.r7.s64 = 2155;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560578:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x825605f0
	if (!cr6.eq) goto loc_825605F0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825605ac
	if (cr6.eq) goto loc_825605AC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825605AC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825605e8
	if (cr6.eq) goto loc_825605E8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825605e8
	if (cr6.eq) goto loc_825605E8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825605E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256064c
	goto loc_8256064C;
loc_825605F0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8256060c
	if (cr6.eq) goto loc_8256060C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8256060C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560648
	if (cr6.eq) goto loc_82560648;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560648
	if (cr6.eq) goto loc_82560648;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560648:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256064C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82560654"))) PPC_WEAK_FUNC(sub_82560654);
PPC_FUNC_IMPL(__imp__sub_82560654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560658"))) PPC_WEAK_FUNC(sub_82560658);
PPC_FUNC_IMPL(__imp__sub_82560658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825606a0
	if (!cr6.eq) goto loc_825606A0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2208
	ctx.r7.s64 = 2208;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825606A0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82560718
	if (!cr6.eq) goto loc_82560718;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825606d4
	if (cr6.eq) goto loc_825606D4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825606D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560710
	if (cr6.eq) goto loc_82560710;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560710
	if (cr6.eq) goto loc_82560710;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560710:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82560774
	goto loc_82560774;
loc_82560718:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82560734
	if (cr6.eq) goto loc_82560734;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560734:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560770
	if (cr6.eq) goto loc_82560770;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560770
	if (cr6.eq) goto loc_82560770;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82560774:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256077C"))) PPC_WEAK_FUNC(sub_8256077C);
PPC_FUNC_IMPL(__imp__sub_8256077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560780"))) PPC_WEAK_FUNC(sub_82560780);
PPC_FUNC_IMPL(__imp__sub_82560780) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825607c8
	if (!cr6.eq) goto loc_825607C8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2261
	ctx.r7.s64 = 2261;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825607C8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x82560840
	if (!cr0.eq) goto loc_82560840;
	// beq cr6,0x825607fc
	if (cr6.eq) goto loc_825607FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825607FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560838
	if (cr6.eq) goto loc_82560838;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560838
	if (cr6.eq) goto loc_82560838;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560838:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82560898
	goto loc_82560898;
loc_82560840:
	// beq cr6,0x82560858
	if (cr6.eq) goto loc_82560858;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560858:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560894
	if (cr6.eq) goto loc_82560894;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560894
	if (cr6.eq) goto loc_82560894;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82560898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825608A0"))) PPC_WEAK_FUNC(sub_825608A0);
PPC_FUNC_IMPL(__imp__sub_825608A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825608e8
	if (!cr6.eq) goto loc_825608E8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2316
	ctx.r7.s64 = 2316;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825608E8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x82560960
	if (!cr0.eq) goto loc_82560960;
	// beq cr6,0x8256091c
	if (cr6.eq) goto loc_8256091C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_8256091C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560958
	if (cr6.eq) goto loc_82560958;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560958
	if (cr6.eq) goto loc_82560958;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,57
	ctx.r6.s64 = 57;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560958:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825609b8
	goto loc_825609B8;
loc_82560960:
	// beq cr6,0x82560978
	if (cr6.eq) goto loc_82560978;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560978:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825609b4
	if (cr6.eq) goto loc_825609B4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825609b4
	if (cr6.eq) goto loc_825609B4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,57
	ctx.r6.s64 = 57;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825609B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825609B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825609C0"))) PPC_WEAK_FUNC(sub_825609C0);
PPC_FUNC_IMPL(__imp__sub_825609C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82560a08
	if (!cr6.eq) goto loc_82560A08;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2371
	ctx.r7.s64 = 2371;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560A08:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82560a80
	if (!cr6.eq) goto loc_82560A80;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82560a3c
	if (cr6.eq) goto loc_82560A3C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560A3C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560a78
	if (cr6.eq) goto loc_82560A78;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560a78
	if (cr6.eq) goto loc_82560A78;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560A78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82560adc
	goto loc_82560ADC;
loc_82560A80:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82560a9c
	if (cr6.eq) goto loc_82560A9C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560A9C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560ad8
	if (cr6.eq) goto loc_82560AD8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560ad8
	if (cr6.eq) goto loc_82560AD8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560AD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82560ADC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82560AE4"))) PPC_WEAK_FUNC(sub_82560AE4);
PPC_FUNC_IMPL(__imp__sub_82560AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560AE8"))) PPC_WEAK_FUNC(sub_82560AE8);
PPC_FUNC_IMPL(__imp__sub_82560AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82560b30
	if (!cr6.eq) goto loc_82560B30;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2426
	ctx.r7.s64 = 2426;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560B30:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82560ba8
	if (!cr6.eq) goto loc_82560BA8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82560b64
	if (cr6.eq) goto loc_82560B64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560B64:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560ba0
	if (cr6.eq) goto loc_82560BA0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560ba0
	if (cr6.eq) goto loc_82560BA0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560BA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82560c04
	goto loc_82560C04;
loc_82560BA8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82560bc4
	if (cr6.eq) goto loc_82560BC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560BC4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560c00
	if (cr6.eq) goto loc_82560C00;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560c00
	if (cr6.eq) goto loc_82560C00;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560C00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82560C04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82560C0C"))) PPC_WEAK_FUNC(sub_82560C0C);
PPC_FUNC_IMPL(__imp__sub_82560C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560C10"))) PPC_WEAK_FUNC(sub_82560C10);
PPC_FUNC_IMPL(__imp__sub_82560C10) {
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
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82560c94
	if (!cr6.eq) goto loc_82560C94;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560c54
	if (cr6.eq) goto loc_82560C54;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560C54:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82560c8c
	if (cr6.eq) goto loc_82560C8C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560c8c
	if (cr6.eq) goto loc_82560C8C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560C8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82560cec
	goto loc_82560CEC;
loc_82560C94:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560cb0
	if (cr6.eq) goto loc_82560CB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560CB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82560ce8
	if (cr6.eq) goto loc_82560CE8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560ce8
	if (cr6.eq) goto loc_82560CE8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560CE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82560CEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82560CF4"))) PPC_WEAK_FUNC(sub_82560CF4);
PPC_FUNC_IMPL(__imp__sub_82560CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560CF8"))) PPC_WEAK_FUNC(sub_82560CF8);
PPC_FUNC_IMPL(__imp__sub_82560CF8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82560d3c
	if (!cr6.eq) goto loc_82560D3C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2527
	ctx.r7.s64 = 2527;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560D3C:
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82560dac
	if (!cr6.eq) goto loc_82560DAC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82560d6c
	if (cr6.eq) goto loc_82560D6C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560D6C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82560da4
	if (cr6.eq) goto loc_82560DA4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560da4
	if (cr6.eq) goto loc_82560DA4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560DA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82560e04
	goto loc_82560E04;
loc_82560DAC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82560dc8
	if (cr6.eq) goto loc_82560DC8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560DC8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82560e00
	if (cr6.eq) goto loc_82560E00;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560e00
	if (cr6.eq) goto loc_82560E00;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560E00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82560E04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82560E0C"))) PPC_WEAK_FUNC(sub_82560E0C);
PPC_FUNC_IMPL(__imp__sub_82560E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560E10"))) PPC_WEAK_FUNC(sub_82560E10);
PPC_FUNC_IMPL(__imp__sub_82560E10) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82560e54
	if (!cr6.eq) goto loc_82560E54;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2576
	ctx.r7.s64 = 2576;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560E54:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82560e70
	if (cr6.eq) goto loc_82560E70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560E70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82560eac
	if (cr6.eq) goto loc_82560EAC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560eac
	if (cr6.eq) goto loc_82560EAC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,52
	ctx.r6.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560EAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82560EB8"))) PPC_WEAK_FUNC(sub_82560EB8);
PPC_FUNC_IMPL(__imp__sub_82560EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82560f00
	if (!cr6.eq) goto loc_82560F00;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2631
	ctx.r7.s64 = 2631;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82560F00:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bgt cr6,0x82560f78
	if (cr6.gt) goto loc_82560F78;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82560f34
	if (cr6.eq) goto loc_82560F34;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560F34:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560f70
	if (cr6.eq) goto loc_82560F70;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560f70
	if (cr6.eq) goto loc_82560F70;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82560fd4
	goto loc_82560FD4;
loc_82560F78:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82560f94
	if (cr6.eq) goto loc_82560F94;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82560F94:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82560fd0
	if (cr6.eq) goto loc_82560FD0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82560fd0
	if (cr6.eq) goto loc_82560FD0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82560FD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82560FD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82560FDC"))) PPC_WEAK_FUNC(sub_82560FDC);
PPC_FUNC_IMPL(__imp__sub_82560FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82560FE0"))) PPC_WEAK_FUNC(sub_82560FE0);
PPC_FUNC_IMPL(__imp__sub_82560FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82561028
	if (!cr6.eq) goto loc_82561028;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2690
	ctx.r7.s64 = 2690;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561028:
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8256109c
	if (!cr6.eq) goto loc_8256109C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82561058
	if (cr6.eq) goto loc_82561058;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82561058:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82561094
	if (cr6.eq) goto loc_82561094;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82561094
	if (cr6.eq) goto loc_82561094;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 364);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561094:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825610f8
	goto loc_825610F8;
loc_8256109C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825610b8
	if (cr6.eq) goto loc_825610B8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825610B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825610f4
	if (cr6.eq) goto loc_825610F4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825610f4
	if (cr6.eq) goto loc_825610F4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 364);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825610F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825610F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82561100"))) PPC_WEAK_FUNC(sub_82561100);
PPC_FUNC_IMPL(__imp__sub_82561100) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82561144
	if (!cr6.eq) goto loc_82561144;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2744
	ctx.r7.s64 = 2744;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561144:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82561160
	if (cr6.eq) goto loc_82561160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82561160:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8256119c
	if (cr6.eq) goto loc_8256119C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8256119c
	if (cr6.eq) goto loc_8256119C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,101
	ctx.r6.s64 = 101;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,404(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 404);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256119C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825611A8"))) PPC_WEAK_FUNC(sub_825611A8);
PPC_FUNC_IMPL(__imp__sub_825611A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,567
	ctx.r4.s64 = 567;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// bne cr6,0x82561228
	if (!cr6.eq) goto loc_82561228;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825611f4
	if (!cr6.eq) goto loc_825611F4;
	// li r11,2
	r11.s64 = 2;
	// b 0x82561220
	goto loc_82561220;
loc_825611F4:
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82561204
	if (!cr6.eq) goto loc_82561204;
	// li r11,5
	r11.s64 = 5;
	// b 0x82561220
	goto loc_82561220;
loc_82561204:
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x82561214
	if (!cr6.eq) goto loc_82561214;
	// li r11,8
	r11.s64 = 8;
	// b 0x82561220
	goto loc_82561220;
loc_82561214:
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82561228
	if (!cr6.eq) goto loc_82561228;
	// li r11,11
	r11.s64 = 11;
loc_82561220:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8256124c
	goto loc_8256124C;
loc_82561228:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2816
	ctx.r7.s64 = 2816;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-21448
	ctx.r5.s64 = r11.s64 + -21448;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256124C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82561284
	if (cr6.eq) goto loc_82561284;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82561284
	if (cr6.eq) goto loc_82561284;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,61
	ctx.r6.s64 = 61;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// lwz r5,244(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561284:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82561290"))) PPC_WEAK_FUNC(sub_82561290);
PPC_FUNC_IMPL(__imp__sub_82561290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825612A4"))) PPC_WEAK_FUNC(sub_825612A4);
PPC_FUNC_IMPL(__imp__sub_825612A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825612A8"))) PPC_WEAK_FUNC(sub_825612A8);
PPC_FUNC_IMPL(__imp__sub_825612A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825612BC"))) PPC_WEAK_FUNC(sub_825612BC);
PPC_FUNC_IMPL(__imp__sub_825612BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825612C0"))) PPC_WEAK_FUNC(sub_825612C0);
PPC_FUNC_IMPL(__imp__sub_825612C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825612D0"))) PPC_WEAK_FUNC(sub_825612D0);
PPC_FUNC_IMPL(__imp__sub_825612D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82561318
	if (!cr6.eq) goto loc_82561318;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2877
	ctx.r7.s64 = 2877;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561318:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// bge cr6,0x82561340
	if (!cr6.lt) goto loc_82561340;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82561340
	if (cr6.eq) goto loc_82561340;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82561344
	goto loc_82561344;
loc_82561340:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82561344:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// li r11,3
	r11.s64 = 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// beq cr6,0x825613b4
	if (cr6.eq) goto loc_825613B4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825613b4
	if (cr6.eq) goto loc_825613B4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825613B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825613C0"))) PPC_WEAK_FUNC(sub_825613C0);
PPC_FUNC_IMPL(__imp__sub_825613C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r18,r11,8972
	r18.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r17,r11,-15792
	r17.s64 = r11.s64 + -15792;
	// bne cr6,0x82561418
	if (!cr6.eq) goto loc_82561418;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2967
	ctx.r7.s64 = 2967;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561418:
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82561458
	if (!cr6.eq) goto loc_82561458;
	// li r4,928
	ctx.r4.s64 = 928;
	// li r28,23
	r28.s64 = 23;
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r23,r20
	r23.u64 = r20.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,927
	ctx.r4.s64 = 927;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r24,-1
	r24.s64 = -1;
	// b 0x825614cc
	goto loc_825614CC;
loc_82561458:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_825614CC:
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(r22.u32, 1, xer);
	// ble cr6,0x825614e8
	if (!cr6.gt) goto loc_825614E8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x825614ec
	goto loc_825614EC;
loc_825614E8:
	// li r22,1
	r22.s64 = 1;
loc_825614EC:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// beq cr6,0x82561504
	if (cr6.eq) goto loc_82561504;
	// addi r11,r11,-16392
	r11.s64 = r11.s64 + -16392;
	// addi r10,r11,-576
	ctx.r10.s64 = r11.s64 + -576;
	// b 0x82561508
	goto loc_82561508;
loc_82561504:
	// addi r10,r11,-16392
	ctx.r10.s64 = r11.s64 + -16392;
loc_82561508:
	// mulli r11,r28,24
	r11.s64 = r28.s64 * 24;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x82561538
	if (!cr6.eq) goto loc_82561538;
	// addi r11,r27,-1
	r11.s64 = r27.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82561538:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne cr6,0x82561554
	if (!cr6.eq) goto loc_82561554;
	// cntlzw r11,r23
	r11.u64 = r23.u32 == 0 ? 32 : __builtin_clz(r23.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82561554:
	// stw r20,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r20.u32);
	// stw r20,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r20.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bne cr6,0x8256158c
	if (!cr6.eq) goto loc_8256158C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8256158C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825615b4
	if (!cr6.eq) goto loc_825615B4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r7,3048
	ctx.r7.s64 = 3048;
	// addi r5,r11,-21448
	ctx.r5.s64 = r11.s64 + -21448;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825615B4:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// stw r20,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r20.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r25,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r25.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r24.u32);
	// beq cr6,0x82561650
	if (cr6.eq) goto loc_82561650;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82561650
	if (cr6.eq) goto loc_82561650;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,-15676
	ctx.r4.s64 = r11.s64 + -15676;
	// lwz r27,12(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r11,-10536
	r31.s64 = r11.s64 + -10536;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mtctr r21
	ctr.u64 = r21.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mtctr r21
	ctr.u64 = r21.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561650:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_8256165C"))) PPC_WEAK_FUNC(sub_8256165C);
PPC_FUNC_IMPL(__imp__sub_8256165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561660"))) PPC_WEAK_FUNC(sub_82561660);
PPC_FUNC_IMPL(__imp__sub_82561660) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r26,r11,-15792
	r26.s64 = r11.s64 + -15792;
	// bne cr6,0x825616bc
	if (!cr6.eq) goto loc_825616BC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3110
	ctx.r7.s64 = 3110;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825616BC:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// bne cr6,0x825616d0
	if (!cr6.eq) goto loc_825616D0;
	// li r29,23
	r29.s64 = 23;
	// li r22,1
	r22.s64 = 1;
	// b 0x825616f8
	goto loc_825616F8;
loc_825616D0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_825616F8:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// ble cr6,0x82561714
	if (!cr6.gt) goto loc_82561714;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x82561718
	goto loc_82561718;
loc_82561714:
	// li r21,1
	r21.s64 = 1;
loc_82561718:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// beq cr6,0x82561730
	if (cr6.eq) goto loc_82561730;
	// addi r11,r11,-16392
	r11.s64 = r11.s64 + -16392;
	// addi r30,r11,-576
	r30.s64 = r11.s64 + -576;
	// b 0x82561734
	goto loc_82561734;
loc_82561730:
	// addi r30,r11,-16392
	r30.s64 = r11.s64 + -16392;
loc_82561734:
	// mulli r11,r29,24
	r11.s64 = r29.s64 * 24;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bne 0x825617e4
	if (!cr0.eq) goto loc_825617E4;
	// addi r10,r29,-17
	ctx.r10.s64 = r29.s64 + -17;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-10112
	r11.s64 = r11.s64 + -10112;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82561780
	if (!cr0.eq) goto loc_82561780;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3140
	ctx.r7.s64 = 3140;
	// addi r5,r11,-15544
	ctx.r5.s64 = r11.s64 + -15544;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561780:
	// rlwinm r11,r22,2,0,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	r31.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82561798
	if (cr0.lt) goto loc_82561798;
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(r31.s32, 24, xer);
	// blt cr6,0x825617b4
	if (cr6.lt) goto loc_825617B4;
loc_82561798:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3142
	ctx.r7.s64 = 3142;
	// addi r5,r11,-15584
	ctx.r5.s64 = r11.s64 + -15584;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825617B4:
	// mulli r11,r31,24
	r11.s64 = r31.s64 * 24;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bne 0x825617e4
	if (!cr0.eq) goto loc_825617E4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// addi r5,r11,-15596
	ctx.r5.s64 = r11.s64 + -15596;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825617E4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r20,2,0,29
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// beq cr6,0x82561854
	if (cr6.eq) goto loc_82561854;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82561854
	if (cr6.eq) goto loc_82561854;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r4,r11,-15620
	ctx.r4.s64 = r11.s64 + -15620;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r31,r11,-10536
	r31.s64 = r11.s64 + -10536;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,29
	ctx.r6.s64 = 29;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561854:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82561860"))) PPC_WEAK_FUNC(sub_82561860);
PPC_FUNC_IMPL(__imp__sub_82561860) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r27,r11,-15792
	r27.s64 = r11.s64 + -15792;
	// bne cr6,0x825618b8
	if (!cr6.eq) goto loc_825618B8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3188
	ctx.r7.s64 = 3188;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825618B8:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// bne cr6,0x825618cc
	if (!cr6.eq) goto loc_825618CC;
	// li r30,23
	r30.s64 = 23;
	// li r26,1
	r26.s64 = 1;
	// b 0x825618f4
	goto loc_825618F4;
loc_825618CC:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_825618F4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8256190c
	if (cr6.eq) goto loc_8256190C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// b 0x82561910
	goto loc_82561910;
loc_8256190C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82561910:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// beq cr6,0x82561928
	if (cr6.eq) goto loc_82561928;
	// addi r11,r11,-16392
	r11.s64 = r11.s64 + -16392;
	// addi r29,r11,-576
	r29.s64 = r11.s64 + -576;
	// b 0x8256192c
	goto loc_8256192C;
loc_82561928:
	// addi r29,r11,-16392
	r29.s64 = r11.s64 + -16392;
loc_8256192C:
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825619e8
	if (!cr6.eq) goto loc_825619E8;
	// addi r10,r30,-17
	ctx.r10.s64 = r30.s64 + -17;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-10112
	r11.s64 = r11.s64 + -10112;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82561980
	if (!cr0.eq) goto loc_82561980;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3219
	ctx.r7.s64 = 3219;
	// addi r5,r11,-15544
	ctx.r5.s64 = r11.s64 + -15544;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561980:
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	r31.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82561998
	if (cr0.lt) goto loc_82561998;
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(r31.s32, 24, xer);
	// blt cr6,0x825619b4
	if (cr6.lt) goto loc_825619B4;
loc_82561998:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3221
	ctx.r7.s64 = 3221;
	// addi r5,r11,-15584
	ctx.r5.s64 = r11.s64 + -15584;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825619B4:
	// mulli r11,r31,24
	r11.s64 = r31.s64 * 24;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lhz r11,6(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bne 0x825619e8
	if (!cr0.eq) goto loc_825619E8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3223
	ctx.r7.s64 = 3223;
	// addi r5,r11,-15528
	ctx.r5.s64 = r11.s64 + -15528;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825619E8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82561a24
	if (cr6.eq) goto loc_82561A24;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82561a24
	if (cr6.eq) goto loc_82561A24;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r5,400(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561A24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82561A30"))) PPC_WEAK_FUNC(sub_82561A30);
PPC_FUNC_IMPL(__imp__sub_82561A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82561a7c
	if (!cr6.eq) goto loc_82561A7C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3264
	ctx.r7.s64 = 3264;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561A7C:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x82561a90
	if (!cr6.eq) goto loc_82561A90;
	// li r31,23
	r31.s64 = 23;
	// li r24,1
	r24.s64 = 1;
	// b 0x82561ab8
	goto loc_82561AB8;
loc_82561A90:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_82561AB8:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// ble cr6,0x82561ad4
	if (!cr6.gt) goto loc_82561AD4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82561ad8
	goto loc_82561AD8;
loc_82561AD4:
	// li r30,1
	r30.s64 = 1;
loc_82561AD8:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mulli r11,r31,24
	r11.s64 = r31.s64 * 24;
	// addi r10,r10,-16392
	ctx.r10.s64 = ctx.r10.s64 + -16392;
	// beq cr6,0x82561afc
	if (cr6.eq) goto loc_82561AFC;
	// addi r9,r10,-576
	ctx.r9.s64 = ctx.r10.s64 + -576;
	// addi r10,r10,-576
	ctx.r10.s64 = ctx.r10.s64 + -576;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82561b00
	goto loc_82561B00;
loc_82561AFC:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82561B00:
	// lhzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + ctx.r9.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82561b2c
	if (!cr6.eq) goto loc_82561B2C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82561b28
	if (cr6.eq) goto loc_82561B28;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82561b2c
	goto loc_82561B2C;
loc_82561B28:
	// stw r24,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r24.u32);
loc_82561B2C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82561b88
	if (cr6.eq) goto loc_82561B88;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82561b88
	if (cr6.eq) goto loc_82561B88;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r31,r11,-10536
	r31.s64 = r11.s64 + -10536;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r4,r11,-15808
	ctx.r4.s64 = r11.s64 + -15808;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561B88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82561B94"))) PPC_WEAK_FUNC(sub_82561B94);
PPC_FUNC_IMPL(__imp__sub_82561B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561B98"))) PPC_WEAK_FUNC(sub_82561B98);
PPC_FUNC_IMPL(__imp__sub_82561B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r24,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r24.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r23,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r23.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82561c44
	if (cr6.eq) goto loc_82561C44;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82561c44
	if (cr6.eq) goto loc_82561C44;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r4,r11,-15500
	ctx.r4.s64 = r11.s64 + -15500;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561C44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82561C50"))) PPC_WEAK_FUNC(sub_82561C50);
PPC_FUNC_IMPL(__imp__sub_82561C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82561c94
	if (!cr6.eq) goto loc_82561C94;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3379
	ctx.r7.s64 = 3379;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561C94:
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82561ce4
	if (cr6.eq) goto loc_82561CE4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82561ce4
	if (cr6.eq) goto loc_82561CE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,412(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561CE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82561CF0"))) PPC_WEAK_FUNC(sub_82561CF0);
PPC_FUNC_IMPL(__imp__sub_82561CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82561d34
	if (!cr6.eq) goto loc_82561D34;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3411
	ctx.r7.s64 = 3411;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561D34:
	// li r4,129
	ctx.r4.s64 = 129;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82561d84
	if (cr6.eq) goto loc_82561D84;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82561d84
	if (cr6.eq) goto loc_82561D84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,104
	ctx.r6.s64 = 104;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,416(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 416);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561D84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82561D90"))) PPC_WEAK_FUNC(sub_82561D90);
PPC_FUNC_IMPL(__imp__sub_82561D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-15456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15456);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561DA4"))) PPC_WEAK_FUNC(sub_82561DA4);
PPC_FUNC_IMPL(__imp__sub_82561DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561DA8"))) PPC_WEAK_FUNC(sub_82561DA8);
PPC_FUNC_IMPL(__imp__sub_82561DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82561dec
	if (!cr6.eq) goto loc_82561DEC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3457
	ctx.r7.s64 = 3457;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561DEC:
	// li r4,580
	ctx.r4.s64 = 580;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,581
	ctx.r4.s64 = 581;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82561e38
	if (!cr6.eq) goto loc_82561E38;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-15452(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15452);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x82561e40
	goto loc_82561E40;
loc_82561E38:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfs f0,-15456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15456);
	f0.f64 = double(temp.f32);
loc_82561E40:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82561e88
	if (cr6.eq) goto loc_82561E88;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82561e88
	if (cr6.eq) goto loc_82561E88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,268(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561E88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82561E94"))) PPC_WEAK_FUNC(sub_82561E94);
PPC_FUNC_IMPL(__imp__sub_82561E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561E98"))) PPC_WEAK_FUNC(sub_82561E98);
PPC_FUNC_IMPL(__imp__sub_82561E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-15448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15448);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82561EAC"))) PPC_WEAK_FUNC(sub_82561EAC);
PPC_FUNC_IMPL(__imp__sub_82561EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82561EB0"))) PPC_WEAK_FUNC(sub_82561EB0);
PPC_FUNC_IMPL(__imp__sub_82561EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82561ef4
	if (!cr6.eq) goto loc_82561EF4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3516
	ctx.r7.s64 = 3516;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561EF4:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82561f44
	if (cr6.eq) goto loc_82561F44;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82561f44
	if (cr6.eq) goto loc_82561F44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561F44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82561F50"))) PPC_WEAK_FUNC(sub_82561F50);
PPC_FUNC_IMPL(__imp__sub_82561F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82561f94
	if (!cr6.eq) goto loc_82561F94;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3546
	ctx.r7.s64 = 3546;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82561F94:
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82561fe4
	if (cr6.eq) goto loc_82561FE4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82561fe4
	if (cr6.eq) goto loc_82561FE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,69
	ctx.r6.s64 = 69;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82561FE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82561FF0"))) PPC_WEAK_FUNC(sub_82561FF0);
PPC_FUNC_IMPL(__imp__sub_82561FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82562034
	if (!cr6.eq) goto loc_82562034;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3577
	ctx.r7.s64 = 3577;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562034:
	// li r4,1002
	ctx.r4.s64 = 1002;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82562084
	if (cr6.eq) goto loc_82562084;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82562084
	if (cr6.eq) goto loc_82562084;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,70
	ctx.r6.s64 = 70;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,280(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562084:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82562090"))) PPC_WEAK_FUNC(sub_82562090);
PPC_FUNC_IMPL(__imp__sub_82562090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825620d8
	if (!cr6.eq) goto loc_825620D8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3620
	ctx.r7.s64 = 3620;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825620D8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253e748
	sub_8253E748(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562130
	if (cr6.eq) goto loc_82562130;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82562130
	if (cr6.eq) goto loc_82562130;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562130:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256213C"))) PPC_WEAK_FUNC(sub_8256213C);
PPC_FUNC_IMPL(__imp__sub_8256213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562140"))) PPC_WEAK_FUNC(sub_82562140);
PPC_FUNC_IMPL(__imp__sub_82562140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82562188
	if (!cr6.eq) goto loc_82562188;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3654
	ctx.r7.s64 = 3654;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562188:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253e748
	sub_8253E748(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825621e0
	if (cr6.eq) goto loc_825621E0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825621e0
	if (cr6.eq) goto loc_825621E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,288(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825621E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825621EC"))) PPC_WEAK_FUNC(sub_825621EC);
PPC_FUNC_IMPL(__imp__sub_825621EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825621F0"))) PPC_WEAK_FUNC(sub_825621F0);
PPC_FUNC_IMPL(__imp__sub_825621F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82562238
	if (!cr6.eq) goto loc_82562238;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3688
	ctx.r7.s64 = 3688;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562238:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253e748
	sub_8253E748(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562290
	if (cr6.eq) goto loc_82562290;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82562290
	if (cr6.eq) goto loc_82562290;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,73
	ctx.r6.s64 = 73;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562290:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256229C"))) PPC_WEAK_FUNC(sub_8256229C);
PPC_FUNC_IMPL(__imp__sub_8256229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825622A0"))) PPC_WEAK_FUNC(sub_825622A0);
PPC_FUNC_IMPL(__imp__sub_825622A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825622e8
	if (!cr6.eq) goto loc_825622E8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3721
	ctx.r7.s64 = 3721;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825622E8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253e748
	sub_8253E748(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562340
	if (cr6.eq) goto loc_82562340;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82562340
	if (cr6.eq) goto loc_82562340;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,74
	ctx.r6.s64 = 74;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562340:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256234C"))) PPC_WEAK_FUNC(sub_8256234C);
PPC_FUNC_IMPL(__imp__sub_8256234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562350"))) PPC_WEAK_FUNC(sub_82562350);
PPC_FUNC_IMPL(__imp__sub_82562350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,-15792
	r29.s64 = r11.s64 + -15792;
	// bne cr6,0x825623a0
	if (!cr6.eq) goto loc_825623A0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3754
	ctx.r7.s64 = 3754;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825623A0:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x825623c8
	if (!cr6.eq) goto loc_825623C8;
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// b 0x825623d4
	goto loc_825623D4;
loc_825623C8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
loc_825623D4:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82562404
	if (cr6.eq) goto loc_82562404;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3767
	ctx.r7.s64 = 3767;
	// addi r5,r11,-15424
	ctx.r5.s64 = r11.s64 + -15424;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562404:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82562448
	if (cr6.eq) goto loc_82562448;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82562448
	if (cr6.eq) goto loc_82562448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,26
	ctx.r6.s64 = 26;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562448:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82562454"))) PPC_WEAK_FUNC(sub_82562454);
PPC_FUNC_IMPL(__imp__sub_82562454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562458"))) PPC_WEAK_FUNC(sub_82562458);
PPC_FUNC_IMPL(__imp__sub_82562458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r28,r11,-15792
	r28.s64 = r11.s64 + -15792;
	// bne cr6,0x825624ac
	if (!cr6.eq) goto loc_825624AC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3800
	ctx.r7.s64 = 3800;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825624AC:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82562510
	if (!cr6.eq) goto loc_82562510;
	// li r4,166
	ctx.r4.s64 = 166;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82562500
	if (!cr6.eq) goto loc_82562500;
	// lis r11,32639
	r11.s64 = 2139029504;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82562534
	goto loc_82562534;
loc_82562500:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x82562530
	goto loc_82562530;
loc_82562510:
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfs f0,-29600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -29600);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 / ctx.f1.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82562530:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_82562534:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82562564
	if (cr6.eq) goto loc_82562564;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3827
	ctx.r7.s64 = 3827;
	// addi r5,r11,-15280
	ctx.r5.s64 = r11.s64 + -15280;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562564:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825625a8
	if (cr6.eq) goto loc_825625A8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825625a8
	if (cr6.eq) goto loc_825625A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,27
	ctx.r6.s64 = 27;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825625A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825625B8"))) PPC_WEAK_FUNC(sub_825625B8);
PPC_FUNC_IMPL(__imp__sub_825625B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825625fc
	if (!cr6.eq) goto loc_825625FC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3857
	ctx.r7.s64 = 3857;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825625FC:
	// li r4,998
	ctx.r4.s64 = 998;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8256264c
	if (cr6.eq) goto loc_8256264C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8256264c
	if (cr6.eq) goto loc_8256264C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,93
	ctx.r6.s64 = 93;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 372);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256264C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82562658"))) PPC_WEAK_FUNC(sub_82562658);
PPC_FUNC_IMPL(__imp__sub_82562658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8256269c
	if (!cr6.eq) goto loc_8256269C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3889
	ctx.r7.s64 = 3889;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256269C:
	// li r4,999
	ctx.r4.s64 = 999;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825626ec
	if (cr6.eq) goto loc_825626EC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825626ec
	if (cr6.eq) goto loc_825626EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,94
	ctx.r6.s64 = 94;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,376(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 376);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825626EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825626F8"))) PPC_WEAK_FUNC(sub_825626F8);
PPC_FUNC_IMPL(__imp__sub_825626F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27596);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256270C"))) PPC_WEAK_FUNC(sub_8256270C);
PPC_FUNC_IMPL(__imp__sub_8256270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562710"))) PPC_WEAK_FUNC(sub_82562710);
PPC_FUNC_IMPL(__imp__sub_82562710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27600);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562724"))) PPC_WEAK_FUNC(sub_82562724);
PPC_FUNC_IMPL(__imp__sub_82562724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562728"))) PPC_WEAK_FUNC(sub_82562728);
PPC_FUNC_IMPL(__imp__sub_82562728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27604);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256273C"))) PPC_WEAK_FUNC(sub_8256273C);
PPC_FUNC_IMPL(__imp__sub_8256273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562740"))) PPC_WEAK_FUNC(sub_82562740);
PPC_FUNC_IMPL(__imp__sub_82562740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562754"))) PPC_WEAK_FUNC(sub_82562754);
PPC_FUNC_IMPL(__imp__sub_82562754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562758"))) PPC_WEAK_FUNC(sub_82562758);
PPC_FUNC_IMPL(__imp__sub_82562758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9712);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256276C"))) PPC_WEAK_FUNC(sub_8256276C);
PPC_FUNC_IMPL(__imp__sub_8256276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562770"))) PPC_WEAK_FUNC(sub_82562770);
PPC_FUNC_IMPL(__imp__sub_82562770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82562784"))) PPC_WEAK_FUNC(sub_82562784);
PPC_FUNC_IMPL(__imp__sub_82562784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562788"))) PPC_WEAK_FUNC(sub_82562788);
PPC_FUNC_IMPL(__imp__sub_82562788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27608);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256279C"))) PPC_WEAK_FUNC(sub_8256279C);
PPC_FUNC_IMPL(__imp__sub_8256279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825627A0"))) PPC_WEAK_FUNC(sub_825627A0);
PPC_FUNC_IMPL(__imp__sub_825627A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9716);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825627B4"))) PPC_WEAK_FUNC(sub_825627B4);
PPC_FUNC_IMPL(__imp__sub_825627B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825627B8"))) PPC_WEAK_FUNC(sub_825627B8);
PPC_FUNC_IMPL(__imp__sub_825627B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9708);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825627CC"))) PPC_WEAK_FUNC(sub_825627CC);
PPC_FUNC_IMPL(__imp__sub_825627CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825627D0"))) PPC_WEAK_FUNC(sub_825627D0);
PPC_FUNC_IMPL(__imp__sub_825627D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27612);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825627E4"))) PPC_WEAK_FUNC(sub_825627E4);
PPC_FUNC_IMPL(__imp__sub_825627E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825627E8"))) PPC_WEAK_FUNC(sub_825627E8);
PPC_FUNC_IMPL(__imp__sub_825627E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82562830
	if (!cr6.eq) goto loc_82562830;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4098
	ctx.r7.s64 = 4098;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562830:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253e748
	sub_8253E748(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562888
	if (cr6.eq) goto loc_82562888;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82562888
	if (cr6.eq) goto loc_82562888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,51
	ctx.r6.s64 = 51;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562888:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82562894"))) PPC_WEAK_FUNC(sub_82562894);
PPC_FUNC_IMPL(__imp__sub_82562894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562898"))) PPC_WEAK_FUNC(sub_82562898);
PPC_FUNC_IMPL(__imp__sub_82562898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825628e0
	if (!cr6.eq) goto loc_825628E0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4133
	ctx.r7.s64 = 4133;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825628E0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// beq cr6,0x82562948
	if (cr6.eq) goto loc_82562948;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82562948
	if (cr6.eq) goto loc_82562948;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,54
	ctx.r6.s64 = 54;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,216(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562948:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82562954"))) PPC_WEAK_FUNC(sub_82562954);
PPC_FUNC_IMPL(__imp__sub_82562954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562958"))) PPC_WEAK_FUNC(sub_82562958);
PPC_FUNC_IMPL(__imp__sub_82562958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8256299c
	if (!cr6.eq) goto loc_8256299C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4163
	ctx.r7.s64 = 4163;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256299C:
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825629ec
	if (cr6.eq) goto loc_825629EC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825629ec
	if (cr6.eq) goto loc_825629EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825629EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825629F8"))) PPC_WEAK_FUNC(sub_825629F8);
PPC_FUNC_IMPL(__imp__sub_825629F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82562a3c
	if (!cr6.eq) goto loc_82562A3C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4195
	ctx.r7.s64 = 4195;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562A3C:
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82562a8c
	if (cr6.eq) goto loc_82562A8C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82562a8c
	if (cr6.eq) goto loc_82562A8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,75
	ctx.r6.s64 = 75;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,300(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 300);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562A8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82562A98"))) PPC_WEAK_FUNC(sub_82562A98);
PPC_FUNC_IMPL(__imp__sub_82562A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82562adc
	if (!cr6.eq) goto loc_82562ADC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4225
	ctx.r7.s64 = 4225;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562ADC:
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253d778
	sub_8253D778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82562b2c
	if (cr6.eq) goto loc_82562B2C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82562b2c
	if (cr6.eq) goto loc_82562B2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = r11.s64 + -15472;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,25
	ctx.r6.s64 = 25;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562B2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

