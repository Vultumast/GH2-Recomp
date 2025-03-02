#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8249F230"))) PPC_WEAK_FUNC(sub_8249F230);
PPC_FUNC_IMPL(__imp__sub_8249F230) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x8249f42c
	if (cr6.eq) goto loc_8249F42C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,22700
	r23.s64 = r11.s64 + 22700;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r26,r11,-24612
	r26.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,22616
	r25.s64 = r11.s64 + 22616;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r22,r11,-1736
	r22.s64 = r11.s64 + -1736;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,10320
	r24.s64 = r11.s64 + 10320;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,22604
	r21.s64 = r11.s64 + 22604;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r20,r11,22608
	r20.s64 = r11.s64 + 22608;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r30,r11,3792
	r30.s64 = r11.s64 + 3792;
loc_8249F2A0:
	// clrlwi r11,r18,31
	r11.u64 = r18.u32 & 0x1;
	// clrlwi r31,r19,31
	r31.u64 = r19.u32 & 0x1;
	// srawi r19,r19,1
	xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	r19.s64 = r19.s32 >> 1;
	// srawi r18,r18,2
	xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x3) != 0);
	r18.s64 = r18.s32 >> 2;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249f2e0
	if (!cr6.eq) goto loc_8249F2E0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249e950
	sub_8249E950(ctx, base);
	// b 0x8249f420
	goto loc_8249F420;
loc_8249F2E0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x8249f314
	if (cr6.lt) goto loc_8249F314;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8249f308
	if (cr6.eq) goto loc_8249F308;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_8249F308:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F314:
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// clrlwi. r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249f334
	if (!cr0.eq) goto loc_8249F334;
	// lbz r11,8(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8249f338
	if (cr6.eq) goto loc_8249F338;
loc_8249F334:
	// li r11,0
	r11.s64 = 0;
loc_8249F338:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249f360
	if (!cr0.eq) goto loc_8249F360;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249e398
	sub_8249E398(ctx, base);
loc_8249F360:
	// lbz r11,8(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// rlwinm r11,r11,2,25,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x7C;
	// lwzx r11,r11,r22
	r11.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// blt cr6,0x8249f39c
	if (cr6.lt) goto loc_8249F39C;
	// rlwinm. r11,r11,0,8,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249f420
	if (cr0.eq) goto loc_8249F420;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8249f420
	goto loc_8249F420;
loc_8249F39C:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249f3c4
	if (!cr0.eq) goto loc_8249F3C4;
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFC000000;
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8249f3c4
	if (!cr6.eq) goto loc_8249F3C4;
	// rlwinm r11,r11,0,18,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F00;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8249f3c8
	if (!cr6.eq) goto loc_8249F3C8;
loc_8249F3C4:
	// li r11,0
	r11.s64 = 0;
loc_8249F3C8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249f420
	if (!cr0.eq) goto loc_8249F420;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// clrlwi. r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249f3f8
	if (!cr0.eq) goto loc_8249F3F8;
	// lbz r11,8(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 8);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8249f3fc
	if (cr6.eq) goto loc_8249F3FC;
loc_8249F3F8:
	// li r11,0
	r11.s64 = 0;
loc_8249F3FC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// beq 0x8249f410
	if (cr0.eq) goto loc_8249F410;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8249F410:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249e670
	sub_8249E670(ctx, base);
loc_8249F420:
	// addic. r17,r17,-1
	xer.ca = r17.u32 > 0;
	r17.s64 = r17.s64 + -1;
	cr0.compare<int32_t>(r17.s32, 0, xer);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// bne 0x8249f2a0
	if (!cr0.eq) goto loc_8249F2A0;
loc_8249F42C:
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_8249F438"))) PPC_WEAK_FUNC(sub_8249F438);
PPC_FUNC_IMPL(__imp__sub_8249F438) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// not r30,r6
	r30.u64 = ~ctx.r6.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r11.u8);
	// stw r26,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, r26.u32);
	// stw r29,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// bl 0x8249d470
	sub_8249D470(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x8249e868
	sub_8249E868(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r20,r11,-280
	r20.s64 = r11.s64 + -280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,21724
	r22.s64 = r11.s64 + 21724;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23196
	r11.s64 = r11.s64 + 23196;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23176
	r11.s64 = r11.s64 + 23176;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23156
	r11.s64 = r11.s64 + 23156;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23140
	r11.s64 = r11.s64 + 23140;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23128
	r11.s64 = r11.s64 + 23128;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r19,r11,-24616
	r19.s64 = r11.s64 + -24616;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r18,r11,-9704
	r18.s64 = r11.s64 + -9704;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23108
	r11.s64 = r11.s64 + 23108;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23092
	r11.s64 = r11.s64 + 23092;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23072
	r11.s64 = r11.s64 + 23072;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-17980
	r11.s64 = r11.s64 + -17980;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23064
	r11.s64 = r11.s64 + 23064;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-24612
	r11.s64 = r11.s64 + -24612;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-24604
	r11.s64 = r11.s64 + -24604;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r14,r11,23060
	r14.s64 = r11.s64 + 23060;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23052
	r11.s64 = r11.s64 + 23052;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-17968
	r11.s64 = r11.s64 + -17968;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,14920
	r11.s64 = r11.s64 + 14920;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23032
	r11.s64 = r11.s64 + 23032;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-17956
	r11.s64 = r11.s64 + -17956;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,23020
	r11.s64 = r11.s64 + 23020;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22996
	r11.s64 = r11.s64 + 22996;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22976
	r11.s64 = r11.s64 + 22976;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22956
	r11.s64 = r11.s64 + 22956;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r15,r11,22936
	r15.s64 = r11.s64 + 22936;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22912
	r11.s64 = r11.s64 + 22912;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r17,r11,22900
	r17.s64 = r11.s64 + 22900;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22880
	r11.s64 = r11.s64 + 22880;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22856
	r11.s64 = r11.s64 + 22856;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,22840
	r21.s64 = r11.s64 + 22840;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22816
	r11.s64 = r11.s64 + 22816;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r23,r11,2836
	r23.s64 = r11.s64 + 2836;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r16,r11,6256
	r16.s64 = r11.s64 + 6256;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22804
	r11.s64 = r11.s64 + 22804;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22796
	r11.s64 = r11.s64 + 22796;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22784
	r11.s64 = r11.s64 + 22784;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-17940
	r11.s64 = r11.s64 + -17940;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22728
	r11.s64 = r11.s64 + 22728;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22716
	r11.s64 = r11.s64 + 22716;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,15024
	r11.s64 = r11.s64 + 15024;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r24,r11,3792
	r24.s64 = r11.s64 + 3792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,22708
	r11.s64 = r11.s64 + 22708;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// b 0x8249f68c
	goto loc_8249F68C;
loc_8249F688:
	// lwz r26,460(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
loc_8249F68C:
	// li r11,-1
	r11.s64 = -1;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x8249f69c
	goto loc_8249F69C;
loc_8249F698:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
loc_8249F69C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r26,128(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// beq cr6,0x8249f8e8
	if (cr6.eq) goto loc_8249F8E8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lbz r25,113(r1)
	r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r25,0
	cr0.compare<uint32_t>(r25.u32, 0, xer);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
	// beq 0x8249f748
	if (cr0.eq) goto loc_8249F748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// clrlwi r10,r28,27
	ctx.r10.u64 = r28.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r28,27,5,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8249f748
	if (cr0.eq) goto loc_8249F748;
	// srawi r11,r28,1
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r11.s64 = r28.s32 >> 1;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r28,1
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r28
	ctx.r6.s64 = r28.s64 - r11.s64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
loc_8249F748:
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(r29.u32, 12, xer);
	// bgt cr6,0x8249fe64
	if (cr6.gt) goto loc_8249FE64;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,21856
	r12.s64 = r12.s64 + 21856;
	// rlwinm r0,r29,1,0,30
	r0.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32182
	r12.s64 = -2109079552;
	// addi r12,r12,-2184
	r12.s64 = r12.s64 + -2184;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r29.u64) {
	case 0:
		goto loc_8249F778;
	case 1:
		goto loc_8249F7D4;
	case 2:
		goto loc_8249F7A8;
	case 3:
		goto loc_8249F920;
	case 4:
		goto loc_8249F948;
	case 5:
		goto loc_8249F964;
	case 6:
		goto loc_8249F980;
	case 7:
		goto loc_8249F99C;
	case 8:
		goto loc_8249FA84;
	case 9:
		goto loc_8249FBC4;
	case 10:
		goto loc_8249FC20;
	case 11:
		goto loc_8249FC3C;
	case 12:
		goto loc_8249FD94;
	default:
		__builtin_unreachable();
	}
loc_8249F778:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8cc
	if (cr6.eq) goto loc_8249F8CC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249f8cc
	if (cr0.eq) goto loc_8249F8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_8249F79C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
	// b 0x8249f8cc
	goto loc_8249F8CC;
loc_8249F7A8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f7d4
	if (cr6.eq) goto loc_8249F7D4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249f7d4
	if (cr0.eq) goto loc_8249F7D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F7D4:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(r26.s32, -1, xer);
	// bne cr6,0x8249f7f4
	if (!cr6.eq) goto loc_8249F7F4;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
loc_8249F7F4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249f898
	if (cr6.eq) goto loc_8249F898;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x8249f898
	if (!cr6.gt) goto loc_8249F898;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249f230
	sub_8249F230(ctx, base);
	// add r11,r28,r29
	r11.u64 = r28.u64 + r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_8249F898:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8c4
	if (cr6.eq) goto loc_8249F8C4;
	// add r11,r28,r29
	r11.u64 = r28.u64 + r29.u64;
	// mulli r6,r11,3
	ctx.r6.s64 = r11.s64 * 3;
	// lwz r11,468(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// ble cr6,0x8249f8c4
	if (!cr6.gt) goto loc_8249F8C4;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F8C4:
	// lwz r28,116(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r27,0
	r27.s64 = 0;
loc_8249F8CC:
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// rotlwi r28,r10,0
	r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bne 0x8249f698
	if (!cr0.eq) goto loc_8249F698;
loc_8249F8E8:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bne 0x8249f688
	if (!cr0.eq) goto loc_8249F688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8239bd10
	return;
loc_8249F920:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f940
	if (cr6.eq) goto loc_8249F940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
loc_8249F938:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
loc_8249F940:
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r27.u8);
	// b 0x8249f8cc
	goto loc_8249F8CC;
loc_8249F948:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f940
	if (cr6.eq) goto loc_8249F940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x8249f938
	goto loc_8249F938;
loc_8249F964:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f940
	if (cr6.eq) goto loc_8249F940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x8249f938
	goto loc_8249F938;
loc_8249F980:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f940
	if (cr6.eq) goto loc_8249F940;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// b 0x8249f938
	goto loc_8249F938;
loc_8249F99C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8cc
	if (cr6.eq) goto loc_8249F8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249fa18
	if (cr0.eq) goto loc_8249FA18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FA18:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249fa5c
	if (cr0.eq) goto loc_8249FA5C;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_8249FA54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FA5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249f8cc
	if (cr0.eq) goto loc_8249F8CC;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8249FA78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// b 0x8249f8cc
	goto loc_8249F8CC;
loc_8249FA84:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8cc
	if (cr6.eq) goto loc_8249F8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249fb00
	if (cr0.eq) goto loc_8249FB00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FB00:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249fb64
	if (cr0.eq) goto loc_8249FB64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FB64:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249fba8
	if (cr0.eq) goto loc_8249FBA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FBA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8249fa54
	goto loc_8249FA54;
loc_8249FBC4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8cc
	if (cr6.eq) goto loc_8249F8CC;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
	// srawi r11,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r11.s64 = r29.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r10.s64 = r29.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r29
	ctx.r6.s64 = r29.s64 - r11.s64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// b 0x8249f8cc
	goto loc_8249F8CC;
loc_8249FC20:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8cc
	if (cr6.eq) goto loc_8249F8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x8249f79c
	goto loc_8249F79C;
loc_8249FC3C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8cc
	if (cr6.eq) goto loc_8249F8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8249fc70
	if (cr0.eq) goto loc_8249FC70;
	// li r29,1
	r29.s64 = 1;
loc_8249FC70:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8249fc8c
	if (cr0.eq) goto loc_8249FC8C;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8249fcf0
	goto loc_8249FCF0;
loc_8249FC8C:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8249fce0
	if (!cr0.eq) goto loc_8249FCE0;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_8249FCE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_8249FCF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = r11.u32 & 0x1;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249fd48
	if (cr0.eq) goto loc_8249FD48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FD48:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249fd74
	if (cr0.eq) goto loc_8249FD74;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FD74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249f8cc
	if (cr0.eq) goto loc_8249F8CC;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x8249fa78
	goto loc_8249FA78;
loc_8249FD94:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8cc
	if (cr6.eq) goto loc_8249F8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r20
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// bne cr6,0x8249fe20
	if (!cr6.eq) goto loc_8249FE20;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FE20:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249fe44
	if (cr0.eq) goto loc_8249FE44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249FE44:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249f8cc
	if (cr0.eq) goto loc_8249F8CC;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// b 0x8249fa78
	goto loc_8249FA78;
loc_8249FE64:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8249f8cc
	if (cr6.eq) goto loc_8249F8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x8249db90
	sub_8249DB90(ctx, base);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x8249fa78
	goto loc_8249FA78;
}

__attribute__((alias("__imp__sub_8249FE90"))) PPC_WEAK_FUNC(sub_8249FE90);
PPC_FUNC_IMPL(__imp__sub_8249FE90) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,23256
	r30.s64 = r11.s64 + 23256;
	// bne cr6,0x8249fee4
	if (!cr6.eq) goto loc_8249FEE4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,265
	ctx.r7.s64 = 265;
	// addi r5,r11,23244
	ctx.r5.s64 = r11.s64 + 23244;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8249FEE4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8249ff08
	if (!cr6.eq) goto loc_8249FF08;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,266
	ctx.r7.s64 = 266;
	// addi r5,r11,23228
	ctx.r5.s64 = r11.s64 + 23228;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8249FF08:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8249ff38
	if (!cr6.eq) goto loc_8249FF38;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,267
	ctx.r7.s64 = 267;
	// addi r5,r11,23208
	ctx.r5.s64 = r11.s64 + 23208;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8249FF2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249FF30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_8249FF38:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8249ff2c
	if (cr6.eq) goto loc_8249FF2C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8249ff2c
	if (cr6.eq) goto loc_8249FF2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a3f18
	sub_824A3F18(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824a55c8
	sub_824A55C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x8249ff30
	if (!cr0.eq) goto loc_8249FF30;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8249ff30
	goto loc_8249FF30;
}

__attribute__((alias("__imp__sub_8249FF74"))) PPC_WEAK_FUNC(sub_8249FF74);
PPC_FUNC_IMPL(__imp__sub_8249FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249FF78"))) PPC_WEAK_FUNC(sub_8249FF78);
PPC_FUNC_IMPL(__imp__sub_8249FF78) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8249ffbc
	if (!cr6.eq) goto loc_8249FFBC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,391
	ctx.r7.s64 = 391;
	// addi r6,r11,23256
	ctx.r6.s64 = r11.s64 + 23256;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23244
	ctx.r5.s64 = r11.s64 + 23244;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249ffcc
	goto loc_8249FFCC;
loc_8249FFBC:
	// bl 0x824a3f18
	sub_824A3F18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824a4fc0
	sub_824A4FC0(ctx, base);
loc_8249FFCC:
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

__attribute__((alias("__imp__sub_8249FFE0"))) PPC_WEAK_FUNC(sub_8249FFE0);
PPC_FUNC_IMPL(__imp__sub_8249FFE0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a001c
	if (!cr6.eq) goto loc_824A001C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,241
	ctx.r7.s64 = 241;
	// addi r6,r11,9312
	ctx.r6.s64 = r11.s64 + 9312;
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
loc_824A001C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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

__attribute__((alias("__imp__sub_824A0034"))) PPC_WEAK_FUNC(sub_824A0034);
PPC_FUNC_IMPL(__imp__sub_824A0034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0038"))) PPC_WEAK_FUNC(sub_824A0038);
PPC_FUNC_IMPL(__imp__sub_824A0038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8249ffe0
	sub_8249FFE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a0064
	if (!cr0.eq) goto loc_824A0064;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x824a0258
	goto loc_824A0258;
loc_824A0064:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x824a3f18
	sub_824A3F18(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x824a3f30
	sub_824A3F30(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x824a3f20
	sub_824A3F20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x824a3f38
	sub_824A3F38(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x824a3f40
	sub_824A3F40(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x8259b7b8
	sub_8259B7B8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x822d6eb0
	sub_822D6EB0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a0100
	if (!cr0.eq) goto loc_824A0100;
loc_824A00F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a0258
	goto loc_824A0258;
loc_824A0100:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a00f8
	if (!cr0.eq) goto loc_824A00F8;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824a5260
	sub_824A5260(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824a1da0
	sub_824A1DA0(ctx, base);
	// b 0x824a0150
	goto loc_824A0150;
loc_824A012C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x824a30d0
	sub_824A30D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a00f8
	if (!cr0.eq) goto loc_824A00F8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a20a0
	sub_824A20A0(ctx, base);
loc_824A0150:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a012c
	if (!cr0.eq) goto loc_824A012C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82538ce0
	sub_82538CE0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,23348
	r25.s64 = r11.s64 + 23348;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,23256
	r26.s64 = r11.s64 + 23256;
	// beq 0x824a019c
	if (cr0.eq) goto loc_824A019C;
	// li r7,520
	ctx.r7.s64 = 520;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A019C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x824a2398
	sub_824A2398(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a01ec
	if (!cr0.eq) goto loc_824A01EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,531
	ctx.r7.s64 = 531;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a0258
	goto loc_824A0258;
loc_824A01EC:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2910
	sub_824A2910(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824a5cf8
	sub_824A5CF8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x824a0224
	if (cr0.eq) goto loc_824A0224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2588
	sub_824A2588(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824a0258
	goto loc_824A0258;
loc_824A0224:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824a5180
	sub_824A5180(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x824a0254
	if (cr0.eq) goto loc_824A0254;
	// li r7,580
	ctx.r7.s64 = 580;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0254:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A0258:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_824A0260"))) PPC_WEAK_FUNC(sub_824A0260);
PPC_FUNC_IMPL(__imp__sub_824A0260) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23256
	r30.s64 = r11.s64 + 23256;
	// bne cr6,0x824a02a8
	if (!cr6.eq) goto loc_824A02A8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,619
	ctx.r7.s64 = 619;
	// addi r5,r11,23372
	ctx.r5.s64 = r11.s64 + 23372;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A02A8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825393e0
	sub_825393E0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x824a02d8
	if (!cr0.eq) goto loc_824A02D8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,623
	ctx.r7.s64 = 623;
	// addi r5,r11,23368
	ctx.r5.s64 = r11.s64 + 23368;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A02D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82539018
	sub_82539018(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a4ad0
	sub_824A4AD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A02F8"))) PPC_WEAK_FUNC(sub_824A02F8);
PPC_FUNC_IMPL(__imp__sub_824A02F8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23256
	r30.s64 = r11.s64 + 23256;
	// bne cr6,0x824a033c
	if (!cr6.eq) goto loc_824A033C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,659
	ctx.r7.s64 = 659;
	// addi r5,r11,23432
	ctx.r5.s64 = r11.s64 + 23432;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A033C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249ffe0
	sub_8249FFE0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x824a0368
	if (!cr0.eq) goto loc_824A0368;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,663
	ctx.r7.s64 = 663;
	// addi r5,r11,23420
	ctx.r5.s64 = r11.s64 + 23420;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0368:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a0390
	if (!cr0.eq) goto loc_824A0390;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,664
	ctx.r7.s64 = 664;
	// addi r5,r11,23380
	ctx.r5.s64 = r11.s64 + 23380;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0390:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a4af0
	sub_824A4AF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82539290
	sub_82539290(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A03B0"))) PPC_WEAK_FUNC(sub_824A03B0);
PPC_FUNC_IMPL(__imp__sub_824A03B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8253a740
	sub_8253A740(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a03f8
	if (!cr0.eq) goto loc_824A03F8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,73
	ctx.r7.s64 = 73;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,23448
	ctx.r5.s64 = r11.s64 + 23448;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A03F8:
	// li r11,0
	r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_824A0424"))) PPC_WEAK_FUNC(sub_824A0424);
PPC_FUNC_IMPL(__imp__sub_824A0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0428"))) PPC_WEAK_FUNC(sub_824A0428);
PPC_FUNC_IMPL(__imp__sub_824A0428) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824a0508
	if (cr6.eq) goto loc_824A0508;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0478
	if (!cr6.eq) goto loc_824A0478;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,115
	ctx.r7.s64 = 115;
	// addi r5,r11,23624
	ctx.r5.s64 = r11.s64 + 23624;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0478:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a04a0
	if (!cr6.eq) goto loc_824A04A0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,116
	ctx.r7.s64 = 116;
	// addi r5,r11,23604
	ctx.r5.s64 = r11.s64 + 23604;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A04A0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a04c8
	if (cr6.eq) goto loc_824A04C8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,119
	ctx.r7.s64 = 119;
	// addi r5,r11,23576
	ctx.r5.s64 = r11.s64 + 23576;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A04C8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a04f0
	if (cr6.eq) goto loc_824A04F0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,120
	ctx.r7.s64 = 120;
	// addi r5,r11,23548
	ctx.r5.s64 = r11.s64 + 23548;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A04F0:
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r28.u32);
loc_824A0508:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A0510"))) PPC_WEAK_FUNC(sub_824A0510);
PPC_FUNC_IMPL(__imp__sub_824A0510) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824a05ec
	if (cr6.eq) goto loc_824A05EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0560
	if (!cr6.eq) goto loc_824A0560;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,163
	ctx.r7.s64 = 163;
	// addi r5,r11,23656
	ctx.r5.s64 = r11.s64 + 23656;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0560:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a0588
	if (!cr6.eq) goto loc_824A0588;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,164
	ctx.r7.s64 = 164;
	// addi r5,r11,23636
	ctx.r5.s64 = r11.s64 + 23636;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0588:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a05b0
	if (cr6.eq) goto loc_824A05B0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,167
	ctx.r7.s64 = 167;
	// addi r5,r11,23576
	ctx.r5.s64 = r11.s64 + 23576;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A05B0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a05d8
	if (cr6.eq) goto loc_824A05D8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,168
	ctx.r7.s64 = 168;
	// addi r5,r11,23548
	ctx.r5.s64 = r11.s64 + 23548;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A05D8:
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
loc_824A05EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A05F4"))) PPC_WEAK_FUNC(sub_824A05F4);
PPC_FUNC_IMPL(__imp__sub_824A05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A05F8"))) PPC_WEAK_FUNC(sub_824A05F8);
PPC_FUNC_IMPL(__imp__sub_824A05F8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a0698
	if (cr6.eq) goto loc_824A0698;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0648
	if (!cr6.eq) goto loc_824A0648;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,264
	ctx.r7.s64 = 264;
	// addi r5,r11,23668
	ctx.r5.s64 = r11.s64 + 23668;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0648:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a0670
	if (!cr6.eq) goto loc_824A0670;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,265
	ctx.r7.s64 = 265;
	// addi r5,r11,23684
	ctx.r5.s64 = r11.s64 + 23684;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0670:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_824A0698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A06A0"))) PPC_WEAK_FUNC(sub_824A06A0);
PPC_FUNC_IMPL(__imp__sub_824A06A0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r28,r11,23464
	r28.s64 = r11.s64 + 23464;
	// bne cr6,0x824a06f0
	if (!cr6.eq) goto loc_824A06F0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,449
	ctx.r7.s64 = 449;
	// addi r5,r11,23752
	ctx.r5.s64 = r11.s64 + 23752;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A06F0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a0714
	if (!cr6.eq) goto loc_824A0714;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,450
	ctx.r7.s64 = 450;
	// addi r5,r11,23740
	ctx.r5.s64 = r11.s64 + 23740;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0714:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a0748
	if (!cr0.eq) goto loc_824A0748;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,456
	ctx.r7.s64 = 456;
	// addi r5,r11,23728
	ctx.r5.s64 = r11.s64 + 23728;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0748:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x824a03b0
	sub_824A03B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x824a079c
	if (!cr0.eq) goto loc_824A079C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,471
	ctx.r7.s64 = 471;
	// addi r5,r11,23708
	ctx.r5.s64 = r11.s64 + 23708;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A079C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A07D8"))) PPC_WEAK_FUNC(sub_824A07D8);
PPC_FUNC_IMPL(__imp__sub_824A07D8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r10,8972
	r28.s64 = ctx.r10.s64 + 8972;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r27,r10,23768
	r27.s64 = ctx.r10.s64 + 23768;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r26,r10,23464
	r26.s64 = ctx.r10.s64 + 23464;
	// bne 0x824a0814
	if (!cr0.eq) goto loc_824A0814;
	// li r29,0
	r29.s64 = 0;
	// b 0x824a0820
	goto loc_824A0820;
loc_824A0814:
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x824a0898
	if (!cr0.eq) goto loc_824A0898;
loc_824A0820:
	// li r7,515
	ctx.r7.s64 = 515;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x824a0898
	goto loc_824A0898;
loc_824A083C:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824a0854
	if (cr6.eq) goto loc_824A0854;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x824a086c
	if (!cr0.eq) goto loc_824A086C;
loc_824A0854:
	// li r7,524
	ctx.r7.s64 = 524;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A086C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A0898:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x824a083c
	if (!cr6.eq) goto loc_824A083C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x824a08b8
	if (cr0.eq) goto loc_824A08B8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A08B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8253a6d0
	sub_8253A6D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A08DC"))) PPC_WEAK_FUNC(sub_824A08DC);
PPC_FUNC_IMPL(__imp__sub_824A08DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A08E0"))) PPC_WEAK_FUNC(sub_824A08E0);
PPC_FUNC_IMPL(__imp__sub_824A08E0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r28,r11,23464
	r28.s64 = r11.s64 + 23464;
	// bne cr6,0x824a092c
	if (!cr6.eq) goto loc_824A092C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,570
	ctx.r7.s64 = 570;
	// addi r5,r11,23780
	ctx.r5.s64 = r11.s64 + 23780;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A092C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824a03b0
	sub_824A03B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a0958
	if (!cr0.eq) goto loc_824A0958;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,575
	ctx.r7.s64 = 575;
	// addi r5,r11,23448
	ctx.r5.s64 = r11.s64 + 23448;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0958:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r27.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r26.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x824a0510
	sub_824A0510(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a0980
	if (!cr6.eq) goto loc_824A0980;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
loc_824A0980:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A0994"))) PPC_WEAK_FUNC(sub_824A0994);
PPC_FUNC_IMPL(__imp__sub_824A0994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0998"))) PPC_WEAK_FUNC(sub_824A0998);
PPC_FUNC_IMPL(__imp__sub_824A0998) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a09e4
	if (!cr6.eq) goto loc_824A09E4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,621
	ctx.r7.s64 = 621;
	// addi r5,r11,23812
	ctx.r5.s64 = r11.s64 + 23812;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A09E4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x824a0a08
	if (!cr6.eq) goto loc_824A0A08;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,622
	ctx.r7.s64 = 622;
	// addi r5,r11,23800
	ctx.r5.s64 = r11.s64 + 23800;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0A08:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// beq cr6,0x824a0a50
	if (cr6.eq) goto loc_824A0A50;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,23788
	r28.s64 = r11.s64 + 23788;
loc_824A0A18:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x824a0a54
	if (cr6.eq) goto loc_824A0A54;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x824a0a48
	if (!cr0.eq) goto loc_824A0A48;
	// li r7,636
	ctx.r7.s64 = 636;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0A48:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x824a0a18
	if (!cr6.eq) goto loc_824A0A18;
loc_824A0A50:
	// li r31,0
	r31.s64 = 0;
loc_824A0A54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A0A60"))) PPC_WEAK_FUNC(sub_824A0A60);
PPC_FUNC_IMPL(__imp__sub_824A0A60) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0aa8
	if (!cr6.eq) goto loc_824A0AA8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,672
	ctx.r7.s64 = 672;
	// addi r5,r11,23780
	ctx.r5.s64 = r11.s64 + 23780;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0AA8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a0abc
	if (!cr0.eq) goto loc_824A0ABC;
	// li r28,0
	r28.s64 = 0;
	// b 0x824a0ac8
	goto loc_824A0AC8;
loc_824A0ABC:
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x824a0ae4
	if (!cr0.eq) goto loc_824A0AE4;
loc_824A0AC8:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,677
	ctx.r7.s64 = 677;
	// addi r5,r11,23824
	ctx.r5.s64 = r11.s64 + 23824;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0AE4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a0998
	sub_824A0998(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a0b00
	if (!cr0.eq) goto loc_824A0B00;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_824A0B00:
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A0B10"))) PPC_WEAK_FUNC(sub_824A0B10);
PPC_FUNC_IMPL(__imp__sub_824A0B10) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0b58
	if (!cr6.eq) goto loc_824A0B58;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,759
	ctx.r7.s64 = 759;
	// addi r5,r11,23780
	ctx.r5.s64 = r11.s64 + 23780;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0B58:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a0b6c
	if (!cr0.eq) goto loc_824A0B6C;
	// li r28,0
	r28.s64 = 0;
	// b 0x824a0b78
	goto loc_824A0B78;
loc_824A0B6C:
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x824a0b94
	if (!cr0.eq) goto loc_824A0B94;
loc_824A0B78:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,765
	ctx.r7.s64 = 765;
	// addi r5,r11,23824
	ctx.r5.s64 = r11.s64 + 23824;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0B94:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a0998
	sub_824A0998(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a0bb0
	if (!cr0.eq) goto loc_824A0BB0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_824A0BB0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r30,16(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x824a0bf8
	if (cr6.eq) goto loc_824A0BF8;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x824a0bdc
	if (!cr6.eq) goto loc_824A0BDC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_824A0BDC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824a0bec
	if (cr6.eq) goto loc_824A0BEC;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A0BEC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_824A0BF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A0C04"))) PPC_WEAK_FUNC(sub_824A0C04);
PPC_FUNC_IMPL(__imp__sub_824A0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0C08"))) PPC_WEAK_FUNC(sub_824A0C08);
PPC_FUNC_IMPL(__imp__sub_824A0C08) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0c5c
	if (!cr6.eq) goto loc_824A0C5C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// addi r5,r11,23900
	ctx.r5.s64 = r11.s64 + 23900;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0C5C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a0c80
	if (!cr6.eq) goto loc_824A0C80;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1011
	ctx.r7.s64 = 1011;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0C80:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a0ca8
	if (cr6.eq) goto loc_824A0CA8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1014
	ctx.r7.s64 = 1014;
	// addi r5,r11,23872
	ctx.r5.s64 = r11.s64 + 23872;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0CA8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a0cd0
	if (cr6.eq) goto loc_824A0CD0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// addi r5,r11,23852
	ctx.r5.s64 = r11.s64 + 23852;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0CD0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// bl 0x824a03b0
	sub_824A03B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x824a0d10
	if (!cr0.eq) goto loc_824A0D10;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1031
	ctx.r7.s64 = 1031;
	// addi r5,r11,23832
	ctx.r5.s64 = r11.s64 + 23832;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0D10:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A0D50"))) PPC_WEAK_FUNC(sub_824A0D50);
PPC_FUNC_IMPL(__imp__sub_824A0D50) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r26,r11,23464
	r26.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0d94
	if (!cr6.eq) goto loc_824A0D94;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1076
	ctx.r7.s64 = 1076;
	// addi r5,r11,23900
	ctx.r5.s64 = r11.s64 + 23900;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0D94:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824a0da8
	if (cr0.eq) goto loc_824A0DA8;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_824A0DA8:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x824a0e20
	if (cr6.eq) goto loc_824A0E20;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,23768
	r28.s64 = r11.s64 + 23768;
loc_824A0DB8:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824a0dd0
	if (cr6.eq) goto loc_824A0DD0;
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x824a0de8
	if (!cr0.eq) goto loc_824A0DE8;
loc_824A0DD0:
	// li r7,1088
	ctx.r7.s64 = 1088;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0DE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x824a0db8
	if (!cr6.eq) goto loc_824A0DB8;
loc_824A0E20:
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x824a0e34
	if (cr0.eq) goto loc_824A0E34;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A0E34:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a0e5c
	if (!cr6.eq) goto loc_824A0E5C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8253a6d0
	sub_8253A6D0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A0E5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A0E64"))) PPC_WEAK_FUNC(sub_824A0E64);
PPC_FUNC_IMPL(__imp__sub_824A0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0E68"))) PPC_WEAK_FUNC(sub_824A0E68);
PPC_FUNC_IMPL(__imp__sub_824A0E68) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r26,r11,23464
	r26.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0eb4
	if (!cr6.eq) goto loc_824A0EB4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1143
	ctx.r7.s64 = 1143;
	// addi r5,r11,23900
	ctx.r5.s64 = r11.s64 + 23900;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0EB4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824a03b0
	sub_824A03B0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x824a0ee0
	if (!cr0.eq) goto loc_824A0EE0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1147
	ctx.r7.s64 = 1147;
	// addi r5,r11,23448
	ctx.r5.s64 = r11.s64 + 23448;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0EE0:
	// stw r25,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r25.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r30,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r10,23788
	r29.s64 = ctx.r10.s64 + 23788;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a0f04
	if (!cr0.eq) goto loc_824A0F04;
	// li r30,0
	r30.s64 = 0;
	// b 0x824a0f10
	goto loc_824A0F10;
loc_824A0F04:
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x824a0f48
	if (!cr0.eq) goto loc_824A0F48;
loc_824A0F10:
	// li r7,1158
	ctx.r7.s64 = 1158;
	// b 0x824a0f34
	goto loc_824A0F34;
loc_824A0F18:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bgt cr6,0x824a0f54
	if (cr6.gt) goto loc_824A0F54;
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x824a0f48
	if (!cr0.eq) goto loc_824A0F48;
	// li r7,1168
	ctx.r7.s64 = 1168;
loc_824A0F34:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0F48:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x824a0f18
	if (!cr6.eq) goto loc_824A0F18;
loc_824A0F54:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a0510
	sub_824A0510(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a0f74
	if (!cr6.eq) goto loc_824A0F74;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_824A0F74:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A0F88"))) PPC_WEAK_FUNC(sub_824A0F88);
PPC_FUNC_IMPL(__imp__sub_824A0F88) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a0fd4
	if (!cr6.eq) goto loc_824A0FD4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1212
	ctx.r7.s64 = 1212;
	// addi r5,r11,23812
	ctx.r5.s64 = r11.s64 + 23812;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0FD4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x824a0ff8
	if (!cr6.eq) goto loc_824A0FF8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1213
	ctx.r7.s64 = 1213;
	// addi r5,r11,23800
	ctx.r5.s64 = r11.s64 + 23800;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A0FF8:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// beq cr6,0x824a1040
	if (cr6.eq) goto loc_824A1040;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,23788
	r28.s64 = r11.s64 + 23788;
loc_824A1008:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x824a1044
	if (cr6.eq) goto loc_824A1044;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x824a1038
	if (!cr0.eq) goto loc_824A1038;
	// li r7,1227
	ctx.r7.s64 = 1227;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1038:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x824a1008
	if (!cr6.eq) goto loc_824A1008;
loc_824A1040:
	// li r31,0
	r31.s64 = 0;
loc_824A1044:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A1050"))) PPC_WEAK_FUNC(sub_824A1050);
PPC_FUNC_IMPL(__imp__sub_824A1050) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1098
	if (!cr6.eq) goto loc_824A1098;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// addi r5,r11,23900
	ctx.r5.s64 = r11.s64 + 23900;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1098:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a10ac
	if (!cr0.eq) goto loc_824A10AC;
	// li r28,0
	r28.s64 = 0;
	// b 0x824a10b8
	goto loc_824A10B8;
loc_824A10AC:
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x824a10d4
	if (!cr0.eq) goto loc_824A10D4;
loc_824A10B8:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1267
	ctx.r7.s64 = 1267;
	// addi r5,r11,23824
	ctx.r5.s64 = r11.s64 + 23824;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A10D4:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a0f88
	sub_824A0F88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a10f0
	if (!cr0.eq) goto loc_824A10F0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_824A10F0:
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A1100"))) PPC_WEAK_FUNC(sub_824A1100);
PPC_FUNC_IMPL(__imp__sub_824A1100) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1144
	if (!cr6.eq) goto loc_824A1144;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1304
	ctx.r7.s64 = 1304;
	// addi r5,r11,23900
	ctx.r5.s64 = r11.s64 + 23900;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1144:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a1158
	if (!cr0.eq) goto loc_824A1158;
	// li r28,0
	r28.s64 = 0;
	// b 0x824a1164
	goto loc_824A1164;
loc_824A1158:
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x824a1180
	if (!cr0.eq) goto loc_824A1180;
loc_824A1164:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1310
	ctx.r7.s64 = 1310;
	// addi r5,r11,23812
	ctx.r5.s64 = r11.s64 + 23812;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1180:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x824a0f88
	sub_824A0F88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a11a0
	if (!cr0.eq) goto loc_824A11A0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_824A11A0:
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A11B0"))) PPC_WEAK_FUNC(sub_824A11B0);
PPC_FUNC_IMPL(__imp__sub_824A11B0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a11f8
	if (!cr6.eq) goto loc_824A11F8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// addi r5,r11,23900
	ctx.r5.s64 = r11.s64 + 23900;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A11F8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a120c
	if (!cr0.eq) goto loc_824A120C;
	// li r28,0
	r28.s64 = 0;
	// b 0x824a1218
	goto loc_824A1218;
loc_824A120C:
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x824a1234
	if (!cr0.eq) goto loc_824A1234;
loc_824A1218:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1427
	ctx.r7.s64 = 1427;
	// addi r5,r11,23824
	ctx.r5.s64 = r11.s64 + 23824;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1234:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a0998
	sub_824A0998(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a1250
	if (!cr0.eq) goto loc_824A1250;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_824A1250:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r30,16(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x824a1298
	if (cr6.eq) goto loc_824A1298;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x824a127c
	if (!cr6.eq) goto loc_824A127C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_824A127C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824a128c
	if (cr6.eq) goto loc_824A128C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A128C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_824A1298:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A12A4"))) PPC_WEAK_FUNC(sub_824A12A4);
PPC_FUNC_IMPL(__imp__sub_824A12A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A12A8"))) PPC_WEAK_FUNC(sub_824A12A8);
PPC_FUNC_IMPL(__imp__sub_824A12A8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r28,r11,23464
	r28.s64 = r11.s64 + 23464;
	// bne cr6,0x824a12ec
	if (!cr6.eq) goto loc_824A12EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1485
	ctx.r7.s64 = 1485;
	// addi r5,r11,23900
	ctx.r5.s64 = r11.s64 + 23900;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A12EC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a1300
	if (!cr0.eq) goto loc_824A1300;
	// li r30,0
	r30.s64 = 0;
	// b 0x824a130c
	goto loc_824A130C;
loc_824A1300:
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x824a1328
	if (!cr0.eq) goto loc_824A1328;
loc_824A130C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1491
	ctx.r7.s64 = 1491;
	// addi r5,r11,23824
	ctx.r5.s64 = r11.s64 + 23824;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1328:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x824a1374
	if (cr6.eq) goto loc_824A1374;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x824a1358
	if (!cr6.eq) goto loc_824A1358;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_824A1358:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824a1368
	if (cr6.eq) goto loc_824A1368;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A1368:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_824A1374:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A1380"))) PPC_WEAK_FUNC(sub_824A1380);
PPC_FUNC_IMPL(__imp__sub_824A1380) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a13bc
	if (!cr6.eq) goto loc_824A13BC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23900
	ctx.r5.s64 = r11.s64 + 23900;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A13BC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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

__attribute__((alias("__imp__sub_824A13D4"))) PPC_WEAK_FUNC(sub_824A13D4);
PPC_FUNC_IMPL(__imp__sub_824A13D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A13D8"))) PPC_WEAK_FUNC(sub_824A13D8);
PPC_FUNC_IMPL(__imp__sub_824A13D8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a142c
	if (!cr0.eq) goto loc_824A142C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1609
	ctx.r7.s64 = 1609;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A142C:
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

__attribute__((alias("__imp__sub_824A1444"))) PPC_WEAK_FUNC(sub_824A1444);
PPC_FUNC_IMPL(__imp__sub_824A1444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A1448"))) PPC_WEAK_FUNC(sub_824A1448);
PPC_FUNC_IMPL(__imp__sub_824A1448) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a149c
	if (!cr0.eq) goto loc_824A149C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1650
	ctx.r7.s64 = 1650;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A149C:
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

__attribute__((alias("__imp__sub_824A14B4"))) PPC_WEAK_FUNC(sub_824A14B4);
PPC_FUNC_IMPL(__imp__sub_824A14B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A14B8"))) PPC_WEAK_FUNC(sub_824A14B8);
PPC_FUNC_IMPL(__imp__sub_824A14B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A14C0"))) PPC_WEAK_FUNC(sub_824A14C0);
PPC_FUNC_IMPL(__imp__sub_824A14C0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1508
	if (!cr6.eq) goto loc_824A1508;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// addi r5,r11,23972
	ctx.r5.s64 = r11.s64 + 23972;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1508:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a152c
	if (!cr6.eq) goto loc_824A152C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2229
	ctx.r7.s64 = 2229;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A152C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a1554
	if (cr6.eq) goto loc_824A1554;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2232
	ctx.r7.s64 = 2232;
	// addi r5,r11,23948
	ctx.r5.s64 = r11.s64 + 23948;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1554:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a157c
	if (cr6.eq) goto loc_824A157C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2233
	ctx.r7.s64 = 2233;
	// addi r5,r11,23928
	ctx.r5.s64 = r11.s64 + 23928;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A157C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// bl 0x824a03b0
	sub_824A03B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// bne 0x824a15b0
	if (!cr0.eq) goto loc_824A15B0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2242
	ctx.r7.s64 = 2242;
	// addi r5,r11,23908
	ctx.r5.s64 = r11.s64 + 23908;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A15B0:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A15E0"))) PPC_WEAK_FUNC(sub_824A15E0);
PPC_FUNC_IMPL(__imp__sub_824A15E0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r27,r11,23464
	r27.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1624
	if (!cr6.eq) goto loc_824A1624;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2279
	ctx.r7.s64 = 2279;
	// addi r5,r11,23972
	ctx.r5.s64 = r11.s64 + 23972;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1624:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r25,r10,23768
	r25.s64 = ctx.r10.s64 + 23768;
	// bne 0x824a1640
	if (!cr0.eq) goto loc_824A1640;
	// li r31,0
	r31.s64 = 0;
	// b 0x824a164c
	goto loc_824A164C;
loc_824A1640:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x824a1664
	if (!cr0.eq) goto loc_824A1664;
loc_824A164C:
	// li r7,2284
	ctx.r7.s64 = 2284;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1664:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x824a16e8
	if (cr6.eq) goto loc_824A16E8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,23984
	r26.s64 = r11.s64 + 23984;
loc_824A1678:
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a1690
	if (cr6.eq) goto loc_824A1690;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x824a16a8
	if (!cr0.eq) goto loc_824A16A8;
loc_824A1690:
	// li r7,2293
	ctx.r7.s64 = 2293;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A16A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x824a16d4
	if (!cr0.eq) goto loc_824A16D4;
	// li r7,2297
	ctx.r7.s64 = 2297;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x824a16dc
	goto loc_824A16DC;
loc_824A16D4:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A16DC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x824a1678
	if (!cr6.eq) goto loc_824A1678;
loc_824A16E8:
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x824a16fc
	if (cr0.eq) goto loc_824A16FC;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A16FC:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a1724
	if (!cr6.eq) goto loc_824A1724;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8253a6d0
	sub_8253A6D0(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A1724:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A172C"))) PPC_WEAK_FUNC(sub_824A172C);
PPC_FUNC_IMPL(__imp__sub_824A172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A1730"))) PPC_WEAK_FUNC(sub_824A1730);
PPC_FUNC_IMPL(__imp__sub_824A1730) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a176c
	if (!cr6.eq) goto loc_824A176C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2334
	ctx.r7.s64 = 2334;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23972
	ctx.r5.s64 = r11.s64 + 23972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A176C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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

__attribute__((alias("__imp__sub_824A1784"))) PPC_WEAK_FUNC(sub_824A1784);
PPC_FUNC_IMPL(__imp__sub_824A1784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A1788"))) PPC_WEAK_FUNC(sub_824A1788);
PPC_FUNC_IMPL(__imp__sub_824A1788) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a17dc
	if (!cr0.eq) goto loc_824A17DC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2712
	ctx.r7.s64 = 2712;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A17DC:
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

__attribute__((alias("__imp__sub_824A17F4"))) PPC_WEAK_FUNC(sub_824A17F4);
PPC_FUNC_IMPL(__imp__sub_824A17F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A17F8"))) PPC_WEAK_FUNC(sub_824A17F8);
PPC_FUNC_IMPL(__imp__sub_824A17F8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a184c
	if (!cr0.eq) goto loc_824A184C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2753
	ctx.r7.s64 = 2753;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A184C:
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

__attribute__((alias("__imp__sub_824A1864"))) PPC_WEAK_FUNC(sub_824A1864);
PPC_FUNC_IMPL(__imp__sub_824A1864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A1868"))) PPC_WEAK_FUNC(sub_824A1868);
PPC_FUNC_IMPL(__imp__sub_824A1868) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a18b0
	if (!cr6.eq) goto loc_824A18B0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2913
	ctx.r7.s64 = 2913;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A18B0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a18d4
	if (!cr6.eq) goto loc_824A18D4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2914
	ctx.r7.s64 = 2914;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A18D4:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a18fc
	if (cr6.eq) goto loc_824A18FC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2917
	ctx.r7.s64 = 2917;
	// addi r5,r11,24036
	ctx.r5.s64 = r11.s64 + 24036;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A18FC:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a1924
	if (cr6.eq) goto loc_824A1924;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// addi r5,r11,24016
	ctx.r5.s64 = r11.s64 + 24016;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1924:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// bl 0x824a03b0
	sub_824A03B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// bne 0x824a1958
	if (!cr0.eq) goto loc_824A1958;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2927
	ctx.r7.s64 = 2927;
	// addi r5,r11,23996
	ctx.r5.s64 = r11.s64 + 23996;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1958:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A1988"))) PPC_WEAK_FUNC(sub_824A1988);
PPC_FUNC_IMPL(__imp__sub_824A1988) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r10,8972
	r28.s64 = ctx.r10.s64 + 8972;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r27,r10,23768
	r27.s64 = ctx.r10.s64 + 23768;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r26,r10,23464
	r26.s64 = ctx.r10.s64 + 23464;
	// bne 0x824a19c4
	if (!cr0.eq) goto loc_824A19C4;
	// li r29,0
	r29.s64 = 0;
	// b 0x824a19d0
	goto loc_824A19D0;
loc_824A19C4:
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x824a1a48
	if (!cr0.eq) goto loc_824A1A48;
loc_824A19D0:
	// li r7,2964
	ctx.r7.s64 = 2964;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x824a1a48
	goto loc_824A1A48;
loc_824A19EC:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824a1a04
	if (cr6.eq) goto loc_824A1A04;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x824a1a1c
	if (!cr0.eq) goto loc_824A1A1C;
loc_824A1A04:
	// li r7,2973
	ctx.r7.s64 = 2973;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1A1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A1A48:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x824a19ec
	if (!cr6.eq) goto loc_824A19EC;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x824a1a68
	if (cr0.eq) goto loc_824A1A68;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
loc_824A1A68:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a1a90
	if (!cr6.eq) goto loc_824A1A90;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8253a6d0
	sub_8253A6D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A1A90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A1A98"))) PPC_WEAK_FUNC(sub_824A1A98);
PPC_FUNC_IMPL(__imp__sub_824A1A98) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a1ad4
	if (!cr6.eq) goto loc_824A1AD4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3010
	ctx.r7.s64 = 3010;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1AD4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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

__attribute__((alias("__imp__sub_824A1AEC"))) PPC_WEAK_FUNC(sub_824A1AEC);
PPC_FUNC_IMPL(__imp__sub_824A1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A1AF0"))) PPC_WEAK_FUNC(sub_824A1AF0);
PPC_FUNC_IMPL(__imp__sub_824A1AF0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1b38
	if (!cr6.eq) goto loc_824A1B38;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3031
	ctx.r7.s64 = 3031;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1B38:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a1b5c
	if (!cr6.eq) goto loc_824A1B5C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3032
	ctx.r7.s64 = 3032;
	// addi r5,r11,23700
	ctx.r5.s64 = r11.s64 + 23700;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1B5C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x824a1b84
	if (!cr6.eq) goto loc_824A1B84;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3033
	ctx.r7.s64 = 3033;
	// addi r5,r11,24072
	ctx.r5.s64 = r11.s64 + 24072;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1B84:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x824a0428
	sub_824A0428(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a1ba4
	if (!cr6.eq) goto loc_824A1BA4;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_824A1BA4:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A1BB8"))) PPC_WEAK_FUNC(sub_824A1BB8);
PPC_FUNC_IMPL(__imp__sub_824A1BB8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1c00
	if (!cr6.eq) goto loc_824A1C00;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1C00:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x824a03b0
	sub_824A03B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x824a1c2c
	if (!cr0.eq) goto loc_824A1C2C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3075
	ctx.r7.s64 = 3075;
	// addi r5,r11,23448
	ctx.r5.s64 = r11.s64 + 23448;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1C2C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a1af0
	sub_824A1AF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A1C48"))) PPC_WEAK_FUNC(sub_824A1C48);
PPC_FUNC_IMPL(__imp__sub_824A1C48) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1c90
	if (!cr6.eq) goto loc_824A1C90;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3105
	ctx.r7.s64 = 3105;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1C90:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a1cb4
	if (!cr6.eq) goto loc_824A1CB4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3106
	ctx.r7.s64 = 3106;
	// addi r5,r11,23700
	ctx.r5.s64 = r11.s64 + 23700;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1CB4:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x824a1cdc
	if (!cr6.eq) goto loc_824A1CDC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3107
	ctx.r7.s64 = 3107;
	// addi r5,r11,24072
	ctx.r5.s64 = r11.s64 + 24072;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1CDC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x824a0510
	sub_824A0510(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a1cfc
	if (!cr6.eq) goto loc_824A1CFC;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_824A1CFC:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A1D10"))) PPC_WEAK_FUNC(sub_824A1D10);
PPC_FUNC_IMPL(__imp__sub_824A1D10) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1d58
	if (!cr6.eq) goto loc_824A1D58;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1D58:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x824a03b0
	sub_824A03B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x824a1d84
	if (!cr0.eq) goto loc_824A1D84;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3149
	ctx.r7.s64 = 3149;
	// addi r5,r11,23448
	ctx.r5.s64 = r11.s64 + 23448;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1D84:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a1c48
	sub_824A1C48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A1DA0"))) PPC_WEAK_FUNC(sub_824A1DA0);
PPC_FUNC_IMPL(__imp__sub_824A1DA0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,23464
	r29.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1de4
	if (!cr6.eq) goto loc_824A1DE4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3202
	ctx.r7.s64 = 3202;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1DE4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a1df8
	if (!cr6.eq) goto loc_824A1DF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a1e38
	goto loc_824A1E38;
loc_824A1DF8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a1e0c
	if (!cr0.eq) goto loc_824A1E0C;
	// li r31,0
	r31.s64 = 0;
	// b 0x824a1e18
	goto loc_824A1E18;
loc_824A1E0C:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x824a1e34
	if (!cr0.eq) goto loc_824A1E34;
loc_824A1E18:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// addi r5,r11,23824
	ctx.r5.s64 = r11.s64 + 23824;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1E34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A1E38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A1E40"))) PPC_WEAK_FUNC(sub_824A1E40);
PPC_FUNC_IMPL(__imp__sub_824A1E40) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1e84
	if (!cr6.eq) goto loc_824A1E84;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3388
	ctx.r7.s64 = 3388;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1E84:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a1e98
	if (!cr6.eq) goto loc_824A1E98;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a1f10
	goto loc_824A1F10;
loc_824A1E98:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a1eac
	if (!cr0.eq) goto loc_824A1EAC;
	// li r28,0
	r28.s64 = 0;
	// b 0x824a1eb8
	goto loc_824A1EB8;
loc_824A1EAC:
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x824a1ed4
	if (!cr0.eq) goto loc_824A1ED4;
loc_824A1EB8:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3399
	ctx.r7.s64 = 3399;
	// addi r5,r11,23824
	ctx.r5.s64 = r11.s64 + 23824;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1ED4:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x824a1efc
	if (!cr6.eq) goto loc_824A1EFC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3402
	ctx.r7.s64 = 3402;
	// addi r5,r11,24112
	ctx.r5.s64 = r11.s64 + 24112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1EFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
loc_824A1F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A1F18"))) PPC_WEAK_FUNC(sub_824A1F18);
PPC_FUNC_IMPL(__imp__sub_824A1F18) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a1f5c
	if (!cr6.eq) goto loc_824A1F5C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3430
	ctx.r7.s64 = 3430;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1F5C:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a1f70
	if (!cr6.eq) goto loc_824A1F70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a1fe8
	goto loc_824A1FE8;
loc_824A1F70:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a1f84
	if (!cr0.eq) goto loc_824A1F84;
	// li r28,0
	r28.s64 = 0;
	// b 0x824a1f90
	goto loc_824A1F90;
loc_824A1F84:
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x824a1fac
	if (!cr0.eq) goto loc_824A1FAC;
loc_824A1F90:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3441
	ctx.r7.s64 = 3441;
	// addi r5,r11,24104
	ctx.r5.s64 = r11.s64 + 24104;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1FAC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x824a1fd4
	if (!cr6.eq) goto loc_824A1FD4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3444
	ctx.r7.s64 = 3444;
	// addi r5,r11,24144
	ctx.r5.s64 = r11.s64 + 24144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A1FD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
loc_824A1FE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A1FF0"))) PPC_WEAK_FUNC(sub_824A1FF0);
PPC_FUNC_IMPL(__imp__sub_824A1FF0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,23464
	r30.s64 = r11.s64 + 23464;
	// bne cr6,0x824a2038
	if (!cr6.eq) goto loc_824A2038;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3473
	ctx.r7.s64 = 3473;
	// addi r5,r11,24060
	ctx.r5.s64 = r11.s64 + 24060;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2038:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a205c
	if (!cr6.eq) goto loc_824A205C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3474
	ctx.r7.s64 = 3474;
	// addi r5,r11,23700
	ctx.r5.s64 = r11.s64 + 23700;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A205C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x824a2084
	if (!cr6.eq) goto loc_824A2084;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3477
	ctx.r7.s64 = 3477;
	// addi r5,r11,24072
	ctx.r5.s64 = r11.s64 + 24072;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2084:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a05f8
	sub_824A05F8(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A20A0"))) PPC_WEAK_FUNC(sub_824A20A0);
PPC_FUNC_IMPL(__imp__sub_824A20A0) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x824a20e8
	if (!cr6.eq) goto loc_824A20E8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3540
	ctx.r7.s64 = 3540;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,23700
	ctx.r5.s64 = r11.s64 + 23700;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a20ec
	goto loc_824A20EC;
loc_824A20E8:
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_824A20EC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x824a20fc
	if (!cr6.eq) goto loc_824A20FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A20FC:
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

__attribute__((alias("__imp__sub_824A2110"))) PPC_WEAK_FUNC(sub_824A2110);
PPC_FUNC_IMPL(__imp__sub_824A2110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x824a213c
	if (!cr6.eq) goto loc_824A213C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3575
	ctx.r7.s64 = 3575;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23700
	ctx.r5.s64 = r11.s64 + 23700;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// b 0x8249d0e0
	sub_8249D0E0(ctx, base);
	return;
loc_824A213C:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8253a840
	sub_8253A840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A2144"))) PPC_WEAK_FUNC(sub_824A2144);
PPC_FUNC_IMPL(__imp__sub_824A2144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2148"))) PPC_WEAK_FUNC(sub_824A2148);
PPC_FUNC_IMPL(__imp__sub_824A2148) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a2184
	if (!cr6.eq) goto loc_824A2184;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3596
	ctx.r7.s64 = 3596;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23700
	ctx.r5.s64 = r11.s64 + 23700;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2184:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
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

__attribute__((alias("__imp__sub_824A219C"))) PPC_WEAK_FUNC(sub_824A219C);
PPC_FUNC_IMPL(__imp__sub_824A219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A21A0"))) PPC_WEAK_FUNC(sub_824A21A0);
PPC_FUNC_IMPL(__imp__sub_824A21A0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a21f4
	if (!cr0.eq) goto loc_824A21F4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3636
	ctx.r7.s64 = 3636;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A21F4:
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

__attribute__((alias("__imp__sub_824A220C"))) PPC_WEAK_FUNC(sub_824A220C);
PPC_FUNC_IMPL(__imp__sub_824A220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2210"))) PPC_WEAK_FUNC(sub_824A2210);
PPC_FUNC_IMPL(__imp__sub_824A2210) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a2264
	if (!cr0.eq) goto loc_824A2264;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,3676
	ctx.r7.s64 = 3676;
	// addi r6,r11,23464
	ctx.r6.s64 = r11.s64 + 23464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2264:
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

__attribute__((alias("__imp__sub_824A227C"))) PPC_WEAK_FUNC(sub_824A227C);
PPC_FUNC_IMPL(__imp__sub_824A227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2280"))) PPC_WEAK_FUNC(sub_824A2280);
PPC_FUNC_IMPL(__imp__sub_824A2280) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2288"))) PPC_WEAK_FUNC(sub_824A2288);
PPC_FUNC_IMPL(__imp__sub_824A2288) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r28,r11,23464
	r28.s64 = r11.s64 + 23464;
	// bne cr6,0x824a22d8
	if (!cr6.eq) goto loc_824A22D8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2860
	ctx.r7.s64 = 2860;
	// addi r5,r11,23752
	ctx.r5.s64 = r11.s64 + 23752;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A22D8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a22fc
	if (!cr6.eq) goto loc_824A22FC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2861
	ctx.r7.s64 = 2861;
	// addi r5,r11,23740
	ctx.r5.s64 = r11.s64 + 23740;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A22FC:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a2330
	if (!cr0.eq) goto loc_824A2330;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2867
	ctx.r7.s64 = 2867;
	// addi r5,r11,23728
	ctx.r5.s64 = r11.s64 + 23728;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2330:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a2378
	if (!cr0.eq) goto loc_824A2378;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2878
	ctx.r7.s64 = 2878;
	// addi r5,r11,23892
	ctx.r5.s64 = r11.s64 + 23892;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2378:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a1868
	sub_824A1868(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A2398"))) PPC_WEAK_FUNC(sub_824A2398);
PPC_FUNC_IMPL(__imp__sub_824A2398) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r29,r11,24280
	r29.s64 = r11.s64 + 24280;
	// bne cr6,0x824a23f8
	if (!cr6.eq) goto loc_824A23F8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,155
	ctx.r7.s64 = 155;
	// addi r5,r11,23752
	ctx.r5.s64 = r11.s64 + 23752;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A23F8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x824a241c
	if (!cr6.eq) goto loc_824A241C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,156
	ctx.r7.s64 = 156;
	// addi r5,r11,23740
	ctx.r5.s64 = r11.s64 + 23740;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A241C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x824a2440
	if (!cr6.eq) goto loc_824A2440;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,157
	ctx.r7.s64 = 157;
	// addi r5,r11,24268
	ctx.r5.s64 = r11.s64 + 24268;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2440:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a2464
	if (!cr6.eq) goto loc_824A2464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,158
	ctx.r7.s64 = 158;
	// addi r5,r11,24252
	ctx.r5.s64 = r11.s64 + 24252;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2464:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x824a2488
	if (!cr6.eq) goto loc_824A2488;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,159
	ctx.r7.s64 = 159;
	// addi r5,r11,24236
	ctx.r5.s64 = r11.s64 + 24236;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2488:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a24ac
	if (!cr6.eq) goto loc_824A24AC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,160
	ctx.r7.s64 = 160;
	// addi r5,r11,24220
	ctx.r5.s64 = r11.s64 + 24220;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A24AC:
	// li r4,2452
	ctx.r4.s64 = 2452;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a24e8
	if (!cr0.eq) goto loc_824A24E8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,166
	ctx.r7.s64 = 166;
	// addi r5,r11,24176
	ctx.r5.s64 = r11.s64 + 24176;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a257c
	goto loc_824A257C;
loc_824A24E8:
	// li r11,0
	r11.s64 = 0;
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r23,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r23.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r22.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r25.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r10,2448(r31)
	PPC_STORE_U32(r31.u32 + 2448, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r21,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r21.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x8253ade0
	sub_8253ADE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,2428(r31)
	PPC_STORE_U32(r31.u32 + 2428, r11.u32);
	// bl 0x8253ade0
	sub_8253ADE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,2436(r31)
	PPC_STORE_U32(r31.u32 + 2436, r11.u32);
	// bl 0x8253ade0
	sub_8253ADE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,2440(r31)
	PPC_STORE_U32(r31.u32 + 2440, r11.u32);
	// bl 0x8253a950
	sub_8253A950(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,2432(r31)
	PPC_STORE_U32(r31.u32 + 2432, r11.u32);
	// bl 0x8253aba0
	sub_8253ABA0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,2444(r31)
	PPC_STORE_U32(r31.u32 + 2444, r11.u32);
loc_824A257C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_824A2584"))) PPC_WEAK_FUNC(sub_824A2584);
PPC_FUNC_IMPL(__imp__sub_824A2584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2588"))) PPC_WEAK_FUNC(sub_824A2588);
PPC_FUNC_IMPL(__imp__sub_824A2588) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,24280
	r29.s64 = r11.s64 + 24280;
	// bne cr6,0x824a25cc
	if (!cr6.eq) goto loc_824A25CC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,230
	ctx.r7.s64 = 230;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A25CC:
	// lwz r11,2448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2448);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,2448(r31)
	PPC_STORE_U32(r31.u32 + 2448, r11.u32);
	// bne 0x824a2750
	if (!cr0.eq) goto loc_824A2750;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a2600
	if (cr6.eq) goto loc_824A2600;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,241
	ctx.r7.s64 = 241;
	// addi r5,r11,24376
	ctx.r5.s64 = r11.s64 + 24376;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2600:
	// lwz r4,2444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2444);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8253ac38
	sub_8253AC38(ctx, base);
	// b 0x824a2634
	goto loc_824A2634;
loc_824A2610:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2110
	sub_824A2110(ctx, base);
loc_824A2634:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2440);
	// bl 0x824a1e40
	sub_824A1E40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a2610
	if (!cr0.eq) goto loc_824A2610;
	// lwz r4,2440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2440);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8253ae78
	sub_8253AE78(ctx, base);
	// b 0x824a2678
	goto loc_824A2678;
loc_824A2654:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2110
	sub_824A2110(ctx, base);
loc_824A2678:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2436);
	// bl 0x824a1e40
	sub_824A1E40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a2654
	if (!cr0.eq) goto loc_824A2654;
	// lwz r4,2436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2436);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8253ae78
	sub_8253AE78(ctx, base);
	// b 0x824a26bc
	goto loc_824A26BC;
loc_824A2698:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2110
	sub_824A2110(ctx, base);
loc_824A26BC:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2428);
	// bl 0x824a1e40
	sub_824A1E40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a2698
	if (!cr0.eq) goto loc_824A2698;
	// lwz r4,2428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2428);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8253ae78
	sub_8253AE78(ctx, base);
	// b 0x824a26ec
	goto loc_824A26EC;
loc_824A26DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A26EC:
	// lwz r3,2432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2432);
	// bl 0x824a12a8
	sub_824A12A8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x824a26dc
	if (!cr0.eq) goto loc_824A26DC;
	// lwz r4,2432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2432);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8253a9f8
	sub_8253A9F8(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x824a3ec0
	sub_824A3EC0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a2720
	if (cr0.eq) goto loc_824A2720;
	// bl 0x8253b5a8
	sub_8253B5A8(ctx, base);
loc_824A2720:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x824a273c
	if (cr0.eq) goto loc_824A273C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A273C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A2750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A2758"))) PPC_WEAK_FUNC(sub_824A2758);
PPC_FUNC_IMPL(__imp__sub_824A2758) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a2794
	if (!cr6.eq) goto loc_824A2794;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,314
	ctx.r7.s64 = 314;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2794:
	// lwz r11,2448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2448);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2448(r31)
	PPC_STORE_U32(r31.u32 + 2448, r11.u32);
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

__attribute__((alias("__imp__sub_824A27B4"))) PPC_WEAK_FUNC(sub_824A27B4);
PPC_FUNC_IMPL(__imp__sub_824A27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A27B8"))) PPC_WEAK_FUNC(sub_824A27B8);
PPC_FUNC_IMPL(__imp__sub_824A27B8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,24280
	r29.s64 = r11.s64 + 24280;
	// bne cr6,0x824a2800
	if (!cr6.eq) goto loc_824A2800;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,376
	ctx.r7.s64 = 376;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2800:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x824a2828
	if (!cr6.eq) goto loc_824A2828;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x824a2850
	goto loc_824A2850;
loc_824A2828:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq cr6,0x824a284c
	if (cr6.eq) goto loc_824A284C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,395
	ctx.r7.s64 = 395;
	// addi r5,r11,24396
	ctx.r5.s64 = r11.s64 + 24396;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A284C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_824A2850:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8253b458
	sub_8253B458(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A2874"))) PPC_WEAK_FUNC(sub_824A2874);
PPC_FUNC_IMPL(__imp__sub_824A2874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2878"))) PPC_WEAK_FUNC(sub_824A2878);
PPC_FUNC_IMPL(__imp__sub_824A2878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a2894
	if (cr6.eq) goto loc_824A2894;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
loc_824A2894:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A289C"))) PPC_WEAK_FUNC(sub_824A289C);
PPC_FUNC_IMPL(__imp__sub_824A289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A28A0"))) PPC_WEAK_FUNC(sub_824A28A0);
PPC_FUNC_IMPL(__imp__sub_824A28A0) {
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
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x824a28ec
	if (cr6.lt) goto loc_824A28EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,309
	ctx.r7.s64 = 309;
	// addi r6,r11,9312
	ctx.r6.s64 = r11.s64 + 9312;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9240
	ctx.r5.s64 = r11.s64 + 9240;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A28EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_824A2910"))) PPC_WEAK_FUNC(sub_824A2910);
PPC_FUNC_IMPL(__imp__sub_824A2910) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a2954
	if (!cr6.eq) goto loc_824A2954;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,452
	ctx.r7.s64 = 452;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2954:
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
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

__attribute__((alias("__imp__sub_824A2970"))) PPC_WEAK_FUNC(sub_824A2970);
PPC_FUNC_IMPL(__imp__sub_824A2970) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a29ac
	if (!cr6.eq) goto loc_824A29AC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,472
	ctx.r7.s64 = 472;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A29AC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
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

__attribute__((alias("__imp__sub_824A29C4"))) PPC_WEAK_FUNC(sub_824A29C4);
PPC_FUNC_IMPL(__imp__sub_824A29C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A29C8"))) PPC_WEAK_FUNC(sub_824A29C8);
PPC_FUNC_IMPL(__imp__sub_824A29C8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a2a0c
	if (!cr6.eq) goto loc_824A2A0C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,498
	ctx.r7.s64 = 498;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2A0C:
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
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

__attribute__((alias("__imp__sub_824A2A28"))) PPC_WEAK_FUNC(sub_824A2A28);
PPC_FUNC_IMPL(__imp__sub_824A2A28) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,24280
	r29.s64 = r11.s64 + 24280;
	// bne cr6,0x824a2a78
	if (!cr6.eq) goto loc_824A2A78;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,550
	ctx.r7.s64 = 550;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2A78:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r27,8
	ctx.r4.s64 = r27.s64 + 8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// bne 0x824a2abc
	if (!cr0.eq) goto loc_824A2ABC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,557
	ctx.r7.s64 = 557;
	// addi r5,r11,24512
	ctx.r5.s64 = r11.s64 + 24512;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a2b48
	goto loc_824A2B48;
loc_824A2ABC:
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a2b04
	if (cr0.eq) goto loc_824A2B04;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,563
	ctx.r7.s64 = 563;
	// addi r5,r11,24468
	ctx.r5.s64 = r11.s64 + 24468;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2B04:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,16384
	cr6.compare<uint32_t>(r11.u32, 16384, xer);
	// blt cr6,0x824a2b30
	if (cr6.lt) goto loc_824A2B30;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r5,r11,24428
	ctx.r5.s64 = r11.s64 + 24428;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2B30:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A2B48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A2B50"))) PPC_WEAK_FUNC(sub_824A2B50);
PPC_FUNC_IMPL(__imp__sub_824A2B50) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a2b8c
	if (!cr6.eq) goto loc_824A2B8C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,591
	ctx.r7.s64 = 591;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2B8C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
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

__attribute__((alias("__imp__sub_824A2BA4"))) PPC_WEAK_FUNC(sub_824A2BA4);
PPC_FUNC_IMPL(__imp__sub_824A2BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2BA8"))) PPC_WEAK_FUNC(sub_824A2BA8);
PPC_FUNC_IMPL(__imp__sub_824A2BA8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,9312
	r27.s64 = r11.s64 + 9312;
	// blt cr6,0x824a2bf8
	if (cr6.lt) goto loc_824A2BF8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,634
	ctx.r7.s64 = 634;
	// addi r5,r11,9464
	ctx.r5.s64 = r11.s64 + 9464;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2BF8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r30,r30,12
	r30.s64 = r30.s64 * 12;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x824a2c2c
	if (cr6.lt) goto loc_824A2C2C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,634
	ctx.r7.s64 = 634;
	// addi r5,r11,9392
	ctx.r5.s64 = r11.s64 + 9392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2C2C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A2C54"))) PPC_WEAK_FUNC(sub_824A2C54);
PPC_FUNC_IMPL(__imp__sub_824A2C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2C58"))) PPC_WEAK_FUNC(sub_824A2C58);
PPC_FUNC_IMPL(__imp__sub_824A2C58) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,24280
	r30.s64 = r11.s64 + 24280;
	// bne cr6,0x824a2ca4
	if (!cr6.eq) goto loc_824A2CA4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,919
	ctx.r7.s64 = 919;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2CA4:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// blt cr6,0x824a2cc8
	if (cr6.lt) goto loc_824A2CC8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,920
	ctx.r7.s64 = 920;
	// addi r5,r11,24708
	ctx.r5.s64 = r11.s64 + 24708;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2CC8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x824a2cec
	if (!cr6.eq) goto loc_824A2CEC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,921
	ctx.r7.s64 = 921;
	// addi r5,r11,24740
	ctx.r5.s64 = r11.s64 + 24740;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2CEC:
	// mulli r11,r28,148
	r11.s64 = r28.s64 * 148;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,60
	ctx.r4.s64 = r11.s64 + 60;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A2D10"))) PPC_WEAK_FUNC(sub_824A2D10);
PPC_FUNC_IMPL(__imp__sub_824A2D10) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a2d4c
	if (!cr6.eq) goto loc_824A2D4C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,997
	ctx.r7.s64 = 997;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2D4C:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2428);
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

__attribute__((alias("__imp__sub_824A2D64"))) PPC_WEAK_FUNC(sub_824A2D64);
PPC_FUNC_IMPL(__imp__sub_824A2D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2D68"))) PPC_WEAK_FUNC(sub_824A2D68);
PPC_FUNC_IMPL(__imp__sub_824A2D68) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,24280
	r30.s64 = r11.s64 + 24280;
	// bne cr6,0x824a2db4
	if (!cr6.eq) goto loc_824A2DB4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2DB4:
	// cmpwi cr6,r28,1966
	cr6.compare<int32_t>(r28.s32, 1966, xer);
	// bge cr6,0x824a2dd8
	if (!cr6.lt) goto loc_824A2DD8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// addi r5,r11,24928
	ctx.r5.s64 = r11.s64 + 24928;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2DD8:
	// cmpwi cr6,r28,2086
	cr6.compare<int32_t>(r28.s32, 2086, xer);
	// blt cr6,0x824a2dfc
	if (cr6.lt) goto loc_824A2DFC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// addi r5,r11,24900
	ctx.r5.s64 = r11.s64 + 24900;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2DFC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x824a2e3c
	if (!cr0.eq) goto loc_824A2E3C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1110
	ctx.r7.s64 = 1110;
	// addi r5,r11,24840
	ctx.r5.s64 = r11.s64 + 24840;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a2e50
	goto loc_824A2E50;
loc_824A2E3C:
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r28.u32);
	// stw r27,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r27.u32);
	// lwz r3,2440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 2440);
	// bl 0x824a1d10
	sub_824A1D10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A2E50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A2E58"))) PPC_WEAK_FUNC(sub_824A2E58);
PPC_FUNC_IMPL(__imp__sub_824A2E58) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a2e94
	if (!cr6.eq) goto loc_824A2E94;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2E94:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2440);
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

__attribute__((alias("__imp__sub_824A2EAC"))) PPC_WEAK_FUNC(sub_824A2EAC);
PPC_FUNC_IMPL(__imp__sub_824A2EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2EB0"))) PPC_WEAK_FUNC(sub_824A2EB0);
PPC_FUNC_IMPL(__imp__sub_824A2EB0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,24280
	r29.s64 = r11.s64 + 24280;
	// bne cr6,0x824a2f00
	if (!cr6.eq) goto loc_824A2F00;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1177
	ctx.r7.s64 = 1177;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A2F00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x824a2f40
	if (!cr0.eq) goto loc_824A2F40;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1186
	ctx.r7.s64 = 1186;
	// addi r5,r11,24952
	ctx.r5.s64 = r11.s64 + 24952;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a2f60
	goto loc_824A2F60;
loc_824A2F40:
	// li r11,0
	r11.s64 = 0;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r27.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r26.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2436);
	// bl 0x824a1d10
	sub_824A1D10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A2F60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A2F68"))) PPC_WEAK_FUNC(sub_824A2F68);
PPC_FUNC_IMPL(__imp__sub_824A2F68) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824a2fac
	if (cr6.eq) goto loc_824A2FAC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,268
	ctx.r7.s64 = 268;
	// addi r6,r11,25056
	ctx.r6.s64 = r11.s64 + 25056;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,25020
	ctx.r5.s64 = r11.s64 + 25020;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a2fb0
	goto loc_824A2FB0;
loc_824A2FAC:
	// li r3,32
	ctx.r3.s64 = 32;
loc_824A2FB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2FC0"))) PPC_WEAK_FUNC(sub_824A2FC0);
PPC_FUNC_IMPL(__imp__sub_824A2FC0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,24280
	r29.s64 = r11.s64 + 24280;
	// bne cr6,0x824a3010
	if (!cr6.eq) goto loc_824A3010;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3010:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x824a3050
	if (!cr0.eq) goto loc_824A3050;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// addi r5,r11,24952
	ctx.r5.s64 = r11.s64 + 24952;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a3070
	goto loc_824A3070;
loc_824A3050:
	// li r11,2
	r11.s64 = 2;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r27.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r26.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2436);
	// bl 0x824a1d10
	sub_824A1D10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A3070:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A3078"))) PPC_WEAK_FUNC(sub_824A3078);
PPC_FUNC_IMPL(__imp__sub_824A3078) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a30b4
	if (!cr6.eq) goto loc_824A30B4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1327
	ctx.r7.s64 = 1327;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A30B4:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2436);
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

__attribute__((alias("__imp__sub_824A30CC"))) PPC_WEAK_FUNC(sub_824A30CC);
PPC_FUNC_IMPL(__imp__sub_824A30CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A30D0"))) PPC_WEAK_FUNC(sub_824A30D0);
PPC_FUNC_IMPL(__imp__sub_824A30D0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r28,r11,24280
	r28.s64 = r11.s64 + 24280;
	// bne cr6,0x824a311c
	if (!cr6.eq) goto loc_824A311C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A311C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a3140
	if (!cr6.eq) goto loc_824A3140;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1534
	ctx.r7.s64 = 1534;
	// addi r5,r11,23368
	ctx.r5.s64 = r11.s64 + 23368;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3140:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a3078
	sub_824A3078(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x824a316c
	if (!cr0.eq) goto loc_824A316C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// addi r5,r11,25160
	ctx.r5.s64 = r11.s64 + 25160;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A316C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824a1da0
	sub_824A1DA0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x824a323c
	if (cr0.eq) goto loc_824A323C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,25148
	r25.s64 = r11.s64 + 25148;
loc_824A3184:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a31ac
	if (!cr0.eq) goto loc_824A31AC;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A31AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x824a31fc
	if (cr6.lt) goto loc_824A31FC;
	// beq cr6,0x824a31e8
	if (cr6.eq) goto loc_824A31E8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x824a3220
	if (!cr6.lt) goto loc_824A3220;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_824A31D8:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x824a3248
	if (!cr6.eq) goto loc_824A3248;
	// li r30,1
	r30.s64 = 1;
	// b 0x824a3228
	goto loc_824A3228;
loc_824A31E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x824a31d8
	goto loc_824A31D8;
loc_824A31FC:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// bl 0x8253bdf8
	sub_8253BDF8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x824a3220
	if (cr6.eq) goto loc_824A3220;
	// li r30,0
	r30.s64 = 0;
loc_824A3220:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824a3248
	if (cr6.eq) goto loc_824A3248;
loc_824A3228:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824a20a0
	sub_824A20A0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x824a3184
	if (!cr0.eq) goto loc_824A3184;
loc_824A323C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824A3240:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_824A3248:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a3240
	goto loc_824A3240;
}

__attribute__((alias("__imp__sub_824A3250"))) PPC_WEAK_FUNC(sub_824A3250);
PPC_FUNC_IMPL(__imp__sub_824A3250) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,24280
	r29.s64 = r11.s64 + 24280;
	// bne cr6,0x824a32a4
	if (!cr6.eq) goto loc_824A32A4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1647
	ctx.r7.s64 = 1647;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A32A4:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a32cc
	if (!cr6.eq) goto loc_824A32CC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1648
	ctx.r7.s64 = 1648;
	// addi r5,r11,25176
	ctx.r5.s64 = r11.s64 + 25176;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A32CC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8253b5c8
	sub_8253B5C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A32EC"))) PPC_WEAK_FUNC(sub_824A32EC);
PPC_FUNC_IMPL(__imp__sub_824A32EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A32F0"))) PPC_WEAK_FUNC(sub_824A32F0);
PPC_FUNC_IMPL(__imp__sub_824A32F0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,24280
	r30.s64 = r11.s64 + 24280;
	// bne cr6,0x824a3348
	if (!cr6.eq) goto loc_824A3348;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1756
	ctx.r7.s64 = 1756;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3348:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a3370
	if (!cr6.eq) goto loc_824A3370;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1757
	ctx.r7.s64 = 1757;
	// addi r5,r11,25176
	ctx.r5.s64 = r11.s64 + 25176;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3370:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a3394
	if (!cr6.eq) goto loc_824A3394;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1758
	ctx.r7.s64 = 1758;
	// addi r5,r11,23368
	ctx.r5.s64 = r11.s64 + 23368;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3394:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8253bcc0
	sub_8253BCC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq cr6,0x824a33c4
	if (cr6.eq) goto loc_824A33C4;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// bne cr6,0x824a33fc
	if (!cr6.eq) goto loc_824A33FC;
loc_824A33C4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x824a33fc
	if (!cr6.eq) goto loc_824A33FC;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a33fc
	if (!cr6.eq) goto loc_824A33FC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a2fc0
	sub_824A2FC0(ctx, base);
loc_824A33FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_824A3408"))) PPC_WEAK_FUNC(sub_824A3408);
PPC_FUNC_IMPL(__imp__sub_824A3408) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a3444
	if (!cr6.eq) goto loc_824A3444;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1795
	ctx.r7.s64 = 1795;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3444:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
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

__attribute__((alias("__imp__sub_824A345C"))) PPC_WEAK_FUNC(sub_824A345C);
PPC_FUNC_IMPL(__imp__sub_824A345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3460"))) PPC_WEAK_FUNC(sub_824A3460);
PPC_FUNC_IMPL(__imp__sub_824A3460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a34a8
	if (!cr6.eq) goto loc_824A34A8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1830
	ctx.r7.s64 = 1830;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A34A8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x824a3bb0
	sub_824A3BB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A34C8"))) PPC_WEAK_FUNC(sub_824A34C8);
PPC_FUNC_IMPL(__imp__sub_824A34C8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a3510
	if (!cr6.eq) goto loc_824A3510;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1870
	ctx.r7.s64 = 1870;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3510:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824a3c18
	sub_824A3C18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A3530"))) PPC_WEAK_FUNC(sub_824A3530);
PPC_FUNC_IMPL(__imp__sub_824A3530) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a3570
	if (!cr6.eq) goto loc_824A3570;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1903
	ctx.r7.s64 = 1903;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3570:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824a3c98
	sub_824A3C98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A3588"))) PPC_WEAK_FUNC(sub_824A3588);
PPC_FUNC_IMPL(__imp__sub_824A3588) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a35c4
	if (!cr6.eq) goto loc_824A35C4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,1962
	ctx.r7.s64 = 1962;
	// addi r6,r11,24280
	ctx.r6.s64 = r11.s64 + 24280;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A35C4:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
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

__attribute__((alias("__imp__sub_824A35DC"))) PPC_WEAK_FUNC(sub_824A35DC);
PPC_FUNC_IMPL(__imp__sub_824A35DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A35E0"))) PPC_WEAK_FUNC(sub_824A35E0);
PPC_FUNC_IMPL(__imp__sub_824A35E0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,24280
	r30.s64 = r11.s64 + 24280;
	// bne cr6,0x824a3624
	if (!cr6.eq) goto loc_824A3624;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2014
	ctx.r7.s64 = 2014;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3624:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a364c
	if (!cr6.eq) goto loc_824A364C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,2018
	ctx.r7.s64 = 2018;
	// addi r5,r11,25188
	ctx.r5.s64 = r11.s64 + 25188;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A364C:
	// addi r4,r29,52
	ctx.r4.s64 = r29.s64 + 52;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x824a3cc0
	sub_824A3CC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A3668"))) PPC_WEAK_FUNC(sub_824A3668);
PPC_FUNC_IMPL(__imp__sub_824A3668) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r24,r11,8972
	r24.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r23,r11,24280
	r23.s64 = r11.s64 + 24280;
	// bne cr6,0x824a36cc
	if (!cr6.eq) goto loc_824A36CC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,657
	ctx.r7.s64 = 657;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A36CC:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(r29.u32, 16, xer);
	// blt cr6,0x824a36f0
	if (cr6.lt) goto loc_824A36F0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,658
	ctx.r7.s64 = 658;
	// addi r5,r11,24708
	ctx.r5.s64 = r11.s64 + 24708;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A36F0:
	// mulli r11,r29,148
	r11.s64 = r29.s64 * 148;
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// add r27,r11,r30
	r27.u64 = r11.u64 + r30.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r19,1
	r19.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r7,r10,r28
	ctx.r7.s64 = r28.s64 - ctx.r10.s64;
	// subf r6,r10,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r10.s64;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r27,112
	r11.s64 = r27.s64 + 112;
	// stw r31,192(r27)
	PPC_STORE_U32(r27.u32 + 192, r31.u32);
	// stw r19,60(r27)
	PPC_STORE_U32(r27.u32 + 60, r19.u32);
loc_824A3720:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r26,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, r26.u32);
	// beq cr6,0x824a3738
	if (cr6.eq) goto loc_824A3738;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// b 0x824a373c
	goto loc_824A373C;
loc_824A3738:
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
loc_824A373C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a374c
	if (cr6.eq) goto loc_824A374C;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x824a3750
	goto loc_824A3750;
loc_824A374C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824A3750:
	// stw r4,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r4.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824a3768
	if (cr6.eq) goto loc_824A3768;
	// lwzx r4,r6,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r4.u32);
	// b 0x824a376c
	goto loc_824A376C;
loc_824A3768:
	// stw r19,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r19.u32);
loc_824A376C:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x824a3720
	if (!cr0.eq) goto loc_824A3720;
	// mulli r10,r29,37
	ctx.r10.s64 = r29.s64 * 37;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// addi r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 + 40;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
loc_824A3794:
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stwx r22,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + r30.u32, r22.u32);
	// stwx r20,r5,r30
	PPC_STORE_U32(ctx.r5.u32 + r30.u32, r20.u32);
	// stwx r11,r4,r30
	PPC_STORE_U32(ctx.r4.u32 + r30.u32, r11.u32);
	// blt cr6,0x824a37f4
	if (cr6.lt) goto loc_824A37F4;
	// beq cr6,0x824a37ec
	if (cr6.eq) goto loc_824A37EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x824a37e4
	if (cr6.lt) goto loc_824A37E4;
	// beq cr6,0x824a37dc
	if (cr6.eq) goto loc_824A37DC;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x824a3814
	if (cr6.lt) goto loc_824A3814;
	// b 0x824a37f8
	goto loc_824A37F8;
loc_824A37DC:
	// clrlwi r25,r21,24
	r25.u64 = r21.u32 & 0xFF;
	// b 0x824a37f8
	goto loc_824A37F8;
loc_824A37E4:
	// rlwinm r25,r21,24,24,31
	r25.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 24) & 0xFF;
	// b 0x824a37f8
	goto loc_824A37F8;
loc_824A37EC:
	// rlwinm r25,r21,16,24,31
	r25.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 16) & 0xFF;
	// b 0x824a37f8
	goto loc_824A37F8;
loc_824A37F4:
	// rlwinm r25,r21,8,24,31
	r25.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 8) & 0xFF;
loc_824A37F8:
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(r25.u32, 2, xer);
	// bne cr6,0x824a3808
	if (!cr6.eq) goto loc_824A3808;
	// mr r25,r19
	r25.u64 = r19.u64;
	// b 0x824a3818
	goto loc_824A3818;
loc_824A3808:
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(r25.u32, 4, xer);
	// li r25,2
	r25.s64 = 2;
	// beq cr6,0x824a3818
	if (cr6.eq) goto loc_824A3818;
loc_824A3814:
	// li r25,0
	r25.s64 = 0;
loc_824A3818:
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// stwx r25,r6,r30
	PPC_STORE_U32(ctx.r6.u32 + r30.u32, r25.u32);
	// blt cr6,0x824a3794
	if (cr6.lt) goto loc_824A3794;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(r22.s32, 2, xer);
	// beq cr6,0x824a38f4
	if (cr6.eq) goto loc_824A38F4;
	// ble cr6,0x824a389c
	if (!cr6.gt) goto loc_824A389C;
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(r22.s32, 4, xer);
	// bgt cr6,0x824a389c
	if (cr6.gt) goto loc_824A389C;
	// lwz r11,200(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a386c
	if (cr6.eq) goto loc_824A386C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,742
	ctx.r7.s64 = 742;
	// addi r5,r11,24652
	ctx.r5.s64 = r11.s64 + 24652;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A386C:
	// lwz r11,204(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a3894
	if (cr6.eq) goto loc_824A3894;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,743
	ctx.r7.s64 = 743;
	// addi r5,r11,24600
	ctx.r5.s64 = r11.s64 + 24600;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3894:
	// stw r19,196(r27)
	PPC_STORE_U32(r27.u32 + 196, r19.u32);
	// b 0x824a3948
	goto loc_824A3948;
loc_824A389C:
	// lwz r11,196(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a38c4
	if (cr6.eq) goto loc_824A38C4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,758
	ctx.r7.s64 = 758;
	// addi r5,r11,24548
	ctx.r5.s64 = r11.s64 + 24548;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A38C4:
	// lwz r11,200(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a38ec
	if (cr6.eq) goto loc_824A38EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,759
	ctx.r7.s64 = 759;
	// addi r5,r11,24652
	ctx.r5.s64 = r11.s64 + 24652;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A38EC:
	// stw r19,204(r27)
	PPC_STORE_U32(r27.u32 + 204, r19.u32);
	// b 0x824a3948
	goto loc_824A3948;
loc_824A38F4:
	// lwz r11,196(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a391c
	if (cr6.eq) goto loc_824A391C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,750
	ctx.r7.s64 = 750;
	// addi r5,r11,24548
	ctx.r5.s64 = r11.s64 + 24548;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A391C:
	// lwz r11,204(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a3944
	if (cr6.eq) goto loc_824A3944;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,751
	ctx.r7.s64 = 751;
	// addi r5,r11,24600
	ctx.r5.s64 = r11.s64 + 24600;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3944:
	// stw r19,200(r27)
	PPC_STORE_U32(r27.u32 + 200, r19.u32);
loc_824A3948:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_824A3950"))) PPC_WEAK_FUNC(sub_824A3950);
PPC_FUNC_IMPL(__imp__sub_824A3950) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r28,r11,24280
	r28.s64 = r11.s64 + 24280;
	// bne cr6,0x824a3998
	if (!cr6.eq) goto loc_824A3998;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,956
	ctx.r7.s64 = 956;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3998:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x824a39bc
	if (!cr6.eq) goto loc_824A39BC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,957
	ctx.r7.s64 = 957;
	// addi r5,r11,24828
	ctx.r5.s64 = r11.s64 + 24828;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A39BC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2f68
	sub_824A2F68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a3a04
	if (!cr0.eq) goto loc_824A3A04;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,966
	ctx.r7.s64 = 966;
	// addi r5,r11,24760
	ctx.r5.s64 = r11.s64 + 24760;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a3a2c
	goto loc_824A3A2C;
loc_824A3A04:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2f68
	sub_824A2F68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,2428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 2428);
	// bl 0x824a1d10
	sub_824A1D10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A3A2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A3A34"))) PPC_WEAK_FUNC(sub_824A3A34);
PPC_FUNC_IMPL(__imp__sub_824A3A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3A38"))) PPC_WEAK_FUNC(sub_824A3A38);
PPC_FUNC_IMPL(__imp__sub_824A3A38) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r29,r11,25208
	r29.s64 = r11.s64 + 25208;
	// bne cr6,0x824a3a88
	if (!cr6.eq) goto loc_824A3A88;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,74
	ctx.r7.s64 = 74;
	// addi r5,r11,23752
	ctx.r5.s64 = r11.s64 + 23752;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3A88:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a3aac
	if (!cr6.eq) goto loc_824A3AAC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,75
	ctx.r7.s64 = 75;
	// addi r5,r11,23740
	ctx.r5.s64 = r11.s64 + 23740;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3AAC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x824a3ad0
	if (!cr6.eq) goto loc_824A3AD0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,76
	ctx.r7.s64 = 76;
	// addi r5,r11,24268
	ctx.r5.s64 = r11.s64 + 24268;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3AD0:
	// li r4,2704
	ctx.r4.s64 = 2704;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a3b08
	if (!cr0.eq) goto loc_824A3B08;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r5,r11,25200
	ctx.r5.s64 = r11.s64 + 25200;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x824a3b58
	goto loc_824A3B58;
loc_824A3B08:
	// li r11,0
	r11.s64 = 0;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
loc_824A3B20:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// blt cr6,0x824a3b20
	if (cr6.lt) goto loc_824A3B20;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,1168
	ctx.r10.s64 = r31.s64 + 1168;
loc_824A3B40:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x824a3b40
	if (cr6.lt) goto loc_824A3B40;
loc_824A3B58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A3B64"))) PPC_WEAK_FUNC(sub_824A3B64);
PPC_FUNC_IMPL(__imp__sub_824A3B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3B68"))) PPC_WEAK_FUNC(sub_824A3B68);
PPC_FUNC_IMPL(__imp__sub_824A3B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r10,32
	ctx.r10.s64 = 32;
loc_824A3B70:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r9,0,12,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// bne 0x824a3b70
	if (!cr0.eq) goto loc_824A3B70;
	// addi r11,r3,1168
	r11.s64 = ctx.r3.s64 + 1168;
	// li r10,128
	ctx.r10.s64 = 128;
loc_824A3B90:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r9,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bne 0x824a3b90
	if (!cr0.eq) goto loc_824A3B90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3BAC"))) PPC_WEAK_FUNC(sub_824A3BAC);
PPC_FUNC_IMPL(__imp__sub_824A3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3BB0"))) PPC_WEAK_FUNC(sub_824A3BB0);
PPC_FUNC_IMPL(__imp__sub_824A3BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mulli r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 * 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r5,r8,20,8,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF00000;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// slw r11,r6,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r5,r11
	r11.u64 = ctx.r5.u64 | r11.u64;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// and r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r9,r11,0,20,11
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r9.u64 & 0xFF000);
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// stfs f1,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3C18"))) PPC_WEAK_FUNC(sub_824A3C18);
PPC_FUNC_IMPL(__imp__sub_824A3C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x8239bcf8
	// li r30,1
	r30.s64 = 1;
	// addi r8,r5,3
	ctx.r8.s64 = ctx.r5.s64 + 3;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,3
	r29.s64 = 3;
	// mulli r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 * 36;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r31,r5,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r8,r30,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r5.u8 & 0x3F));
	// add r5,r31,r10
	ctx.r5.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r28,r8,20,8,11
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF00000;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// slw r10,r29,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// slw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r9.u8 & 0x3F));
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r31,r10,12,0,19
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
	// or r10,r28,r10
	ctx.r10.u64 = r28.u64 | ctx.r10.u64;
	// and r31,r31,r10
	r31.u64 = r31.u64 & ctx.r10.u64;
	// or r9,r31,r9
	ctx.r9.u64 = r31.u64 | ctx.r9.u64;
	// rlwimi r9,r10,0,20,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r9.u64 & 0xFF000);
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// stw r6,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// stwx r7,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r7.u32);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A3C94"))) PPC_WEAK_FUNC(sub_824A3C94);
PPC_FUNC_IMPL(__imp__sub_824A3C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3C98"))) PPC_WEAK_FUNC(sub_824A3C98);
PPC_FUNC_IMPL(__imp__sub_824A3C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,36
	r11.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r5,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r5.u32);
	// rlwimi r9,r10,13,8,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0xFFF000) | (ctx.r9.u64 & 0xFFFFFFFFFF000FFF);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3CBC"))) PPC_WEAK_FUNC(sub_824A3CBC);
PPC_FUNC_IMPL(__imp__sub_824A3CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3CC0"))) PPC_WEAK_FUNC(sub_824A3CC0);
PPC_FUNC_IMPL(__imp__sub_824A3CC0) {
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
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r27,r11,25208
	r27.s64 = r11.s64 + 25208;
	// bne cr6,0x824a3d18
	if (!cr6.eq) goto loc_824A3D18;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,401
	ctx.r7.s64 = 401;
	// addi r5,r11,25200
	ctx.r5.s64 = r11.s64 + 25200;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3D18:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x824a3d3c
	if (!cr6.eq) goto loc_824A3D3C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,402
	ctx.r7.s64 = 402;
	// addi r5,r11,25320
	ctx.r5.s64 = r11.s64 + 25320;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A3D3C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a3eb4
	if (cr6.eq) goto loc_824A3EB4;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x824a3eb4
	if (cr6.eq) goto loc_824A3EB4;
	// addi r24,r31,16
	r24.s64 = r31.s64 + 16;
	// li r11,32
	r11.s64 = 32;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_824A3D58:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x824a3d68
	if (cr0.eq) goto loc_824A3D68;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_824A3D68:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bne 0x824a3d58
	if (!cr0.eq) goto loc_824A3D58;
	// addi r25,r31,1168
	r25.s64 = r31.s64 + 1168;
	// li r11,128
	r11.s64 = 128;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_824A3D80:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x824a3d90
	if (cr0.eq) goto loc_824A3D90;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_824A3D90:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x824a3d80
	if (!cr0.eq) goto loc_824A3D80;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a3dac
	if (!cr6.eq) goto loc_824A3DAC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x824a3df4
	if (cr6.eq) goto loc_824A3DF4;
loc_824A3DAC:
	// mulli r11,r28,3
	r11.s64 = r28.s64 * 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a3e00
	if (!cr0.eq) goto loc_824A3E00;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,443
	ctx.r7.s64 = 443;
	// addi r5,r11,25312
	ctx.r5.s64 = r11.s64 + 25312;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r23,16
	r23.s64 = 16;
loc_824A3DF4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r30,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r30.u32);
	// b 0x824a3eb8
	goto loc_824A3EB8;
loc_824A3E00:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r26,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r26.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// beq cr6,0x824a3e58
	if (cr6.eq) goto loc_824A3E58;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_824A3E28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a3e4c
	if (cr0.eq) goto loc_824A3E4C;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_824A3E4C:
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a3e28
	if (!cr6.eq) goto loc_824A3E28;
loc_824A3E58:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x824a3df4
	if (cr6.eq) goto loc_824A3DF4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// beq cr6,0x824a3df4
	if (cr6.eq) goto loc_824A3DF4;
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_824A3E80:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x824a3ea8
	if (cr0.eq) goto loc_824A3EA8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_824A3EA8:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// b 0x824a3e80
	goto loc_824A3E80;
loc_824A3EB4:
	// li r3,25
	ctx.r3.s64 = 25;
loc_824A3EB8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_824A3EC0"))) PPC_WEAK_FUNC(sub_824A3EC0);
PPC_FUNC_IMPL(__imp__sub_824A3EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824A3EDC"))) PPC_WEAK_FUNC(sub_824A3EDC);
PPC_FUNC_IMPL(__imp__sub_824A3EDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3EE0"))) PPC_WEAK_FUNC(sub_824A3EE0);
PPC_FUNC_IMPL(__imp__sub_824A3EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a3f00
	if (cr6.eq) goto loc_824A3F00;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824a3ef8
	if (cr6.eq) goto loc_824A3EF8;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_824A3EF8:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_824A3F00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F08"))) PPC_WEAK_FUNC(sub_824A3F08);
PPC_FUNC_IMPL(__imp__sub_824A3F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F10"))) PPC_WEAK_FUNC(sub_824A3F10);
PPC_FUNC_IMPL(__imp__sub_824A3F10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F18"))) PPC_WEAK_FUNC(sub_824A3F18);
PPC_FUNC_IMPL(__imp__sub_824A3F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F20"))) PPC_WEAK_FUNC(sub_824A3F20);
PPC_FUNC_IMPL(__imp__sub_824A3F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F28"))) PPC_WEAK_FUNC(sub_824A3F28);
PPC_FUNC_IMPL(__imp__sub_824A3F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F30"))) PPC_WEAK_FUNC(sub_824A3F30);
PPC_FUNC_IMPL(__imp__sub_824A3F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F38"))) PPC_WEAK_FUNC(sub_824A3F38);
PPC_FUNC_IMPL(__imp__sub_824A3F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F40"))) PPC_WEAK_FUNC(sub_824A3F40);
PPC_FUNC_IMPL(__imp__sub_824A3F40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F48"))) PPC_WEAK_FUNC(sub_824A3F48);
PPC_FUNC_IMPL(__imp__sub_824A3F48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F50"))) PPC_WEAK_FUNC(sub_824A3F50);
PPC_FUNC_IMPL(__imp__sub_824A3F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3F5C"))) PPC_WEAK_FUNC(sub_824A3F5C);
PPC_FUNC_IMPL(__imp__sub_824A3F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3F60"))) PPC_WEAK_FUNC(sub_824A3F60);
PPC_FUNC_IMPL(__imp__sub_824A3F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r4.u32);
	// b 0x824a08e0
	sub_824A08E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3F7C"))) PPC_WEAK_FUNC(sub_824A3F7C);
PPC_FUNC_IMPL(__imp__sub_824A3F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3F80"))) PPC_WEAK_FUNC(sub_824A3F80);
PPC_FUNC_IMPL(__imp__sub_824A3F80) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824a3fe4
	if (cr6.eq) goto loc_824A3FE4;
loc_824A3FA4:
	// lwz r11,76(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x824a3fc8
	if (cr6.gt) goto loc_824A3FC8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824a0a60
	sub_824A0A60(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x824a3fa4
	if (!cr6.eq) goto loc_824A3FA4;
loc_824A3FC8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a3fe4
	if (cr6.eq) goto loc_824A3FE4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a3fe4
	if (cr6.eq) goto loc_824A3FE4;
	// lwz r11,76(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x824a4008
	if (!cr6.gt) goto loc_824A4008;
loc_824A3FE4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,642
	ctx.r7.s64 = 642;
	// addi r6,r11,25440
	ctx.r6.s64 = r11.s64 + 25440;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,25380
	ctx.r5.s64 = r11.s64 + 25380;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4008:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,72(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// bl 0x824a0b10
	sub_824A0B10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A401C"))) PPC_WEAK_FUNC(sub_824A401C);
PPC_FUNC_IMPL(__imp__sub_824A401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4020"))) PPC_WEAK_FUNC(sub_824A4020);
PPC_FUNC_IMPL(__imp__sub_824A4020) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r26,r11,23348
	r26.s64 = r11.s64 + 23348;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,25528
	r25.s64 = r11.s64 + 25528;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,25440
	r28.s64 = r11.s64 + 25440;
loc_824A4054:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// bl 0x824a0a60
	sub_824A0A60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x824a40c8
	if (cr0.eq) goto loc_824A40C8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a407c
	if (cr6.eq) goto loc_824A407C;
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x824a4094
	if (!cr6.gt) goto loc_824A4094;
loc_824A407C:
	// li r7,664
	ctx.r7.s64 = 664;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4094:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// bl 0x824a0b10
	sub_824A0B10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a4c78
	sub_824A4C78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a40c8
	if (cr0.eq) goto loc_824A40C8;
	// li r7,670
	ctx.r7.s64 = 670;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A40C8:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x824a4054
	if (!cr6.gt) goto loc_824A4054;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A40E4"))) PPC_WEAK_FUNC(sub_824A40E4);
PPC_FUNC_IMPL(__imp__sub_824A40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A40E8"))) PPC_WEAK_FUNC(sub_824A40E8);
PPC_FUNC_IMPL(__imp__sub_824A40E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r10,18652
	ctx.r7.s64 = ctx.r10.s64 + 18652;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r8,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r8.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// stw r4,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r4.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r7.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r8.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4168"))) PPC_WEAK_FUNC(sub_824A4168);
PPC_FUNC_IMPL(__imp__sub_824A4168) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// beq cr6,0x824a4188
	if (cr6.eq) goto loc_824A4188;
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bne cr6,0x824a4744
	if (!cr6.eq) goto loc_824A4744;
loc_824A4188:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824a4744
	if (cr6.eq) goto loc_824A4744;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x824a4744
	if (cr0.eq) goto loc_824A4744;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8249d380
	sub_8249D380(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,25440
	r27.s64 = r11.s64 + 25440;
	// bne cr6,0x824a41f4
	if (!cr6.eq) goto loc_824A41F4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,291
	ctx.r7.s64 = 291;
	// addi r5,r11,26080
	ctx.r5.s64 = r11.s64 + 26080;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A41F4:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a4270
	if (cr6.eq) goto loc_824A4270;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r29,15
	r29.s64 = 15;
	// addi r11,r11,-2056
	r11.s64 = r11.s64 + -2056;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,25944
	r26.s64 = r11.s64 + 25944;
loc_824A4218:
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x824a4264
	if (cr6.eq) goto loc_824A4264;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x824a4264
	if (cr6.eq) goto loc_824A4264;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824a4264
	if (cr6.eq) goto loc_824A4264;
	// li r7,306
	ctx.r7.s64 = 306;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4264:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x824a4218
	if (!cr0.eq) goto loc_824A4218;
loc_824A4270:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(r11.u32, 50, xer);
	// beq cr6,0x824a4298
	if (cr6.eq) goto loc_824A4298;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,313
	ctx.r7.s64 = 313;
	// addi r5,r11,25896
	ctx.r5.s64 = r11.s64 + 25896;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4298:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a42c0
	if (!cr6.eq) goto loc_824A42C0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,316
	ctx.r7.s64 = 316;
	// addi r5,r11,25860
	ctx.r5.s64 = r11.s64 + 25860;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A42C0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a42e8
	if (!cr6.eq) goto loc_824A42E8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,317
	ctx.r7.s64 = 317;
	// addi r5,r11,25828
	ctx.r5.s64 = r11.s64 + 25828;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A42E8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824a4744
	if (cr0.eq) goto loc_824A4744;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a4744
	if (cr6.eq) goto loc_824A4744;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r4,312
	ctx.r4.s64 = 312;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x824a4744
	if (cr0.eq) goto loc_824A4744;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r10,r31,204
	ctx.r10.s64 = r31.s64 + 204;
	// addi r6,r11,-240
	ctx.r6.s64 = r11.s64 + -240;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_824A4328:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_824A4338:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x824a4338
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A4338;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// addi r9,r6,100
	ctx.r9.s64 = ctx.r6.s64 + 100;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x824a4328
	if (cr6.lt) goto loc_824A4328;
	// li r11,10
	r11.s64 = 10;
	// li r29,0
	r29.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r29.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8253af78
	sub_8253AF78(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8253b118
	sub_8253B118(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8253b2b8
	sub_8253B2B8(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4400
	if (!cr6.eq) goto loc_824A4400;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,382
	ctx.r7.s64 = 382;
	// addi r5,r11,25804
	ctx.r5.s64 = r11.s64 + 25804;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4400:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4428
	if (!cr6.eq) goto loc_824A4428;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,383
	ctx.r7.s64 = 383;
	// addi r5,r11,25776
	ctx.r5.s64 = r11.s64 + 25776;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4428:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4450
	if (!cr6.eq) goto loc_824A4450;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,384
	ctx.r7.s64 = 384;
	// addi r5,r11,25748
	ctx.r5.s64 = r11.s64 + 25748;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4450:
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82538d60
	sub_82538D60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x824a40e8
	sub_824A40E8(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x824a06a0
	sub_824A06A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// li r11,5
	r11.s64 = 5;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r11,256
	r11.s64 = 256;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// bl 0x8253d4e0
	sub_8253D4E0(ctx, base);
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// stw r8,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r8.u32);
	// addi r11,r11,-13432
	r11.s64 = r11.s64 + -13432;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x8253d140
	sub_8253D140(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r7,308(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x824a5418
	sub_824A5418(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8253a120
	sub_8253A120(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8253c1a8
	sub_8253C1A8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stw r8,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r8.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824a5e30
	sub_824A5E30(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r6,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8253a250
	sub_8253A250(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r6,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82538898
	sub_82538898(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4624
	if (!cr6.eq) goto loc_824A4624;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,487
	ctx.r7.s64 = 487;
	// addi r5,r11,25728
	ctx.r5.s64 = r11.s64 + 25728;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4624:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a464c
	if (!cr6.eq) goto loc_824A464C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,488
	ctx.r7.s64 = 488;
	// addi r5,r11,25708
	ctx.r5.s64 = r11.s64 + 25708;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A464C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4674
	if (!cr6.eq) goto loc_824A4674;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,489
	ctx.r7.s64 = 489;
	// addi r5,r11,25684
	ctx.r5.s64 = r11.s64 + 25684;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4674:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a469c
	if (!cr6.eq) goto loc_824A469C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,490
	ctx.r7.s64 = 490;
	// addi r5,r11,25660
	ctx.r5.s64 = r11.s64 + 25660;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A469C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a46c4
	if (!cr6.eq) goto loc_824A46C4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,491
	ctx.r7.s64 = 491;
	// addi r5,r11,25636
	ctx.r5.s64 = r11.s64 + 25636;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A46C4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a46ec
	if (!cr6.eq) goto loc_824A46EC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,492
	ctx.r7.s64 = 492;
	// addi r5,r11,25612
	ctx.r5.s64 = r11.s64 + 25612;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A46EC:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4714
	if (!cr6.eq) goto loc_824A4714;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,493
	ctx.r7.s64 = 493;
	// addi r5,r11,25588
	ctx.r5.s64 = r11.s64 + 25588;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4714:
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a473c
	if (!cr6.eq) goto loc_824A473C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,494
	ctx.r7.s64 = 494;
	// addi r5,r11,25568
	ctx.r5.s64 = r11.s64 + 25568;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A473C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824a4748
	goto loc_824A4748;
loc_824A4744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A4748:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A4750"))) PPC_WEAK_FUNC(sub_824A4750);
PPC_FUNC_IMPL(__imp__sub_824A4750) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824a4928
	if (cr6.eq) goto loc_824A4928;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a4020
	sub_824A4020(ctx, base);
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// bl 0x824a07d8
	sub_824A07D8(ctx, base);
	// lwz r3,108(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// bl 0x825389b0
	sub_825389B0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,26120
	r30.s64 = r11.s64 + 26120;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,25440
	r29.s64 = r11.s64 + 25440;
	// beq 0x824a47b8
	if (cr0.eq) goto loc_824A47B8;
	// li r7,546
	ctx.r7.s64 = 546;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A47B8:
	// lwz r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// bl 0x8253bea0
	sub_8253BEA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a47e0
	if (cr0.eq) goto loc_824A47E0;
	// li r7,549
	ctx.r7.s64 = 549;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A47E0:
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// bl 0x8253a400
	sub_8253A400(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a4808
	if (cr0.eq) goto loc_824A4808;
	// li r7,552
	ctx.r7.s64 = 552;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4808:
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 96);
	// bl 0x824a56e8
	sub_824A56E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a4830
	if (cr0.eq) goto loc_824A4830;
	// li r7,555
	ctx.r7.s64 = 555;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4830:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// bl 0x82539958
	sub_82539958(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a4858
	if (cr0.eq) goto loc_824A4858;
	// li r7,558
	ctx.r7.s64 = 558;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4858:
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// bl 0x824a4e98
	sub_824A4E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a4880
	if (cr0.eq) goto loc_824A4880;
	// li r7,561
	ctx.r7.s64 = 561;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4880:
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// bl 0x8253cf68
	sub_8253CF68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a48a8
	if (cr0.eq) goto loc_824A48A8;
	// li r7,564
	ctx.r7.s64 = 564;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A48A8:
	// lwz r3,200(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 200);
	// bl 0x8253d7e8
	sub_8253D7E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a48d0
	if (cr0.eq) goto loc_824A48D0;
	// li r7,567
	ctx.r7.s64 = 567;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A48D0:
	// lwz r3,92(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 92);
	// bl 0x82538eb8
	sub_82538EB8(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// bl 0x8253a8a8
	sub_8253A8A8(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 116);
	// bl 0x8253aaf8
	sub_8253AAF8(ctx, base);
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// bl 0x8253ad38
	sub_8253AD38(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x824a4924
	if (cr0.eq) goto loc_824A4924;
	// li r7,580
	ctx.r7.s64 = 580;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4924:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_824A4928:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824A4930"))) PPC_WEAK_FUNC(sub_824A4930);
PPC_FUNC_IMPL(__imp__sub_824A4930) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r30,r11,26312
	r30.s64 = r11.s64 + 26312;
	// bne cr6,0x824a4978
	if (!cr6.eq) goto loc_824A4978;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,132
	ctx.r7.s64 = 132;
	// addi r5,r11,23244
	ctx.r5.s64 = r11.s64 + 23244;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4978:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a499c
	if (!cr6.eq) goto loc_824A499C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,133
	ctx.r7.s64 = 133;
	// addi r5,r11,26292
	ctx.r5.s64 = r11.s64 + 26292;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A499C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x824a4ac4
	if (cr6.eq) goto loc_824A4AC4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x824a4ac4
	if (cr6.eq) goto loc_824A4AC4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x824a4ac4
	if (cr0.eq) goto loc_824A4AC4;
	// li r11,0
	r11.s64 = 0;
	// stw r27,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r27.u32);
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// stw r11,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4a0c
	if (!cr6.eq) goto loc_824A4A0C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,169
	ctx.r7.s64 = 169;
	// addi r5,r11,26256
	ctx.r5.s64 = r11.s64 + 26256;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4A0C:
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4a34
	if (!cr6.eq) goto loc_824A4A34;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,170
	ctx.r7.s64 = 170;
	// addi r5,r11,26216
	ctx.r5.s64 = r11.s64 + 26216;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4A34:
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4a5c
	if (!cr6.eq) goto loc_824A4A5C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,171
	ctx.r7.s64 = 171;
	// addi r5,r11,26180
	ctx.r5.s64 = r11.s64 + 26180;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4A5C:
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a4a84
	if (!cr6.eq) goto loc_824A4A84;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,172
	ctx.r7.s64 = 172;
	// addi r5,r11,26140
	ctx.r5.s64 = r11.s64 + 26140;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4A84:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x824a06a0
	sub_824A06A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r11.u32);
	// bl 0x824a3f60
	sub_824A3F60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x824a4ac8
	goto loc_824A4AC8;
loc_824A4AC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A4AC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A4AD0"))) PPC_WEAK_FUNC(sub_824A4AD0);
PPC_FUNC_IMPL(__imp__sub_824A4AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r4.u32);
	// b 0x824a08e0
	sub_824A08E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A4AEC"))) PPC_WEAK_FUNC(sub_824A4AEC);
PPC_FUNC_IMPL(__imp__sub_824A4AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4AF0"))) PPC_WEAK_FUNC(sub_824A4AF0);
PPC_FUNC_IMPL(__imp__sub_824A4AF0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r26,r11,26312
	r26.s64 = r11.s64 + 26312;
	// bne cr6,0x824a4b40
	if (!cr6.eq) goto loc_824A4B40;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,301
	ctx.r7.s64 = 301;
	// addi r5,r11,23372
	ctx.r5.s64 = r11.s64 + 23372;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4B40:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824a4b8c
	if (cr6.eq) goto loc_824A4B8C;
loc_824A4B48:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x824a4b70
	if (cr6.gt) goto loc_824A4B70;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824a0a60
	sub_824A0A60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x824a4b48
	if (!cr6.eq) goto loc_824A4B48;
loc_824A4B70:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x824a4b8c
	if (!cr6.eq) goto loc_824A4B8C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a4b8c
	if (cr6.eq) goto loc_824A4B8C;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x824a4ba8
	if (!cr6.gt) goto loc_824A4BA8;
loc_824A4B8C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,316
	ctx.r7.s64 = 316;
	// addi r5,r11,26400
	ctx.r5.s64 = r11.s64 + 26400;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4BA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x824a0b10
	sub_824A0B10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A4BBC"))) PPC_WEAK_FUNC(sub_824A4BBC);
PPC_FUNC_IMPL(__imp__sub_824A4BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4BC0"))) PPC_WEAK_FUNC(sub_824A4BC0);
PPC_FUNC_IMPL(__imp__sub_824A4BC0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r27,r11,23348
	r27.s64 = r11.s64 + 23348;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,26460
	r26.s64 = r11.s64 + 26460;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,26312
	r30.s64 = r11.s64 + 26312;
loc_824A4BF4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// bl 0x824a0a60
	sub_824A0A60(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x824a4c5c
	if (cr0.eq) goto loc_824A4C5C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824a4c1c
	if (cr6.eq) goto loc_824A4C1C;
	// lwz r11,40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x824a4c34
	if (!cr6.gt) goto loc_824A4C34;
loc_824A4C1C:
	// li r7,340
	ctx.r7.s64 = 340;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4C34:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a02f8
	sub_824A02F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a4c5c
	if (cr0.eq) goto loc_824A4C5C;
	// li r7,345
	ctx.r7.s64 = 345;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4C5C:
	// lwz r11,40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x824a4bf4
	if (!cr6.gt) goto loc_824A4BF4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A4C78"))) PPC_WEAK_FUNC(sub_824A4C78);
PPC_FUNC_IMPL(__imp__sub_824A4C78) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a4c9c
	if (!cr6.eq) goto loc_824A4C9C;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x824a4d08
	goto loc_824A4D08;
loc_824A4C9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a4bc0
	sub_824A4BC0(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x824a07d8
	sub_824A07D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x824a3f80
	sub_824A3F80(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x824a4d04
	if (cr0.eq) goto loc_824A4D04;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,253
	ctx.r7.s64 = 253;
	// addi r6,r11,26312
	ctx.r6.s64 = r11.s64 + 26312;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,26120
	ctx.r5.s64 = r11.s64 + 26120;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4D04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A4D08:
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

__attribute__((alias("__imp__sub_824A4D1C"))) PPC_WEAK_FUNC(sub_824A4D1C);
PPC_FUNC_IMPL(__imp__sub_824A4D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4D20"))) PPC_WEAK_FUNC(sub_824A4D20);
PPC_FUNC_IMPL(__imp__sub_824A4D20) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// addi r29,r11,26528
	r29.s64 = r11.s64 + 26528;
	// bne cr6,0x824a4d68
	if (!cr6.eq) goto loc_824A4D68;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,193
	ctx.r7.s64 = 193;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4D68:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a4d8c
	if (!cr6.eq) goto loc_824A4D8C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,194
	ctx.r7.s64 = 194;
	// addi r5,r11,26504
	ctx.r5.s64 = r11.s64 + 26504;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4D8C:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a4dfc
	if (cr0.eq) goto loc_824A4DFC;
	// bl 0x824a1e40
	sub_824A1E40(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x824a4df4
	if (cr0.eq) goto loc_824A4DF4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,23344
	r27.s64 = r11.s64 + 23344;
loc_824A4DAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x824a4dd4
	if (!cr0.eq) goto loc_824A4DD4;
	// li r7,203
	ctx.r7.s64 = 203;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4DD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2588
	sub_824A2588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2110
	sub_824A2110(ctx, base);
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// bl 0x824a1e40
	sub_824A1E40(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a4dac
	if (!cr0.eq) goto loc_824A4DAC;
loc_824A4DF4:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// bl 0x824a1988
	sub_824A1988(ctx, base);
loc_824A4DFC:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x824a4e18
	if (cr0.eq) goto loc_824A4E18;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A4E18:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A4E2C"))) PPC_WEAK_FUNC(sub_824A4E2C);
PPC_FUNC_IMPL(__imp__sub_824A4E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4E30"))) PPC_WEAK_FUNC(sub_824A4E30);
PPC_FUNC_IMPL(__imp__sub_824A4E30) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a4e74
	if (!cr6.eq) goto loc_824A4E74;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,250
	ctx.r7.s64 = 250;
	// addi r6,r11,26528
	ctx.r6.s64 = r11.s64 + 26528;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4E74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8253da88
	sub_8253DA88(ctx, base);
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

__attribute__((alias("__imp__sub_824A4E98"))) PPC_WEAK_FUNC(sub_824A4E98);
PPC_FUNC_IMPL(__imp__sub_824A4E98) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r27,r11,26528
	r27.s64 = r11.s64 + 26528;
	// bne cr6,0x824a4edc
	if (!cr6.eq) goto loc_824A4EDC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,389
	ctx.r7.s64 = 389;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4EDC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a4f6c
	if (cr6.eq) goto loc_824A4F6C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a4f6c
	if (cr6.eq) goto loc_824A4F6C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x824a4f6c
	if (!cr6.gt) goto loc_824A4F6C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,26504
	r26.s64 = r11.s64 + 26504;
loc_824A4F0C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8253db68
	sub_8253DB68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a4f5c
	if (cr0.eq) goto loc_824A4F5C;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8253df70
	sub_8253DF70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a4f50
	if (!cr0.eq) goto loc_824A4F50;
	// li r7,423
	ctx.r7.s64 = 423;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A4F50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a4d20
	sub_824A4D20(ctx, base);
loc_824A4F5C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x824a4f0c
	if (cr6.lt) goto loc_824A4F0C;
loc_824A4F6C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a4f7c
	if (cr0.eq) goto loc_824A4F7C;
	// bl 0x8253d940
	sub_8253D940(ctx, base);
loc_824A4F7C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a4f8c
	if (cr0.eq) goto loc_824A4F8C;
	// bl 0x8253dd18
	sub_8253DD18(ctx, base);
loc_824A4F8C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a4f9c
	if (cr0.eq) goto loc_824A4F9C;
	// bl 0x8253a6d0
	sub_8253A6D0(ctx, base);
loc_824A4F9C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A4FBC"))) PPC_WEAK_FUNC(sub_824A4FBC);
PPC_FUNC_IMPL(__imp__sub_824A4FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4FC0"))) PPC_WEAK_FUNC(sub_824A4FC0);
PPC_FUNC_IMPL(__imp__sub_824A4FC0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r27,r11,26528
	r27.s64 = r11.s64 + 26528;
	// bne cr6,0x824a500c
	if (!cr6.eq) goto loc_824A500C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,575
	ctx.r7.s64 = 575;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A500C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8253da88
	sub_8253DA88(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x824a50f0
	if (cr0.eq) goto loc_824A50F0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x824a5048
	if (cr6.gt) goto loc_824A5048;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,589
	ctx.r7.s64 = 589;
	// addi r5,r11,26616
	ctx.r5.s64 = r11.s64 + 26616;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5048:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bne 0x824a50d8
	if (!cr0.eq) goto loc_824A50D8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8253db68
	sub_8253DB68(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,26504
	r29.s64 = r11.s64 + 26504;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a508c
	if (!cr0.eq) goto loc_824A508C;
	// li r7,600
	ctx.r7.s64 = 600;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A508C:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x8253df70
	sub_8253DF70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a50bc
	if (!cr0.eq) goto loc_824A50BC;
	// li r7,608
	ctx.r7.s64 = 608;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A50BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a4d20
	sub_824A4D20(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x824a50e8
	if (cr6.eq) goto loc_824A50E8;
	// li r11,1
	r11.s64 = 1;
	// b 0x824a50e4
	goto loc_824A50E4;
loc_824A50D8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x824a50e8
	if (cr6.eq) goto loc_824A50E8;
	// li r11,0
	r11.s64 = 0;
loc_824A50E4:
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_824A50E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a50f4
	goto loc_824A50F4;
loc_824A50F0:
	// li r3,19
	ctx.r3.s64 = 19;
loc_824A50F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A50FC"))) PPC_WEAK_FUNC(sub_824A50FC);
PPC_FUNC_IMPL(__imp__sub_824A50FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5100"))) PPC_WEAK_FUNC(sub_824A5100);
PPC_FUNC_IMPL(__imp__sub_824A5100) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a5144
	if (!cr6.eq) goto loc_824A5144;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,662
	ctx.r7.s64 = 662;
	// addi r6,r11,26528
	ctx.r6.s64 = r11.s64 + 26528;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5144:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a4e30
	sub_824A4E30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a5160
	if (cr0.eq) goto loc_824A5160;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x824a5164
	goto loc_824A5164;
loc_824A5160:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A5164:
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

__attribute__((alias("__imp__sub_824A517C"))) PPC_WEAK_FUNC(sub_824A517C);
PPC_FUNC_IMPL(__imp__sub_824A517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5180"))) PPC_WEAK_FUNC(sub_824A5180);
PPC_FUNC_IMPL(__imp__sub_824A5180) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r11,26528
	r30.s64 = r11.s64 + 26528;
	// bne cr6,0x824a51cc
	if (!cr6.eq) goto loc_824A51CC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,747
	ctx.r7.s64 = 747;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A51CC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x824a51f0
	if (!cr6.eq) goto loc_824A51F0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,748
	ctx.r7.s64 = 748;
	// addi r5,r11,23344
	ctx.r5.s64 = r11.s64 + 23344;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A51F0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a4e30
	sub_824A4E30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a5224
	if (!cr0.eq) goto loc_824A5224;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,756
	ctx.r7.s64 = 756;
	// addi r5,r11,26504
	ctx.r5.s64 = r11.s64 + 26504;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x824a5258
	goto loc_824A5258;
loc_824A5224:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x824a1d10
	sub_824A1D10(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x824a5258
	if (!cr0.eq) goto loc_824A5258;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,766
	ctx.r7.s64 = 766;
	// addi r5,r11,26640
	ctx.r5.s64 = r11.s64 + 26640;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
loc_824A5258:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A5260"))) PPC_WEAK_FUNC(sub_824A5260);
PPC_FUNC_IMPL(__imp__sub_824A5260) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824a52a4
	if (!cr6.eq) goto loc_824A52A4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,798
	ctx.r7.s64 = 798;
	// addi r6,r11,26528
	ctx.r6.s64 = r11.s64 + 26528;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A52A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a4e30
	sub_824A4E30(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a52c0
	if (cr0.eq) goto loc_824A52C0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x824a52c4
	goto loc_824A52C4;
loc_824A52C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A52C4:
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

__attribute__((alias("__imp__sub_824A52DC"))) PPC_WEAK_FUNC(sub_824A52DC);
PPC_FUNC_IMPL(__imp__sub_824A52DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A52E0"))) PPC_WEAK_FUNC(sub_824A52E0);
PPC_FUNC_IMPL(__imp__sub_824A52E0) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r27,r11,26528
	r27.s64 = r11.s64 + 26528;
	// bne cr6,0x824a532c
	if (!cr6.eq) goto loc_824A532C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,113
	ctx.r7.s64 = 113;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A532C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8253a740
	sub_8253A740(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a5360
	if (!cr0.eq) goto loc_824A5360;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,121
	ctx.r7.s64 = 121;
	// addi r5,r11,26696
	ctx.r5.s64 = r11.s64 + 26696;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5358:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a5410
	goto loc_824A5410;
loc_824A5360:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r29,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne 0x824a53d0
	if (!cr0.eq) goto loc_824A53D0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r5,r11,26676
	ctx.r5.s64 = r11.s64 + 26676;
loc_824A53B0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a4d20
	sub_824A4D20(ctx, base);
	// b 0x824a5358
	goto loc_824A5358;
loc_824A53D0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x824a2288
	sub_824A2288(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bne 0x824a540c
	if (!cr0.eq) goto loc_824A540C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,155
	ctx.r7.s64 = 155;
	// addi r5,r11,26656
	ctx.r5.s64 = r11.s64 + 26656;
	// b 0x824a53b0
	goto loc_824A53B0;
loc_824A540C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824A5410:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824A5418"))) PPC_WEAK_FUNC(sub_824A5418);
PPC_FUNC_IMPL(__imp__sub_824A5418) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r26,r11,26528
	r26.s64 = r11.s64 + 26528;
	// bne cr6,0x824a546c
	if (!cr6.eq) goto loc_824A546C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,298
	ctx.r7.s64 = 298;
	// addi r5,r11,23752
	ctx.r5.s64 = r11.s64 + 23752;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A546C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a5490
	if (!cr6.eq) goto loc_824A5490;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,299
	ctx.r7.s64 = 299;
	// addi r5,r11,23740
	ctx.r5.s64 = r11.s64 + 23740;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5490:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x824a54b4
	if (!cr6.eq) goto loc_824A54B4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,300
	ctx.r7.s64 = 300;
	// addi r5,r11,24252
	ctx.r5.s64 = r11.s64 + 24252;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A54B4:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a54f0
	if (!cr0.eq) goto loc_824A54F0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,308
	ctx.r7.s64 = 308;
	// addi r5,r11,26772
	ctx.r5.s64 = r11.s64 + 26772;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A54E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a55bc
	goto loc_824A55BC;
loc_824A54F0:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bne 0x824a5548
	if (!cr0.eq) goto loc_824A5548;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,326
	ctx.r7.s64 = 326;
	// addi r5,r11,26744
	ctx.r5.s64 = r11.s64 + 26744;
loc_824A552C:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a4e98
	sub_824A4E98(ctx, base);
	// b 0x824a54e8
	goto loc_824A54E8;
loc_824A5548:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253d850
	sub_8253D850(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// bne 0x824a557c
	if (!cr0.eq) goto loc_824A557C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r5,r11,26724
	ctx.r5.s64 = r11.s64 + 26724;
	// b 0x824a552c
	goto loc_824A552C;
loc_824A557C:
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253dc08
	sub_8253DC08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// bne 0x824a55b0
	if (!cr0.eq) goto loc_824A55B0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,352
	ctx.r7.s64 = 352;
	// addi r5,r11,26708
	ctx.r5.s64 = r11.s64 + 26708;
	// b 0x824a552c
	goto loc_824A552C;
loc_824A55B0:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_824A55BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_824A55C4"))) PPC_WEAK_FUNC(sub_824A55C4);
PPC_FUNC_IMPL(__imp__sub_824A55C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A55C8"))) PPC_WEAK_FUNC(sub_824A55C8);
PPC_FUNC_IMPL(__imp__sub_824A55C8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// rlwinm r26,r30,30,2,31
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r27,r11,26528
	r27.s64 = r11.s64 + 26528;
	// bne cr6,0x824a561c
	if (!cr6.eq) goto loc_824A561C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,493
	ctx.r7.s64 = 493;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A561C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8253de78
	sub_8253DE78(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a564c
	if (cr0.eq) goto loc_824A564C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// b 0x824a56dc
	goto loc_824A56DC;
loc_824A564C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a52e0
	sub_824A52E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a5688
	if (!cr0.eq) goto loc_824A5688;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,521
	ctx.r7.s64 = 521;
	// addi r5,r11,26696
	ctx.r5.s64 = r11.s64 + 26696;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a56e0
	goto loc_824A56E0;
loc_824A5688:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8253d9e0
	sub_8253D9E0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8253ddb8
	sub_8253DDB8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x824a56d4
	if (cr6.gt) goto loc_824A56D4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,535
	ctx.r7.s64 = 535;
	// addi r5,r11,26780
	ctx.r5.s64 = r11.s64 + 26780;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A56D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_824A56DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A56E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A56E8"))) PPC_WEAK_FUNC(sub_824A56E8);
PPC_FUNC_IMPL(__imp__sub_824A56E8) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r26,r11,26840
	r26.s64 = r11.s64 + 26840;
	// bne cr6,0x824a572c
	if (!cr6.eq) goto loc_824A572C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,267
	ctx.r7.s64 = 267;
	// addi r5,r11,26824
	ctx.r5.s64 = r11.s64 + 26824;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A572C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8253b5a8
	sub_8253B5A8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8253b5a8
	sub_8253B5A8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r25,r11,26804
	r25.s64 = r11.s64 + 26804;
	// bne cr6,0x824a5788
	if (!cr6.eq) goto loc_824A5788;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,412(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 412);
	// lwz r28,420(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 420);
	// bl 0x8254bf78
	sub_8254BF78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x824a57b8
	goto loc_824A57B8;
loc_824A5788:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a57b8
	if (cr0.eq) goto loc_824A57B8;
	// bl 0x825477e8
	sub_825477E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a57b8
	if (cr0.eq) goto loc_824A57B8;
	// li r7,293
	ctx.r7.s64 = 293;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A57B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x824a57ec
	if (cr0.eq) goto loc_824A57EC;
	// li r7,300
	ctx.r7.s64 = 300;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A57EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A57F8"))) PPC_WEAK_FUNC(sub_824A57F8);
PPC_FUNC_IMPL(__imp__sub_824A57F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r28,32(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r26,16(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824a5100
	sub_824A5100(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x824a5878
	if (!cr0.eq) goto loc_824A5878;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,350
	ctx.r7.s64 = 350;
	// addi r6,r11,26840
	ctx.r6.s64 = r11.s64 + 26840;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,27056
	ctx.r5.s64 = r11.s64 + 27056;
loc_824A5860:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x824a5ac4
	goto loc_824A5AC4;
loc_824A5878:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x824a5100
	sub_824A5100(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x824a58b4
	if (!cr0.eq) goto loc_824A58B4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,359
	ctx.r7.s64 = 359;
	// addi r6,r11,26840
	ctx.r6.s64 = r11.s64 + 26840;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,27040
	ctx.r5.s64 = r11.s64 + 27040;
	// b 0x824a5860
	goto loc_824A5860;
loc_824A58B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8253ca38
	sub_8253CA38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne 0x824a58f8
	if (!cr0.eq) goto loc_824A58F8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,370
	ctx.r7.s64 = 370;
	// addi r6,r11,26840
	ctx.r6.s64 = r11.s64 + 26840;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,26992
	ctx.r5.s64 = r11.s64 + 26992;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a5ac4
	goto loc_824A5AC4;
loc_824A58F8:
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824a2910
	sub_824A2910(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x824a2910
	sub_824A2910(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x824a5a44
	if (!cr6.eq) goto loc_824A5A44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8253c600
	sub_8253C600(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a5ab4
	if (!cr0.eq) goto loc_824A5AB4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8253c790
	sub_8253C790(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824a5a0c
	if (!cr0.eq) goto loc_824A5A0C;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x824a3b68
	sub_824A3B68(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x824a3b68
	sub_824A3B68(ctx, base);
	// lwz r23,40(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x824a29c8
	sub_824A29C8(ctx, base);
	// lwz r23,44(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x824a29c8
	sub_824A29C8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r11,26964
	ctx.r4.s64 = r11.s64 + 26964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,26936
	ctx.r4.s64 = r11.s64 + 26936;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x8254ce90
	sub_8254CE90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824a5ac4
	if (!cr0.eq) goto loc_824A5AC4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// bl 0x824a35e0
	sub_824A35E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824a5ac4
	if (!cr0.eq) goto loc_824A5AC4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// bl 0x824a35e0
	sub_824A35E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824a5ac4
	if (!cr0.eq) goto loc_824A5AC4;
loc_824A5A0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254fc68
	sub_8254FC68(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254fcf0
	sub_8254FCF0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8253bfa0
	sub_8253BFA0(ctx, base);
	// b 0x824a5ab4
	goto loc_824A5AB4;
loc_824A5A44:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x824a3b68
	sub_824A3B68(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x824a3b68
	sub_824A3B68(ctx, base);
	// lwz r28,40(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824a29c8
	sub_824A29C8(ctx, base);
	// lwz r28,44(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824a29c8
	sub_824A29C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8254b1e0
	sub_8254B1E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// bl 0x824a35e0
	sub_824A35E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824a5ac4
	if (!cr0.eq) goto loc_824A5AC4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// bl 0x824a35e0
	sub_824A35E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824a5ac4
	if (!cr0.eq) goto loc_824A5AC4;
loc_824A5AB4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8254df70
	sub_8254DF70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A5AC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_824A5ACC"))) PPC_WEAK_FUNC(sub_824A5ACC);
PPC_FUNC_IMPL(__imp__sub_824A5ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5AD0"))) PPC_WEAK_FUNC(sub_824A5AD0);
PPC_FUNC_IMPL(__imp__sub_824A5AD0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x8253ca38
	sub_8253CA38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x824a5b34
	if (!cr0.eq) goto loc_824A5B34;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,489
	ctx.r7.s64 = 489;
	// addi r6,r11,26840
	ctx.r6.s64 = r11.s64 + 26840;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,26992
	ctx.r5.s64 = r11.s64 + 26992;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a5bc0
	goto loc_824A5BC0;
loc_824A5B34:
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x82491c28
	sub_82491C28(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x824a3b68
	sub_824A3B68(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x824a3b68
	sub_824A3B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r27,40(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824a29c8
	sub_824A29C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r27,44(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824a29c8
	sub_824A29C8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8254b468
	sub_8254B468(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x824a5bb0
	if (!cr6.eq) goto loc_824A5BB0;
	// bl 0x8254efb8
	sub_8254EFB8(ctx, base);
	// b 0x824a5bb4
	goto loc_824A5BB4;
loc_824A5BB0:
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
loc_824A5BB4:
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x824a35e0
	sub_824A35E0(ctx, base);
loc_824A5BC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A5BC8"))) PPC_WEAK_FUNC(sub_824A5BC8);
PPC_FUNC_IMPL(__imp__sub_824A5BC8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r28,32(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824a5100
	sub_824A5100(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x824a5c38
	if (!cr0.eq) goto loc_824A5C38;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,562
	ctx.r7.s64 = 562;
	// addi r6,r11,26840
	ctx.r6.s64 = r11.s64 + 26840;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,27040
	ctx.r5.s64 = r11.s64 + 27040;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x824a5cf0
	goto loc_824A5CF0;
loc_824A5C38:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8253ca38
	sub_8253CA38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// bne 0x824a5c7c
	if (!cr0.eq) goto loc_824A5C7C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,573
	ctx.r7.s64 = 573;
	// addi r6,r11,26840
	ctx.r6.s64 = r11.s64 + 26840;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,26992
	ctx.r5.s64 = r11.s64 + 26992;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824a5cf0
	goto loc_824A5CF0;
loc_824A5C7C:
	// bl 0x8254ef60
	sub_8254EF60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824a2910
	sub_824A2910(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x824a3b68
	sub_824A3B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x824a29c8
	sub_824A29C8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,26964
	ctx.r4.s64 = r11.s64 + 26964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254d460
	sub_8254D460(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824a5cf0
	if (!cr0.eq) goto loc_824A5CF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a35e0
	sub_824A35E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824a5cf0
	if (!cr0.eq) goto loc_824A5CF0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x8254df70
	sub_8254DF70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A5CF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824A5CF8"))) PPC_WEAK_FUNC(sub_824A5CF8);
PPC_FUNC_IMPL(__imp__sub_824A5CF8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r25,r11,8972
	r25.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r24,r11,26840
	r24.s64 = r11.s64 + 26840;
	// bne cr6,0x824a5d48
	if (!cr6.eq) goto loc_824A5D48;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,642
	ctx.r7.s64 = 642;
	// addi r5,r11,26824
	ctx.r5.s64 = r11.s64 + 26824;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5D48:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x824a5d6c
	if (!cr6.eq) goto loc_824A5D6C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,643
	ctx.r7.s64 = 643;
	// addi r5,r11,27072
	ctx.r5.s64 = r11.s64 + 27072;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5D6C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r23,0
	r23.s64 = 0;
	// bl 0x824a5100
	sub_824A5100(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x824a5dac
	if (!cr0.eq) goto loc_824A5DAC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,656
	ctx.r7.s64 = 656;
	// addi r5,r11,27120
	ctx.r5.s64 = r11.s64 + 27120;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x824a5e28
	goto loc_824A5E28;
loc_824A5DAC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x824a3b68
	sub_824A3B68(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x824a29c8
	sub_824A29C8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,27100
	ctx.r4.s64 = r11.s64 + 27100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254d460
	sub_8254D460(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a5df4
	if (cr0.eq) goto loc_824A5DF4;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_824A5DF4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a35e0
	sub_824A35E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824a5e28
	if (!cr0.eq) goto loc_824A5E28;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x824a5e24
	if (cr6.eq) goto loc_824A5E24;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,682
	ctx.r7.s64 = 682;
	// addi r5,r11,27080
	ctx.r5.s64 = r11.s64 + 27080;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5E24:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_824A5E28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_824A5E30"))) PPC_WEAK_FUNC(sub_824A5E30);
PPC_FUNC_IMPL(__imp__sub_824A5E30) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r26,r11,8972
	r26.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r25,r11,26840
	r25.s64 = r11.s64 + 26840;
	// bne cr6,0x824a5e90
	if (!cr6.eq) goto loc_824A5E90;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,139
	ctx.r7.s64 = 139;
	// addi r5,r11,27232
	ctx.r5.s64 = r11.s64 + 27232;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5E90:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x824a5eb4
	if (!cr6.eq) goto loc_824A5EB4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,140
	ctx.r7.s64 = 140;
	// addi r5,r11,23752
	ctx.r5.s64 = r11.s64 + 23752;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5EB4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x824a5ed8
	if (!cr6.eq) goto loc_824A5ED8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,141
	ctx.r7.s64 = 141;
	// addi r5,r11,23740
	ctx.r5.s64 = r11.s64 + 23740;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5ED8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x824a5efc
	if (!cr6.eq) goto loc_824A5EFC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,142
	ctx.r7.s64 = 142;
	// addi r5,r11,27216
	ctx.r5.s64 = r11.s64 + 27216;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5EFC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x824a5f20
	if (!cr6.eq) goto loc_824A5F20;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,143
	ctx.r7.s64 = 143;
	// addi r5,r11,26512
	ctx.r5.s64 = r11.s64 + 26512;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5F20:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x824a5f44
	if (!cr6.eq) goto loc_824A5F44;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,144
	ctx.r7.s64 = 144;
	// addi r5,r11,27200
	ctx.r5.s64 = r11.s64 + 27200;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5F44:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x824a5f68
	if (!cr6.eq) goto loc_824A5F68;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,145
	ctx.r7.s64 = 145;
	// addi r5,r11,24268
	ctx.r5.s64 = r11.s64 + 24268;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5F68:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x824a5f8c
	if (!cr6.eq) goto loc_824A5F8C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,146
	ctx.r7.s64 = 146;
	// addi r5,r11,27188
	ctx.r5.s64 = r11.s64 + 27188;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5F8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82538f20
	sub_82538F20(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824a5fd8
	if (!cr0.eq) goto loc_824A5FD8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,156
	ctx.r7.s64 = 156;
	// addi r5,r11,26824
	ctx.r5.s64 = r11.s64 + 26824;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824A5FD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a6140
	goto loc_824A6140;
loc_824A5FD8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r21,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r21.u32);
	// stw r23,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r23.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r22.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// bl 0x824a3a38
	sub_824A3A38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x824a3a38
	sub_824A3A38(ctx, base);
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a60e8
	if (!cr6.eq) goto loc_824A60E8;
	// lis r11,-32182
	r11.s64 = -2109079552;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// addi r11,r11,22520
	r11.s64 = r11.s64 + 22520;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bne cr6,0x824a60b4
	if (!cr6.eq) goto loc_824A60B4;
	// li r4,1728
	ctx.r4.s64 = 1728;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a607c
	if (cr0.eq) goto loc_824A607C;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8254c678
	sub_8254C678(ctx, base);
	// b 0x824a6080
	goto loc_824A6080;
loc_824A607C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A6080:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x824a613c
	if (!cr6.eq) goto loc_824A613C;
	// li r7,201
	ctx.r7.s64 = 201;
loc_824A6090:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,27156
	ctx.r5.s64 = r11.s64 + 27156;
loc_824A6098:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a56e8
	sub_824A56E8(ctx, base);
	// b 0x824a5fd0
	goto loc_824A5FD0;
loc_824A60B4:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825476a8
	sub_825476A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// bne 0x824a613c
	if (!cr0.eq) goto loc_824A613C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,220
	ctx.r7.s64 = 220;
	// addi r5,r11,27132
	ctx.r5.s64 = r11.s64 + 27132;
	// b 0x824a6098
	goto loc_824A6098;
loc_824A60E8:
	// lis r11,-32182
	r11.s64 = -2109079552;
	// li r4,1728
	ctx.r4.s64 = 1728;
	// addi r11,r11,23496
	r11.s64 = r11.s64 + 23496;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a6124
	if (cr0.eq) goto loc_824A6124;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8254c678
	sub_8254C678(ctx, base);
	// b 0x824a6128
	goto loc_824A6128;
loc_824A6124:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A6128:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x824a613c
	if (!cr6.eq) goto loc_824A613C;
	// li r7,242
	ctx.r7.s64 = 242;
	// b 0x824a6090
	goto loc_824A6090;
loc_824A613C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A6140:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_824A6148"))) PPC_WEAK_FUNC(sub_824A6148);
PPC_FUNC_IMPL(__imp__sub_824A6148) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// clrlwi r10,r29,21
	ctx.r10.u64 = r29.u32 & 0x7FF;
	// rlwimi r11,r29,12,21,23
	r11.u64 = (__builtin_rotateleft32(r29.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// rlwinm r25,r29,0,12,15
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF0000;
	// li r22,0
	r22.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x824a629c
	if (cr6.eq) goto loc_824A629C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x824a6264
	if (cr6.eq) goto loc_824A6264;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x824a6250
	if (cr6.eq) goto loc_824A6250;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x824a61bc
	if (cr6.eq) goto loc_824A61BC;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// li r31,4
	r31.s64 = 4;
	// bne cr6,0x824a62a4
	if (!cr6.eq) goto loc_824A62A4;
	// li r30,32
	r30.s64 = 32;
	// b 0x824a62a4
	goto loc_824A62A4;
loc_824A61BC:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// bge cr6,0x824a61e0
	if (!cr6.lt) goto loc_824A61E0;
	// lwz r11,1600(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 1600);
	// li r31,17
	r31.s64 = 17;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x824a62a4
	if (!cr6.gt) goto loc_824A62A4;
	// stw r10,1600(r26)
	PPC_STORE_U32(r26.u32 + 1600, ctx.r10.u32);
	// b 0x824a62a4
	goto loc_824A62A4;
loc_824A61E0:
	// li r31,11
	r31.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r26,1604
	ctx.r9.s64 = r26.s64 + 1604;
loc_824A61EC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,27,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6210
	if (cr6.eq) goto loc_824A6210;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// blt cr6,0x824a61ec
	if (cr6.lt) goto loc_824A61EC;
	// b 0x824a621c
	goto loc_824A621C;
loc_824A6210:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lbz r30,1605(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 1605);
loc_824A621C:
	// rlwinm r11,r29,0,18,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x824a62a4
	if (!cr6.eq) goto loc_824A62A4;
	// mr r11,r24
	r11.u64 = r24.u64;
	// lis r22,128
	r22.s64 = 8388608;
	// rlwimi r11,r24,12,21,23
	r11.u64 = (__builtin_rotateleft32(r24.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(r11.u32, 3840, xer);
	// beq cr6,0x824a6248
	if (cr6.eq) goto loc_824A6248;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x824a62a4
	goto loc_824A62A4;
loc_824A6248:
	// lis r23,1
	r23.s64 = 65536;
	// b 0x824a62a4
	goto loc_824A62A4;
loc_824A6250:
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r31,r11,18
	r31.s64 = r11.s64 + 18;
	// b 0x824a62a0
	goto loc_824A62A0;
loc_824A6264:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x824a6294
	if (cr6.eq) goto loc_824A6294;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x824a627c
	if (cr6.eq) goto loc_824A627C;
	// li r31,14
	r31.s64 = 14;
	// b 0x824a62a0
	goto loc_824A62A0;
loc_824A627C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r31,4
	r31.s64 = 4;
	// li r30,50
	r30.s64 = 50;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// b 0x824a62a4
	goto loc_824A62A4;
loc_824A6294:
	// li r31,16
	r31.s64 = 16;
	// b 0x824a62a0
	goto loc_824A62A0;
loc_824A629C:
	// li r31,3
	r31.s64 = 3;
loc_824A62A0:
	// li r30,0
	r30.s64 = 0;
loc_824A62A4:
	// lis r11,15
	r11.s64 = 983040;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x824a62b8
	if (!cr6.eq) goto loc_824A62B8;
	// li r9,85
	ctx.r9.s64 = 85;
	// b 0x824a62ec
	goto loc_824A62EC;
loc_824A62B8:
	// rlwinm. r11,r25,0,15,15
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x824a62c8
	if (cr0.eq) goto loc_824A62C8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824A62C8:
	// rlwinm. r11,r25,0,14,14
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a62d4
	if (cr0.eq) goto loc_824A62D4;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_824A62D4:
	// rlwinm. r11,r25,0,13,13
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a62e0
	if (cr0.eq) goto loc_824A62E0;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_824A62E0:
	// rlwinm. r11,r25,0,12,12
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a62ec
	if (cr0.eq) goto loc_824A62EC;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_824A62EC:
	// rlwinm r10,r29,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100000;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// li r11,0
	r11.s64 = 0;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x824a6304
	if (!cr6.eq) goto loc_824A6304;
	// li r11,256
	r11.s64 = 256;
loc_824A6304:
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(r31.u32, 13, xer);
	// beq cr6,0x824a632c
	if (cr6.eq) goto loc_824A632C;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// beq cr6,0x824a6388
	if (cr6.eq) goto loc_824A6388;
	// cmplwi cr6,r31,17
	cr6.compare<uint32_t>(r31.u32, 17, xer);
	// ble cr6,0x824a6380
	if (!cr6.gt) goto loc_824A6380;
	// cmplwi cr6,r31,19
	cr6.compare<uint32_t>(r31.u32, 19, xer);
	// ble cr6,0x824a6370
	if (!cr6.gt) goto loc_824A6370;
	// cmplwi cr6,r31,50
	cr6.compare<uint32_t>(r31.u32, 50, xer);
	// bne cr6,0x824a6380
	if (!cr6.eq) goto loc_824A6380;
loc_824A632C:
	// li r9,169
	ctx.r9.s64 = 169;
	// ori r10,r11,169
	ctx.r10.u64 = r11.u64 | 169;
loc_824A6334:
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// cmplw cr6,r22,r8
	cr6.compare<uint32_t>(r22.u32, ctx.r8.u32, xer);
	// bne cr6,0x824a63d4
	if (!cr6.eq) goto loc_824A63D4;
	// cmplwi cr6,r9,85
	cr6.compare<uint32_t>(ctx.r9.u32, 85, xer);
	// bne cr6,0x824a6398
	if (!cr6.eq) goto loc_824A6398;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a6398
	if (!cr6.eq) goto loc_824A6398;
	// rlwinm r11,r31,16,0,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// clrlwi r9,r24,21
	ctx.r9.u64 = r24.u32 & 0x7FF;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// or r10,r9,r23
	ctx.r10.u64 = ctx.r9.u64 | r23.u64;
	// b 0x824a6410
	goto loc_824A6410;
loc_824A6370:
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r10,768
	cr6.compare<uint32_t>(ctx.r10.u32, 768, xer);
	// bge cr6,0x824a6380
	if (!cr6.lt) goto loc_824A6380;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_824A6380:
	// or r10,r11,r9
	ctx.r10.u64 = r11.u64 | ctx.r9.u64;
	// b 0x824a6334
	goto loc_824A6334;
loc_824A6388:
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// b 0x824a6334
	goto loc_824A6334;
loc_824A6398:
	// rlwinm r11,r31,16,0,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// oris r11,r11,192
	r11.u64 = r11.u64 | 12582912;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// clrlwi r9,r24,21
	ctx.r9.u64 = r24.u32 & 0x7FF;
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | r23.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// b 0x824a6428
	goto loc_824A6428;
loc_824A63D4:
	// cmplwi cr6,r9,85
	cr6.compare<uint32_t>(ctx.r9.u32, 85, xer);
	// bne cr6,0x824a6400
	if (!cr6.eq) goto loc_824A6400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a6400
	if (!cr6.eq) goto loc_824A6400;
	// rlwimi r30,r31,16,0,15
	r30.u64 = (__builtin_rotateleft32(r31.u32, 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// rlwinm r11,r30,0,10,8
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x824a6428
	goto loc_824A6428;
loc_824A6400:
	// rlwinm r11,r31,16,0,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
loc_824A6410:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_824A6428:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_824A6434"))) PPC_WEAK_FUNC(sub_824A6434);
PPC_FUNC_IMPL(__imp__sub_824A6434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6438"))) PPC_WEAK_FUNC(sub_824A6438);
PPC_FUNC_IMPL(__imp__sub_824A6438) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,28(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r30,24(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x824a645c
	if (!cr0.eq) goto loc_824A645C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A645C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x824a6468
	if (!cr6.eq) goto loc_824A6468;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6468:
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// li r27,2
	r27.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,308(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824a653c
	if (!cr6.gt) goto loc_824A653C;
	// addi r29,r28,54
	r29.s64 = r28.s64 + 54;
loc_824A6494:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x824a64a4
	if (cr6.lt) goto loc_824A64A4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A64A4:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r11,r11,26
	r11.u64 = r11.u64 | 26;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// rlwimi r11,r30,16,1,15
	r11.u64 = (__builtin_rotateleft32(r30.u32, 16) & 0x7FFF0000) | (r11.u64 & 0xFFFFFFFF8000FFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,-2(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -2);
	// rlwinm r11,r11,12,12,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824a64d8
	if (!cr6.eq) goto loc_824A64D8;
	// li r11,85
	r11.s64 = 85;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// b 0x824a6510
	goto loc_824A6510;
loc_824A64D8:
	// rlwinm. r8,r11,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x824a64e8
	if (cr0.eq) goto loc_824A64E8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824A64E8:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x824a64f4
	if (cr0.eq) goto loc_824A64F4;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_824A64F4:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x824a6500
	if (cr0.eq) goto loc_824A6500;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_824A6500:
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a650c
	if (cr0.eq) goto loc_824A650C;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_824A650C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_824A6510:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// oris r10,r10,5
	ctx.r10.u64 = ctx.r10.u64 | 327680;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// addi r27,r27,3
	r27.s64 = r27.s64 + 3;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,308(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 308);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x824a6494
	if (cr6.lt) goto loc_824A6494;
loc_824A653C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A6548"))) PPC_WEAK_FUNC(sub_824A6548);
PPC_FUNC_IMPL(__imp__sub_824A6548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
loc_824A6554:
	// srw r11,r3,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x824a658c
	if (cr6.lt) goto loc_824A658C;
	// beq cr6,0x824a6584
	if (cr6.eq) goto loc_824A6584;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x824a657c
	if (cr6.lt) goto loc_824A657C;
	// bne cr6,0x824a658c
	if (!cr6.eq) goto loc_824A658C;
	// li r11,3
	r11.s64 = 3;
	// b 0x824a6590
	goto loc_824A6590;
loc_824A657C:
	// li r11,2
	r11.s64 = 2;
	// b 0x824a6590
	goto loc_824A6590;
loc_824A6584:
	// li r11,1
	r11.s64 = 1;
	// b 0x824a6590
	goto loc_824A6590;
loc_824A658C:
	// li r11,0
	r11.s64 = 0;
loc_824A6590:
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r11,r8
	ctx.r8.u64 = r11.u64 | ctx.r8.u64;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x824a6554
	if (cr6.lt) goto loc_824A6554;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A65B0"))) PPC_WEAK_FUNC(sub_824A65B0);
PPC_FUNC_IMPL(__imp__sub_824A65B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,401
	r11.s64 = ctx.r4.s64 + 401;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r11,8,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xF;
	// rlwinm r4,r11,15,12,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0xF0000;
	// rlwinm r7,r11,27,21,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FF;
	// rlwinm. r10,r11,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824a6624
	if (cr0.eq) goto loc_824A6624;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x824a6614
	if (cr6.eq) goto loc_824A6614;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x824a660c
	if (cr6.eq) goto loc_824A660C;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x824a6604
	if (cr6.eq) goto loc_824A6604;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bne cr6,0x824a662c
	if (!cr6.eq) goto loc_824A662C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a662c
	if (!cr6.eq) goto loc_824A662C;
	// li r11,4
	r11.s64 = 4;
	// b 0x824a6644
	goto loc_824A6644;
loc_824A6604:
	// li r11,2
	r11.s64 = 2;
	// b 0x824a6648
	goto loc_824A6648;
loc_824A660C:
	// li r11,5
	r11.s64 = 5;
	// b 0x824a6648
	goto loc_824A6648;
loc_824A6614:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a662c
	if (!cr6.eq) goto loc_824A662C;
	// li r11,1
	r11.s64 = 1;
	// b 0x824a6644
	goto loc_824A6644;
loc_824A6624:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a6640
	if (cr6.eq) goto loc_824A6640;
loc_824A662C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r11,5
	r11.s64 = 5;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x824a6648
	goto loc_824A6648;
loc_824A6640:
	// li r11,0
	r11.s64 = 0;
loc_824A6644:
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A6648:
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x824a665c
	if (!cr6.eq) goto loc_824A665C;
	// li r10,85
	ctx.r10.s64 = 85;
	// b 0x824a6690
	goto loc_824A6690;
loc_824A665C:
	// rlwinm. r3,r4,0,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x824a666c
	if (cr0.eq) goto loc_824A666C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824A666C:
	// rlwinm. r3,r4,0,14,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a6678
	if (cr0.eq) goto loc_824A6678;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_824A6678:
	// rlwinm. r3,r4,0,13,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824a6684
	if (cr0.eq) goto loc_824A6684;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_824A6684:
	// rlwinm. r4,r4,0,12,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x824a6690
	if (cr0.eq) goto loc_824A6690;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_824A6690:
	// rlwimi r11,r9,5,19,26
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1FE0) | (r11.u64 & 0xFFFFFFFFFFFFE01F);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwimi r4,r11,16,1,15
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x7FFF0000) | (ctx.r4.u64 & 0xFFFFFFFF8000FFFF);
	// li r11,11
	r11.s64 = 11;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r5,4
	r11.s64 = ctx.r5.s64 + 4;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A66DC"))) PPC_WEAK_FUNC(sub_824A66DC);
PPC_FUNC_IMPL(__imp__sub_824A66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A66E0"))) PPC_WEAK_FUNC(sub_824A66E0);
PPC_FUNC_IMPL(__imp__sub_824A66E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// rlwimi r11,r31,12,21,23
	r11.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r11,r11,24,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// clrlwi r27,r31,21
	r27.u64 = r31.u32 & 0x7FF;
	// li r24,0
	r24.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x824a6830
	if (cr6.eq) goto loc_824A6830;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x824a678c
	if (cr6.eq) goto loc_824A678C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x824a6784
	if (cr6.eq) goto loc_824A6784;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x824a677c
	if (cr6.eq) goto loc_824A677C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// beq cr6,0x824a6770
	if (cr6.eq) goto loc_824A6770;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// beq cr6,0x824a6768
	if (cr6.eq) goto loc_824A6768;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// li r25,4
	r25.s64 = 4;
	// bne cr6,0x824a6870
	if (!cr6.eq) goto loc_824A6870;
	// li r27,32
	r27.s64 = 32;
	// b 0x824a6870
	goto loc_824A6870;
loc_824A6768:
	// li r25,0
	r25.s64 = 0;
	// b 0x824a6870
	goto loc_824A6870;
loc_824A6770:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x824a6870
	goto loc_824A6870;
loc_824A677C:
	// li r25,2
	r25.s64 = 2;
	// b 0x824a6870
	goto loc_824A6870;
loc_824A6784:
	// li r25,3
	r25.s64 = 3;
	// b 0x824a6870
	goto loc_824A6870;
loc_824A678C:
	// rlwinm r11,r31,0,18,18
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000;
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x824a6814
	if (!cr6.eq) goto loc_824A6814;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// lis r24,128
	r24.s64 = 8388608;
	// blt cr6,0x824a67d4
	if (cr6.lt) goto loc_824A67D4;
	// mr r11,r23
	r11.u64 = r23.u64;
	// rlwimi r11,r23,12,21,23
	r11.u64 = (__builtin_rotateleft32(r23.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x824a67dc
	if (cr6.eq) goto loc_824A67DC;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// beq cr6,0x824a67cc
	if (cr6.eq) goto loc_824A67CC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x824a67d4
	goto loc_824A67D4;
loc_824A67CC:
	// lis r22,1
	r22.s64 = 65536;
loc_824A67D0:
	// li r26,0
	r26.s64 = 0;
loc_824A67D4:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// b 0x824a6828
	goto loc_824A6828;
loc_824A67DC:
	// rlwinm r11,r23,16,30,31
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0x3;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x824a67d0
	if (cr6.lt) goto loc_824A67D0;
	// beq cr6,0x824a680c
	if (cr6.eq) goto loc_824A680C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x824a6804
	if (cr6.lt) goto loc_824A6804;
	// bne cr6,0x824a67d0
	if (!cr6.eq) goto loc_824A67D0;
	// lis r26,6
	r26.s64 = 393216;
	// b 0x824a67d4
	goto loc_824A67D4;
loc_824A6804:
	// lis r26,4
	r26.s64 = 262144;
	// b 0x824a67d4
	goto loc_824A67D4;
loc_824A680C:
	// lis r26,2
	r26.s64 = 131072;
	// b 0x824a67d4
	goto loc_824A67D4;
loc_824A6814:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x824a6828
	if (cr6.lt) goto loc_824A6828;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_824A6828:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x824a6870
	goto loc_824A6870;
loc_824A6830:
	// rlwinm r11,r31,0,18,18
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000;
	// li r25,5
	r25.s64 = 5;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x824a6870
	if (!cr6.eq) goto loc_824A6870;
	// cmplwi cr6,r10,768
	cr6.compare<uint32_t>(ctx.r10.u32, 768, xer);
	// blt cr6,0x824a6870
	if (cr6.lt) goto loc_824A6870;
	// mr r11,r23
	r11.u64 = r23.u64;
	// lis r24,128
	r24.s64 = 8388608;
	// rlwimi r11,r23,12,21,23
	r11.u64 = (__builtin_rotateleft32(r23.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(r11.u32, 3840, xer);
	// beq cr6,0x824a6868
	if (cr6.eq) goto loc_824A6868;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x824a6870
	goto loc_824A6870;
loc_824A6868:
	// lis r22,1
	r22.s64 = 65536;
	// li r26,0
	r26.s64 = 0;
loc_824A6870:
	// rlwinm r11,r31,0,8,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824a6888
	if (!cr6.eq) goto loc_824A6888;
	// li r3,12816
	ctx.r3.s64 = 12816;
	// b 0x824a6890
	goto loc_824A6890;
loc_824A6888:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a6548
	sub_824A6548(ctx, base);
loc_824A6890:
	// rlwinm r11,r31,0,4,7
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF000000;
	// lis r10,1792
	ctx.r10.s64 = 117440512;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x824a6924
	if (cr6.gt) goto loc_824A6924;
	// beq cr6,0x824a691c
	if (cr6.eq) goto loc_824A691C;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6914
	if (cr6.eq) goto loc_824A6914;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a690c
	if (cr6.eq) goto loc_824A690C;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6904
	if (cr6.eq) goto loc_824A6904;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a68fc
	if (cr6.eq) goto loc_824A68FC;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a68f4
	if (cr6.eq) goto loc_824A68F4;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824a6960
	if (!cr6.eq) goto loc_824A6960;
	// lis r11,1
	r11.s64 = 65536;
	// b 0x824a6990
	goto loc_824A6990;
loc_824A68F4:
	// lis r11,8
	r11.s64 = 524288;
	// b 0x824a698c
	goto loc_824A698C;
loc_824A68FC:
	// lis r11,8
	r11.s64 = 524288;
	// b 0x824a6990
	goto loc_824A6990;
loc_824A6904:
	// lis r11,2
	r11.s64 = 131072;
	// b 0x824a698c
	goto loc_824A698C;
loc_824A690C:
	// lis r11,2
	r11.s64 = 131072;
	// b 0x824a6990
	goto loc_824A6990;
loc_824A6914:
	// lis r11,0
	r11.s64 = 0;
	// b 0x824a698c
	goto loc_824A698C;
loc_824A691C:
	// lis r11,4
	r11.s64 = 262144;
	// b 0x824a6990
	goto loc_824A6990;
loc_824A6924:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6988
	if (cr6.eq) goto loc_824A6988;
	// lis r10,2304
	ctx.r10.s64 = 150994944;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6980
	if (cr6.eq) goto loc_824A6980;
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6978
	if (cr6.eq) goto loc_824A6978;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6970
	if (cr6.eq) goto loc_824A6970;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6968
	if (cr6.eq) goto loc_824A6968;
loc_824A6960:
	// li r11,0
	r11.s64 = 0;
	// b 0x824a6990
	goto loc_824A6990;
loc_824A6968:
	// lis r11,16
	r11.s64 = 1048576;
	// b 0x824a698c
	goto loc_824A698C;
loc_824A6970:
	// lis r11,16
	r11.s64 = 1048576;
	// b 0x824a6990
	goto loc_824A6990;
loc_824A6978:
	// lis r11,96
	r11.s64 = 6291456;
	// b 0x824a6990
	goto loc_824A6990;
loc_824A6980:
	// lis r11,64
	r11.s64 = 4194304;
	// b 0x824a6990
	goto loc_824A6990;
loc_824A6988:
	// lis r11,4
	r11.s64 = 262144;
loc_824A698C:
	// ori r11,r11,34952
	r11.u64 = r11.u64 | 34952;
loc_824A6990:
	// cmplwi cr6,r21,9
	cr6.compare<uint32_t>(r21.u32, 9, xer);
	// beq cr6,0x824a6ac8
	if (cr6.eq) goto loc_824A6AC8;
	// cmplwi cr6,r21,53
	cr6.compare<uint32_t>(r21.u32, 53, xer);
	// beq cr6,0x824a6ac8
	if (cr6.eq) goto loc_824A6AC8;
	// cmplwi cr6,r21,59
	cr6.compare<uint32_t>(r21.u32, 59, xer);
	// ble cr6,0x824a69d8
	if (!cr6.gt) goto loc_824A69D8;
	// cmplwi cr6,r21,61
	cr6.compare<uint32_t>(r21.u32, 61, xer);
	// ble cr6,0x824a69d4
	if (!cr6.gt) goto loc_824A69D4;
	// cmplwi cr6,r21,62
	cr6.compare<uint32_t>(r21.u32, 62, xer);
	// beq cr6,0x824a6ac8
	if (cr6.eq) goto loc_824A6AC8;
	// cmplwi cr6,r21,78
	cr6.compare<uint32_t>(r21.u32, 78, xer);
	// beq cr6,0x824a69cc
	if (cr6.eq) goto loc_824A69CC;
	// cmplwi cr6,r21,85
	cr6.compare<uint32_t>(r21.u32, 85, xer);
	// beq cr6,0x824a69d4
	if (cr6.eq) goto loc_824A69D4;
	// b 0x824a69d8
	goto loc_824A69D8;
loc_824A69CC:
	// clrlwi. r10,r20,24
	ctx.r10.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a69d8
	if (!cr0.eq) goto loc_824A69D8;
loc_824A69D4:
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
loc_824A69D8:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// bne cr6,0x824a6a6c
	if (!cr6.eq) goto loc_824A6A6C;
	// cmplwi cr6,r3,12816
	cr6.compare<uint32_t>(ctx.r3.u32, 12816, xer);
	// bne cr6,0x824a6a24
	if (!cr6.eq) goto loc_824A6A24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a6a24
	if (!cr6.eq) goto loc_824A6A24;
	// rlwinm r11,r25,16,0,15
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// clrlwi r9,r23,21
	ctx.r9.u64 = r23.u32 & 0x7FF;
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// or r10,r9,r26
	ctx.r10.u64 = ctx.r9.u64 | r26.u64;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | r22.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x824a6ab4
	goto loc_824A6AB4;
loc_824A6A24:
	// rlwinm r10,r25,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r27,16
	ctx.r9.u64 = r27.u32 & 0xFFFF;
	// oris r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 12582912;
	// or r8,r11,r3
	ctx.r8.u64 = r11.u64 | ctx.r3.u64;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r10,r23,21
	ctx.r10.u64 = r23.u32 & 0x7FF;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | r26.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | r22.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x824a6ae0
	goto loc_824A6AE0;
loc_824A6A6C:
	// cmplwi cr6,r3,12816
	cr6.compare<uint32_t>(ctx.r3.u32, 12816, xer);
	// bne cr6,0x824a6a90
	if (!cr6.eq) goto loc_824A6A90;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a6a90
	if (!cr6.eq) goto loc_824A6A90;
	// rlwimi r27,r25,16,0,15
	r27.u64 = (__builtin_rotateleft32(r25.u32, 16) & 0xFFFF0000) | (r27.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r27,r24
	r11.u64 = r27.u64 | r24.u64;
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x824a6ad0
	goto loc_824A6AD0;
loc_824A6A90:
	// rlwinm r10,r25,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r27,16
	ctx.r9.u64 = r27.u32 & 0xFFFF;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// or r8,r11,r3
	ctx.r8.u64 = r11.u64 | ctx.r3.u64;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r11,r24
	r11.u64 = r11.u64 | r24.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_824A6AB4:
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x824a6ae0
	goto loc_824A6AE0;
loc_824A6AC8:
	// rlwimi r27,r25,16,0,15
	r27.u64 = (__builtin_rotateleft32(r25.u32, 16) & 0xFFFF0000) | (r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
loc_824A6AD0:
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_824A6AE0:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_824A6AEC"))) PPC_WEAK_FUNC(sub_824A6AEC);
PPC_FUNC_IMPL(__imp__sub_824A6AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A6AF0"))) PPC_WEAK_FUNC(sub_824A6AF0);
PPC_FUNC_IMPL(__imp__sub_824A6AF0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// li r11,1
	r11.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824a6148
	sub_824A6148(ctx, base);
	// rlwinm r10,r31,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x824a6b48
	if (!cr6.eq) goto loc_824A6B48;
	// lis r5,1
	ctx.r5.s64 = 65536;
loc_824A6B48:
	// rlwinm r10,r31,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFF0000;
	// lis r4,228
	ctx.r4.s64 = 14942208;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x824a6b80
	if (!cr6.eq) goto loc_824A6B80;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r5,12816
	ctx.r9.u64 = ctx.r5.u64 | 12816;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x824a6ba0
	goto loc_824A6BA0;
loc_824A6B80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// bl 0x824a6548
	sub_824A6548(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,2
	ctx.r6.s64 = r11.s64 + 2;
	// or r11,r3,r5
	r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// addi r11,r7,4
	r11.s64 = ctx.r7.s64 + 4;
loc_824A6BA0:
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bne cr6,0x824a6bc0
	if (!cr6.eq) goto loc_824A6BC0;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// ori r9,r10,33
	ctx.r9.u64 = ctx.r10.u64 | 33;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x824a6be4
	goto loc_824A6BE4;
loc_824A6BC0:
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x824a6548
	sub_824A6548(ctx, base);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
loc_824A6BE4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A6BF8"))) PPC_WEAK_FUNC(sub_824A6BF8);
PPC_FUNC_IMPL(__imp__sub_824A6BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r26,16(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a6c38
	if (!cr0.eq) goto loc_824A6C38;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6C38:
	// lwz r11,1580(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1580);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a6c48
	if (!cr6.eq) goto loc_824A6C48;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6C48:
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r30,1580(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 1580);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, xer);
	// mr r11,r23
	r11.u64 = r23.u64;
	// bgt cr6,0x824a757c
	if (cr6.gt) goto loc_824A757C;
	// beq cr6,0x824a7500
	if (cr6.eq) goto loc_824A7500;
	// addi r10,r10,-25
	ctx.r10.s64 = ctx.r10.s64 + -25;
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// bgt cr6,0x824a757c
	if (cr6.gt) goto loc_824A757C;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,27256
	r12.s64 = r12.s64 + 27256;
	// rlwinm r0,r10,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32182
	r12.s64 = -2109079552;
	// addi r12,r12,27800
	r12.s64 = r12.s64 + 27800;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_824A6FE4;
	case 1:
		goto loc_824A70C8;
	case 2:
		goto loc_824A6F00;
	case 3:
		goto loc_824A700C;
	case 4:
		goto loc_824A7048;
	case 5:
		goto loc_824A6FA0;
	case 6:
		goto loc_824A757C;
	case 7:
		goto loc_824A757C;
	case 8:
		goto loc_824A757C;
	case 9:
		goto loc_824A757C;
	case 10:
		goto loc_824A757C;
	case 11:
		goto loc_824A757C;
	case 12:
		goto loc_824A757C;
	case 13:
		goto loc_824A7054;
	case 14:
		goto loc_824A7048;
	case 15:
		goto loc_824A6C98;
	case 16:
		goto loc_824A7298;
	case 17:
		goto loc_824A6E30;
	case 18:
		goto loc_824A6ED4;
	case 19:
		goto loc_824A7290;
	case 20:
		goto loc_824A73CC;
	default:
		__builtin_unreachable();
	}
loc_824A6C98:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r10,24,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r10,19
	cr6.compare<uint32_t>(ctx.r10.u32, 19, xer);
	// bne cr6,0x824a6d60
	if (!cr6.eq) goto loc_824A6D60;
	// rlwinm r11,r11,0,4,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF000000;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824a6cd4
	if (!cr6.eq) goto loc_824A6CD4;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,52
	r11.u64 = r11.u64 | 52;
	// b 0x824a6cd8
	goto loc_824A6CD8;
loc_824A6CD4:
	// li r11,52
	r11.s64 = 52;
loc_824A6CD8:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// lis r11,68
	r11.s64 = 4456448;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r10,r11,32
	ctx.r10.u64 = r11.u64 | 32;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r23,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r23.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// b 0x824a6ea8
	goto loc_824A6EA8;
loc_824A6D60:
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// beq cr6,0x824a6d6c
	if (cr6.eq) goto loc_824A6D6C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6D6C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,0,8,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a6d84
	if (cr6.eq) goto loc_824A6D84;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6D84:
	// li r11,53
	r11.s64 = 53;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r23,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r23.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,4,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x824a6ea4
	if (!cr6.eq) goto loc_824A6EA4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,39
	ctx.r10.s64 = 39;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_824A6E24:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x824a6ea8
	goto loc_824A6EA8;
loc_824A6E30:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r27,1
	r27.s64 = 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824a6ec8
	if (cr6.eq) goto loc_824A6EC8;
	// li r11,41
	r11.s64 = 41;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r4,53
	ctx.r4.s64 = 53;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
loc_824A6EA0:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824A6EA4:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_824A6EA8:
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd2c
	return;
loc_824A6EC8:
	// li r10,39
	ctx.r10.s64 = 39;
loc_824A6ECC:
	// li r11,1
	r11.s64 = 1;
	// b 0x824a6e24
	goto loc_824A6E24;
loc_824A6ED4:
	// li r10,41
	ctx.r10.s64 = 41;
	// li r27,1
	r27.s64 = 1;
	// li r11,1
	r11.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x824a6ea8
	if (cr0.eq) goto loc_824A6EA8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x824a6ea8
	goto loc_824A6EA8;
loc_824A6F00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,3
	r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(r11.u32, 3840, xer);
	// beq cr6,0x824a6f20
	if (cr6.eq) goto loc_824A6F20;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6F20:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi. r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a6f30
	if (cr0.eq) goto loc_824A6F30;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6F30:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	cr6.compare<uint32_t>(r11.u32, 1792, xer);
	// beq cr6,0x824a6f4c
	if (cr6.eq) goto loc_824A6F4C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6F4C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x824a6f60
	if (cr6.lt) goto loc_824A6F60;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6F60:
	// li r11,62
	r11.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// b 0x824a6ea0
	goto loc_824A6EA0;
loc_824A6FA0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(r11.u32, 4608, xer);
	// beq cr6,0x824a6fc0
	if (cr6.eq) goto loc_824A6FC0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A6FC0:
	// li r10,50
	ctx.r10.s64 = 50;
loc_824A6FC4:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r11,2
	r11.s64 = 2;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
loc_824A6FD8:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824A6FDC:
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// b 0x824a6ea8
	goto loc_824A6EA8;
loc_824A6FE4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(r11.u32, 4608, xer);
	// beq cr6,0x824a7004
	if (cr6.eq) goto loc_824A7004;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7004:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x824a6fc4
	goto loc_824A6FC4;
loc_824A700C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r27,1
	r27.s64 = 1;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a7034
	if (!cr0.eq) goto loc_824A7034;
	// li r11,43
	r11.s64 = 43;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// b 0x824a703c
	goto loc_824A703C;
loc_824A7034:
	// li r11,83
	r11.s64 = 83;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_824A703C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r11,1
	r11.s64 = 1;
	// b 0x824a6ea8
	goto loc_824A6EA8;
loc_824A7048:
	// li r10,42
	ctx.r10.s64 = 42;
loc_824A704C:
	// li r27,1
	r27.s64 = 1;
	// b 0x824a6ecc
	goto loc_824A6ECC;
loc_824A7054:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	cr6.compare<uint32_t>(r11.u32, 1792, xer);
	// beq cr6,0x824a7074
	if (cr6.eq) goto loc_824A7074;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7074:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x824a7088
	if (cr6.lt) goto loc_824A7088;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7088:
	// li r11,62
	r11.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// b 0x824a6ea0
	goto loc_824A6EA0;
loc_824A70C8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r27,3
	r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	cr6.compare<uint32_t>(r11.u32, 4864, xer);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// bne cr6,0x824a7188
	if (!cr6.eq) goto loc_824A7188;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(r11.u32, 4608, xer);
	// beq cr6,0x824a7100
	if (cr6.eq) goto loc_824A7100;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7100:
	// li r11,52
	r11.s64 = 52;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// lis r11,68
	r11.s64 = 4456448;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r10,r11,32
	ctx.r10.u64 = r11.u64 | 32;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,41
	ctx.r7.s64 = 41;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x824a6fdc
	goto loc_824A6FDC;
loc_824A7188:
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(r11.u32, 4608, xer);
	// beq cr6,0x824a7194
	if (cr6.eq) goto loc_824A7194;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7194:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	cr6.compare<uint32_t>(r11.u32, 3584, xer);
	// beq cr6,0x824a71b0
	if (cr6.eq) goto loc_824A71B0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A71B0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x824a71c4
	if (cr6.lt) goto loc_824A71C4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A71C4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,0,4,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF000000;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x824a7250
	if (!cr6.eq) goto loc_824A7250;
	// li r11,53
	r11.s64 = 53;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// li r10,39
	ctx.r10.s64 = 39;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,41
	ctx.r8.s64 = 41;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x824a6fdc
	goto loc_824A6FDC;
loc_824A7250:
	// li r11,9
	r11.s64 = 9;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x824a6ea8
	goto loc_824A6EA8;
loc_824A7290:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x824a704c
	goto loc_824A704C;
loc_824A7298:
	// rlwinm r11,r27,16,29,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x7;
	// li r27,3
	r27.s64 = 3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x824a72f4
	if (cr6.eq) goto loc_824A72F4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x824a72ec
	if (cr6.eq) goto loc_824A72EC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x824a72e4
	if (cr6.eq) goto loc_824A72E4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// beq cr6,0x824a72dc
	if (cr6.eq) goto loc_824A72DC;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x824a72d4
	if (cr6.eq) goto loc_824A72D4;
	// lis r11,1
	r11.s64 = 65536;
	// b 0x824a72fc
	goto loc_824A72FC;
loc_824A72D4:
	// lis r11,4
	r11.s64 = 262144;
	// b 0x824a72fc
	goto loc_824A72FC;
loc_824A72DC:
	// li r11,52
	r11.s64 = 52;
	// b 0x824a7300
	goto loc_824A7300;
loc_824A72E4:
	// lis r11,5
	r11.s64 = 327680;
	// b 0x824a72f8
	goto loc_824A72F8;
loc_824A72EC:
	// lis r11,2
	r11.s64 = 131072;
	// b 0x824a72f8
	goto loc_824A72F8;
loc_824A72F4:
	// lis r11,3
	r11.s64 = 196608;
loc_824A72F8:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
loc_824A72FC:
	// ori r11,r11,52
	r11.u64 = r11.u64 | 52;
loc_824A7300:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r11,r23
	r11.u64 = r23.u64;
loc_824A7310:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r26,512
	cr6.compare<uint32_t>(r26.u32, 512, xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x824a7364
	if (cr6.lt) goto loc_824A7364;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, xer);
	// bne cr6,0x824a7364
	if (!cr6.eq) goto loc_824A7364;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// bne cr6,0x824a7364
	if (!cr6.eq) goto loc_824A7364;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x824a736c
	goto loc_824A736C;
loc_824A7364:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r23,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r23.u32);
loc_824A736C:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x824a7310
	if (cr6.lt) goto loc_824A7310;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,52
	ctx.r8.s64 = 52;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// b 0x824a6ea0
	goto loc_824A6EA0;
loc_824A73CC:
	// rlwinm r11,r27,16,29,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x7;
	// li r27,3
	r27.s64 = 3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x824a7428
	if (cr6.eq) goto loc_824A7428;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x824a7420
	if (cr6.eq) goto loc_824A7420;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x824a7418
	if (cr6.eq) goto loc_824A7418;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// beq cr6,0x824a7410
	if (cr6.eq) goto loc_824A7410;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x824a7408
	if (cr6.eq) goto loc_824A7408;
	// lis r11,1
	r11.s64 = 65536;
	// b 0x824a7430
	goto loc_824A7430;
loc_824A7408:
	// lis r11,4
	r11.s64 = 262144;
	// b 0x824a7430
	goto loc_824A7430;
loc_824A7410:
	// li r11,7
	r11.s64 = 7;
	// b 0x824a7434
	goto loc_824A7434;
loc_824A7418:
	// lis r11,5
	r11.s64 = 327680;
	// b 0x824a742c
	goto loc_824A742C;
loc_824A7420:
	// lis r11,2
	r11.s64 = 131072;
	// b 0x824a742c
	goto loc_824A742C;
loc_824A7428:
	// lis r11,3
	r11.s64 = 196608;
loc_824A742C:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
loc_824A7430:
	// ori r11,r11,7
	r11.u64 = r11.u64 | 7;
loc_824A7434:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r11,r23
	r11.u64 = r23.u64;
loc_824A7444:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r26,512
	cr6.compare<uint32_t>(r26.u32, 512, xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x824a7498
	if (cr6.lt) goto loc_824A7498;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, xer);
	// bne cr6,0x824a7498
	if (!cr6.eq) goto loc_824A7498;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// bne cr6,0x824a7498
	if (!cr6.eq) goto loc_824A7498;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x824a74a0
	goto loc_824A74A0;
loc_824A7498:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r23,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r23.u32);
loc_824A74A0:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x824a7444
	if (cr6.lt) goto loc_824A7444;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// b 0x824a6ea0
	goto loc_824A6EA0;
loc_824A7500:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	cr6.compare<uint32_t>(r11.u32, 4864, xer);
	// beq cr6,0x824a7520
	if (cr6.eq) goto loc_824A7520;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7520:
	// li r11,7
	r11.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// lis r11,68
	r11.s64 = 4456448;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r10,r11,32
	ctx.r10.u64 = r11.u64 | 32;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// b 0x824a6fd8
	goto loc_824A6FD8;
loc_824A757C:
	// li r27,1
	r27.s64 = 1;
	// b 0x824a6ea8
	goto loc_824A6EA8;
}

__attribute__((alias("__imp__sub_824A7584"))) PPC_WEAK_FUNC(sub_824A7584);
PPC_FUNC_IMPL(__imp__sub_824A7584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A7588"))) PPC_WEAK_FUNC(sub_824A7588);
PPC_FUNC_IMPL(__imp__sub_824A7588) {
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
	// mflr r12
	// bl 0x8239bcc8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r6)
	r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// li r18,0
	r18.s64 = 0;
	// rlwinm r10,r30,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// lwz r25,16(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r28,r18
	r28.u64 = r18.u64;
	// addi r11,r6,4
	r11.s64 = ctx.r6.s64 + 4;
	// mr r20,r30
	r20.u64 = r30.u64;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x824a75ec
	if (!cr6.eq) goto loc_824A75EC;
	// cmplwi cr6,r25,768
	cr6.compare<uint32_t>(r25.u32, 768, xer);
	// blt cr6,0x824a75ec
	if (cr6.lt) goto loc_824A75EC;
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x824a75f0
	goto loc_824A75F0;
loc_824A75EC:
	// mr r24,r18
	r24.u64 = r18.u64;
loc_824A75F0:
	// lwz r26,356(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r19,r18
	r19.u64 = r18.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x824a7614
	if (cr6.eq) goto loc_824A7614;
	// li r10,33
	ctx.r10.s64 = 33;
	// lwz r19,0(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwimi r30,r10,0,19,31
	r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1FFF) | (r30.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r30,r10,0,1,3
	r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x70000000) | (r30.u64 & 0xFFFFFFFF8FFFFFFF);
loc_824A7614:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_824A7618:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r8,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// beq 0x824a767c
	if (cr0.eq) goto loc_824A767C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// cmplwi cr6,r25,512
	cr6.compare<uint32_t>(r25.u32, 512, xer);
	// blt cr6,0x824a7674
	if (cr6.lt) goto loc_824A7674;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r8,8192
	cr6.compare<uint32_t>(ctx.r8.u32, 8192, xer);
	// bne cr6,0x824a7674
	if (!cr6.eq) goto loc_824A7674;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwimi r8,r9,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r9,r8,0,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r9,512
	cr6.compare<uint32_t>(ctx.r9.u32, 512, xer);
	// bne cr6,0x824a7674
	if (!cr6.eq) goto loc_824A7674;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x824a7688
	goto loc_824A7688;
loc_824A7674:
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// b 0x824a7684
	goto loc_824A7684;
loc_824A767C:
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stwx r18,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r18.u32);
loc_824A7684:
	// stwx r18,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r18.u32);
loc_824A7688:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x824a7618
	if (cr6.lt) goto loc_824A7618;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x824a77d0
	if (cr6.eq) goto loc_824A77D0;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// beq cr6,0x824a76b0
	if (cr6.eq) goto loc_824A76B0;
	// mr r23,r18
	r23.u64 = r18.u64;
	// b 0x824a7888
	goto loc_824A7888;
loc_824A76B0:
	// mr r11,r20
	r11.u64 = r20.u64;
	// rlwimi r11,r20,12,21,23
	r11.u64 = (__builtin_rotateleft32(r20.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a76c4
	if (cr0.eq) goto loc_824A76C4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A76C4:
	// cmplwi cr6,r25,768
	cr6.compare<uint32_t>(r25.u32, 768, xer);
	// bge cr6,0x824a770c
	if (!cr6.lt) goto loc_824A770C;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// beq cr6,0x824a76e8
	if (cr6.eq) goto loc_824A76E8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A76E8:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// beq cr6,0x824a7704
	if (cr6.eq) goto loc_824A7704;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7704:
	// addi r23,r28,4
	r23.s64 = r28.s64 + 4;
	// b 0x824a7724
	goto loc_824A7724;
loc_824A770C:
	// rlwinm r11,r29,0,4,7
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF000000;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a7720
	if (cr6.eq) goto loc_824A7720;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7720:
	// addi r23,r28,2
	r23.s64 = r28.s64 + 2;
loc_824A7724:
	// li r11,89
	r11.s64 = 89;
	// li r29,3
	r29.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r30,r29,16,12,15
	r30.u64 = (__builtin_rotateleft32(r29.u32, 16) & 0xF0000) | (r30.u64 & 0xFFFFFFFFFFF0FFFF);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x824a775c
	if (!cr6.eq) goto loc_824A775C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_824A775C:
	// bl 0x824a6148
	sub_824A6148(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,89
	ctx.r8.s64 = 89;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x824a7884
	if (cr6.eq) goto loc_824A7884;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// rlwimi r4,r29,16,12,15
	ctx.r4.u64 = (__builtin_rotateleft32(r29.u32, 16) & 0xF0000) | (ctx.r4.u64 & 0xFFFFFFFFFFF0FFFF);
loc_824A779C:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a6af0
	sub_824A6AF0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// b 0x824a7888
	goto loc_824A7888;
loc_824A77D0:
	// lwz r29,108(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r23,r28,4
	r23.s64 = r28.s64 + 4;
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwimi r11,r29,12,21,23
	r11.u64 = (__builtin_rotateleft32(r29.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a77ec
	if (cr0.eq) goto loc_824A77EC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A77EC:
	// lwz r28,112(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r28
	r11.u64 = r28.u64;
	// rlwimi r11,r28,12,21,23
	r11.u64 = (__builtin_rotateleft32(r28.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a7804
	if (cr0.eq) goto loc_824A7804;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7804:
	// xor r11,r28,r29
	r11.u64 = r28.u64 ^ r29.u64;
	// clrlwi. r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a7814
	if (!cr0.eq) goto loc_824A7814;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7814:
	// li r11,87
	r11.s64 = 87;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x824a7844
	if (!cr6.eq) goto loc_824A7844;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_824A7844:
	// bl 0x824a6148
	sub_824A6148(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,87
	ctx.r8.s64 = 87;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x824a7884
	if (cr6.eq) goto loc_824A7884;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x824a779c
	goto loc_824A779C;
loc_824A7884:
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_824A7888:
	// stw r23,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r23.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_824A78A4"))) PPC_WEAK_FUNC(sub_824A78A4);
PPC_FUNC_IMPL(__imp__sub_824A78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A78A8"))) PPC_WEAK_FUNC(sub_824A78A8);
PPC_FUNC_IMPL(__imp__sub_824A78A8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r14,r8
	r14.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lwz r24,16(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r24,768
	cr6.compare<uint32_t>(r24.u32, 768, xer);
	// bge cr6,0x824a78e0
	if (!cr6.lt) goto loc_824A78E0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A78E0:
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r17,0
	r17.s64 = 0;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// rlwimi r11,r28,12,21,23
	r11.u64 = (__builtin_rotateleft32(r28.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r16,r28
	r16.u64 = r28.u64;
	// rlwinm. r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a7908
	if (cr0.eq) goto loc_824A7908;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7908:
	// rlwinm. r11,r28,0,18,18
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a7914
	if (cr0.eq) goto loc_824A7914;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7914:
	// lwz r21,356(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r18,r17
	r18.u64 = r17.u64;
	// li r19,33
	r19.s64 = 33;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x824a793c
	if (cr6.eq) goto loc_824A793C;
	// mr r11,r19
	r11.u64 = r19.u64;
	// lwz r18,0(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwimi r28,r11,0,19,31
	r28.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1FFF) | (r28.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r28,r11,0,1,3
	r28.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x70000000) | (r28.u64 & 0xFFFFFFFF8FFFFFFF);
loc_824A793C:
	// mr r29,r17
	r29.u64 = r17.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
loc_824A7944:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// beq 0x824a79b4
	if (cr0.eq) goto loc_824A79B4;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x824a79ac
	if (!cr6.eq) goto loc_824A79AC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x824a7988
	if (cr6.eq) goto loc_824A7988;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824a79ac
	if (!cr6.eq) goto loc_824A79AC;
loc_824A7988:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824a7994
	if (cr6.eq) goto loc_824A7994;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7994:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r11,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r11.u32);
	// b 0x824a79c0
	goto loc_824A79C0;
loc_824A79AC:
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// b 0x824a79bc
	goto loc_824A79BC;
loc_824A79B4:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r17,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r17.u32);
loc_824A79BC:
	// stwx r17,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r17.u32);
loc_824A79C0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// blt cr6,0x824a7944
	if (cr6.lt) goto loc_824A7944;
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r15,r27,3
	r15.s64 = r27.s64 + 3;
	// mr r11,r31
	r11.u64 = r31.u64;
	// rlwimi r11,r31,12,21,23
	r11.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	cr6.compare<uint32_t>(r11.u32, 2560, xer);
	// beq cr6,0x824a79f0
	if (cr6.eq) goto loc_824A79F0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A79F0:
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// li r27,1
	r27.s64 = 1;
	// rlwimi r10,r11,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwinm r29,r31,0,8,15
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFF0000;
	// lis r25,228
	r25.s64 = 14942208;
	// addi r3,r20,4
	ctx.r3.s64 = r20.s64 + 4;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// stw r10,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824a7a34
	if (cr6.eq) goto loc_824A7A34;
	// oris r28,r28,15
	r28.u64 = r28.u64 | 983040;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x824a7a34
	if (!cr6.eq) goto loc_824A7A34;
	// rlwimi r28,r19,0,19,31
	r28.u64 = (__builtin_rotateleft32(r19.u32, 0) & 0x1FFF) | (r28.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r28,r19,0,1,3
	r28.u64 = (__builtin_rotateleft32(r19.u32, 0) & 0x70000000) | (r28.u64 & 0xFFFFFFFF8FFFFFFF);
loc_824A7A34:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824a6148
	sub_824A6148(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r30,112(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,94
	ctx.r8.s64 = 94;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,94
	ctx.r8.s64 = 94;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x824a7ae0
	if (cr6.eq) goto loc_824A7AE0;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x824a6af0
	sub_824A6AF0(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x824a7b48
	goto loc_824A7B48;
loc_824A7AE0:
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// beq cr6,0x824a7b44
	if (cr6.eq) goto loc_824A7B44;
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x824a6148
	sub_824A6148(ctx, base);
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ori r10,r10,33
	ctx.r10.u64 = ctx.r10.u64 | 33;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x824a6548
	sub_824A6548(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r7,4
	r11.s64 = ctx.r7.s64 + 4;
	// b 0x824a7b48
	goto loc_824A7B48;
loc_824A7B44:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_824A7B48:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,324(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r14)
	PPC_STORE_U32(r14.u32 + 0, r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_824A7B68"))) PPC_WEAK_FUNC(sub_824A7B68);
PPC_FUNC_IMPL(__imp__sub_824A7B68) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// li r19,0
	r19.s64 = 0;
	// stw r9,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// lwz r17,16(r23)
	r17.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// stw r19,1600(r23)
	PPC_STORE_U32(r23.u32 + 1600, r19.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// addi r29,r14,4
	r29.s64 = r14.s64 + 4;
	// lwz r10,28(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// bne 0x824a7bdc
	if (!cr0.eq) goto loc_824A7BDC;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// li r28,2
	r28.s64 = 2;
	// addi r24,r11,4
	r24.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// b 0x824a7be4
	goto loc_824A7BE4;
loc_824A7BDC:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r10
	r24.u64 = r11.u64 + ctx.r10.u64;
loc_824A7BE4:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a7c00
	if (cr0.eq) goto loc_824A7C00;
	// lwz r11,1580(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 1580);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824a7c00
	if (cr0.eq) goto loc_824A7C00;
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
loc_824A7C00:
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(r17.u32, 768, xer);
	// blt cr6,0x824a7c20
	if (cr6.lt) goto loc_824A7C20;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r23,1604
	ctx.r3.s64 = r23.s64 + 1604;
	// mr r18,r19
	r18.u64 = r19.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x824a7c24
	goto loc_824A7C24;
loc_824A7C20:
	// lwz r18,104(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_824A7C24:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x824a81ac
	if (cr6.eq) goto loc_824A81AC;
	// addi r11,r18,401
	r11.s64 = r18.s64 + 401;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r11,r23
	r21.u64 = r11.u64 + r23.u64;
loc_824A7C3C:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(r11.u32, r16.u32, xer);
	// bge cr6,0x824a8274
	if (!cr6.lt) goto loc_824A8274;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r22,r4,0,3,3
	r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bgt cr6,0x824a81a0
	if (cr6.gt) goto loc_824A81A0;
	// beq cr6,0x824a80b4
	if (cr6.eq) goto loc_824A80B4;
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(r11.u32, 96, xer);
	// bgt cr6,0x824a81a0
	if (cr6.gt) goto loc_824A81A0;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,27304
	r12.s64 = r12.s64 + 27304;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32182
	r12.s64 = -2109079552;
	// addi r12,r12,31892
	r12.s64 = r12.s64 + 31892;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_824A81A0;
	case 1:
		goto loc_824A7C94;
	case 2:
		goto loc_824A7CF0;
	case 3:
		goto loc_824A7CFC;
	case 4:
		goto loc_824A7D08;
	case 5:
		goto loc_824A7D14;
	case 6:
		goto loc_824A7D20;
	case 7:
		goto loc_824A7D2C;
	case 8:
		goto loc_824A7D38;
	case 9:
		goto loc_824A7D44;
	case 10:
		goto loc_824A7D50;
	case 11:
		goto loc_824A7D5C;
	case 12:
		goto loc_824A7D68;
	case 13:
		goto loc_824A7D78;
	case 14:
		goto loc_824A7DB0;
	case 15:
		goto loc_824A7DC8;
	case 16:
		goto loc_824A7D80;
	case 17:
		goto loc_824A7D8C;
	case 18:
		goto loc_824A804C;
	case 19:
		goto loc_824A7DBC;
	case 20:
		goto loc_824A7DD4;
	case 21:
		goto loc_824A7DE0;
	case 22:
		goto loc_824A7DF0;
	case 23:
		goto loc_824A7DF8;
	case 24:
		goto loc_824A7E00;
	case 25:
		goto loc_824A8024;
	case 26:
		goto loc_824A8024;
	case 27:
		goto loc_824A8024;
	case 28:
		goto loc_824A8024;
	case 29:
		goto loc_824A8024;
	case 30:
		goto loc_824A8024;
	case 31:
		goto loc_824A7EB8;
	case 32:
		goto loc_824A8058;
	case 33:
		goto loc_824A8064;
	case 34:
		goto loc_824A8070;
	case 35:
		goto loc_824A809C;
	case 36:
		goto loc_824A80A8;
	case 37:
		goto loc_824A8070;
	case 38:
		goto loc_824A8024;
	case 39:
		goto loc_824A8024;
	case 40:
		goto loc_824A8024;
	case 41:
		goto loc_824A8024;
	case 42:
		goto loc_824A8024;
	case 43:
		goto loc_824A8024;
	case 44:
		goto loc_824A8024;
	case 45:
		goto loc_824A8024;
	case 46:
		goto loc_824A7E08;
	case 47:
		goto loc_824A8014;
	case 48:
		goto loc_824A801C;
	case 49:
		goto loc_824A81A0;
	case 50:
		goto loc_824A81A0;
	case 51:
		goto loc_824A81A0;
	case 52:
		goto loc_824A81A0;
	case 53:
		goto loc_824A81A0;
	case 54:
		goto loc_824A81A0;
	case 55:
		goto loc_824A81A0;
	case 56:
		goto loc_824A81A0;
	case 57:
		goto loc_824A81A0;
	case 58:
		goto loc_824A81A0;
	case 59:
		goto loc_824A81A0;
	case 60:
		goto loc_824A81A0;
	case 61:
		goto loc_824A81A0;
	case 62:
		goto loc_824A81A0;
	case 63:
		goto loc_824A81A0;
	case 64:
		goto loc_824A81A0;
	case 65:
		goto loc_824A81A0;
	case 66:
		goto loc_824A81A0;
	case 67:
		goto loc_824A81A0;
	case 68:
		goto loc_824A81A0;
	case 69:
		goto loc_824A81A0;
	case 70:
		goto loc_824A81A0;
	case 71:
		goto loc_824A81A0;
	case 72:
		goto loc_824A81A0;
	case 73:
		goto loc_824A81A0;
	case 74:
		goto loc_824A81A0;
	case 75:
		goto loc_824A81A0;
	case 76:
		goto loc_824A81A0;
	case 77:
		goto loc_824A81A0;
	case 78:
		goto loc_824A7D98;
	case 79:
		goto loc_824A7DA4;
	case 80:
		goto loc_824A81A0;
	case 81:
		goto loc_824A801C;
	case 82:
		goto loc_824A81A0;
	case 83:
		goto loc_824A81A0;
	case 84:
		goto loc_824A81A0;
	case 85:
		goto loc_824A81A0;
	case 86:
		goto loc_824A81A0;
	case 87:
		goto loc_824A81A0;
	case 88:
		goto loc_824A81A0;
	case 89:
		goto loc_824A81A0;
	case 90:
		goto loc_824A81A0;
	case 91:
		goto loc_824A81A0;
	case 92:
		goto loc_824A81A0;
	case 93:
		goto loc_824A81A0;
	case 94:
		goto loc_824A7E18;
	case 95:
		goto loc_824A7E80;
	case 96:
		goto loc_824A8024;
	default:
		__builtin_unreachable();
	}
loc_824A7C94:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r30,1
	r30.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// addi r11,r11,-768
	r11.s64 = r11.s64 + -768;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r31,r11,71
	r31.s64 = r11.s64 + 71;
loc_824A7CB8:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r24,4
	ctx.r3.s64 = r24.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// rlwinm r11,r27,0,18,18
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x824a80c0
	if (!cr6.eq) goto loc_824A80C0;
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(r17.u32, 768, xer);
	// blt cr6,0x824a80c0
	if (cr6.lt) goto loc_824A80C0;
	// lwz r25,0(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x824a80c4
	goto loc_824A80C4;
loc_824A7CF0:
	// li r30,2
	r30.s64 = 2;
	// li r31,3
	r31.s64 = 3;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7CFC:
	// li r30,2
	r30.s64 = 2;
	// li r31,91
	r31.s64 = 91;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D08:
	// li r30,3
	r30.s64 = 3;
	// li r31,64
	r31.s64 = 64;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D14:
	// li r30,2
	r30.s64 = 2;
	// li r31,73
	r31.s64 = 73;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D20:
	// li r30,1
	r30.s64 = 1;
	// li r31,81
	r31.s64 = 81;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D2C:
	// li r30,1
	r30.s64 = 1;
	// li r31,85
	r31.s64 = 85;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D38:
	// li r30,2
	r30.s64 = 2;
	// li r31,34
	r31.s64 = 34;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D44:
	// li r30,2
	r30.s64 = 2;
	// li r31,35
	r31.s64 = 35;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D50:
	// li r30,2
	r30.s64 = 2;
	// li r31,68
	r31.s64 = 68;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D5C:
	// li r30,2
	r30.s64 = 2;
	// li r31,65
	r31.s64 = 65;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D68:
	// lis r31,5
	r31.s64 = 327680;
loc_824A7D6C:
	// li r30,2
	r30.s64 = 2;
	// ori r31,r31,86
	r31.u64 = r31.u64 | 86;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D78:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x824a7d6c
	goto loc_824A7D6C;
loc_824A7D80:
	// li r30,1
	r30.s64 = 1;
	// li r31,57
	r31.s64 = 57;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D8C:
	// li r30,2
	r30.s64 = 2;
	// li r31,36
	r31.s64 = 36;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7D98:
	// li r30,1
	r30.s64 = 1;
	// li r31,46
	r31.s64 = 46;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7DA4:
	// li r30,1
	r30.s64 = 1;
	// li r31,61
	r31.s64 = 61;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7DB0:
	// li r30,1
	r30.s64 = 1;
	// li r31,45
	r31.s64 = 45;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7DBC:
	// li r30,1
	r30.s64 = 1;
	// li r31,49
	r31.s64 = 49;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7DC8:
	// li r30,1
	r30.s64 = 1;
	// li r31,60
	r31.s64 = 60;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7DD4:
	// li r30,2
	r30.s64 = 2;
	// li r31,69
	r31.s64 = 69;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7DE0:
	// lis r31,1
	r31.s64 = 65536;
loc_824A7DE4:
	// li r30,2
	r30.s64 = 2;
	// ori r31,r31,69
	r31.u64 = r31.u64 | 69;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7DF0:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x824a7de4
	goto loc_824A7DE4;
loc_824A7DF8:
	// lis r31,3
	r31.s64 = 196608;
	// b 0x824a7de4
	goto loc_824A7DE4;
loc_824A7E00:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x824a7de4
	goto loc_824A7DE4;
loc_824A7E08:
	// lis r31,1
	r31.s64 = 65536;
	// li r30,1
	r30.s64 = 1;
	// ori r31,r31,72
	r31.u64 = r31.u64 | 72;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7E18:
	// rlwinm r11,r4,16,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0x7;
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x824a7e70
	if (cr6.eq) goto loc_824A7E70;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x824a7e68
	if (cr6.eq) goto loc_824A7E68;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x824a7e60
	if (cr6.eq) goto loc_824A7E60;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x824a7e58
	if (cr6.eq) goto loc_824A7E58;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x824a7e50
	if (cr6.eq) goto loc_824A7E50;
	// lis r31,1
	r31.s64 = 65536;
	// b 0x824a7e74
	goto loc_824A7E74;
loc_824A7E50:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x824a7e74
	goto loc_824A7E74;
loc_824A7E58:
	// li r31,86
	r31.s64 = 86;
	// b 0x824a7e78
	goto loc_824A7E78;
loc_824A7E60:
	// lis r31,5
	r31.s64 = 327680;
	// b 0x824a7e74
	goto loc_824A7E74;
loc_824A7E68:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x824a7e74
	goto loc_824A7E74;
loc_824A7E70:
	// lis r31,3
	r31.s64 = 196608;
loc_824A7E74:
	// ori r31,r31,86
	r31.u64 = r31.u64 | 86;
loc_824A7E78:
	// mr r22,r19
	r22.u64 = r19.u64;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A7E80:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824a78a8
	sub_824A78A8(ctx, base);
loc_824A7EA8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// b 0x824a8198
	goto loc_824A8198;
loc_824A7EB8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// beq cr6,0x824a8014
	if (cr6.eq) goto loc_824A8014;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1536
	cr6.compare<uint32_t>(r11.u32, 1536, xer);
	// bne cr6,0x824a7f78
	if (!cr6.eq) goto loc_824A7F78;
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(r17.u32, 768, xer);
	// bge cr6,0x824a7ef4
	if (!cr6.lt) goto loc_824A7EF4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7EF4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1536
	cr6.compare<uint32_t>(r11.u32, 1536, xer);
	// beq cr6,0x824a7f10
	if (cr6.eq) goto loc_824A7F10;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7F10:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r10,8,4,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwimi r11,r10,5,16,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0xFFE0) | (r11.u64 & 0xFFFFFFFFFFFF001F);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwimi r10,r11,17,27,30
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r10,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r10.u32);
	// bl 0x824a65b0
	sub_824A65B0(ctx, base);
	// lwz r28,96(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x824a8014
	goto loc_824A8014;
loc_824A7F78:
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(r17.u32, 768, xer);
	// bge cr6,0x824a7f84
	if (!cr6.lt) goto loc_824A7F84;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7F84:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	cr6.compare<uint32_t>(r11.u32, 2560, xer);
	// beq cr6,0x824a7fa0
	if (cr6.eq) goto loc_824A7FA0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A7FA0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,1,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x78000000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a7fe4
	if (cr6.eq) goto loc_824A7FE4;
	// lis r10,6144
	ctx.r10.s64 = 402653184;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a7fdc
	if (cr6.eq) goto loc_824A7FDC;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a7fd4
	if (cr6.eq) goto loc_824A7FD4;
	// mr r11,r19
	r11.u64 = r19.u64;
	// b 0x824a7fe8
	goto loc_824A7FE8;
loc_824A7FD4:
	// li r11,3
	r11.s64 = 3;
	// b 0x824a7fe8
	goto loc_824A7FE8;
loc_824A7FDC:
	// li r11,4
	r11.s64 = 4;
	// b 0x824a7fe8
	goto loc_824A7FE8;
loc_824A7FE4:
	// li r11,2
	r11.s64 = 2;
loc_824A7FE8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,24,5,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7000000;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r10,r10,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// ori r11,r11,25
	r11.u64 = r11.u64 | 25;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
loc_824A8014:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// b 0x824a81a0
	goto loc_824A81A0;
loc_824A801C:
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// b 0x824a81a0
	goto loc_824A81A0;
loc_824A8024:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824a6bf8
	sub_824A6BF8(ctx, base);
	// b 0x824a7ea8
	goto loc_824A7EA8;
loc_824A804C:
	// li r30,3
	r30.s64 = 3;
	// li r31,63
	r31.s64 = 63;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A8058:
	// li r30,2
	r30.s64 = 2;
	// li r31,78
	r31.s64 = 78;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A8064:
	// li r30,2
	r30.s64 = 2;
	// li r31,19
	r31.s64 = 19;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A8070:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824a7588
	sub_824A7588(ctx, base);
	// b 0x824a7ea8
	goto loc_824A7EA8;
loc_824A809C:
	// li r30,1
	r30.s64 = 1;
	// li r31,1
	r31.s64 = 1;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A80A8:
	// li r30,1
	r30.s64 = 1;
	// li r31,76
	r31.s64 = 76;
	// b 0x824a7cb8
	goto loc_824A7CB8;
loc_824A80B4:
	// rlwinm r11,r4,18,15,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x1FFFC;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// b 0x824a81a0
	goto loc_824A81A0;
loc_824A80C0:
	// mr r25,r19
	r25.u64 = r19.u64;
loc_824A80C4:
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x824a80f8
	if (cr6.eq) goto loc_824A80F8;
	// li r11,33
	r11.s64 = 33;
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r4,r11,0,19,31
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1FFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFE000);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwimi r4,r11,0,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x824a80fc
	goto loc_824A80FC;
loc_824A80F8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_824A80FC:
	// bl 0x824a6148
	sub_824A6148(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r28,r19
	r28.u64 = r19.u64;
loc_824A8108:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bge cr6,0x824a8170
	if (!cr6.lt) goto loc_824A8170;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r4,0,18,18
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x824a8138
	if (!cr6.eq) goto loc_824A8138;
	// cmplwi cr6,r17,512
	cr6.compare<uint32_t>(r17.u32, 512, xer);
	// blt cr6,0x824a8138
	if (cr6.lt) goto loc_824A8138;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x824a813c
	goto loc_824A813C;
loc_824A8138:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_824A813C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824a66e0
	sub_824A66E0(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// blt cr6,0x824a8108
	if (cr6.lt) goto loc_824A8108;
loc_824A8170:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x824a819c
	if (cr6.eq) goto loc_824A819C;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824a6af0
	sub_824A6AF0(ctx, base);
loc_824A8198:
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_824A819C:
	// lwz r28,96(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_824A81A0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// bne cr6,0x824a7c3c
	if (!cr6.eq) goto loc_824A7C3C;
loc_824A81AC:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(r11.u32, r16.u32, xer);
	// bge cr6,0x824a8274
	if (!cr6.lt) goto loc_824A8274;
	// cmplwi cr6,r17,768
	cr6.compare<uint32_t>(r17.u32, 768, xer);
	// bge cr6,0x824a8218
	if (!cr6.lt) goto loc_824A8218;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r11,r24
	r11.u64 = r24.u64;
	// rlwinm. r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// beq 0x824a8210
	if (cr0.eq) goto loc_824A8210;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r11,r24,4
	r11.s64 = r24.s64 + 4;
	// lis r8,77
	ctx.r8.s64 = 5046272;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r9,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r7,r10,50
	ctx.r7.u64 = ctx.r10.u64 | 50;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_824A8210:
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_824A8218:
	// li r11,40
	r11.s64 = 40;
	// addic. r31,r28,1
	xer.ca = r28.u32 > 4294967294;
	r31.s64 = r28.s64 + 1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// bne 0x824a8230
	if (!cr0.eq) goto loc_824A8230;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A8230:
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// subf r11,r14,r30
	r11.s64 = r30.s64 - r14.s64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a824c
	if (cr6.eq) goto loc_824A824C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824A824C:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r15)
	PPC_STORE_U32(r15.u32 + 0, r11.u32);
	// lwz r11,340(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824A826C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd10
	return;
loc_824A8274:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2921
	ctx.r3.u64 = ctx.r3.u64 | 2921;
	// b 0x824a826c
	goto loc_824A826C;
}

__attribute__((alias("__imp__sub_824A8280"))) PPC_WEAK_FUNC(sub_824A8280);
PPC_FUNC_IMPL(__imp__sub_824A8280) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1092(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824a82b0
	if (cr6.eq) goto loc_824A82B0;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x824a8720
	goto loc_824A8720;
loc_824A82B0:
	// lwz r10,1084(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,27500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27500);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r10,1080(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r10,1088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-11704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11704);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lwz r10,1060(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// lwz r9,1068(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f12,5736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f11,-8344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8344);
	ctx.f11.f64 = double(temp.f32);
	// lfd f0,80(r1)
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
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x824a8360
	if (cr6.gt) goto loc_824A8360;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_824A8360:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lwz r10,1056(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// lwz r9,1064(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x824a83a0
	if (cr6.gt) goto loc_824A83A0;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_824A83A0:
	// stfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lwz r10,1076(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1076);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f9,-8088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8088);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lwz r10,1072(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1072);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lwz r10,1052(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824a83fc
	if (cr6.eq) goto loc_824A83FC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f10.f64 = double(temp.f32);
	// b 0x824a846c
	goto loc_824A846C;
loc_824A83FC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x824a8448
	if (!cr6.eq) goto loc_824A8448;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f8,-27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27476);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// bgt cr6,0x824a8458
	if (cr6.gt) goto loc_824A8458;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f10,22976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22976);
	ctx.f10.f64 = double(temp.f32);
	// b 0x824a846c
	goto loc_824A846C;
loc_824A8448:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f8,560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x824a8464
	if (!cr6.gt) goto loc_824A8464;
loc_824A8458:
	// fmuls f13,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x824a8470
	goto loc_824A8470;
loc_824A8464:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f10,-20332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20332);
	ctx.f10.f64 = double(temp.f32);
loc_824A846C:
	// stfs f10,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_824A8470:
	// lfs f8,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824a8488
	if (!cr6.gt) goto loc_824A8488;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824a848c
	goto loc_824A848C;
loc_824A8488:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824A848C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x824a849c
	if (!cr6.gt) goto loc_824A849C;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// b 0x824a84b0
	goto loc_824A84B0;
loc_824A849C:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824a84ac
	if (!cr6.gt) goto loc_824A84AC;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824a84b0
	goto loc_824A84B0;
loc_824A84AC:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824A84B0:
	// lfs f6,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f10
	cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// ble cr6,0x824a84c4
	if (!cr6.gt) goto loc_824A84C4;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// b 0x824a84fc
	goto loc_824A84FC;
loc_824A84C4:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824a84d4
	if (!cr6.gt) goto loc_824A84D4;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824a84d8
	goto loc_824A84D8;
loc_824A84D4:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824A84D8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x824a84e8
	if (!cr6.gt) goto loc_824A84E8;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// b 0x824a84fc
	goto loc_824A84FC;
loc_824A84E8:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824a84f8
	if (!cr6.gt) goto loc_824A84F8;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824a84fc
	goto loc_824A84FC;
loc_824A84F8:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824A84FC:
	// lfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x824a8510
	if (!cr6.gt) goto loc_824A8510;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
	// b 0x824a8588
	goto loc_824A8588;
loc_824A8510:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824a8520
	if (!cr6.gt) goto loc_824A8520;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824a8524
	goto loc_824A8524;
loc_824A8520:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824A8524:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x824a8534
	if (!cr6.gt) goto loc_824A8534;
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// b 0x824a8548
	goto loc_824A8548;
loc_824A8534:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824a8544
	if (!cr6.gt) goto loc_824A8544;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824a8548
	goto loc_824A8548;
loc_824A8544:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824A8548:
	// fcmpu cr6,f6,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// ble cr6,0x824a8558
	if (!cr6.gt) goto loc_824A8558;
	// fmr f0,f6
	f0.f64 = ctx.f6.f64;
	// b 0x824a8588
	goto loc_824A8588;
loc_824A8558:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824a8568
	if (!cr6.gt) goto loc_824A8568;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// b 0x824a856c
	goto loc_824A856C;
loc_824A8568:
	// fmr f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f7.f64;
loc_824A856C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// bgt cr6,0x824a8588
	if (cr6.gt) goto loc_824A8588;
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x824a8584
	if (!cr6.gt) goto loc_824A8584;
	// fmr f0,f8
	f0.f64 = ctx.f8.f64;
	// b 0x824a8588
	goto loc_824A8588;
loc_824A8584:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f7.f64;
loc_824A8588:
	// lfs f10,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// fcmpu cr6,f10,f7
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824a85a0
	if (!cr6.gt) goto loc_824A85A0;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// b 0x824a85a4
	goto loc_824A85A4;
loc_824A85A0:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f7.f64;
loc_824A85A4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x824a85b4
	if (!cr6.gt) goto loc_824A85B4;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// b 0x824a85c8
	goto loc_824A85C8;
loc_824A85B4:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824a85c4
	if (!cr6.gt) goto loc_824A85C4;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// b 0x824a85c8
	goto loc_824A85C8;
loc_824A85C4:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f7.f64;
loc_824A85C8:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, f0.f64);
	// ble cr6,0x824a85d8
	if (!cr6.gt) goto loc_824A85D8;
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// b 0x824a8610
	goto loc_824A8610;
loc_824A85D8:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824a85e8
	if (!cr6.gt) goto loc_824A85E8;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// b 0x824a85ec
	goto loc_824A85EC;
loc_824A85E8:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f7.f64;
loc_824A85EC:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x824a85fc
	if (!cr6.gt) goto loc_824A85FC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x824a8610
	goto loc_824A8610;
loc_824A85FC:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824a860c
	if (!cr6.gt) goto loc_824A860C;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x824a8610
	goto loc_824A8610;
loc_824A860C:
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
loc_824A8610:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x824a869c
	if (cr6.gt) goto loc_824A869C;
	// fcmpu cr6,f10,f7
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824a862c
	if (!cr6.gt) goto loc_824A862C;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// b 0x824a8630
	goto loc_824A8630;
loc_824A862C:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f7.f64;
loc_824A8630:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x824a8640
	if (!cr6.gt) goto loc_824A8640;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// b 0x824a8654
	goto loc_824A8654;
loc_824A8640:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824a8650
	if (!cr6.gt) goto loc_824A8650;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// b 0x824a8654
	goto loc_824A8654;
loc_824A8650:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f7.f64;
loc_824A8654:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f6.f64, f0.f64);
	// ble cr6,0x824a8664
	if (!cr6.gt) goto loc_824A8664;
	// fmr f0,f6
	f0.f64 = ctx.f6.f64;
	// b 0x824a869c
	goto loc_824A869C;
loc_824A8664:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824a8674
	if (!cr6.gt) goto loc_824A8674;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// b 0x824a8678
	goto loc_824A8678;
loc_824A8674:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f7.f64;
loc_824A8678:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x824a8688
	if (!cr6.gt) goto loc_824A8688;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// b 0x824a869c
	goto loc_824A869C;
loc_824A8688:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x824a8698
	if (!cr6.gt) goto loc_824A8698;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// b 0x824a869c
	goto loc_824A869C;
loc_824A8698:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f7.f64;
loc_824A869C:
	// addi r9,r11,68
	ctx.r9.s64 = r11.s64 + 68;
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x824a86d0
	if (!cr6.lt) goto loc_824A86D0;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f0,-15168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15168);
	f0.f64 = double(temp.f32);
loc_824A86B8:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x824a86b8
	if (cr6.lt) goto loc_824A86B8;
loc_824A86D0:
	// lwz r10,1036(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1036);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// lwz r10,1028(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1028);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r10,1032(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// lwz r10,1040(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// lwz r10,1044(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// lwz r10,1048(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// lwz r10,1052(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x824a8718
	if (cr6.eq) goto loc_824A8718;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// b 0x824a871c
	goto loc_824A871C;
loc_824A8718:
	// rlwinm r10,r10,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
loc_824A871C:
	// stw r10,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r10.u32);
loc_824A8720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A8730"))) PPC_WEAK_FUNC(sub_824A8730);
PPC_FUNC_IMPL(__imp__sub_824A8730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x824a87e8
	if (!cr6.eq) goto loc_824A87E8;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x824a8790
	if (cr6.lt) goto loc_824A8790;
	// beq cr6,0x824a87e8
	if (cr6.eq) goto loc_824A87E8;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x824a8758
	if (cr6.lt) goto loc_824A8758;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824A8758:
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r6,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 + 12;
	// addi r11,r11,244
	r11.s64 = r11.s64 + 244;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u32);
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x824a87e8
	goto loc_824A87E8;
loc_824A8790:
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// li r11,1
	r11.s64 = 1;
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r10,r10,236
	ctx.r10.s64 = ctx.r10.s64 + 236;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// andc r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// stwx r6,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
loc_824A87E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A87F0"))) PPC_WEAK_FUNC(sub_824A87F0);
PPC_FUNC_IMPL(__imp__sub_824A87F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824a88d4
	if (cr6.eq) goto loc_824A88D4;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x824a8868
	if (cr6.lt) goto loc_824A8868;
	// bne cr6,0x824a88d4
	if (!cr6.eq) goto loc_824A88D4;
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r7,12
	r11.s64 = ctx.r7.s64 + 12;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// slw r9,r6,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r10,244
	ctx.r7.s64 = ctx.r10.s64 + 244;
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r6,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r6.u8);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stb r6,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r6.u8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stb r8,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r8.u8);
	// lwzx r11,r7,r3
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r11.u32);
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// b 0x824a88d0
	goto loc_824A88D0;
loc_824A8868:
	// rlwinm r10,r7,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// li r11,1
	r11.s64 = 1;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// slw r9,r11,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,236
	ctx.r6.s64 = ctx.r10.s64 + 236;
	// addi r10,r10,246
	ctx.r10.s64 = ctx.r10.s64 + 246;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// andc r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ~ctx.r9.u64;
	// stwx r5,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stwx r8,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwzx r11,r6,r3
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stwx r11,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, r11.u32);
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
loc_824A88D0:
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
loc_824A88D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A88DC"))) PPC_WEAK_FUNC(sub_824A88DC);
PPC_FUNC_IMPL(__imp__sub_824A88DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A88E0"))) PPC_WEAK_FUNC(sub_824A88E0);
PPC_FUNC_IMPL(__imp__sub_824A88E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// rlwinm. r11,r3,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a8b74
	if (cr0.eq) goto loc_824A8B74;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a8a2c
	if (!cr0.eq) goto loc_824A8A2C;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r10,0,10,15
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F0000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a89b8
	if (!cr0.eq) goto loc_824A89B8;
	// lwz r11,1020(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1020);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824a89b8
	if (cr0.eq) goto loc_824A89B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a8c88
	if (cr6.eq) goto loc_824A8C88;
	// lwz r9,1024(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1024);
	// li r31,1
	r31.s64 = 1;
loc_824A892C:
	// stw r31,1048(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1048, r31.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824a8948
	if (!cr6.eq) goto loc_824A8948;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824A8948:
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x824a8984
	if (cr6.eq) goto loc_824A8984;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x824a8968
	if (cr6.eq) goto loc_824A8968;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x824a896c
	if (!cr6.eq) goto loc_824A896C;
loc_824A8968:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824A896C:
	// lwz r11,1020(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1020);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x824a892c
	if (cr6.lt) goto loc_824A892C;
	// b 0x824a8c88
	goto loc_824A8C88;
loc_824A8984:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x824a8994
	if (cr6.eq) goto loc_824A8994;
	// clrlwi. r11,r8,30
	r11.u64 = ctx.r8.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a8c88
	if (!cr0.eq) goto loc_824A8C88;
loc_824A8994:
	// rlwinm. r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a89a8
	if (!cr0.eq) goto loc_824A89A8;
	// lwz r11,1060(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1060);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1060(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1060, r11.u32);
loc_824A89A8:
	// lwz r11,1056(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1056(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1056, r11.u32);
	// b 0x824a8c88
	goto loc_824A8C88;
loc_824A89B8:
	// rlwinm. r11,r10,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a89e0
	if (!cr0.eq) goto loc_824A89E0;
	// rlwinm. r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a89d4
	if (!cr0.eq) goto loc_824A89D4;
	// lwz r11,1060(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1060);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1060(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1060, r11.u32);
loc_824A89D4:
	// lwz r11,1056(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1056);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1056(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1056, r11.u32);
loc_824A89E0:
	// rlwinm. r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,992
	r11.s64 = r11.s64 + 992;
	// bne 0x824a8a0c
	if (!cr0.eq) goto loc_824A8A0C;
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r9,1068(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1068);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,1068(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1068, ctx.r10.u32);
loc_824A8A0C:
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// lwz r10,1064(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1064);
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,1064(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1064, r11.u32);
	// b 0x824a8c88
	goto loc_824A8C88;
loc_824A8A2C:
	// rlwinm r11,r11,12,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x1F;
	// lwz r10,980(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 980);
	// li r31,1
	r31.s64 = 1;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r7,r11,r6
	ctx.r7.u64 = r11.u64 + ctx.r6.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,180(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// beq cr6,0x824a8b4c
	if (cr6.eq) goto loc_824A8B4C;
	// cmplwi cr6,r4,63
	cr6.compare<uint32_t>(ctx.r4.u32, 63, xer);
	// bgt cr6,0x824a8aa0
	if (cr6.gt) goto loc_824A8AA0;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,27504
	r12.s64 = r12.s64 + 27504;
	// lbzx r0,r12,r4
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r4.u32);
	// lis r12,-32181
	r12.s64 = -2109014016;
	// addi r12,r12,-30076
	r12.s64 = r12.s64 + -30076;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_824A8A84;
	case 1:
		goto loc_824A8A84;
	case 2:
		goto loc_824A8A84;
	case 3:
		goto loc_824A8A84;
	case 4:
		goto loc_824A8A84;
	case 5:
		goto loc_824A8A84;
	case 6:
		goto loc_824A8A84;
	case 7:
		goto loc_824A8A84;
	case 8:
		goto loc_824A8A84;
	case 9:
		goto loc_824A8A84;
	case 10:
		goto loc_824A8A84;
	case 11:
		goto loc_824A8A84;
	case 12:
		goto loc_824A8A84;
	case 13:
		goto loc_824A8A84;
	case 14:
		goto loc_824A8A84;
	case 15:
		goto loc_824A8A84;
	case 16:
		goto loc_824A8A84;
	case 17:
		goto loc_824A8A84;
	case 18:
		goto loc_824A8A84;
	case 19:
		goto loc_824A8A84;
	case 20:
		goto loc_824A8A84;
	case 21:
		goto loc_824A8A8C;
	case 22:
		goto loc_824A8A84;
	case 23:
		goto loc_824A8A84;
	case 24:
		goto loc_824A8A84;
	case 25:
		goto loc_824A8A84;
	case 26:
		goto loc_824A8A8C;
	case 27:
		goto loc_824A8A84;
	case 28:
		goto loc_824A8A8C;
	case 29:
		goto loc_824A8A9C;
	case 30:
		goto loc_824A8A84;
	case 31:
		goto loc_824A8A84;
	case 32:
		goto loc_824A8A8C;
	case 33:
		goto loc_824A8A84;
	case 34:
		goto loc_824A8A8C;
	case 35:
		goto loc_824A8A9C;
	case 36:
		goto loc_824A8A84;
	case 37:
		goto loc_824A8A8C;
	case 38:
		goto loc_824A8A9C;
	case 39:
		goto loc_824A8A84;
	case 40:
		goto loc_824A8A84;
	case 41:
		goto loc_824A8A84;
	case 42:
		goto loc_824A8A84;
	case 43:
		goto loc_824A8A84;
	case 44:
		goto loc_824A8A84;
	case 45:
		goto loc_824A8A84;
	case 46:
		goto loc_824A8A84;
	case 47:
		goto loc_824A8A84;
	case 48:
		goto loc_824A8A84;
	case 49:
		goto loc_824A8A84;
	case 50:
		goto loc_824A8A8C;
	case 51:
		goto loc_824A8A8C;
	case 52:
		goto loc_824A8A8C;
	case 53:
		goto loc_824A8A8C;
	case 54:
		goto loc_824A8A8C;
	case 55:
		goto loc_824A8A8C;
	case 56:
		goto loc_824A8A8C;
	case 57:
		goto loc_824A8A94;
	case 58:
		goto loc_824A8A84;
	case 59:
		goto loc_824A8A84;
	case 60:
		goto loc_824A8A84;
	case 61:
		goto loc_824A8A84;
	case 62:
		goto loc_824A8A84;
	case 63:
		goto loc_824A8A84;
	default:
		__builtin_unreachable();
	}
loc_824A8A84:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// b 0x824a8aa0
	goto loc_824A8AA0;
loc_824A8A8C:
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x824a8aa0
	goto loc_824A8AA0;
loc_824A8A94:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x824a8aa0
	goto loc_824A8AA0;
loc_824A8A9C:
	// li r9,4
	ctx.r9.s64 = 4;
loc_824A8AA0:
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r8,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x824a8ab8
	if (!cr6.eq) goto loc_824A8AB8;
	// lwz r11,188(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r10,r11,11,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x3;
loc_824A8AB8:
	// rlwinm r11,r8,20,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x824a8acc
	if (!cr6.eq) goto loc_824A8ACC;
	// lwz r11,188(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,11,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x3;
loc_824A8ACC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x824a8ae8
	if (!cr6.eq) goto loc_824A8AE8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824a8ae8
	if (!cr6.eq) goto loc_824A8AE8;
	// cmplwi cr6,r4,38
	cr6.compare<uint32_t>(ctx.r4.u32, 38, xer);
	// bne cr6,0x824a8ae8
	if (!cr6.eq) goto loc_824A8AE8;
	// li r9,2
	ctx.r9.s64 = 2;
loc_824A8AE8:
	// rlwinm r11,r8,14,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x824a8afc
	if (!cr6.eq) goto loc_824A8AFC;
	// lwz r11,188(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,7,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
loc_824A8AFC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a8b14
	if (cr6.eq) goto loc_824A8B14;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// slw r11,r31,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
loc_824A8B14:
	// rlwinm r11,r8,16,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x824a8b28
	if (!cr6.eq) goto loc_824A8B28;
	// lwz r11,188(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,9,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x3;
loc_824A8B28:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824a8b50
	if (!cr6.eq) goto loc_824A8B50;
	// lwz r11,192(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm. r11,r11,0,26,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3C;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a8b50
	if (cr0.eq) goto loc_824A8B50;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x824a8b50
	goto loc_824A8B50;
loc_824A8B4C:
	// stw r31,1044(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1044, r31.u32);
loc_824A8B50:
	// rlwinm. r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a8b64
	if (!cr0.eq) goto loc_824A8B64;
	// lwz r11,1076(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1076);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,1076(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1076, r11.u32);
loc_824A8B64:
	// lwz r11,1072(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1072);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,1072(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1072, r11.u32);
	// b 0x824a8c88
	goto loc_824A8C88;
loc_824A8B74:
	// rlwinm. r11,r3,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a8ba0
	if (cr0.eq) goto loc_824A8BA0;
	// rlwinm. r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a8b90
	if (!cr0.eq) goto loc_824A8B90;
	// lwz r11,1084(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1084);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1084(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1084, r11.u32);
loc_824A8B90:
	// lwz r11,1080(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1080);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1080(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1080, r11.u32);
	// b 0x824a8c88
	goto loc_824A8C88;
loc_824A8BA0:
	// clrlwi. r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a8c88
	if (cr0.eq) goto loc_824A8C88;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r31,1
	r31.s64 = 1;
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x824a8cac
	if (cr6.eq) goto loc_824A8CAC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x824a8cac
	if (cr6.eq) goto loc_824A8CAC;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x824a8cbc
	if (cr6.eq) goto loc_824A8CBC;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// beq cr6,0x824a8cac
	if (cr6.eq) goto loc_824A8CAC;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x824a8cac
	if (cr6.eq) goto loc_824A8CAC;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// beq cr6,0x824a8cac
	if (cr6.eq) goto loc_824A8CAC;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x824a8bf4
	if (cr6.eq) goto loc_824A8BF4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x824a8c2c
	if (!cr6.eq) goto loc_824A8C2C;
loc_824A8BF4:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,976(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 976);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a8c10
	if (!cr0.eq) goto loc_824A8C10;
	// stw r31,1028(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1028, r31.u32);
loc_824A8C10:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r11,1016(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1016);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a8c2c
	if (cr0.eq) goto loc_824A8C2C;
	// stw r31,1032(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1032, r31.u32);
loc_824A8C2C:
	// lwz r11,1088(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_824A8C34:
	// stw r11,1088(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1088, r11.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x824a8c50
	if (cr6.eq) goto loc_824A8C50;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bne cr6,0x824a8c68
	if (!cr6.eq) goto loc_824A8C68;
loc_824A8C50:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a8c68
	if (!cr0.eq) goto loc_824A8C68;
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a8c68
	if (cr0.eq) goto loc_824A8C68;
	// stw r31,1036(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1036, r31.u32);
loc_824A8C68:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,0,16,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bne cr6,0x824a8c88
	if (!cr6.eq) goto loc_824A8C88;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a8c88
	if (cr0.eq) goto loc_824A8C88;
	// stw r31,1040(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1040, r31.u32);
loc_824A8C88:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,1088(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// ori r10,r10,34464
	ctx.r10.u64 = ctx.r10.u64 | 34464;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r3,r11,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r3,r3,0,27,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824A8CAC:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x824a8cbc
	if (cr6.eq) goto loc_824A8CBC;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bne cr6,0x824a8cd0
	if (!cr6.eq) goto loc_824A8CD0;
loc_824A8CBC:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a8c2c
	if (!cr0.eq) goto loc_824A8C2C;
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a8c2c
	if (!cr0.eq) goto loc_824A8C2C;
loc_824A8CD0:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r11,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,25,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7;
	// addi r11,r11,236
	r11.s64 = r11.s64 + 236;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a8cf8
	if (!cr0.eq) goto loc_824A8CF8;
	// stw r31,1028(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1028, r31.u32);
loc_824A8CF8:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r11,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,25,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7;
	// addi r11,r11,246
	r11.s64 = r11.s64 + 246;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a8d20
	if (cr0.eq) goto loc_824A8D20;
	// stw r31,1032(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1032, r31.u32);
loc_824A8D20:
	// lwz r11,1088(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1088);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x824a8c34
	goto loc_824A8C34;
}

__attribute__((alias("__imp__sub_824A8D2C"))) PPC_WEAK_FUNC(sub_824A8D2C);
PPC_FUNC_IMPL(__imp__sub_824A8D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8D30"))) PPC_WEAK_FUNC(sub_824A8D30);
PPC_FUNC_IMPL(__imp__sub_824A8D30) {
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
	// lis r11,-32181
	r11.s64 = -2109014016;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r11,-30496
	ctx.r10.s64 = r11.s64 + -30496;
	// addi r8,r31,48
	ctx.r8.s64 = r31.s64 + 48;
	// addi r7,r31,16
	ctx.r7.s64 = r31.s64 + 16;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x823c9688
	sub_823C9688(ctx, base);
	// li r11,-1000
	r11.s64 = -1000;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,1092(r31)
	PPC_STORE_U32(r31.u32 + 1092, r11.u32);
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

__attribute__((alias("__imp__sub_824A8D98"))) PPC_WEAK_FUNC(sub_824A8D98);
PPC_FUNC_IMPL(__imp__sub_824A8D98) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r31.u32);
	// bl 0x823ca148
	sub_823CA148(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a8de4
	if (cr6.eq) goto loc_824A8DE4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x824a8de4
	if (cr0.eq) goto loc_824A8DE4;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824a8de4
	if (cr0.eq) goto loc_824A8DE4;
	// addic. r21,r10,4
	xer.ca = ctx.r10.u32 > 4294967291;
	r21.s64 = ctx.r10.s64 + 4;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// bne 0x824a8dec
	if (!cr0.eq) goto loc_824A8DEC;
loc_824A8DE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824a8f5c
	goto loc_824A8F5C;
loc_824A8DEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r20,0
	r20.s64 = 0;
	// lwz r17,12(r21)
	r17.u64 = PPC_LOAD_U32(r21.u32 + 12);
	// lwz r11,16(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 16);
	// mr r16,r20
	r16.u64 = r20.u64;
	// clrlwi r18,r10,31
	r18.u64 = ctx.r10.u32 & 0x1;
	// add r28,r11,r21
	r28.u64 = r11.u64 + r21.u64;
	// cmplwi r17,0
	cr0.compare<uint32_t>(r17.u32, 0, xer);
	// beq 0x824a8f58
	if (cr0.eq) goto loc_824A8F58;
loc_824A8E10:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// lhz r27,4(r28)
	r27.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// add r19,r11,r21
	r19.u64 = r11.u64 + r21.u64;
	// lhz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 6);
	// lhz r11,8(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 8);
	// bne cr6,0x824a8e54
	if (!cr6.eq) goto loc_824A8E54;
	// rlwinm. r9,r31,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x824a8e54
	if (cr0.eq) goto loc_824A8E54;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x824a8e44
	if (!cr6.eq) goto loc_824A8E44;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// xori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 ^ 128;
loc_824A8E44:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x824a8e54
	if (!cr6.eq) goto loc_824A8E54;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// xori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 ^ 16;
loc_824A8E54:
	// clrlwi r9,r31,31
	ctx.r9.u64 = r31.u32 & 0x1;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x824a8f20
	if (cr6.lt) goto loc_824A8F20;
	// bne cr6,0x824a8f48
	if (!cr6.eq) goto loc_824A8F48;
	// clrlwi. r22,r11,16
	r22.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// lwz r24,16(r28)
	r24.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// subfic r11,r27,0
	xer.ca = r27.u32 <= 0;
	r11.s64 = 0 - r27.s64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mr r30,r20
	r30.u64 = r20.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// beq 0x824a8f48
	if (cr0.eq) goto loc_824A8F48;
	// add r25,r24,r21
	r25.u64 = r24.u64 + r21.u64;
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r31,r20
	r31.u64 = r20.u64;
	// rlwinm r23,r29,2,0,29
	r23.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A8EA4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x824a8ee0
	if (cr6.eq) goto loc_824A8EE0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x824a8ed8
	if (!cr6.gt) goto loc_824A8ED8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r31,r25
	ctx.r10.u64 = r31.u64 + r25.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_824A8EC0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x824a8ec0
	if (!cr0.eq) goto loc_824A8EC0;
loc_824A8ED8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// b 0x824a8ee4
	goto loc_824A8EE4;
loc_824A8EE0:
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
loc_824A8EE4:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mtctr r14
	ctr.u64 = r14.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x824a8f5c
	if (cr0.lt) goto loc_824A8F5C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r23,r31
	r31.u64 = r23.u64 + r31.u64;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(r30.u32, r22.u32, xer);
	// blt cr6,0x824a8ea4
	if (cr6.lt) goto loc_824A8EA4;
	// lwz r31,308(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// b 0x824a8f48
	goto loc_824A8F48;
loc_824A8F20:
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mtctr r14
	ctr.u64 = r14.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x824a8f5c
	if (cr0.lt) goto loc_824A8F5C;
loc_824A8F48:
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// cmplw cr6,r16,r17
	cr6.compare<uint32_t>(r16.u32, r17.u32, xer);
	// blt cr6,0x824a8e10
	if (cr6.lt) goto loc_824A8E10;
loc_824A8F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A8F5C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_824A8F64"))) PPC_WEAK_FUNC(sub_824A8F64);
PPC_FUNC_IMPL(__imp__sub_824A8F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A8F68"))) PPC_WEAK_FUNC(sub_824A8F68);
PPC_FUNC_IMPL(__imp__sub_824A8F68) {
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
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// bl 0x823ca148
	sub_823CA148(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi. r29,r11,31
	r29.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r11,r30,3
	r11.s64 = r30.s64 + 3;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// beq 0x824a8fc8
	if (cr0.eq) goto loc_824A8FC8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r25,28(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// b 0x824a8fd0
	goto loc_824A8FD0;
loc_824A8FC8:
	// add r7,r11,r31
	ctx.r7.u64 = r11.u64 + r31.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_824A8FD0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bne cr6,0x824a9028
	if (!cr6.eq) goto loc_824A9028;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r8,r30,12,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xF;
	// addi r10,r7,32
	ctx.r10.s64 = ctx.r7.s64 + 32;
	// rlwinm. r11,r11,27,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9024
	if (cr0.eq) goto loc_824A9024;
loc_824A9004:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,24,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x824a9018
	if (cr6.gt) goto loc_824A9018;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_824A9018:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x824a9004
	if (!cr0.eq) goto loc_824A9004;
loc_824A9024:
	// rlwimi r30,r8,20,8,11
	r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 20) & 0xF00000) | (r30.u64 & 0xFFFFFFFFFF0FFFFF);
loc_824A9028:
	// li r5,1096
	ctx.r5.s64 = 1096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,1148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1148, r29.u32);
	// addi r5,r11,-30928
	ctx.r5.s64 = r11.s64 + -30928;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r25,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, r25.u32);
	// stw r24,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, r24.u32);
	// bl 0x823cb978
	sub_823CB978(ctx, base);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r6,r11,-30736
	ctx.r6.s64 = r11.s64 + -30736;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a8d98
	sub_824A8D98(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824a8d30
	sub_824A8D30(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824a8280
	sub_824A8280(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_824A90A0"))) PPC_WEAK_FUNC(sub_824A90A0);
PPC_FUNC_IMPL(__imp__sub_824A90A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a90b4
	if (!cr0.eq) goto loc_824A90B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824A90B4:
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(r11.u32, 21, xer);
	// blt cr6,0x824a90c8
	if (cr6.lt) goto loc_824A90C8;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// ble cr6,0x824a90d8
	if (!cr6.gt) goto loc_824A90D8;
loc_824A90C8:
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// blt cr6,0x824a90e0
	if (cr6.lt) goto loc_824A90E0;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// bgt cr6,0x824a90e0
	if (cr6.gt) goto loc_824A90E0;
loc_824A90D8:
	// li r11,1
	r11.s64 = 1;
	// b 0x824a90e4
	goto loc_824A90E4;
loc_824A90E0:
	// li r11,0
	r11.s64 = 0;
loc_824A90E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A90EC"))) PPC_WEAK_FUNC(sub_824A90EC);
PPC_FUNC_IMPL(__imp__sub_824A90EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A90F0"))) PPC_WEAK_FUNC(sub_824A90F0);
PPC_FUNC_IMPL(__imp__sub_824A90F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a9104
	if (!cr0.eq) goto loc_824A9104;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824A9104:
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// beq cr6,0x824a9124
	if (cr6.eq) goto loc_824A9124;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// beq cr6,0x824a9124
	if (cr6.eq) goto loc_824A9124;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(r11.u32, 55, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x824a9128
	if (!cr6.eq) goto loc_824A9128;
loc_824A9124:
	// li r11,1
	r11.s64 = 1;
loc_824A9128:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9130"))) PPC_WEAK_FUNC(sub_824A9130);
PPC_FUNC_IMPL(__imp__sub_824A9130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(r11.u32, 21, xer);
	// blt cr6,0x824a914c
	if (cr6.lt) goto loc_824A914C;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x824a9150
	if (!cr6.gt) goto loc_824A9150;
loc_824A914C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A9150:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a917c
	if (!cr0.eq) goto loc_824A917C;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// blt cr6,0x824a9168
	if (cr6.lt) goto loc_824A9168;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// ble cr6,0x824a917c
	if (!cr6.gt) goto loc_824A917C;
loc_824A9168:
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// beq cr6,0x824a917c
	if (cr6.eq) goto loc_824A917C;
	// cmplwi cr6,r11,107
	cr6.compare<uint32_t>(r11.u32, 107, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x824a9180
	if (!cr6.eq) goto loc_824A9180;
loc_824A917C:
	// li r11,1
	r11.s64 = 1;
loc_824A9180:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9188"))) PPC_WEAK_FUNC(sub_824A9188);
PPC_FUNC_IMPL(__imp__sub_824A9188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x824a91a4
	if (cr6.lt) goto loc_824A91A4;
	// cmplwi cr6,r10,81
	cr6.compare<uint32_t>(ctx.r10.u32, 81, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x824a91a8
	if (!cr6.gt) goto loc_824A91A8;
loc_824A91A4:
	// li r11,0
	r11.s64 = 0;
loc_824A91A8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a91dc
	if (!cr0.eq) goto loc_824A91DC;
	// cmplwi cr6,r10,95
	cr6.compare<uint32_t>(ctx.r10.u32, 95, xer);
	// blt cr6,0x824a91c4
	if (cr6.lt) goto loc_824A91C4;
	// cmplwi cr6,r10,101
	cr6.compare<uint32_t>(ctx.r10.u32, 101, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x824a91c8
	if (!cr6.gt) goto loc_824A91C8;
loc_824A91C4:
	// li r11,0
	r11.s64 = 0;
loc_824A91C8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a91dc
	if (!cr0.eq) goto loc_824A91DC;
	// cmplwi cr6,r10,125
	cr6.compare<uint32_t>(ctx.r10.u32, 125, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x824a91e0
	if (!cr6.eq) goto loc_824A91E0;
loc_824A91DC:
	// li r11,1
	r11.s64 = 1;
loc_824A91E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A91E8"))) PPC_WEAK_FUNC(sub_824A91E8);
PPC_FUNC_IMPL(__imp__sub_824A91E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a9244
	if (cr6.eq) goto loc_824A9244;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15232
	cr6.compare<uint32_t>(r11.u32, 15232, xer);
	// bne cr6,0x824a92a0
	if (!cr6.eq) goto loc_824A92A0;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15232
	cr6.compare<uint32_t>(r11.u32, 15232, xer);
	// bne cr6,0x824a92a0
	if (!cr6.eq) goto loc_824A92A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// rlwinm r8,r10,2,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x824a92a0
	if (!cr6.eq) goto loc_824A92A0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a9244
	if (cr6.eq) goto loc_824A9244;
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,7,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFE000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a92a0
	if (!cr0.eq) goto loc_824A92A0;
loc_824A9244:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ r11.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x824a92a0
	if (!cr0.eq) goto loc_824A92A0;
	// rlwinm r9,r11,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x7;
	// rlwinm r8,r10,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x824a92a0
	if (!cr6.eq) goto loc_824A92A0;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r10,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// slw r11,r8,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a92a4
	if (cr0.eq) goto loc_824A92A4;
loc_824A92A0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_824A92A4:
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A92AC"))) PPC_WEAK_FUNC(sub_824A92AC);
PPC_FUNC_IMPL(__imp__sub_824A92AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A92B0"))) PPC_WEAK_FUNC(sub_824A92B0);
PPC_FUNC_IMPL(__imp__sub_824A92B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824a92ec
	if (cr0.eq) goto loc_824A92EC;
	// b 0x824a92d0
	goto loc_824A92D0;
loc_824A92C4:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824a92dc
	if (cr0.eq) goto loc_824A92DC;
loc_824A92D0:
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a92c4
	if (!cr0.eq) goto loc_824A92C4;
loc_824A92DC:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a92d0
	if (!cr0.eq) goto loc_824A92D0;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
loc_824A92EC:
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A92F4"))) PPC_WEAK_FUNC(sub_824A92F4);
PPC_FUNC_IMPL(__imp__sub_824A92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A92F8"))) PPC_WEAK_FUNC(sub_824A92F8);
PPC_FUNC_IMPL(__imp__sub_824A92F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 760);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
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
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,2046
	ctx.r3.s64 = r11.s64 + 2046;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9340"))) PPC_WEAK_FUNC(sub_824A9340);
PPC_FUNC_IMPL(__imp__sub_824A9340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// addi r11,r4,-83
	r11.s64 = ctx.r4.s64 + -83;
	// addi r10,r5,10
	ctx.r10.s64 = ctx.r5.s64 + 10;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(r11.u32, 41, xer);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,27568
	r12.s64 = r12.s64 + 27568;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32181
	r12.s64 = -2109014016;
	// addi r12,r12,-27780
	r12.s64 = r12.s64 + -27780;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x824A93A8
		return;
	case 1:
		// ERROR: 0x824A93B0
		return;
	case 2:
		// ERROR: 0x824A9388
		return;
	case 3:
		// ERROR: 0x824A9388
		return;
	case 4:
		// ERROR: 0x824A93BC
		return;
	case 5:
		// ERROR: 0x824A9388
		return;
	case 6:
		// ERROR: 0x824A9388
		return;
	case 7:
		// ERROR: 0x824A93BC
		return;
	case 8:
		// ERROR: 0x824A93BC
		return;
	case 9:
		// ERROR: 0x824A93BC
		return;
	case 10:
		// ERROR: 0x824A93B8
		return;
	case 11:
		// ERROR: 0x824A93BC
		return;
	case 12:
		// ERROR: 0x824A9398
		return;
	case 13:
		// ERROR: 0x824A93A0
		return;
	case 14:
		// ERROR: 0x824A93BC
		return;
	case 15:
		// ERROR: 0x824A93A0
		return;
	case 16:
		// ERROR: 0x824A93A0
		return;
	case 17:
		// ERROR: 0x824A93BC
		return;
	case 18:
		// ERROR: 0x824A93BC
		return;
	case 19:
		// ERROR: 0x824A93B8
		return;
	case 20:
		// ERROR: 0x824A9390
		return;
	case 21:
		// ERROR: 0x824A93BC
		return;
	case 22:
		// ERROR: 0x824A93BC
		return;
	case 23:
		// ERROR: 0x824A93BC
		return;
	case 24:
		// ERROR: 0x824A93BC
		return;
	case 25:
		// ERROR: 0x824A93BC
		return;
	case 26:
		// ERROR: 0x824A93BC
		return;
	case 27:
		// ERROR: 0x824A93BC
		return;
	case 28:
		// ERROR: 0x824A9390
		return;
	case 29:
		// ERROR: 0x824A93BC
		return;
	case 30:
		// ERROR: 0x824A93BC
		return;
	case 31:
		// ERROR: 0x824A93BC
		return;
	case 32:
		// ERROR: 0x824A93B8
		return;
	case 33:
		// ERROR: 0x824A9390
		return;
	case 34:
		// ERROR: 0x824A93BC
		return;
	case 35:
		// ERROR: 0x824A9388
		return;
	case 36:
		// ERROR: 0x824A93BC
		return;
	case 37:
		// ERROR: 0x824A93BC
		return;
	case 38:
		// ERROR: 0x824A93BC
		return;
	case 39:
		// ERROR: 0x824A93BC
		return;
	case 40:
		// ERROR: 0x824A9390
		return;
	case 41:
		// ERROR: 0x824A937C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_824A937C"))) PPC_WEAK_FUNC(sub_824A937C);
PPC_FUNC_IMPL(__imp__sub_824A937C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9388"))) PPC_WEAK_FUNC(sub_824A9388);
PPC_FUNC_IMPL(__imp__sub_824A9388) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9390"))) PPC_WEAK_FUNC(sub_824A9390);
PPC_FUNC_IMPL(__imp__sub_824A9390) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9398"))) PPC_WEAK_FUNC(sub_824A9398);
PPC_FUNC_IMPL(__imp__sub_824A9398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A93A0"))) PPC_WEAK_FUNC(sub_824A93A0);
PPC_FUNC_IMPL(__imp__sub_824A93A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A93A8"))) PPC_WEAK_FUNC(sub_824A93A8);
PPC_FUNC_IMPL(__imp__sub_824A93A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A93B0"))) PPC_WEAK_FUNC(sub_824A93B0);
PPC_FUNC_IMPL(__imp__sub_824A93B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A93B8"))) PPC_WEAK_FUNC(sub_824A93B8);
PPC_FUNC_IMPL(__imp__sub_824A93B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A93C0"))) PPC_WEAK_FUNC(sub_824A93C0);
PPC_FUNC_IMPL(__imp__sub_824A93C0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-24616
	ctx.r3.s64 = r11.s64 + -24616;
	// bl 0x8239f470
	sub_8239F470(ctx, base);
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

__attribute__((alias("__imp__sub_824A93EC"))) PPC_WEAK_FUNC(sub_824A93EC);
PPC_FUNC_IMPL(__imp__sub_824A93EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A93F0"))) PPC_WEAK_FUNC(sub_824A93F0);
PPC_FUNC_IMPL(__imp__sub_824A93F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_824A9410:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beqlr 
	if (cr0.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x824a9410
	if (cr6.eq) goto loc_824A9410;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9438"))) PPC_WEAK_FUNC(sub_824A9438);
PPC_FUNC_IMPL(__imp__sub_824A9438) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824a9484
	if (cr0.eq) goto loc_824A9484;
	// bl 0x823f4f90
	sub_823F4F90(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9484
	if (cr0.eq) goto loc_824A9484;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x824a9488
	goto loc_824A9488;
loc_824A9484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A9488:
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

__attribute__((alias("__imp__sub_824A94A0"))) PPC_WEAK_FUNC(sub_824A94A0);
PPC_FUNC_IMPL(__imp__sub_824A94A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x824a94e0
	if (cr6.eq) goto loc_824A94E0;
	// lwz r11,708(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a94e0
	if (cr6.eq) goto loc_824A94E0;
	// lwz r11,720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824a94d8
	if (cr0.eq) goto loc_824A94D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x824a94d8
	if (!cr6.lt) goto loc_824A94D8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
loc_824A94D8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x82496e98
	sub_82496E98(ctx, base);
	return;
loc_824A94E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A94E8"))) PPC_WEAK_FUNC(sub_824A94E8);
PPC_FUNC_IMPL(__imp__sub_824A94E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824a9520
	if (!cr6.eq) goto loc_824A9520;
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9520
	if (cr0.eq) goto loc_824A9520;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,25,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(r11.u32, 96, xer);
	// beq cr6,0x824a9520
	if (cr6.eq) goto loc_824A9520;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x824a9524
	if (!cr6.eq) goto loc_824A9524;
loc_824A9520:
	// li r11,0
	r11.s64 = 0;
loc_824A9524:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A952C"))) PPC_WEAK_FUNC(sub_824A952C);
PPC_FUNC_IMPL(__imp__sub_824A952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9530"))) PPC_WEAK_FUNC(sub_824A9530);
PPC_FUNC_IMPL(__imp__sub_824A9530) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// b 0x824a9568
	goto loc_824A9568;
loc_824A954C:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r31
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x824a95ec
	if (!cr0.eq) goto loc_824A95EC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_824A9568:
	// cmplwi cr6,r11,132
	cr6.compare<uint32_t>(r11.u32, 132, xer);
	// ble cr6,0x824a954c
	if (!cr6.gt) goto loc_824A954C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addic. r10,r10,4096
	xer.ca = ctx.r10.u32 > 4294963199;
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824a959c
	if (cr0.eq) goto loc_824A959C;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
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
loc_824A959C:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// bne 0x824a95d4
	if (!cr0.eq) goto loc_824A95D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824970d0
	sub_824970D0(ctx, base);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824a95cc
	if (cr0.eq) goto loc_824A95CC;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
loc_824A95CC:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_824A95D4:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// add r11,r3,r29
	r11.u64 = ctx.r3.u64 + r29.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_824A95E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_824A95EC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
	// ble cr6,0x824a9620
	if (!cr6.gt) goto loc_824A9620;
	// subf r10,r29,r11
	ctx.r10.s64 = r11.s64 - r29.s64;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
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
loc_824A9620:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824a95e4
	goto loc_824A95E4;
}

__attribute__((alias("__imp__sub_824A9638"))) PPC_WEAK_FUNC(sub_824A9638);
PPC_FUNC_IMPL(__imp__sub_824A9638) {
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
	// addi r11,r31,-20
	r11.s64 = r31.s64 + -20;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + r11.u64;
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

__attribute__((alias("__imp__sub_824A9680"))) PPC_WEAK_FUNC(sub_824A9680);
PPC_FUNC_IMPL(__imp__sub_824A9680) {
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
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + r11.u64;
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

__attribute__((alias("__imp__sub_824A96C8"))) PPC_WEAK_FUNC(sub_824A96C8);
PPC_FUNC_IMPL(__imp__sub_824A96C8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,83
	ctx.r4.s64 = 83;
	// bl 0x824a9340
	sub_824A9340(ctx, base);
	// addi r11,r31,-28
	r11.s64 = r31.s64 + -28;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + r11.u64;
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

__attribute__((alias("__imp__sub_824A970C"))) PPC_WEAK_FUNC(sub_824A970C);
PPC_FUNC_IMPL(__imp__sub_824A970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9710"))) PPC_WEAK_FUNC(sub_824A9710);
PPC_FUNC_IMPL(__imp__sub_824A9710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// beq 0x824a9768
	if (cr0.eq) goto loc_824A9768;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,124
	cr6.compare<uint32_t>(r11.u32, 124, xer);
	// beq cr6,0x824a974c
	if (cr6.eq) goto loc_824A974C;
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(r11.u32, 123, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x824a9750
	if (!cr6.eq) goto loc_824A9750;
loc_824A974C:
	// li r11,1
	r11.s64 = 1;
loc_824A9750:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a9768
	if (!cr0.eq) goto loc_824A9768;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x824a976c
	if (cr0.eq) goto loc_824A976C;
loc_824A9768:
	// li r11,0
	r11.s64 = 0;
loc_824A976C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9774"))) PPC_WEAK_FUNC(sub_824A9774);
PPC_FUNC_IMPL(__imp__sub_824A9774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9778"))) PPC_WEAK_FUNC(sub_824A9778);
PPC_FUNC_IMPL(__imp__sub_824A9778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r11,144(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x824a97a4
	if (cr6.lt) goto loc_824A97A4;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r9,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r9.u32);
	// blr 
	return;
loc_824A97A4:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824a97d4
	if (cr0.eq) goto loc_824A97D4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_824A97D4:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x824a9530
	sub_824A9530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A97E0"))) PPC_WEAK_FUNC(sub_824A97E0);
PPC_FUNC_IMPL(__imp__sub_824A97E0) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r4,40
	r11.s64 = ctx.r4.s64 * 40;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824a9820
	if (cr0.eq) goto loc_824A9820;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x824a9820
	if (!cr6.eq) goto loc_824A9820;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x8251d2c8
	sub_8251D2C8(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x824a9844
	goto loc_824A9844;
loc_824A9820:
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a983c
	if (cr0.eq) goto loc_824A983C;
	// cmplwi cr6,r4,724
	cr6.compare<uint32_t>(ctx.r4.u32, 724, xer);
	// bge cr6,0x824a983c
	if (!cr6.lt) goto loc_824A983C;
	// bl 0x8251dd20
	sub_8251DD20(ctx, base);
	// b 0x824a9844
	goto loc_824A9844;
loc_824A983C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,32480
	ctx.r3.s64 = r11.s64 + 32480;
loc_824A9844:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9854"))) PPC_WEAK_FUNC(sub_824A9854);
PPC_FUNC_IMPL(__imp__sub_824A9854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9858"))) PPC_WEAK_FUNC(sub_824A9858);
PPC_FUNC_IMPL(__imp__sub_824A9858) {
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
	// addi r11,r3,924
	r11.s64 = ctx.r3.s64 + 924;
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// blt cr6,0x824a9894
	if (cr6.lt) goto loc_824A9894;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r9.u32);
	// b 0x824a98d4
	goto loc_824A98D4;
loc_824A9894:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x824a98cc
	if (cr0.eq) goto loc_824A98CC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824a98d4
	goto loc_824A98D4;
loc_824A98CC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x824a9530
	sub_824A9530(ctx, base);
loc_824A98D4:
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

__attribute__((alias("__imp__sub_824A98E8"))) PPC_WEAK_FUNC(sub_824A98E8);
PPC_FUNC_IMPL(__imp__sub_824A98E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(r11.u32, 82, xer);
	// blt cr6,0x824a9904
	if (cr6.lt) goto loc_824A9904;
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(r11.u32, 94, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x824a9908
	if (!cr6.gt) goto loc_824A9908;
loc_824A9904:
	// li r11,0
	r11.s64 = 0;
loc_824A9908:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9918
	if (cr0.eq) goto loc_824A9918;
loc_824A9910:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824A9918:
	// rlwinm. r11,r10,0,6,6
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9938
	if (cr0.eq) goto loc_824A9938;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a9910
	if (!cr6.eq) goto loc_824A9910;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a9910
	if (!cr6.eq) goto loc_824A9910;
loc_824A9938:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824a994c
	if (!cr0.eq) goto loc_824A994C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824A994C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a999c
	if (cr6.eq) goto loc_824A999C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x824a9994
	if (cr0.eq) goto loc_824A9994;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x824a9988
	if (!cr0.eq) goto loc_824A9988;
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x824a998c
	if (cr0.eq) goto loc_824A998C;
loc_824A9988:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A998C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824a999c
	if (cr0.eq) goto loc_824A999C;
loc_824A9994:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x824a994c
	goto loc_824A994C;
loc_824A999C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A99AC"))) PPC_WEAK_FUNC(sub_824A99AC);
PPC_FUNC_IMPL(__imp__sub_824A99AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A99B0"))) PPC_WEAK_FUNC(sub_824A99B0);
PPC_FUNC_IMPL(__imp__sub_824A99B0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a9a3c
	if (cr6.eq) goto loc_824A9A3C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,95
	cr6.compare<uint32_t>(ctx.r10.u32, 95, xer);
	// blt cr6,0x824a99f4
	if (cr6.lt) goto loc_824A99F4;
	// cmplwi cr6,r10,101
	cr6.compare<uint32_t>(ctx.r10.u32, 101, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x824a99f8
	if (!cr6.gt) goto loc_824A99F8;
loc_824A99F4:
	// li r11,0
	r11.s64 = 0;
loc_824A99F8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9a3c
	if (cr0.eq) goto loc_824A9A3C;
	// addi r11,r10,-95
	r11.s64 = ctx.r10.s64 + -95;
	// li r30,1
	r30.s64 = 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9a3c
	if (cr0.eq) goto loc_824A9A3C;
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
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
	// lhzx r11,r3,r11
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + r11.u32);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9a3c
	if (cr0.eq) goto loc_824A9A3C;
	// li r29,1
	r29.s64 = 1;
loc_824A9A3C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// rlwimi r11,r10,16,15,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x10000) | (r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwimi r11,r9,18,13,13
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0x40000) | (r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A9A64"))) PPC_WEAK_FUNC(sub_824A9A64);
PPC_FUNC_IMPL(__imp__sub_824A9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9A68"))) PPC_WEAK_FUNC(sub_824A9A68);
PPC_FUNC_IMPL(__imp__sub_824A9A68) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,732(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 732);
	// bl 0x823cb678
	sub_823CB678(ctx, base);
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bgt cr6,0x824a9b24
	if (cr6.gt) goto loc_824A9B24;
loc_824A9A98:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,732(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 732);
	// bl 0x823cb678
	sub_823CB678(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a9acc
	if (cr6.eq) goto loc_824A9ACC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x824a9ad8
	if (cr6.eq) goto loc_824A9AD8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x824a9ad8
	if (cr6.eq) goto loc_824A9AD8;
loc_824A9ACC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// ble cr6,0x824a9a98
	if (!cr6.gt) goto loc_824A9A98;
loc_824A9AD8:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bgt cr6,0x824a9b24
	if (cr6.gt) goto loc_824A9B24;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bgt cr6,0x824a9b24
	if (cr6.gt) goto loc_824A9B24;
loc_824A9AEC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,732(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 732);
	// bl 0x823cb678
	sub_823CB678(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,20480
	cr6.compare<uint32_t>(ctx.r10.u32, 20480, xer);
	// bne cr6,0x824a9b18
	if (!cr6.eq) goto loc_824A9B18;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,21,21
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r11,r10,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_824A9B18:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// ble cr6,0x824a9aec
	if (!cr6.gt) goto loc_824A9AEC;
loc_824A9B24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824A9B2C"))) PPC_WEAK_FUNC(sub_824A9B2C);
PPC_FUNC_IMPL(__imp__sub_824A9B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9B30"))) PPC_WEAK_FUNC(sub_824A9B30);
PPC_FUNC_IMPL(__imp__sub_824A9B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r10,r3,764
	ctx.r10.s64 = ctx.r3.s64 + 764;
	// cmplwi cr6,r5,132
	cr6.compare<uint32_t>(ctx.r5.u32, 132, xer);
	// ble cr6,0x824a9b6c
	if (!cr6.gt) goto loc_824A9B6C;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
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
	// b 0x82120e68
	sub_82120E68(ctx, base);
	return;
loc_824A9B6C:
	// rlwinm r11,r5,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9B88"))) PPC_WEAK_FUNC(sub_824A9B88);
PPC_FUNC_IMPL(__imp__sub_824A9B88) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824a9bfc
	if (!cr0.eq) goto loc_824A9BFC;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r31,536(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// addi r11,r11,-4096
	r11.s64 = r11.s64 + -4096;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// beq 0x824a9bf4
	if (cr0.eq) goto loc_824A9BF4;
loc_824A9BB8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 28);
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824a9b30
	sub_824A9B30(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x824a9bb8
	if (!cr6.eq) goto loc_824A9BB8;
loc_824A9BF4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,536(r30)
	PPC_STORE_U32(r30.u32 + 536, r11.u32);
loc_824A9BFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824A9C04"))) PPC_WEAK_FUNC(sub_824A9C04);
PPC_FUNC_IMPL(__imp__sub_824A9C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A9C08"))) PPC_WEAK_FUNC(sub_824A9C08);
PPC_FUNC_IMPL(__imp__sub_824A9C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi. r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824a9cac
	if (!cr0.eq) goto loc_824A9CAC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a9cac
	if (cr6.eq) goto loc_824A9CAC;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824a9cac
	if (cr0.eq) goto loc_824A9CAC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// cmplwi cr6,r10,8191
	cr6.compare<uint32_t>(ctx.r10.u32, 8191, xer);
	// beq cr6,0x824a9cac
	if (cr6.eq) goto loc_824A9CAC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x824a9c5c
	if (cr6.lt) goto loc_824A9C5C;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x824a9c60
	if (!cr6.gt) goto loc_824A9C60;
loc_824A9C5C:
	// li r11,0
	r11.s64 = 0;
loc_824A9C60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9cac
	if (cr0.eq) goto loc_824A9CAC;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a9cac
	if (cr0.eq) goto loc_824A9CAC;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824a9cac
	if (!cr6.eq) goto loc_824A9CAC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// blt cr6,0x824a9ca0
	if (cr6.lt) goto loc_824A9CA0;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(r11.u32, 81, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x824a9ca4
	if (!cr6.gt) goto loc_824A9CA4;
loc_824A9CA0:
	// li r11,0
	r11.s64 = 0;
loc_824A9CA4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_824A9CAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A9CB4"))) PPC_WEAK_FUNC(sub_824A9CB4);
PPC_FUNC_IMPL(__imp__sub_824A9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

