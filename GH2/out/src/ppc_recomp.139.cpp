#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824122B0"))) PPC_WEAK_FUNC(sub_824122B0);
PPC_FUNC_IMPL(__imp__sub_824122B0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r21,1
	r21.s64 = 1;
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82412e5c
	if (!cr6.eq) goto loc_82412E5C;
	// addi r22,r31,24
	r22.s64 = r31.s64 + 24;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r10,r11,-6072
	ctx.r10.s64 = r11.s64 + -6072;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_824122F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82412318
	if (cr0.eq) goto loc_82412318;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x824122f4
	if (cr6.eq) goto loc_824122F4;
loc_82412318:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82412e5c
	if (!cr0.eq) goto loc_82412E5C;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// stw r21,32(r20)
	PPC_STORE_U32(r20.u32 + 32, r21.u32);
	// stb r19,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r19.u8);
	// b 0x82412354
	goto loc_82412354;
loc_82412340:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x8241236c
	if (!cr6.eq) goto loc_8241236C;
loc_82412354:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412340
	if (!cr0.lt) goto loc_82412340;
	// b 0x82412de4
	goto loc_82412DE4;
loc_8241236C:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82412370:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82412388
	if (!cr6.eq) goto loc_82412388;
	// lbz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r10,44
	cr6.compare<uint32_t>(ctx.r10.u32, 44, xer);
	// beq cr6,0x82412464
	if (cr6.eq) goto loc_82412464;
loc_82412388:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x824123a4
	if (!cr6.eq) goto loc_824123A4;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r29,r19
	r29.u64 = r19.u64;
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// b 0x8241242c
	goto loc_8241242C;
loc_824123A4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8241240c
	if (!cr6.eq) goto loc_8241240C;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// beq cr6,0x824123d4
	if (cr6.eq) goto loc_824123D4;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// beq cr6,0x824123d4
	if (cr6.eq) goto loc_824123D4;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x824123d4
	if (cr6.eq) goto loc_824123D4;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// bne cr6,0x82412e50
	if (!cr6.eq) goto loc_82412E50;
loc_824123D4:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82410a90
	sub_82410A90(ctx, base);
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// bne cr6,0x824123fc
	if (!cr6.eq) goto loc_824123FC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82412e44
	if (!cr6.eq) goto loc_82412E44;
loc_824123FC:
	// addi r11,r11,-93
	r11.s64 = r11.s64 + -93;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82412438
	goto loc_82412438;
loc_8241240C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82412e50
	if (!cr6.eq) goto loc_82412E50;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r29,r19
	r29.u64 = r19.u64;
	// bl 0x823a19a8
	sub_823A19A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8241242C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82410a90
	sub_82410A90(ctx, base);
loc_82412438:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82412de4
	if (cr0.lt) goto loc_82412DE4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x82412438
	if (cr6.eq) goto loc_82412438;
	// b 0x82412370
	goto loc_82412370;
loc_82412464:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82412498
	if (cr6.eq) goto loc_82412498;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82412478:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82412478
	if (!cr6.eq) goto loc_82412478;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824124b8
	if (!cr0.eq) goto loc_824124B8;
loc_82412498:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6092
	ctx.r5.s64 = r11.s64 + -6092;
	// b 0x82412e20
	goto loc_82412E20;
loc_824124A4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x824124d0
	if (!cr6.eq) goto loc_824124D0;
loc_824124B8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824124a4
	if (!cr0.lt) goto loc_824124A4;
	// b 0x82412de4
	goto loc_82412DE4;
loc_824124D0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x824124e8
	if (cr6.eq) goto loc_824124E8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6112
	ctx.r5.s64 = r11.s64 + -6112;
	// b 0x82412e20
	goto loc_82412E20;
loc_824124E8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-9864
	ctx.r3.s64 = r11.s64 + -9864;
	// bl 0x8240ecd0
	sub_8240ECD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412510
	if (!cr0.lt) goto loc_82412510;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6136
	ctx.r5.s64 = r11.s64 + -6136;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412510:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,20(r20)
	PPC_STORE_U32(r20.u32 + 20, r11.u32);
	// b 0x82412530
	goto loc_82412530;
loc_8241251C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412548
	if (!cr6.eq) goto loc_82412548;
loc_82412530:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8241251c
	if (!cr0.lt) goto loc_8241251C;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412548:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82412578
	if (cr6.eq) goto loc_82412578;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// beq cr6,0x82412578
	if (cr6.eq) goto loc_82412578;
	// b 0x824127dc
	goto loc_824127DC;
loc_82412564:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412590
	if (!cr6.eq) goto loc_82412590;
loc_82412578:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412564
	if (!cr0.lt) goto loc_82412564;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412590:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x824125a8
	if (cr6.eq) goto loc_824125A8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6156
	ctx.r5.s64 = r11.s64 + -6156;
	// b 0x82412e20
	goto loc_82412E20;
loc_824125A8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-9920
	ctx.r3.s64 = r11.s64 + -9920;
	// bl 0x8240ecd0
	sub_8240ECD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824125d0
	if (!cr0.lt) goto loc_824125D0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6180
	ctx.r5.s64 = r11.s64 + -6180;
	// b 0x82412e20
	goto loc_82412E20;
loc_824125D0:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,16(r20)
	PPC_STORE_U32(r20.u32 + 16, r11.u32);
	// b 0x824125f0
	goto loc_824125F0;
loc_824125DC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412608
	if (!cr6.eq) goto loc_82412608;
loc_824125F0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824125dc
	if (!cr0.lt) goto loc_824125DC;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412608:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82412638
	if (cr6.eq) goto loc_82412638;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// beq cr6,0x82412638
	if (cr6.eq) goto loc_82412638;
	// b 0x824127dc
	goto loc_824127DC;
loc_82412624:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412650
	if (!cr6.eq) goto loc_82412650;
loc_82412638:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412624
	if (!cr0.lt) goto loc_82412624;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412650:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82412680
	if (cr6.eq) goto loc_82412680;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// beq cr6,0x82412680
	if (cr6.eq) goto loc_82412680;
	// b 0x8241278c
	goto loc_8241278C;
loc_8241266C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412698
	if (!cr6.eq) goto loc_82412698;
loc_82412680:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8241266c
	if (!cr0.lt) goto loc_8241266C;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412698:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82412730
	if (!cr6.eq) goto loc_82412730;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r11,24(r20)
	PPC_STORE_U32(r20.u32 + 24, r11.u32);
	// b 0x824126c4
	goto loc_824126C4;
loc_824126B0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x824126dc
	if (!cr6.eq) goto loc_824126DC;
loc_824126C4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824126b0
	if (!cr0.lt) goto loc_824126B0;
	// b 0x82412de4
	goto loc_82412DE4;
loc_824126DC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8241270c
	if (cr6.eq) goto loc_8241270C;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// beq cr6,0x8241270c
	if (cr6.eq) goto loc_8241270C;
	// b 0x8241278c
	goto loc_8241278C;
loc_824126F8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412724
	if (!cr6.eq) goto loc_82412724;
loc_8241270C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824126f8
	if (!cr0.lt) goto loc_824126F8;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412724:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8241273c
	if (cr6.eq) goto loc_8241273C;
loc_82412730:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6224
	ctx.r5.s64 = r11.s64 + -6224;
	// b 0x82412e20
	goto loc_82412E20;
loc_8241273C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r11,28(r20)
	PPC_STORE_U32(r20.u32 + 28, r11.u32);
	// b 0x8241275c
	goto loc_8241275C;
loc_82412748:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412774
	if (!cr6.eq) goto loc_82412774;
loc_8241275C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412748
	if (!cr0.lt) goto loc_82412748;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412774:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x824127ac
	if (cr6.eq) goto loc_824127AC;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// beq cr6,0x824127ac
	if (cr6.eq) goto loc_824127AC;
loc_8241278C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6272
	ctx.r5.s64 = r11.s64 + -6272;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412798:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x824127c4
	if (!cr6.eq) goto loc_824127C4;
loc_824127AC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412798
	if (!cr0.lt) goto loc_82412798;
	// b 0x82412de4
	goto loc_82412DE4;
loc_824127C4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x824127fc
	if (cr6.eq) goto loc_824127FC;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// beq cr6,0x824127fc
	if (cr6.eq) goto loc_824127FC;
loc_824127DC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6300
	ctx.r5.s64 = r11.s64 + -6300;
	// b 0x82412e20
	goto loc_82412E20;
loc_824127E8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412814
	if (!cr6.eq) goto loc_82412814;
loc_824127FC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824127e8
	if (!cr0.lt) goto loc_824127E8;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412814:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82412e38
	if (!cr6.eq) goto loc_82412E38;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82412e38
	if (cr6.lt) goto loc_82412E38;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x823a1200
	sub_823A1200(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82412a30
	if (cr0.eq) goto loc_82412A30;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x8239f330
	sub_8239F330(ctx, base);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(r11.s32, 98, xer);
	// beq cr6,0x824128a0
	if (cr6.eq) goto loc_824128A0;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x82412894
	if (cr6.eq) goto loc_82412894;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(r11.s32, 105, xer);
	// beq cr6,0x8241288c
	if (cr6.eq) goto loc_8241288C;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(r11.s32, 115, xer);
	// beq cr6,0x82412884
	if (cr6.eq) goto loc_82412884;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6328
	ctx.r5.s64 = r11.s64 + -6328;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412884:
	// li r11,3
	r11.s64 = 3;
	// b 0x82412898
	goto loc_82412898;
loc_8241288C:
	// stw r21,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r21.u32);
	// b 0x824128a4
	goto loc_824128A4;
loc_82412894:
	// li r11,2
	r11.s64 = 2;
loc_82412898:
	// stw r11,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r11.u32);
	// b 0x824128a4
	goto loc_824128A4;
loc_824128A0:
	// stw r19,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r19.u32);
loc_824128A4:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x823a1200
	sub_823A1200(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82412910
	if (cr0.eq) goto loc_82412910;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x8239f330
	sub_8239F330(ctx, base);
	// cmpwi cr6,r3,120
	cr6.compare<int32_t>(ctx.r3.s32, 120, xer);
	// bne cr6,0x82412910
	if (!cr6.eq) goto loc_82412910;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r11.u32);
	// stw r11,12(r20)
	PPC_STORE_U32(r20.u32 + 12, r11.u32);
	// b 0x824128f8
	goto loc_824128F8;
loc_824128E4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x824129ac
	if (!cr6.eq) goto loc_824129AC;
loc_824128F8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824128e4
	if (!cr0.lt) goto loc_824128E4;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412910:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82412948
	if (!cr6.gt) goto loc_82412948;
loc_82412920:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbzx r11,r29,r11
	r11.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82412a30
	if (cr0.eq) goto loc_82412A30;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82412920
	if (cr6.lt) goto loc_82412920;
loc_82412948:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82412a30
	if (cr0.lt) goto loc_82412A30;
	// stw r3,8(r20)
	PPC_STORE_U32(r20.u32 + 8, ctx.r3.u32);
	// b 0x82412978
	goto loc_82412978;
loc_82412964:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412990
	if (!cr6.eq) goto loc_82412990;
loc_82412978:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412964
	if (!cr0.lt) goto loc_82412964;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412990:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x824129a8
	if (!cr6.eq) goto loc_824129A8;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// beq cr6,0x824129f8
	if (cr6.eq) goto loc_824129F8;
loc_824129A8:
	// stw r21,12(r20)
	PPC_STORE_U32(r20.u32 + 12, r21.u32);
loc_824129AC:
	// stw r19,44(r20)
	PPC_STORE_U32(r20.u32 + 44, r19.u32);
	// stw r19,40(r20)
	PPC_STORE_U32(r20.u32 + 40, r19.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82412e00
	if (!cr6.eq) goto loc_82412E00;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// bne cr6,0x82412e00
	if (!cr6.eq) goto loc_82412E00;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82412a84
	if (!cr6.eq) goto loc_82412A84;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6368
	ctx.r5.s64 = r11.s64 + -6368;
	// b 0x82412e20
	goto loc_82412E20;
loc_824129E4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412a10
	if (!cr6.eq) goto loc_82412A10;
loc_824129F8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824129e4
	if (!cr0.lt) goto loc_824129E4;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412A10:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82412a30
	if (!cr6.eq) goto loc_82412A30;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82412a3c
	if (!cr0.lt) goto loc_82412A3C;
loc_82412A30:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6412
	ctx.r5.s64 = r11.s64 + -6412;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412A3C:
	// stw r11,12(r20)
	PPC_STORE_U32(r20.u32 + 12, r11.u32);
	// b 0x82412a58
	goto loc_82412A58;
loc_82412A44:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x824129ac
	if (!cr6.eq) goto loc_824129AC;
loc_82412A58:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412a44
	if (!cr0.lt) goto loc_82412A44;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412A70:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412a9c
	if (!cr6.eq) goto loc_82412A9C;
loc_82412A84:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412a70
	if (!cr0.lt) goto loc_82412A70;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412A9C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82412ab4
	if (cr6.eq) goto loc_82412AB4;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,123
	cr6.compare<uint32_t>(r11.u32, 123, xer);
	// bne cr6,0x82412db0
	if (!cr6.eq) goto loc_82412DB0;
loc_82412AB4:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r28,12(r20)
	r28.u64 = PPC_LOAD_U32(r20.u32 + 12);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82412acc
	if (cr6.eq) goto loc_82412ACC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82412ad0
	if (!cr6.eq) goto loc_82412AD0;
loc_82412ACC:
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82412AD0:
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r4,40(r20)
	PPC_STORE_U32(r20.u32 + 40, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mr r25,r19
	r25.u64 = r19.u64;
	// stw r3,44(r20)
	PPC_STORE_U32(r20.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82412d80
	if (cr6.eq) goto loc_82412D80;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r23,r11,-24604
	r23.s64 = r11.s64 + -24604;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r24,r11,-24612
	r24.s64 = r11.s64 + -24612;
loc_82412B08:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82412de4
	if (cr0.lt) goto loc_82412DE4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x82412b08
	if (cr6.eq) goto loc_82412B08;
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82412b74
	if (!cr6.eq) goto loc_82412B74;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x82412b74
	if (!cr6.eq) goto loc_82412B74;
	// li r29,-1
	r29.s64 = -1;
loc_82412B4C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82412de4
	if (cr0.lt) goto loc_82412DE4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x82412b4c
	if (cr6.eq) goto loc_82412B4C;
loc_82412B74:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82412c58
	if (cr6.lt) goto loc_82412C58;
	// beq cr6,0x82412c40
	if (cr6.eq) goto loc_82412C40;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82412d00
	if (!cr6.lt) goto loc_82412D00;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82412bb0
	if (cr6.eq) goto loc_82412BB0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82412bb0
	if (cr6.eq) goto loc_82412BB0;
	// ble cr6,0x82412bb4
	if (!cr6.gt) goto loc_82412BB4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x82412bcc
	if (!cr6.gt) goto loc_82412BCC;
	// b 0x82412bb4
	goto loc_82412BB4;
loc_82412BB0:
	// li r11,2
	r11.s64 = 2;
loc_82412BB4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82412c0c
	if (cr6.eq) goto loc_82412C0C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82412bf0
	if (cr6.eq) goto loc_82412BF0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82412c70
	if (!cr6.eq) goto loc_82412C70;
loc_82412BCC:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// lfd f0,0(r22)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r22.u32 + 0);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82412c38
	goto loc_82412C38;
loc_82412BF0:
	// lwa r11,0(r22)
	r11.s64 = int32_t(PPC_LOAD_U32(r22.u32 + 0));
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// b 0x82412c24
	goto loc_82412C24;
loc_82412C0C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
loc_82412C24:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_82412C38:
	// stfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// b 0x82412d00
	goto loc_82412D00;
loc_82412C40:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82412c70
	if (!cr6.eq) goto loc_82412C70;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mullw r11,r29,r11
	r11.s64 = int64_t(r29.s32) * int64_t(r11.s32);
	// b 0x82412cfc
	goto loc_82412CFC;
loc_82412C58:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82412c7c
	if (!cr6.eq) goto loc_82412C7C;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82412cfc
	if (!cr6.gt) goto loc_82412CFC;
loc_82412C70:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6440
	ctx.r5.s64 = r11.s64 + -6440;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412C7C:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82412c70
	if (!cr6.eq) goto loc_82412C70;
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_82412C90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82412cb4
	if (cr0.eq) goto loc_82412CB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82412c90
	if (cr6.eq) goto loc_82412C90;
loc_82412CB4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82412cc4
	if (!cr0.eq) goto loc_82412CC4;
	// mr r11,r19
	r11.u64 = r19.u64;
	// b 0x82412cfc
	goto loc_82412CFC;
loc_82412CC4:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82412CCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82412cf0
	if (cr0.eq) goto loc_82412CF0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82412ccc
	if (cr6.eq) goto loc_82412CCC;
loc_82412CF0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82412c70
	if (!cr0.eq) goto loc_82412C70;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82412CFC:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82412D00:
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// beq cr6,0x82412d4c
	if (cr6.eq) goto loc_82412D4C;
loc_82412D0C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82412de4
	if (cr0.lt) goto loc_82412DE4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x82412d0c
	if (cr6.eq) goto loc_82412D0C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82412d4c
	if (cr6.eq) goto loc_82412D4C;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// bne cr6,0x82412d60
	if (!cr6.eq) goto loc_82412D60;
loc_82412D4C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r25,r28
	cr6.compare<uint32_t>(r25.u32, r28.u32, xer);
	// blt cr6,0x82412b08
	if (cr6.lt) goto loc_82412B08;
	// b 0x82412d80
	goto loc_82412D80;
loc_82412D60:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6500
	ctx.r5.s64 = r11.s64 + -6500;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412D6C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412d98
	if (!cr6.eq) goto loc_82412D98;
loc_82412D80:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412d6c
	if (!cr0.lt) goto loc_82412D6C;
	// b 0x82412de4
	goto loc_82412DE4;
loc_82412D98:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82412dd0
	if (cr6.eq) goto loc_82412DD0;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi cr6,r11,125
	cr6.compare<uint32_t>(r11.u32, 125, xer);
	// beq cr6,0x82412dd0
	if (cr6.eq) goto loc_82412DD0;
loc_82412DB0:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6544
	ctx.r5.s64 = r11.s64 + -6544;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412DBC:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x82412df4
	if (cr6.eq) goto loc_82412DF4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82412e00
	if (!cr6.eq) goto loc_82412E00;
loc_82412DD0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82412dbc
	if (!cr0.lt) goto loc_82412DBC;
loc_82412DE4:
	// li r30,-1
	r30.s64 = -1;
	// stw r21,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r21.u32);
	// stw r21,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r21.u32);
	// b 0x82412e60
	goto loc_82412E60;
loc_82412DF4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6572
	ctx.r5.s64 = r11.s64 + -6572;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412E00:
	// lwz r11,32(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82412e60
	if (!cr6.eq) goto loc_82412E60;
	// lwz r11,36(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82412e60
	if (!cr6.eq) goto loc_82412E60;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6628
	ctx.r5.s64 = r11.s64 + -6628;
loc_82412E20:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7348
	ctx.r4.s64 = r11.s64 + -7348;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// b 0x82412e60
	goto loc_82412E60;
loc_82412E38:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6656
	ctx.r5.s64 = r11.s64 + -6656;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412E44:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6700
	ctx.r5.s64 = r11.s64 + -6700;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412E50:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6720
	ctx.r5.s64 = r11.s64 + -6720;
	// b 0x82412e20
	goto loc_82412E20;
loc_82412E5C:
	// li r30,280
	r30.s64 = 280;
loc_82412E60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_82412E6C"))) PPC_WEAK_FUNC(sub_82412E6C);
PPC_FUNC_IMPL(__imp__sub_82412E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82412E70"))) PPC_WEAK_FUNC(sub_82412E70);
PPC_FUNC_IMPL(__imp__sub_82412E70) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r14,284
	r14.s64 = 284;
	// addi r11,r24,16
	r11.s64 = r24.s64 + 16;
	// lwz r9,92(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 92);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// beq cr6,0x82412edc
	if (cr6.eq) goto loc_82412EDC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-5936
	ctx.r5.s64 = r11.s64 + -5936;
loc_82412EBC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-7348
	ctx.r4.s64 = r11.s64 + -7348;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82412ECC:
	// li r14,-1
	r14.s64 = -1;
loc_82412ED0:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x8239bd10
	return;
loc_82412EDC:
	// li r11,1
	r11.s64 = 1;
	// li r22,0
	r22.s64 = 0;
	// stw r11,92(r24)
	PPC_STORE_U32(r24.u32 + 92, r11.u32);
	// lwz r3,128(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82412f08
	if (cr0.eq) goto loc_82412F08;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,128(r24)
	PPC_STORE_U32(r24.u32 + 128, r22.u32);
loc_82412F08:
	// li r5,1084
	ctx.r5.s64 = 1084;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x82412f48
	goto loc_82412F48;
loc_82412F20:
	// cmpwi cr6,r3,280
	cr6.compare<int32_t>(ctx.r3.s32, 280, xer);
	// beq cr6,0x82412f68
	if (cr6.eq) goto loc_82412F68;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82410678
	sub_82410678(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82412ecc
	if (cr6.eq) goto loc_82412ECC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82412F48:
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824122b0
	sub_824122B0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82412f20
	if (!cr6.eq) goto loc_82412F20;
	// b 0x82412ecc
	goto loc_82412ECC;
loc_82412F68:
	// lwz r30,360(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82412fa0
	if (cr6.eq) goto loc_82412FA0;
	// addi r28,r1,364
	r28.s64 = ctx.r1.s64 + 364;
loc_82412F7C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82411b98
	sub_82411B98(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82412ecc
	if (cr6.eq) goto loc_82412ECC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// blt cr6,0x82412f7c
	if (cr6.lt) goto loc_82412F7C;
loc_82412FA0:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mulli r4,r30,20
	ctx.r4.s64 = r30.s64 * 20;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mulli r19,r31,66
	r19.s64 = r31.s64 * 66;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r19,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r28,r22
	r28.u64 = r22.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// mr r23,r22
	r23.u64 = r22.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82413020
	if (cr6.eq) goto loc_82413020;
	// addi r10,r1,364
	ctx.r10.s64 = ctx.r1.s64 + 364;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82413000:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r23,r9,r23
	r23.u64 = ctx.r9.u64 + r23.u64;
	// bne 0x82413000
	if (!cr0.eq) goto loc_82413000;
loc_82413020:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// rlwinm r27,r31,7,0,24
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r18,r22
	r18.u64 = r22.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82413114
	if (cr6.eq) goto loc_82413114;
	// addi r29,r1,364
	r29.s64 = ctx.r1.s64 + 364;
	// addi r31,r21,6
	r31.s64 = r21.s64 + 6;
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8241306C:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82410408
	sub_82410408(ctx, base);
	// stw r3,-6(r31)
	PPC_STORE_U32(r31.u32 + -6, ctx.r3.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// sth r11,-2(r31)
	PPC_STORE_U16(r31.u32 + -2, r11.u16);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// sth r22,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r22.u16);
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824130d8
	if (cr6.eq) goto loc_824130D8;
	// add r3,r18,r15
	ctx.r3.u64 = r18.u64 + r15.u64;
	// stw r3,10(r31)
	PPC_STORE_U32(r31.u32 + 10, ctx.r3.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mullw r26,r11,r10
	r26.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// add r18,r26,r18
	r18.u64 = r26.u64 + r18.u64;
	// b 0x824130dc
	goto loc_824130DC;
loc_824130D8:
	// stw r22,10(r31)
	PPC_STORE_U32(r31.u32 + 10, r22.u32);
loc_824130DC:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82410950
	sub_82410950(ctx, base);
	// stw r3,6(r31)
	PPC_STORE_U32(r31.u32 + 6, ctx.r3.u32);
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// bne 0x8241306c
	if (!cr0.eq) goto loc_8241306C;
loc_82413114:
	// cmplw cr6,r18,r23
	cr6.compare<uint32_t>(r18.u32, r23.u32, xer);
	// beq cr6,0x82413128
	if (cr6.eq) goto loc_82413128;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-5968
	ctx.r5.s64 = r11.s64 + -5968;
	// b 0x82412ebc
	goto loc_82412EBC;
loc_82413128:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(r11.u32, r19.u32, xer);
	// ble cr6,0x82413140
	if (!cr6.gt) goto loc_82413140;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6020
	ctx.r5.s64 = r11.s64 + -6020;
	// b 0x82412ebc
	goto loc_82412EBC;
loc_82413140:
	// mulli r30,r28,20
	r30.s64 = r28.s64 * 20;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r10,r29
	r26.u64 = ctx.r10.u64 + r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r25,r11,r26
	r25.u64 = r11.u64 + r26.u64;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r27,r25,r18
	r27.u64 = r25.u64 + r18.u64;
	// add r23,r27,r11
	r23.u64 = r27.u64 + r11.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,28
	r11.s64 = 28;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r22,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r22.u32);
	// stw r22,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r22.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r22.u32);
	// stw r22,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r22.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82413208
	if (cr6.eq) goto loc_82413208;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
loc_824131BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x824131d4
	if (cr0.eq) goto loc_824131D4;
	// subf r10,r15,r10
	ctx.r10.s64 = ctx.r10.s64 - r15.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824131D4:
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// addi r9,r11,-16
	ctx.r9.s64 = r11.s64 + -16;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r17,r8
	ctx.r7.s64 = ctx.r8.s64 - r17.s64;
	// subf r8,r20,r6
	ctx.r8.s64 = ctx.r6.s64 - r20.s64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x824131bc
	if (!cr0.eq) goto loc_824131BC;
loc_82413208:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r31,r29
	r30.u64 = r31.u64 + r29.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82413260
	if (cr6.eq) goto loc_82413260;
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
loc_82413234:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8241324c
	if (cr0.eq) goto loc_8241324C;
	// subf r10,r16,r10
	ctx.r10.s64 = ctx.r10.s64 - r16.s64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8241324C:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82413234
	if (cr6.lt) goto loc_82413234;
loc_82413260:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r30,r31,r26
	r30.u64 = r31.u64 + r26.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824132c4
	if (cr6.eq) goto loc_824132C4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8241328C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r7,r20,r27
	ctx.r7.s64 = r27.s64 - r20.s64;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r8,r17,r29
	ctx.r8.s64 = r29.s64 - r17.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8241328c
	if (cr6.lt) goto loc_8241328C;
loc_824132C4:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// add r3,r31,r25
	ctx.r3.u64 = r31.u64 + r25.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// add r3,r31,r27
	ctx.r3.u64 = r31.u64 + r27.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82413304
	if (cr0.eq) goto loc_82413304;
	// bl 0x823ea600
	sub_823EA600(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82413308
	goto loc_82413308;
loc_82413304:
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82413308:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ea630
	sub_823EA630(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82413330
	if (!cr0.lt) goto loc_82413330;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-6060
	ctx.r5.s64 = r11.s64 + -6060;
	// b 0x82412ebc
	goto loc_82412EBC;
loc_82413330:
	// lwz r11,324(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 324);
	// stw r30,128(r24)
	PPC_STORE_U32(r24.u32 + 128, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82413350
	if (cr6.eq) goto loc_82413350;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r3,316(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 316);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8248e1b0
	sub_8248E1B0(ctx, base);
loc_82413350:
	// stw r22,124(r24)
	PPC_STORE_U32(r24.u32 + 124, r22.u32);
	// b 0x82412ed0
	goto loc_82412ED0;
}

__attribute__((alias("__imp__sub_82413358"))) PPC_WEAK_FUNC(sub_82413358);
PPC_FUNC_IMPL(__imp__sub_82413358) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r17,0
	r17.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// lwz r24,8(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// mr r27,r17
	r27.u64 = r17.u64;
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// mr r20,r17
	r20.u64 = r17.u64;
	// mr r26,r17
	r26.u64 = r17.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r29,r17
	r29.u64 = r17.u64;
	// lbz r11,0(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// mr r23,r24
	r23.u64 = r24.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82413824
	if (cr6.eq) goto loc_82413824;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r16,r11,14888
	r16.s64 = r11.s64 + 14888;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r21,r11,-9544
	r21.s64 = r11.s64 + -9544;
	// b 0x824133c8
	goto loc_824133C8;
loc_824133BC:
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// beq cr6,0x824133d4
	if (cr6.eq) goto loc_824133D4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_824133C8:
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824133bc
	if (!cr0.eq) goto loc_824133BC;
loc_824133D4:
	// subf r30,r23,r25
	r30.s64 = r25.s64 - r23.s64;
	// cmplwi cr6,r30,15
	cr6.compare<uint32_t>(r30.u32, 15, xer);
	// ble cr6,0x82413420
	if (!cr6.gt) goto loc_82413420;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82413544
	if (!cr6.eq) goto loc_82413544;
loc_824133E8:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8241386c
	if (cr6.eq) goto loc_8241386C;
loc_824133F0:
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82413854
	if (!cr0.eq) goto loc_82413854;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r8,24(r18)
	ctx.r8.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r6,r11,26492
	ctx.r6.s64 = r11.s64 + 26492;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// b 0x82413888
	goto loc_82413888;
loc_82413420:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stbx r17,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r17.u8);
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82413448
	if (cr6.eq) goto loc_82413448;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82413448:
	// mr r23,r25
	r23.u64 = r25.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x824137d4
	if (cr6.eq) goto loc_824137D4;
	// lbz r11,128(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82413488
	if (cr0.eq) goto loc_82413488;
loc_82413464:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x823a1200
	sub_823A1200(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82413488
	if (cr0.eq) goto loc_82413488;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82413464
	if (!cr6.eq) goto loc_82413464;
loc_82413488:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824134a4
	if (cr6.eq) goto loc_824134A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x824134ac
	goto loc_824134AC;
loc_824134A4:
	// lis r27,0
	r27.s64 = 0;
	// ori r27,r27,65535
	r27.u64 = r27.u64 | 65535;
loc_824134AC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824134d0
	if (cr6.eq) goto loc_824134D0;
	// stb r17,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r17.u8);
	// b 0x824134cc
	goto loc_824134CC;
loc_824134C0:
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824134dc
	if (cr0.eq) goto loc_824134DC;
loc_824134CC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_824134D0:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824134c0
	if (!cr0.eq) goto loc_824134C0;
loc_824134DC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824133e8
	if (!cr6.eq) goto loc_824133E8;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_824134F4:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
loc_824134FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82413520
	if (cr0.eq) goto loc_82413520;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x824134fc
	if (cr6.eq) goto loc_824134FC;
loc_82413520:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8241353c
	if (cr0.eq) goto loc_8241353C;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// cmplwi cr6,r5,432
	cr6.compare<uint32_t>(ctx.r5.u32, 432, xer);
	// blt cr6,0x824134f4
	if (cr6.lt) goto loc_824134F4;
loc_8241353C:
	// cmplwi cr6,r8,18
	cr6.compare<uint32_t>(ctx.r8.u32, 18, xer);
	// bne cr6,0x8241365c
	if (!cr6.eq) goto loc_8241365C;
loc_82413544:
	// lwz r11,72(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824133e8
	if (cr6.eq) goto loc_824133E8;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82413558:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82413558
	if (!cr6.eq) goto loc_82413558;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(r31.u32, 256, xer);
	// bge cr6,0x824133e8
	if (!cr6.lt) goto loc_824133E8;
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// ble cr6,0x824135ec
	if (!cr6.gt) goto loc_824135EC;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// lbz r11,-4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(r11.u32, 95, xer);
	// bne cr6,0x824135ec
	if (!cr6.eq) goto loc_824135EC;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lbz r11,-3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -3);
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// bne cr6,0x824135ec
	if (!cr6.eq) goto loc_824135EC;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lbz r11,-2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// cmplwi cr6,r11,98
	cr6.compare<uint32_t>(r11.u32, 98, xer);
	// bne cr6,0x824135ec
	if (!cr6.eq) goto loc_824135EC;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// bne cr6,0x824135ec
	if (!cr6.eq) goto loc_824135EC;
	// addi r31,r31,-3
	r31.s64 = r31.s64 + -3;
	// stb r17,-4(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4, r17.u8);
loc_824135EC:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// ld r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U64(r22.u32 + 0);
	// ld r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U64(r22.u32 + 8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r7,16(r22)
	ctx.r7.u64 = PPC_LOAD_U64(r22.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r30,24(r22)
	r30.u64 = PPC_LOAD_U64(r22.u32 + 24);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,76(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 76);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r8.u64);
	// std r7,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r7.u64);
	// std r30,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r30.u64);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,80(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 80);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x824133e8
	if (!cr0.eq) goto loc_824133E8;
	// add r25,r31,r24
	r25.u64 = r31.u64 + r24.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// mr r26,r17
	r26.u64 = r17.u64;
	// mr r28,r17
	r28.u64 = r17.u64;
	// li r29,1
	r29.s64 = 1;
	// mr r23,r25
	r23.u64 = r25.u64;
	// b 0x82413818
	goto loc_82413818;
loc_8241365C:
	// lwz r10,64(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 64);
	// mulli r11,r8,12
	r11.s64 = ctx.r8.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r21,8
	ctx.r10.s64 = r21.s64 + 8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x824133e8
	if (cr6.eq) goto loc_824133E8;
	// mulli r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 * 24;
	// addi r11,r21,20
	r11.s64 = r21.s64 + 20;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824136bc
	if (cr6.eq) goto loc_824136BC;
	// cmplwi cr6,r27,65535
	cr6.compare<uint32_t>(r27.u32, 65535, xer);
	// bne cr6,0x824136a8
	if (!cr6.eq) goto loc_824136A8;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8241386c
	if (cr6.eq) goto loc_8241386C;
	// lwz r27,24(r18)
	r27.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// b 0x824136c4
	goto loc_824136C4;
loc_824136A8:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x824136c4
	if (cr6.eq) goto loc_824136C4;
	// lwz r11,24(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 24);
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
	// b 0x824136c4
	goto loc_824136C4;
loc_824136BC:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// bne cr6,0x824133f0
	if (!cr6.eq) goto loc_824133F0;
loc_824136C4:
	// cmplwi cr6,r27,65535
	cr6.compare<uint32_t>(r27.u32, 65535, xer);
	// bne cr6,0x824136dc
	if (!cr6.eq) goto loc_824136DC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824133e8
	if (!cr6.eq) goto loc_824133E8;
	// mr r27,r17
	r27.u64 = r17.u64;
	// b 0x824136f8
	goto loc_824136F8;
loc_824136DC:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x824136f0
	if (cr6.eq) goto loc_824136F0;
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824136f8
	if (!cr6.eq) goto loc_824136F8;
loc_824136F0:
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// bge cr6,0x824133e8
	if (!cr6.lt) goto loc_824133E8;
loc_824136F8:
	// addi r11,r21,4
	r11.s64 = r21.s64 + 4;
	// addi r10,r21,16
	ctx.r10.s64 = r21.s64 + 16;
	// lwzx r31,r9,r11
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r26,r9,r10
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// bne cr6,0x82413750
	if (!cr6.eq) goto loc_82413750;
	// clrlwi r11,r27,19
	r11.u64 = r27.u32 & 0x1FFF;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(r11.u32, 2048, xer);
	// blt cr6,0x82413748
	if (cr6.lt) goto loc_82413748;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bge cr6,0x8241372c
	if (!cr6.lt) goto loc_8241372C;
	// li r31,11
	r31.s64 = 11;
	// b 0x82413748
	goto loc_82413748;
loc_8241372C:
	// cmplwi cr6,r11,6144
	cr6.compare<uint32_t>(r11.u32, 6144, xer);
	// bge cr6,0x8241373c
	if (!cr6.lt) goto loc_8241373C;
	// li r31,12
	r31.s64 = 12;
	// b 0x82413748
	goto loc_82413748;
loc_8241373C:
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bge cr6,0x82413748
	if (!cr6.lt) goto loc_82413748;
	// li r31,13
	r31.s64 = 13;
loc_82413748:
	// clrlwi r27,r11,21
	r27.u64 = r11.u32 & 0x7FF;
	// b 0x824137c8
	goto loc_824137C8;
loc_82413750:
	// cmpwi cr6,r31,-3
	cr6.compare<int32_t>(r31.s32, -3, xer);
	// bne cr6,0x82413760
	if (!cr6.eq) goto loc_82413760;
	// li r27,62
	r27.s64 = 62;
	// b 0x824137c4
	goto loc_824137C4;
loc_82413760:
	// cmpwi cr6,r31,-4
	cr6.compare<int32_t>(r31.s32, -4, xer);
	// bne cr6,0x82413770
	if (!cr6.eq) goto loc_82413770;
	// li r27,63
	r27.s64 = 63;
	// b 0x824137c4
	goto loc_824137C4;
loc_82413770:
	// cmplwi cr6,r31,9
	cr6.compare<uint32_t>(r31.u32, 9, xer);
	// bne cr6,0x82413780
	if (!cr6.eq) goto loc_82413780;
	// li r27,61
	r27.s64 = 61;
	// b 0x824137c4
	goto loc_824137C4;
loc_82413780:
	// cmpwi cr6,r31,-6
	cr6.compare<int32_t>(r31.s32, -6, xer);
	// bne cr6,0x82413794
	if (!cr6.eq) goto loc_82413794;
	// li r31,17
	r31.s64 = 17;
	// mr r27,r17
	r27.u64 = r17.u64;
	// b 0x824137c8
	goto loc_824137C8;
loc_82413794:
	// cmpwi cr6,r31,-7
	cr6.compare<int32_t>(r31.s32, -7, xer);
	// bne cr6,0x824137a8
	if (!cr6.eq) goto loc_824137A8;
	// li r31,17
	r31.s64 = 17;
	// li r27,1
	r27.s64 = 1;
	// b 0x824137c8
	goto loc_824137C8;
loc_824137A8:
	// cmpwi cr6,r31,-1000
	cr6.compare<int32_t>(r31.s32, -1000, xer);
	// bne cr6,0x824137b8
	if (!cr6.eq) goto loc_824137B8;
	// li r27,32
	r27.s64 = 32;
	// b 0x824137c4
	goto loc_824137C4;
loc_824137B8:
	// cmpwi cr6,r31,-1001
	cr6.compare<int32_t>(r31.s32, -1001, xer);
	// bne cr6,0x824137c8
	if (!cr6.eq) goto loc_824137C8;
	// addi r27,r27,33
	r27.s64 = r27.s64 + 33;
loc_824137C4:
	// li r31,4
	r31.s64 = 4;
loc_824137C8:
	// mr r28,r17
	r28.u64 = r17.u64;
	// li r29,1
	r29.s64 = 1;
	// b 0x82413818
	goto loc_82413818;
loc_824137D4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x824133e8
	if (cr6.eq) goto loc_824133E8;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_824137E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82413808
	if (cr0.eq) goto loc_82413808;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x824137e4
	if (cr6.eq) goto loc_824137E4;
loc_82413808:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x824133e8
	if (!cr0.eq) goto loc_824133E8;
	// lis r20,2816
	r20.s64 = 184549376;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_82413818:
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824133c8
	if (!cr6.eq) goto loc_824133C8;
loc_82413824:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824138c4
	if (cr0.eq) goto loc_824138C4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824860f8
	sub_824860F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824138c8
	goto loc_824138C8;
loc_82413854:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82413888
	if (cr6.eq) goto loc_82413888;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r6,r11,26464
	ctx.r6.s64 = r11.s64 + 26464;
	// b 0x82413874
	goto loc_82413874;
loc_8241386C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r6,r11,26440
	ctx.r6.s64 = r11.s64 + 26440;
loc_82413874:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
loc_82413888:
	// li r11,1
	r11.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,52(r19)
	PPC_STORE_U32(r19.u32 + 52, r11.u32);
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824138bc
	if (cr0.eq) goto loc_824138BC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x824860f8
	sub_824860F8(ctx, base);
	// b 0x82413934
	goto loc_82413934;
loc_824138BC:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// b 0x82413934
	goto loc_82413934;
loc_824138C4:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_824138C8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824138d8
	if (!cr6.eq) goto loc_824138D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82413934
	goto loc_82413934;
loc_824138D8:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824138e8
	if (cr6.eq) goto loc_824138E8;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_824138E8:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x82413930
	if (cr6.eq) goto loc_82413930;
	// lwz r11,40(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r17,40(r18)
	PPC_STORE_U32(r18.u32 + 40, r17.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82413930
	if (!cr6.eq) goto loc_82413930;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82413930
	if (cr0.eq) goto loc_82413930;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x82413930
	if (cr6.eq) goto loc_82413930;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,-5888
	ctx.r4.s64 = r11.s64 + -5888;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82413930:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82413934:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_8241393C"))) PPC_WEAK_FUNC(sub_8241393C);
PPC_FUNC_IMPL(__imp__sub_8241393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82413940"))) PPC_WEAK_FUNC(sub_82413940);
PPC_FUNC_IMPL(__imp__sub_82413940) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82413970
	if (cr6.eq) goto loc_82413970;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82413970:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82413d90
	if (!cr6.eq) goto loc_82413D90;
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82413d90
	if (!cr6.eq) goto loc_82413D90;
	// lwz r29,56(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r11,r29,-27
	r11.s64 = r29.s64 + -27;
	// addi r10,r29,-35
	ctx.r10.s64 = r29.s64 + -35;
	// subfic r11,r11,7
	xer.ca = r11.u32 <= 7;
	r11.s64 = 7 - r11.s64;
	// addi r9,r7,-20
	ctx.r9.s64 = ctx.r7.s64 + -20;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r10,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r9,3
	xer.ca = ctx.r9.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r9.s64;
	// addi r8,r7,-24
	ctx.r8.s64 = ctx.r7.s64 + -24;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r8,r8,3
	xer.ca = ctx.r8.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r8.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824139f0
	if (!cr0.eq) goto loc_824139F0;
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x824139f4
	if (cr0.eq) goto loc_824139F4;
loc_824139F0:
	// li r11,1
	r11.s64 = 1;
loc_824139F4:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// bne 0x82413a0c
	if (!cr0.eq) goto loc_82413A0C;
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82413a10
	if (cr0.eq) goto loc_82413A10;
loc_82413A0C:
	// li r11,1
	r11.s64 = 1;
loc_82413A10:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82413a2c
	if (cr0.eq) goto loc_82413A2C;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82413a2c
	if (cr0.eq) goto loc_82413A2C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-4864
	ctx.r4.s64 = r11.s64 + -4864;
	// b 0x82413d98
	goto loc_82413D98;
loc_82413A2C:
	// cmplwi cr6,r29,23
	cr6.compare<uint32_t>(r29.u32, 23, xer);
	// beq cr6,0x82413a50
	if (cr6.eq) goto loc_82413A50;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(r29.u32, 24, xer);
	// beq cr6,0x82413a50
	if (cr6.eq) goto loc_82413A50;
	// cmplwi cr6,r29,252
	cr6.compare<uint32_t>(r29.u32, 252, xer);
	// beq cr6,0x82413a50
	if (cr6.eq) goto loc_82413A50;
	// cmplwi cr6,r29,253
	cr6.compare<uint32_t>(r29.u32, 253, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82413a54
	if (!cr6.eq) goto loc_82413A54;
loc_82413A50:
	// li r11,1
	r11.s64 = 1;
loc_82413A54:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r7,29
	cr6.compare<uint32_t>(ctx.r7.u32, 29, xer);
	// beq cr6,0x82413a6c
	if (cr6.eq) goto loc_82413A6C;
	// cmplwi cr6,r7,244
	cr6.compare<uint32_t>(ctx.r7.u32, 244, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82413a70
	if (!cr6.eq) goto loc_82413A70;
loc_82413A6C:
	// li r11,1
	r11.s64 = 1;
loc_82413A70:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82413a8c
	if (cr0.eq) goto loc_82413A8C;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82413a8c
	if (cr0.eq) goto loc_82413A8C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-4908
	ctx.r4.s64 = r11.s64 + -4908;
	// b 0x82413d98
	goto loc_82413D98;
loc_82413A8C:
	// lwz r28,104(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82413c08
	if (cr0.eq) goto loc_82413C08;
	// lwz r10,96(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82413c08
	if (cr0.eq) goto loc_82413C08;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,241
	cr6.compare<uint32_t>(r29.u32, 241, xer);
	// beq cr6,0x82413af0
	if (cr6.eq) goto loc_82413AF0;
	// cmplwi cr6,r29,243
	cr6.compare<uint32_t>(r29.u32, 243, xer);
	// beq cr6,0x82413ad8
	if (cr6.eq) goto loc_82413AD8;
	// cmplwi cr6,r29,251
	cr6.compare<uint32_t>(r29.u32, 251, xer);
	// ble cr6,0x82413ac8
	if (!cr6.gt) goto loc_82413AC8;
	// cmplwi cr6,r29,253
	cr6.compare<uint32_t>(r29.u32, 253, xer);
	// ble cr6,0x82413ad8
	if (!cr6.gt) goto loc_82413AD8;
loc_82413AC8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-10112
	r11.s64 = r11.s64 + -10112;
	// lbzx r31,r29,r11
	r31.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// b 0x82413adc
	goto loc_82413ADC;
loc_82413AD8:
	// li r31,2
	r31.s64 = 2;
loc_82413ADC:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bne cr6,0x82413af0
	if (!cr6.eq) goto loc_82413AF0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-5016
	ctx.r5.s64 = r11.s64 + -5016;
	// b 0x82413af8
	goto loc_82413AF8;
loc_82413AF0:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-5120
	ctx.r5.s64 = r11.s64 + -5120;
loc_82413AF8:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82413b1c
	if (cr6.eq) goto loc_82413B1C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5148
	ctx.r4.s64 = r11.s64 + -5148;
loc_82413B10:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82413da0
	goto loc_82413DA0;
loc_82413B1C:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82413b38
	if (cr6.eq) goto loc_82413B38;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5180
	ctx.r4.s64 = r11.s64 + -5180;
	// b 0x82413b10
	goto loc_82413B10;
loc_82413B38:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82413b54
	if (cr6.eq) goto loc_82413B54;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5216
	ctx.r4.s64 = r11.s64 + -5216;
	// b 0x82413b10
	goto loc_82413B10;
loc_82413B54:
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// xor. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82413bfc
	if (!cr0.eq) goto loc_82413BFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82413b94
	if (cr6.eq) goto loc_82413B94;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82413bfc
	if (!cr6.eq) goto loc_82413BFC;
loc_82413B94:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,11
	cr6.compare<uint32_t>(ctx.r7.u32, 11, xer);
	// blt cr6,0x82413bac
	if (cr6.lt) goto loc_82413BAC;
	// cmplwi cr6,r7,14
	cr6.compare<uint32_t>(ctx.r7.u32, 14, xer);
	// bgt cr6,0x82413bac
	if (cr6.gt) goto loc_82413BAC;
	// li r10,5
	ctx.r10.s64 = 5;
loc_82413BAC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r11,r11,-5228
	r11.s64 = r11.s64 + -5228;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// bl 0x8240f200
	sub_8240F200(ctx, base);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// and r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 & ctx.r6.u64;
	// and r11,r11,r6
	r11.u64 = r11.u64 & ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82413be8
	if (cr6.eq) goto loc_82413BE8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5328
	ctx.r4.s64 = r11.s64 + -5328;
	// b 0x82413d98
	goto loc_82413D98;
loc_82413BE8:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bne cr6,0x82413c08
	if (!cr6.eq) goto loc_82413C08;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5432
	ctx.r4.s64 = r11.s64 + -5432;
	// b 0x82413d98
	goto loc_82413D98;
loc_82413BFC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5484
	ctx.r4.s64 = r11.s64 + -5484;
	// b 0x82413b10
	goto loc_82413B10;
loc_82413C08:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82413c34
	if (cr0.eq) goto loc_82413C34;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82413c2c
	if (!cr6.eq) goto loc_82413C2C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x82413c38
	goto loc_82413C38;
loc_82413C2C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82413c38
	goto loc_82413C38;
loc_82413C34:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82413C38:
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82413c60
	if (cr0.eq) goto loc_82413C60;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82413c58
	if (!cr6.eq) goto loc_82413C58;
	// li r11,-1
	r11.s64 = -1;
	// b 0x82413c64
	goto loc_82413C64;
loc_82413C58:
	// li r11,1
	r11.s64 = 1;
	// b 0x82413c64
	goto loc_82413C64;
loc_82413C60:
	// li r11,0
	r11.s64 = 0;
loc_82413C64:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82413c78
	if (cr6.eq) goto loc_82413C78;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5544
	ctx.r4.s64 = r11.s64 + -5544;
	// b 0x82413d98
	goto loc_82413D98;
loc_82413C78:
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r8,88(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 88);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x82413c98
	if (cr0.eq) goto loc_82413C98;
	// lwz r11,16(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82413c9c
	if (!cr6.eq) goto loc_82413C9C;
loc_82413C98:
	// li r11,0
	r11.s64 = 0;
loc_82413C9C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82413cb8
	if (cr6.eq) goto loc_82413CB8;
	// lwz r11,16(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82413cbc
	if (cr6.eq) goto loc_82413CBC;
loc_82413CB8:
	// li r11,0
	r11.s64 = 0;
loc_82413CBC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82413cd8
	if (cr6.eq) goto loc_82413CD8;
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82413cdc
	if (!cr6.eq) goto loc_82413CDC;
loc_82413CD8:
	// li r11,0
	r11.s64 = 0;
loc_82413CDC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82413cf8
	if (cr6.eq) goto loc_82413CF8;
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82413cfc
	if (cr6.eq) goto loc_82413CFC;
loc_82413CF8:
	// li r11,0
	r11.s64 = 0;
loc_82413CFC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// beq 0x82413d2c
	if (cr0.eq) goto loc_82413D2C;
	// clrlwi. r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82413d2c
	if (cr0.eq) goto loc_82413D2C;
	// lwz r7,24(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82413d2c
	if (cr6.eq) goto loc_82413D2C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5616
	ctx.r4.s64 = r11.s64 + -5616;
	// b 0x82413d98
	goto loc_82413D98;
loc_82413D2C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82413d3c
	if (cr6.eq) goto loc_82413D3C;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82413d4c
	if (!cr0.eq) goto loc_82413D4C;
loc_82413D3C:
	// clrlwi. r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82413d58
	if (cr0.eq) goto loc_82413D58;
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82413d58
	if (cr0.eq) goto loc_82413D58;
loc_82413D4C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5744
	ctx.r4.s64 = r11.s64 + -5744;
	// b 0x82413d98
	goto loc_82413D98;
loc_82413D58:
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// lwz r11,88(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 88);
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// bne cr6,0x82413d7c
	if (!cr6.eq) goto loc_82413D7C;
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
loc_82413D7C:
	// lwz r11,100(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// b 0x82413da0
	goto loc_82413DA0;
loc_82413D90:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-5816
	ctx.r4.s64 = r11.s64 + -5816;
loc_82413D98:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82413DA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82413DAC"))) PPC_WEAK_FUNC(sub_82413DAC);
PPC_FUNC_IMPL(__imp__sub_82413DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82413DB0"))) PPC_WEAK_FUNC(sub_82413DB0);
PPC_FUNC_IMPL(__imp__sub_82413DB0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,112(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// stb r5,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r5.u8);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stb r3,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r3.u8);
	// stb r3,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r3.u8);
	// beq 0x824141e4
	if (cr0.eq) goto loc_824141E4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r24,r11,-4268
	r24.s64 = r11.s64 + -4268;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,-4312
	r27.s64 = r11.s64 + -4312;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,-4360
	r28.s64 = r11.s64 + -4360;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r15,r11,-4368
	r15.s64 = r11.s64 + -4368;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r14,r11,-4376
	r14.s64 = r11.s64 + -4376;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,-4456
	r26.s64 = r11.s64 + -4456;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r25,r11,-4480
	r25.s64 = r11.s64 + -4480;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r23,r11,-4532
	r23.s64 = r11.s64 + -4532;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r22,r11,-4584
	r22.s64 = r11.s64 + -4584;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r21,r11,-4600
	r21.s64 = r11.s64 + -4600;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r20,r11,-4636
	r20.s64 = r11.s64 + -4636;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r19,r11,-4644
	r19.s64 = r11.s64 + -4644;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r18,r11,5652
	r18.s64 = r11.s64 + 5652;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r17,r11,-4660
	r17.s64 = r11.s64 + -4660;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r16,r11,-11332
	r16.s64 = r11.s64 + -11332;
	// b 0x82413e84
	goto loc_82413E84;
loc_82413E70:
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
loc_82413E84:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lwz r31,24(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// beq 0x82413ea8
	if (cr0.eq) goto loc_82413EA8;
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
loc_82413EA8:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_82413EB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82413ed4
	if (cr0.eq) goto loc_82413ED4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82413eb0
	if (cr6.eq) goto loc_82413EB0;
loc_82413ED4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82413f14
	if (!cr0.eq) goto loc_82413F14;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82413efc
	if (cr0.eq) goto loc_82413EFC;
	// stb r5,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r5.u8);
loc_82413EFC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82413f08
	if (cr6.eq) goto loc_82413F08;
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
loc_82413F08:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r5,9,21,22
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 9) & 0x600) | (r11.u64 & 0xFFFFFFFFFFFFF9FF);
	// b 0x82413fd0
	goto loc_82413FD0;
loc_82413F14:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_82413F1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82413f40
	if (cr0.eq) goto loc_82413F40;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82413f1c
	if (cr6.eq) goto loc_82413F1C;
loc_82413F40:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82413f68
	if (!cr0.eq) goto loc_82413F68;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82413fbc
	if (cr0.eq) goto loc_82413FBC;
	// b 0x82413fb8
	goto loc_82413FB8;
loc_82413F68:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_82413F70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82413f94
	if (cr0.eq) goto loc_82413F94;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82413f70
	if (cr6.eq) goto loc_82413F70;
loc_82413F94:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82413fd8
	if (!cr0.eq) goto loc_82413FD8;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82413fbc
	if (!cr0.eq) goto loc_82413FBC;
loc_82413FB8:
	// stb r5,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r5.u8);
loc_82413FBC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82413fc8
	if (cr6.eq) goto loc_82413FC8;
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
loc_82413FC8:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r5,10,21,22
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x600) | (r11.u64 & 0xFFFFFFFFFFFFF9FF);
loc_82413FD0:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// b 0x82414100
	goto loc_82414100;
loc_82413FD8:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_82413FE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82414004
	if (cr0.eq) goto loc_82414004;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82413fe0
	if (cr6.eq) goto loc_82413FE0;
loc_82414004:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82414064
	if (!cr0.eq) goto loc_82414064;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8240f520
	sub_8240F520(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82414034
	if (!cr0.lt) goto loc_82414034;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_82414028:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x824140fc
	goto loc_824140FC;
loc_82414034:
	// lwz r11,316(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwimi r10,r9,0,29,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r10,r10,1536
	ctx.r10.u64 = ctx.r10.u64 | 1536;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82414100
	goto loc_82414100;
loc_82414064:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8241406C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82414090
	if (cr0.eq) goto loc_82414090;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8241406c
	if (cr6.eq) goto loc_8241406C;
loc_82414090:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x824140ec
	if (!cr0.eq) goto loc_824140EC;
	// lbz r11,114(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824140ac
	if (cr0.eq) goto loc_824140AC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x82414028
	goto loc_82414028;
loc_824140AC:
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r11.u8);
	// li r11,0
	r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bl 0x8240f608
	sub_8240F608(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x824140e4
	if (cr0.lt) goto loc_824140E4;
	// lwz r11,316(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwimi r9,r10,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x82414100
	goto loc_82414100;
loc_824140E4:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x82414028
	goto loc_82414028;
loc_824140EC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_824140FC:
	// li r29,1
	r29.s64 = 1;
loc_82414100:
	// lbz r11,115(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8241413c
	if (cr0.eq) goto loc_8241413C;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82414134
	if (!cr6.eq) goto loc_82414134;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82414134
	if (!cr0.eq) goto loc_82414134;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82414134:
	// li r11,0
	r11.s64 = 0;
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, r11.u8);
loc_8241413C:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82414180
	if (cr0.eq) goto loc_82414180;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82414164
	if (!cr0.eq) goto loc_82414164;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
loc_82414164:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
loc_82414180:
	// lbz r11,113(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824141a8
	if (cr0.eq) goto loc_824141A8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r11.u8);
loc_824141A8:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x824141cc
	if (!cr6.gt) goto loc_824141CC;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824141cc
	if (!cr0.eq) goto loc_824141CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_824141CC:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82413e70
	if (!cr6.eq) goto loc_82413E70;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82414228
	if (!cr6.eq) goto loc_82414228;
loc_824141E4:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82414228
	if (!cr0.eq) goto loc_82414228;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8241420c
	if (cr0.eq) goto loc_8241420C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-4680
	ctx.r5.s64 = r11.s64 + -4680;
	// b 0x82414214
	goto loc_82414214;
loc_8241420C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-4716
	ctx.r5.s64 = r11.s64 + -4716;
loc_82414214:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-4772
	ctx.r4.s64 = r11.s64 + -4772;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82414228:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8241423c
	if (cr0.eq) goto loc_8241423C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82414240
	goto loc_82414240;
loc_8241423C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82414240:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82414248"))) PPC_WEAK_FUNC(sub_82414248);
PPC_FUNC_IMPL(__imp__sub_82414248) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82414270
	if (!cr6.eq) goto loc_82414270;
loc_82414268:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82414320
	goto loc_82414320;
loc_82414270:
	// lwz r31,112(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// li r27,0
	r27.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82414310
	if (cr0.eq) goto loc_82414310;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,-4228
	r28.s64 = r11.s64 + -4228;
loc_8241428C:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_824142A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x824142c8
	if (cr0.eq) goto loc_824142C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x824142a4
	if (cr6.eq) goto loc_824142A4;
loc_824142C8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x824142ec
	if (!cr0.eq) goto loc_824142EC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82414328
	if (!cr6.eq) goto loc_82414328;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82414340
	if (cr0.eq) goto loc_82414340;
	// addi r27,r11,16
	r27.s64 = r11.s64 + 16;
	// b 0x82414308
	goto loc_82414308;
loc_824142EC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82414308
	if (cr6.eq) goto loc_82414308;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82414308:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8241428c
	if (!cr6.eq) goto loc_8241428C;
loc_82414310:
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82414320
	if (!cr0.eq) goto loc_82414320;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82414320:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
loc_82414328:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-8068
	ctx.r4.s64 = r11.s64 + -8068;
loc_82414330:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82414268
	goto loc_82414268;
loc_82414340:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-8220
	ctx.r4.s64 = r11.s64 + -8220;
	// b 0x82414330
	goto loc_82414330;
}

__attribute__((alias("__imp__sub_8241434C"))) PPC_WEAK_FUNC(sub_8241434C);
PPC_FUNC_IMPL(__imp__sub_8241434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82414350"))) PPC_WEAK_FUNC(sub_82414350);
PPC_FUNC_IMPL(__imp__sub_82414350) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-4188
	ctx.r5.s64 = r11.s64 + -4188;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82414248
	sub_82414248(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82414394
	if (cr0.eq) goto loc_82414394;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x8240f608
	sub_8240F608(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82414394
	if (cr0.lt) goto loc_82414394;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82414394:
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

__attribute__((alias("__imp__sub_824143AC"))) PPC_WEAK_FUNC(sub_824143AC);
PPC_FUNC_IMPL(__imp__sub_824143AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824143B0"))) PPC_WEAK_FUNC(sub_824143B0);
PPC_FUNC_IMPL(__imp__sub_824143B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x824143e4
	if (!cr6.gt) goto loc_824143E4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-4176
	ctx.r4.s64 = r11.s64 + -4176;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
loc_824143E4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824143F8"))) PPC_WEAK_FUNC(sub_824143F8);
PPC_FUNC_IMPL(__imp__sub_824143F8) {
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
	// lwz r9,36(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
loc_8241442C:
	// srw r7,r9,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r28,r7,r28
	r28.u64 = ctx.r7.u64 | r28.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// blt cr6,0x8241442c
	if (cr6.lt) goto loc_8241442C;
	// lwz r11,20(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241447c
	if (cr6.eq) goto loc_8241447C;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824144a8
	if (cr6.eq) goto loc_824144A8;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82414480
	if (!cr6.eq) goto loc_82414480;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8241447C:
	// li r27,1
	r27.s64 = 1;
loc_82414480:
	// lwz r11,16(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824144bc
	if (cr0.eq) goto loc_824144BC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x824144b0
	if (cr6.eq) goto loc_824144B0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r26,1
	ctx.r5.s64 = r26.s64 + 1;
	// addi r4,r11,-4048
	ctx.r4.s64 = r11.s64 + -4048;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x824144f0
	goto loc_824144F0;
loc_824144A8:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82414480
	goto loc_82414480;
loc_824144B0:
	// lbz r30,27(r6)
	r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 27);
	// li r29,0
	r29.s64 = 0;
	// b 0x824144f0
	goto loc_824144F0;
loc_824144BC:
	// lwz r11,24(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// clrlwi r30,r11,26
	r30.u64 = r11.u32 & 0x3F;
	// beq cr6,0x824144d4
	if (cr6.eq) goto loc_824144D4;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
loc_824144D4:
	// lwz r11,40(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824144f0
	if (cr0.eq) goto loc_824144F0;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bne cr6,0x824144f0
	if (!cr6.eq) goto loc_824144F0;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
loc_824144F0:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// blt cr6,0x8241453c
	if (cr6.lt) goto loc_8241453C;
	// beq cr6,0x82414520
	if (cr6.eq) goto loc_82414520;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// bge cr6,0x8241455c
	if (!cr6.lt) goto loc_8241455C;
	// stb r28,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r28.u8);
	// stb r30,11(r31)
	PPC_STORE_U8(r31.u32 + 11, r30.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r27,24,7,7
	r11.u64 = (__builtin_rotateleft32(r27.u32, 24) & 0x1000000) | (r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// rlwimi r10,r29,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// b 0x82414554
	goto loc_82414554;
loc_82414520:
	// stb r28,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r28.u8);
	// stb r30,10(r31)
	PPC_STORE_U8(r31.u32 + 10, r30.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r27,25,6,6
	r11.u64 = (__builtin_rotateleft32(r27.u32, 25) & 0x2000000) | (r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// rlwimi r10,r29,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// b 0x82414554
	goto loc_82414554;
loc_8241453C:
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r30.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r27,26,5,5
	r11.u64 = (__builtin_rotateleft32(r27.u32, 26) & 0x4000000) | (r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// rlwimi r10,r29,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
loc_82414554:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8241455C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82414564"))) PPC_WEAK_FUNC(sub_82414564);
PPC_FUNC_IMPL(__imp__sub_82414564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82414568"))) PPC_WEAK_FUNC(sub_82414568);
PPC_FUNC_IMPL(__imp__sub_82414568) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// std r24,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r24.u64);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r5,68
	r29.s64 = ctx.r5.s64 + 68;
	// addi r27,r11,-3244
	r27.s64 = r11.s64 + -3244;
	// li r23,1
	r23.s64 = 1;
loc_824145A0:
	// lwz r30,16(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x824146c0
	if (cr0.eq) goto loc_824146C0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82414604
	if (cr0.eq) goto loc_82414604;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82414770
	if (cr6.eq) goto loc_82414770;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x824145e8
	if (cr6.eq) goto loc_824145E8;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x824145e8
	if (cr6.eq) goto loc_824145E8;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x824145e8
	if (cr6.eq) goto loc_824145E8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82414614
	goto loc_82414614;
loc_824145E8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,25,1,6
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0x7E000000) | (ctx.r10.u64 & 0xFFFFFFFF81FFFFFF);
	// clrlwi r11,r9,7
	r11.u64 = ctx.r9.u32 & 0x1FFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// b 0x82414610
	goto loc_82414610;
loc_82414604:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwimi r11,r10,25,1,6
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x7E000000) | (r11.u64 & 0xFFFFFFFF81FFFFFF);
loc_82414610:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82414614:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x8240f080
	sub_8240F080(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82414784
	if (cr6.eq) goto loc_82414784;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_82414634:
	// srw r10,r3,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x8241465c
	if (cr6.lt) goto loc_8241465C;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// blt cr6,0x8241475c
	if (cr6.lt) goto loc_8241475C;
	// beq cr6,0x82414748
	if (cr6.eq) goto loc_82414748;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// blt cr6,0x82414730
	if (cr6.lt) goto loc_82414730;
	// bne cr6,0x82414674
	if (!cr6.eq) goto loc_82414674;
loc_8241465C:
	// slw r7,r24,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (r24.u32 << (r11.u8 & 0x3F));
loc_82414660:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82414664:
	// rlwinm r7,r7,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFFFE0000;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwimi r7,r10,0,15,6
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFE01FFFF) | (ctx.r7.u64 & 0x1FE0000);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
loc_82414674:
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplwi cr6,r8,12
	cr6.compare<uint32_t>(ctx.r8.u32, 12, xer);
	// blt cr6,0x82414634
	if (cr6.lt) goto loc_82414634;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwimi r11,r9,28,15,15
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x10000) | (r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x824146c0
	if (cr0.eq) goto loc_824146C0;
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x824147d4
	if (!cr0.eq) goto loc_824147D4;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bne cr6,0x824147e0
	if (!cr6.eq) goto loc_824147E0;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_824146C0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// blt cr6,0x824145a0
	if (cr6.lt) goto loc_824145A0;
loc_824146D4:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,2
	r11.s64 = 2;
loc_824146E4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x824146fc
	if (!cr0.eq) goto loc_824146FC;
	// rlwinm. r7,r7,0,7,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FE0000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// bne 0x82414700
	if (!cr0.eq) goto loc_82414700;
loc_824146FC:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82414700:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x824146e4
	if (!cr0.eq) goto loc_824146E4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824147ec
	if (cr6.eq) goto loc_824147EC;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824147ec
	if (cr6.eq) goto loc_824147EC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3304
	ctx.r4.s64 = r11.s64 + -3304;
	// b 0x82414778
	goto loc_82414778;
loc_82414730:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82414798
	if (cr0.eq) goto loc_82414798;
	// li r7,3
	ctx.r7.s64 = 3;
loc_82414740:
	// slw r7,r7,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// b 0x82414664
	goto loc_82414664;
loc_82414748:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x824147a4
	if (cr0.eq) goto loc_824147A4;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x82414740
	goto loc_82414740;
loc_8241475C:
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x824147b0
	if (!cr6.eq) goto loc_824147B0;
	// slw r7,r23,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (r23.u32 << (r11.u8 & 0x3F));
	// b 0x82414660
	goto loc_82414660;
loc_82414770:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3336
	ctx.r4.s64 = r11.s64 + -3336;
loc_82414778:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82414a74
	goto loc_82414A74;
loc_82414784:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-3376
	ctx.r4.s64 = r11.s64 + -3376;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x824146d4
	goto loc_824146D4;
loc_82414798:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3448
	ctx.r4.s64 = r11.s64 + -3448;
	// b 0x82414778
	goto loc_82414778;
loc_824147A4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3520
	ctx.r4.s64 = r11.s64 + -3520;
	// b 0x82414778
	goto loc_82414778;
loc_824147B0:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-18320
	r11.s64 = r11.s64 + -18320;
	// addi r4,r10,-3552
	ctx.r4.s64 = ctx.r10.s64 + -3552;
	// lbzx r11,r9,r11
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
loc_824147C4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82414a74
	goto loc_82414A74;
loc_824147D4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3624
	ctx.r4.s64 = r11.s64 + -3624;
	// b 0x82414778
	goto loc_82414778;
loc_824147E0:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3704
	ctx.r4.s64 = r11.s64 + -3704;
	// b 0x82414778
	goto loc_82414778;
loc_824147EC:
	// lwz r28,112(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm. r11,r28,0,0,0
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82414808
	if (!cr0.eq) goto loc_82414808;
	// rlwinm. r11,r29,0,0,0
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r24
	r11.u64 = r24.u64;
	// beq 0x8241480c
	if (cr0.eq) goto loc_8241480C;
loc_82414808:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8241480C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwimi r10,r11,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// beq 0x824149b0
	if (cr0.eq) goto loc_824149B0;
	// rlwinm. r31,r28,15,24,31
	r31.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0xFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// rlwinm r11,r28,7,26,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0x3F;
	// bne 0x82414830
	if (!cr0.eq) goto loc_82414830;
	// rlwinm r11,r29,7,26,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 7) & 0x3F;
loc_82414830:
	// rlwinm r10,r29,7,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 7) & 0x3F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82414850
	if (cr6.eq) goto loc_82414850;
	// rlwinm. r10,r29,0,7,14
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1FE0000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82414850
	if (cr0.eq) goto loc_82414850;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3768
	ctx.r4.s64 = r11.s64 + -3768;
	// b 0x82414778
	goto loc_82414778;
loc_82414850:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// rlwimi r10,r11,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// rlwinm r3,r29,15,24,31
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 15) & 0xFF;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82414878:
	// srw r11,r31,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r10,r3,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82414898
	if (!cr6.eq) goto loc_82414898;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8241498c
	if (cr6.eq) goto loc_8241498C;
loc_82414898:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824148b0
	if (cr6.eq) goto loc_824148B0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x824148b0
	if (cr6.lt) goto loc_824148B0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x824149a4
	if (!cr6.lt) goto loc_824149A4;
loc_824148B0:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824148cc
	if (!cr6.eq) goto loc_824148CC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x824148cc
	if (!cr6.eq) goto loc_824148CC;
	// li r9,4
	ctx.r9.s64 = 4;
loc_824148CC:
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x82414918
	if (cr6.lt) goto loc_82414918;
	// beq cr6,0x8241490c
	if (cr6.eq) goto loc_8241490C;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// blt cr6,0x82414904
	if (cr6.lt) goto loc_82414904;
	// beq cr6,0x824148fc
	if (cr6.eq) goto loc_824148FC;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bge cr6,0x82414924
	if (!cr6.lt) goto loc_82414924;
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x82414920
	goto loc_82414920;
loc_824148FC:
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x82414910
	goto loc_82414910;
loc_82414904:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8241491c
	goto loc_8241491C;
loc_8241490C:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82414910:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82414924
	goto loc_82414924;
loc_82414918:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_8241491C:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82414920:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82414924:
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// slw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r8.u8 & 0x3F));
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// or r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r5,r11,r5
	ctx.r5.u64 = r11.u64 | ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,8
	cr6.compare<int32_t>(ctx.r7.s32, 8, xer);
	// blt cr6,0x82414878
	if (cr6.lt) goto loc_82414878;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwimi r6,r5,4,24,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0xF0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF0F);
	// clrlwi. r31,r4,24
	r31.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// rlwimi r11,r6,16,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// beq 0x82414974
	if (cr0.eq) goto loc_82414974;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82414974
	if (cr0.eq) goto loc_82414974;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-3816
	ctx.r4.s64 = r11.s64 + -3816;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82414974:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82414a64
	if (cr6.eq) goto loc_82414A64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x82414a64
	goto loc_82414A64;
loc_8241498C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,-3888
	ctx.r4.s64 = ctx.r10.s64 + -3888;
loc_82414994:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-18320
	r11.s64 = r11.s64 + -18320;
	// lbzx r11,r8,r11
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// b 0x824147c4
	goto loc_824147C4;
loc_824149A4:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,-3948
	ctx.r4.s64 = ctx.r10.s64 + -3948;
	// b 0x82414994
	goto loc_82414994;
loc_824149B0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_824149B4:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r7,r8,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7FFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
loc_824149D4:
	// srw r4,r6,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x824149ec
	if (!cr6.eq) goto loc_824149EC;
	// slw r4,r23,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r4,r11
	r11.u64 = ctx.r4.u64 | r11.u64;
loc_824149EC:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// blt cr6,0x824149d4
	if (cr6.lt) goto loc_824149D4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82414a2c
	if (!cr6.eq) goto loc_82414A2C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,16,12,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF0000;
	// rlwimi r10,r28,16,17,22
	ctx.r10.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0x7E00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF81FF);
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,23,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// rlwinm r9,r9,0,16,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// b 0x82414a54
	goto loc_82414A54;
loc_82414A2C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,20,8,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF00000;
	// rlwinm r9,r8,31,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x4000;
	// rlwimi r10,r7,0,18,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82414A54:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x824149b4
	if (cr6.lt) goto loc_824149B4;
loc_82414A64:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwimi r28,r29,1,14,14
	r28.u64 = (__builtin_rotateleft32(r29.u32, 1) & 0x20000) | (r28.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r11,r28,8,6,7
	r11.u64 = (__builtin_rotateleft32(r28.u32, 8) & 0x3000000) | (r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82414A74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82414A7C"))) PPC_WEAK_FUNC(sub_82414A7C);
PPC_FUNC_IMPL(__imp__sub_82414A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82414A80"))) PPC_WEAK_FUNC(sub_82414A80);
PPC_FUNC_IMPL(__imp__sub_82414A80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,20(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,256
	r11.s64 = 16777216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r28,3072
	r28.s64 = 201326592;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82414ab4
	if (cr6.eq) goto loc_82414AB4;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x82414acc
	if (!cr6.eq) goto loc_82414ACC;
loc_82414AB4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-3136
	ctx.r4.s64 = r11.s64 + -3136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82414ACC:
	// lis r11,2816
	r11.s64 = 184549376;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82414ae0
	if (cr6.eq) goto loc_82414AE0;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x82414af8
	if (!cr6.eq) goto loc_82414AF8;
loc_82414AE0:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-3208
	ctx.r4.s64 = r11.s64 + -3208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82414AF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82414B00"))) PPC_WEAK_FUNC(sub_82414B00);
PPC_FUNC_IMPL(__imp__sub_82414B00) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,92(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 92);
	// lwz r31,0(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r29,4(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r24,8(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// beq 0x82414b64
	if (cr0.eq) goto loc_82414B64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,-1
	r11.s64 = -1;
	// beq cr6,0x82414b4c
	if (cr6.eq) goto loc_82414B4C;
	// li r11,1
	r11.s64 = 1;
loc_82414B4C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// oris r29,r29,32768
	r29.u64 = r29.u64 | 2147483648;
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82414b60
	if (cr6.gt) goto loc_82414B60;
	// li r11,0
	r11.s64 = 0;
loc_82414B60:
	// rlwimi r24,r11,31,0,0
	r24.u64 = (__builtin_rotateleft32(r11.u32, 31) & 0x80000000) | (r24.u64 & 0xFFFFFFFF7FFFFFFF);
loc_82414B64:
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bgt cr6,0x82414c28
	if (cr6.gt) goto loc_82414C28;
	// lwz r30,84(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r11,-2520
	ctx.r5.s64 = r11.s64 + -2520;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82414a80
	sub_82414A80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82414d58
	if (!cr0.eq) goto loc_82414D58;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82414bb0
	if (cr6.eq) goto loc_82414BB0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-2580
	ctx.r4.s64 = r11.s64 + -2580;
loc_82414BA4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82414d58
	goto loc_82414D58;
loc_82414BB0:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// rlwimi r31,r10,12,14,19
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F000) | (r31.u64 & 0xFFFFFFFFFFFC0FFF);
	// beq 0x82414be0
	if (cr0.eq) goto loc_82414BE0;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x82414bdc
	if (cr6.eq) goto loc_82414BDC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-2672
	ctx.r4.s64 = r11.s64 + -2672;
	// b 0x82414ba4
	goto loc_82414BA4;
loc_82414BDC:
	// oris r31,r31,4
	r31.u64 = r31.u64 | 262144;
loc_82414BE0:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r9,r29,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// addi r10,r10,-2708
	ctx.r10.s64 = ctx.r10.s64 + -2708;
	// rlwinm r8,r11,25,27,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1C;
	// rlwinm r7,r11,28,27,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1C;
	// rlwinm r6,r11,31,27,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1C;
	// rlwinm r11,r11,2,27,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1C;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwimi r7,r8,3,26,28
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x38) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC7);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// rlwimi r6,r10,3,0,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xFFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFFF00000007);
	// rlwimi r11,r6,3,0,28
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 3) & 0xFFFFFFF8) | (r11.u64 & 0xFFFFFFFF00000007);
	// or r29,r11,r9
	r29.u64 = r11.u64 | ctx.r9.u64;
	// b 0x82414c2c
	goto loc_82414C2C;
loc_82414C28:
	// ori r29,r29,4095
	r29.u64 = r29.u64 | 4095;
loc_82414C2C:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// beq cr6,0x82414d4c
	if (cr6.eq) goto loc_82414D4C;
	// lwz r30,96(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 96);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82414c50
	if (cr6.eq) goto loc_82414C50;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-2776
	ctx.r4.s64 = r11.s64 + -2776;
	// b 0x82414ba4
	goto loc_82414BA4;
loc_82414C50:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82414c78
	if (cr0.eq) goto loc_82414C78;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x82414c74
	if (cr6.eq) goto loc_82414C74;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-2864
	ctx.r4.s64 = r11.s64 + -2864;
	// b 0x82414ba4
	goto loc_82414BA4;
loc_82414C74:
	// ori r31,r31,2048
	r31.u64 = r31.u64 | 2048;
loc_82414C78:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-2184
	ctx.r5.s64 = r11.s64 + -2184;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82414a80
	sub_82414A80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82414d58
	if (!cr0.eq) goto loc_82414D58;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// rlwimi r31,r11,5,21,26
	r31.u64 = (__builtin_rotateleft32(r11.u32, 5) & 0x7E0) | (r31.u64 & 0xFFFFFFFFFFFFF81F);
	// mr r11,r31
	r11.u64 = r31.u64;
	// clrlwi. r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82414d44
	if (cr0.eq) goto loc_82414D44;
	// rlwimi r11,r10,26,0,5
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xFC000000) | (r11.u64 & 0xFFFFFFFF03FFFFFF);
	// cmplwi cr6,r9,18
	cr6.compare<uint32_t>(ctx.r9.u32, 18, xer);
	// mr r31,r11
	r31.u64 = r11.u64;
	// beq cr6,0x82414d1c
	if (cr6.eq) goto loc_82414D1C;
	// cmplwi cr6,r9,24
	cr6.compare<uint32_t>(ctx.r9.u32, 24, xer);
	// beq cr6,0x82414ce0
	if (cr6.eq) goto loc_82414CE0;
	// rlwinm r9,r10,0,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// rlwinm r11,r31,8,24,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xC0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82414d4c
	if (cr6.eq) goto loc_82414D4C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-2936
	ctx.r4.s64 = r11.s64 + -2936;
	// b 0x82414d10
	goto loc_82414D10;
loc_82414CE0:
	// rlwinm r11,r31,6,30,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0x3;
	// rlwinm r9,r31,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0x3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82414d08
	if (!cr6.eq) goto loc_82414D08;
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82414d08
	if (!cr6.eq) goto loc_82414D08;
	// rlwinm r10,r10,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82414d4c
	if (cr6.eq) goto loc_82414D4C;
loc_82414D08:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3000
	ctx.r4.s64 = r11.s64 + -3000;
loc_82414D10:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82414d4c
	goto loc_82414D4C;
loc_82414D1C:
	// rlwinm r11,r31,4,30,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0x3;
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82414d38
	if (!cr6.eq) goto loc_82414D38;
	// rlwinm r10,r10,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82414d4c
	if (cr6.eq) goto loc_82414D4C;
loc_82414D38:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-3068
	ctx.r4.s64 = r11.s64 + -3068;
	// b 0x82414d10
	goto loc_82414D10;
loc_82414D44:
	// rlwimi r11,r10,30,0,1
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xC0000000) | (r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82414D4C:
	// stw r31,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r31.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r29.u32);
	// stw r24,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r24.u32);
loc_82414D58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82414D60"))) PPC_WEAK_FUNC(sub_82414D60);
PPC_FUNC_IMPL(__imp__sub_82414D60) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82414e38
	if (!cr0.eq) goto loc_82414E38;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addi r26,r29,164
	r26.s64 = r29.s64 + 164;
loc_82414D8C:
	// lbzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + r11.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82414da0
	if (cr0.eq) goto loc_82414DA0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82414DA0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82414d8c
	if (cr6.lt) goto loc_82414D8C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82414e38
	if (cr6.eq) goto loc_82414E38;
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82414e38
	if (cr6.eq) goto loc_82414E38;
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r10,-2456
	ctx.r4.s64 = ctx.r10.s64 + -2456;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r11,r11,111
	r11.s64 = r11.s64 + 111;
	// extsb r30,r11
	r30.s64 = r11.s8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82414e38
	if (cr6.eq) goto loc_82414E38;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,-2508
	r27.s64 = r11.s64 + -2508;
loc_82414E0C:
	// lbzx r11,r26,r31
	r11.u64 = PPC_LOAD_U8(r26.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82414e2c
	if (!cr0.eq) goto loc_82414E2C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82414E2C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x82414e0c
	if (cr6.lt) goto loc_82414E0C;
loc_82414E38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82414E40"))) PPC_WEAK_FUNC(sub_82414E40);
PPC_FUNC_IMPL(__imp__sub_82414E40) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,1
	r31.s64 = 1;
	// li r30,0
	r30.s64 = 0;
loc_82414E58:
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82414e78
	if (cr6.eq) goto loc_82414E78;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8240e788
	sub_8240E788(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82414f3c
	if (cr0.lt) goto loc_82414F3C;
loc_82414E78:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r31,124(r29)
	PPC_STORE_U32(r29.u32 + 124, r31.u32);
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// beq cr6,0x82414f08
	if (cr6.eq) goto loc_82414F08;
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82414ee0
	if (cr6.lt) goto loc_82414EE0;
	// beq cr6,0x82414eb4
	if (cr6.eq) goto loc_82414EB4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82414f08
	if (!cr6.lt) goto loc_82414F08;
loc_82414EA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stb r30,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r30.u8);
	// bl 0x823e1b08
	sub_823E1B08(ctx, base);
	// b 0x82414f08
	goto loc_82414F08;
loc_82414EB4:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82414ea0
	if (!cr6.eq) goto loc_82414EA0;
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82414ea0
	if (!cr6.eq) goto loc_82414EA0;
	// lbz r11,24(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 24);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// bne cr6,0x82414ea0
	if (!cr6.eq) goto loc_82414EA0;
	// li r11,2
	r11.s64 = 2;
	// stb r11,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r11.u8);
	// b 0x82414f08
	goto loc_82414F08;
loc_82414EE0:
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bne cr6,0x82414f08
	if (!cr6.eq) goto loc_82414F08;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x8240e668
	sub_8240E668(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82414f08
	if (cr0.eq) goto loc_82414F08;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x823e1b08
	sub_823E1B08(ctx, base);
	// stb r31,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r31.u8);
loc_82414F08:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bgt cr6,0x824150c0
	if (cr6.gt) goto loc_824150C0;
	// lis r12,-32248
	r12.s64 = -2113404928;
	// addi r12,r12,-8992
	r12.s64 = r12.s64 + -8992;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32191
	r12.s64 = -2109669376;
	// addi r12,r12,20056
	r12.s64 = r12.s64 + 20056;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_824150C0;
	case 1:
		goto loc_82414F4C;
	case 2:
		goto loc_82414F60;
	case 3:
		goto loc_82414F60;
	case 4:
		goto loc_82414F60;
	case 5:
		goto loc_82414F68;
	case 6:
		goto loc_82414F68;
	case 7:
		goto loc_82414F68;
	case 8:
		goto loc_82414F68;
	case 9:
		goto loc_82414F70;
	case 10:
		goto loc_824150C0;
	case 11:
		goto loc_824150C0;
	case 12:
		goto loc_82414E58;
	case 13:
		goto loc_82414F44;
	default:
		__builtin_unreachable();
	}
loc_82414F3C:
	// stw r31,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r31.u32);
	// stw r31,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r31.u32);
loc_82414F44:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824150c4
	goto loc_824150C4;
loc_82414F4C:
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824150c0
	if (!cr6.eq) goto loc_824150C0;
	// lbz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U8(r29.u32 + 24);
	// b 0x824150c4
	goto loc_824150C4;
loc_82414F60:
	// li r3,278
	ctx.r3.s64 = 278;
	// b 0x824150c4
	goto loc_824150C4;
loc_82414F68:
	// li r3,279
	ctx.r3.s64 = 279;
	// b 0x824150c4
	goto loc_824150C4;
loc_82414F70:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r9,r10,28344
	ctx.r9.s64 = ctx.r10.s64 + 28344;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82414F80:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82414fa4
	if (cr0.eq) goto loc_82414FA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82414f80
	if (cr6.eq) goto loc_82414F80;
loc_82414FA4:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82414fb4
	if (!cr0.eq) goto loc_82414FB4;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x824150c4
	goto loc_824150C4;
loc_82414FB4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r10,-24604
	ctx.r9.s64 = ctx.r10.s64 + -24604;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82414FC0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82414fe4
	if (cr0.eq) goto loc_82414FE4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82414fc0
	if (cr6.eq) goto loc_82414FC0;
loc_82414FE4:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82414ff4
	if (!cr0.eq) goto loc_82414FF4;
	// li r3,281
	ctx.r3.s64 = 281;
	// b 0x824150c4
	goto loc_824150C4;
loc_82414FF4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r10,-24612
	ctx.r9.s64 = ctx.r10.s64 + -24612;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82415000:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82415024
	if (cr0.eq) goto loc_82415024;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82415000
	if (cr6.eq) goto loc_82415000;
loc_82415024:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82415034
	if (!cr0.eq) goto loc_82415034;
	// li r3,282
	ctx.r3.s64 = 282;
	// b 0x824150c4
	goto loc_824150C4;
loc_82415034:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r10,-2348
	ctx.r9.s64 = ctx.r10.s64 + -2348;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82415040:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82415064
	if (cr0.eq) goto loc_82415064;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82415040
	if (cr6.eq) goto loc_82415040;
loc_82415064:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82415074
	if (!cr0.eq) goto loc_82415074;
	// li r3,283
	ctx.r3.s64 = 283;
	// b 0x824150c4
	goto loc_824150C4;
loc_82415074:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r10,r10,-6072
	ctx.r10.s64 = ctx.r10.s64 + -6072;
loc_8241507C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x824150a0
	if (cr0.eq) goto loc_824150A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8241507c
	if (cr6.eq) goto loc_8241507C;
loc_824150A0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne 0x824150b8
	if (!cr0.eq) goto loc_824150B8;
	// bl 0x82412e70
	sub_82412E70(ctx, base);
	// b 0x824150c4
	goto loc_824150C4;
loc_824150B8:
	// bl 0x82410bd8
	sub_82410BD8(ctx, base);
	// b 0x824150c4
	goto loc_824150C4;
loc_824150C0:
	// li r3,280
	ctx.r3.s64 = 280;
loc_824150C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824150CC"))) PPC_WEAK_FUNC(sub_824150CC);
PPC_FUNC_IMPL(__imp__sub_824150CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824150D0"))) PPC_WEAK_FUNC(sub_824150D0);
PPC_FUNC_IMPL(__imp__sub_824150D0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// ori r27,r10,16389
	r27.u64 = ctx.r10.u64 | 16389;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8241510c
	if (cr6.eq) goto loc_8241510C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-2000
	ctx.r4.s64 = r11.s64 + -2000;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r28,r27
	r28.u64 = r27.u64;
loc_8241510C:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82415574
	if (cr0.eq) goto loc_82415574;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r19,r11,-2036
	r19.s64 = r11.s64 + -2036;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r23,r11,-2092
	r23.s64 = r11.s64 + -2092;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r15,r11,-2132
	r15.s64 = r11.s64 + -2132;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r22,r11,-2164
	r22.s64 = r11.s64 + -2164;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r18,r11,-2204
	r18.s64 = r11.s64 + -2204;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r14,r11,-2264
	r14.s64 = r11.s64 + -2264;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r17,r11,-2296
	r17.s64 = r11.s64 + -2296;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r21,r11,-2336
	r21.s64 = r11.s64 + -2336;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-4368
	r11.s64 = r11.s64 + -4368;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,-4376
	r11.s64 = r11.s64 + -4376;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r16,r11,-10392
	r16.s64 = r11.s64 + -10392;
	// b 0x82415180
	goto loc_82415180;
loc_8241517C:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82415180:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r26,r10,16
	r26.s64 = ctx.r10.s64 + 16;
	// lwz r24,24(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bne 0x824151a8
	if (!cr0.eq) goto loc_824151A8;
	// li r26,0
	r26.s64 = 0;
loc_824151A8:
	// li r25,0
	r25.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// addi r29,r16,16
	r29.s64 = r16.s64 + 16;
loc_824151B4:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8241554c
	if (!cr0.eq) goto loc_8241554C;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_824151C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x824151ec
	if (cr0.eq) goto loc_824151EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x824151c8
	if (cr6.eq) goto loc_824151C8;
loc_824151EC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8241553c
	if (!cr0.eq) goto loc_8241553C;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r25,1
	r25.s64 = 1;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8241520c
	if (cr0.eq) goto loc_8241520C;
	// lwz r11,-12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// b 0x82415210
	goto loc_82415210;
loc_8241520C:
	// lwz r11,-8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -8);
loc_82415210:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82415238
	if (!cr6.eq) goto loc_82415238;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82415228
	if (!cr6.eq) goto loc_82415228;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82415228:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82415238:
	// lbz r11,-4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// slw r30,r9,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r11,r10,r30
	r11.u64 = ctx.r10.u64 & r30.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82415264
	if (cr0.eq) goto loc_82415264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82415264:
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// or r11,r11,r30
	r11.u64 = r11.u64 | r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// bne cr6,0x8241528c
	if (!cr6.eq) goto loc_8241528C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r28,r27
	r28.u64 = r27.u64;
loc_8241528C:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// blt cr6,0x8241553c
	if (cr6.lt) goto loc_8241553C;
	// lbz r11,-3(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82415314
	if (cr6.lt) goto loc_82415314;
	// beq cr6,0x824152e8
	if (cr6.eq) goto loc_824152E8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x824153ac
	if (!cr6.lt) goto loc_824153AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8240f520
	sub_8240F520(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x824153b8
	if (!cr0.lt) goto loc_824153B8;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_824152D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x8241553c
	goto loc_8241553C;
loc_824152E8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8240f608
	sub_8240F608(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x824153b8
	if (!cr0.lt) goto loc_824153B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// lwz r30,112(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x824153ac
	goto loc_824153AC;
loc_82415314:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82415398
	if (cr6.eq) goto loc_82415398;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82415398
	if (!cr6.eq) goto loc_82415398;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82415388
	if (cr0.eq) goto loc_82415388;
loc_8241533C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82415344:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82415368
	if (cr0.eq) goto loc_82415368;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82415344
	if (cr6.eq) goto loc_82415344;
loc_82415368:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82415380
	if (cr0.eq) goto loc_82415380;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x8241533c
	if (!cr0.eq) goto loc_8241533C;
loc_82415380:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82415390
	if (!cr6.eq) goto loc_82415390;
loc_82415388:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x824152d4
	goto loc_824152D4;
loc_82415390:
	// lbz r30,4(r5)
	r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// b 0x824153ac
	goto loc_824153AC;
loc_82415398:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r28,r27
	r28.u64 = r27.u64;
loc_824153AC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x8241553c
	if (cr6.lt) goto loc_8241553C;
	// b 0x824153bc
	goto loc_824153BC;
loc_824153B8:
	// lwz r30,112(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_824153BC:
	// lbz r11,-4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -4);
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(r11.u32, 21, xer);
	// bgt cr6,0x8241553c
	if (cr6.gt) goto loc_8241553C;
	// lis r12,-32248
	r12.s64 = -2113404928;
	// addi r12,r12,-8976
	r12.s64 = r12.s64 + -8976;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32191
	r12.s64 = -2109669376;
	// addi r12,r12,21488
	r12.s64 = r12.s64 + 21488;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_824153F0;
	case 1:
		goto loc_82415400;
	case 2:
		goto loc_82415410;
	case 3:
		goto loc_8241541C;
	case 4:
		goto loc_82415428;
	case 5:
		goto loc_82415434;
	case 6:
		goto loc_82415440;
	case 7:
		goto loc_8241544C;
	case 8:
		goto loc_82415458;
	case 9:
		goto loc_82415464;
	case 10:
		goto loc_82415470;
	case 11:
		goto loc_8241547C;
	case 12:
		goto loc_8241548C;
	case 13:
		goto loc_82415498;
	case 14:
		goto loc_824154A0;
	case 15:
		goto loc_824154AC;
	case 16:
		goto loc_824154B8;
	case 17:
		goto loc_824154C4;
	case 18:
		goto loc_824154D8;
	case 19:
		goto loc_82415500;
	case 20:
		goto loc_82415514;
	case 21:
		goto loc_824154EC;
	default:
		__builtin_unreachable();
	}
loc_824153F0:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r30,r11,0,0,25
	r30.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFC0) | (r30.u64 & 0xFFFFFFFF0000003F);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// b 0x8241553c
	goto loc_8241553C;
loc_82415400:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,8,18,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 8) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
loc_82415408:
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
	// b 0x8241553c
	goto loc_8241553C;
loc_82415410:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,16,15,15
	r11.u64 = (__builtin_rotateleft32(r30.u32, 16) & 0x10000) | (r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// b 0x82415408
	goto loc_82415408;
loc_8241541C:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,17,14,14
	r11.u64 = (__builtin_rotateleft32(r30.u32, 17) & 0x20000) | (r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// b 0x82415408
	goto loc_82415408;
loc_82415428:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,18,13,13
	r11.u64 = (__builtin_rotateleft32(r30.u32, 18) & 0x40000) | (r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82415408
	goto loc_82415408;
loc_82415434:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,19,12,12
	r11.u64 = (__builtin_rotateleft32(r30.u32, 19) & 0x80000) | (r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x82415408
	goto loc_82415408;
loc_82415440:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,20,8,11
	r11.u64 = (__builtin_rotateleft32(r30.u32, 20) & 0xF00000) | (r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x82415408
	goto loc_82415408;
loc_8241544C:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,24,5,7
	r11.u64 = (__builtin_rotateleft32(r30.u32, 24) & 0x7000000) | (r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82415408
	goto loc_82415408;
loc_82415458:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,27,4,4
	r11.u64 = (__builtin_rotateleft32(r30.u32, 27) & 0x8000000) | (r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// b 0x82415408
	goto loc_82415408;
loc_82415464:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,28,1,3
	r11.u64 = (__builtin_rotateleft32(r30.u32, 28) & 0x70000000) | (r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x82415408
	goto loc_82415408;
loc_82415470:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwimi r11,r30,31,0,0
	r11.u64 = (__builtin_rotateleft32(r30.u32, 31) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x82415408
	goto loc_82415408;
loc_8241547C:
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// rlwimi r11,r30,0,31,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0x1) | (r11.u64 & 0xFFFFFFFFFFFFFFFE);
loc_82415484:
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// b 0x8241553c
	goto loc_8241553C;
loc_8241548C:
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// rlwimi r11,r30,1,30,30
	r11.u64 = (__builtin_rotateleft32(r30.u32, 1) & 0x2) | (r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82415484
	goto loc_82415484;
loc_82415498:
	// stb r30,294(r31)
	PPC_STORE_U8(r31.u32 + 294, r30.u8);
	// b 0x8241553c
	goto loc_8241553C;
loc_824154A0:
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// rlwimi r11,r30,16,15,15
	r11.u64 = (__builtin_rotateleft32(r30.u32, 16) & 0x10000) | (r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// b 0x82415484
	goto loc_82415484;
loc_824154AC:
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// rlwimi r11,r30,17,14,14
	r11.u64 = (__builtin_rotateleft32(r30.u32, 17) & 0x20000) | (r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// b 0x82415484
	goto loc_82415484;
loc_824154B8:
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// rlwimi r11,r30,18,13,13
	r11.u64 = (__builtin_rotateleft32(r30.u32, 18) & 0x40000) | (r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82415484
	goto loc_82415484;
loc_824154C4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8241553c
	if (cr6.eq) goto loc_8241553C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// b 0x82415538
	goto loc_82415538;
loc_824154D8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8241553c
	if (!cr6.eq) goto loc_8241553C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x82415538
	goto loc_82415538;
loc_824154EC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8241553c
	if (!cr6.eq) goto loc_8241553C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// b 0x82415538
	goto loc_82415538;
loc_82415500:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8241553c
	if (!cr6.eq) goto loc_8241553C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// b 0x82415538
	goto loc_82415538;
loc_82415514:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824143b0
	sub_824143B0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x8241553c
	if (cr0.lt) goto loc_8241553C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8241553c
	if (cr6.eq) goto loc_8241553C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_82415538:
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_8241553C:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// cmplwi cr6,r20,14
	cr6.compare<uint32_t>(r20.u32, 14, xer);
	// blt cr6,0x824151b4
	if (cr6.lt) goto loc_824151B4;
loc_8241554C:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82415568
	if (!cr0.eq) goto loc_82415568;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82415568:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8241517c
	if (!cr6.eq) goto loc_8241517C;
loc_82415574:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82415580"))) PPC_WEAK_FUNC(sub_82415580);
PPC_FUNC_IMPL(__imp__sub_82415580) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,1
	r30.s64 = 1;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824155b8
	if (!cr6.eq) goto loc_824155B8;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// bl 0x82414d60
	sub_82414D60(ctx, base);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// bl 0x823ceee8
	sub_823CEEE8(ctx, base);
loc_824155B8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82415628
	if (cr6.eq) goto loc_82415628;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82415600
	if (cr0.eq) goto loc_82415600;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82415628
	if (!cr6.eq) goto loc_82415628;
	// li r11,3
	r11.s64 = 3;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// rlwimi r4,r30,0,29,23
	ctx.r4.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0xFFFFFFFFFFFFFF07) | (ctx.r4.u64 & 0xF8);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x823c9108
	sub_823C9108(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82415628
	if (cr0.eq) goto loc_82415628;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82415624
	goto loc_82415624;
loc_82415600:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// rlwinm r4,r11,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF8;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// bl 0x823c9108
	sub_823C9108(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82415628
	if (cr0.eq) goto loc_82415628;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82415624:
	// bl 0x82597e80
	sub_82597E80(ctx, base);
loc_82415628:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82415634"))) PPC_WEAK_FUNC(sub_82415634);
PPC_FUNC_IMPL(__imp__sub_82415634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82415638"))) PPC_WEAK_FUNC(sub_82415638);
PPC_FUNC_IMPL(__imp__sub_82415638) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r27,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r27.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,245
	cr6.compare<uint32_t>(r11.u32, 245, xer);
	// beq cr6,0x82415c6c
	if (cr6.eq) goto loc_82415C6C;
	// cmplwi cr6,r11,246
	cr6.compare<uint32_t>(r11.u32, 246, xer);
	// beq cr6,0x82415ad8
	if (cr6.eq) goto loc_82415AD8;
	// cmplwi cr6,r11,247
	cr6.compare<uint32_t>(r11.u32, 247, xer);
	// beq cr6,0x82415a10
	if (cr6.eq) goto loc_82415A10;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(r11.u32, 248, xer);
	// bne cr6,0x82415d90
	if (!cr6.eq) goto loc_82415D90;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82415690
	if (cr6.eq) goto loc_82415690;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-540
	ctx.r4.s64 = r11.s64 + -540;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82415690:
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r28,84(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// rlwinm r25,r11,10,31,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// clrlwi r23,r10,28
	r23.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r29,r10,16,28,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r22,r11,24
	r22.u64 = r11.u32 & 0xFF;
	// beq 0x824156c4
	if (cr0.eq) goto loc_824156C4;
	// li r25,2
	r25.s64 = 2;
loc_824156C4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r26,32(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r24,r11,-560
	r24.s64 = r11.s64 + -560;
loc_824156D4:
	// srw r11,r26,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r26.u32 >> (r30.u8 & 0x3F));
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8241573c
	if (cr6.eq) goto loc_8241573C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82415734
	if (cr6.eq) goto loc_82415734;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8241572c
	if (cr6.eq) goto loc_8241572C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x82415724
	if (cr6.eq) goto loc_82415724;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82415794
	if (cr6.eq) goto loc_82415794;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82415788
	if (cr6.eq) goto loc_82415788;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82415740
	if (!cr6.eq) goto loc_82415740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82415740
	goto loc_82415740;
loc_82415724:
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// b 0x82415740
	goto loc_82415740;
loc_8241572C:
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// b 0x82415740
	goto loc_82415740;
loc_82415734:
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// b 0x82415740
	goto loc_82415740;
loc_8241573C:
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
loc_82415740:
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// cmpwi cr6,r30,12
	cr6.compare<int32_t>(r30.s32, 12, xer);
	// blt cr6,0x824156d4
	if (cr6.lt) goto loc_824156D4;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824158bc
	if (cr0.eq) goto loc_824158BC;
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824158bc
	if (cr0.eq) goto loc_824158BC;
	// cmplwi cr6,r23,9
	cr6.compare<uint32_t>(r23.u32, 9, xer);
	// beq cr6,0x824157b0
	if (cr6.eq) goto loc_824157B0;
	// cmplwi cr6,r23,13
	cr6.compare<uint32_t>(r23.u32, 13, xer);
	// ble cr6,0x8241577c
	if (!cr6.gt) goto loc_8241577C;
	// cmplwi cr6,r23,15
	cr6.compare<uint32_t>(r23.u32, 15, xer);
	// ble cr6,0x824157b0
	if (!cr6.gt) goto loc_824157B0;
loc_8241577C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-664
	ctx.r4.s64 = r11.s64 + -664;
	// b 0x8241579c
	goto loc_8241579C;
loc_82415788:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-684
	ctx.r4.s64 = r11.s64 + -684;
	// b 0x8241579c
	goto loc_8241579C;
loc_82415794:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-704
	ctx.r4.s64 = r11.s64 + -704;
loc_8241579C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_824157A4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82415d94
	goto loc_82415D94;
loc_824157B0:
	// rlwinm r11,r23,4,0,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r10,45
	r11.s64 = ctx.r10.s64 + 45;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
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
	// beq 0x82415834
	if (cr0.eq) goto loc_82415834;
	// cmplwi cr6,r23,9
	cr6.compare<uint32_t>(r23.u32, 9, xer);
	// bne cr6,0x82415800
	if (!cr6.eq) goto loc_82415800;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-7376
	ctx.r5.s64 = r11.s64 + -7376;
	// b 0x8241581c
	goto loc_8241581C;
loc_82415800:
	// cmplwi cr6,r23,14
	cr6.compare<uint32_t>(r23.u32, 14, xer);
	// bne cr6,0x82415814
	if (!cr6.eq) goto loc_82415814;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-7368
	ctx.r5.s64 = r11.s64 + -7368;
	// b 0x8241581c
	goto loc_8241581C;
loc_82415814:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-7356
	ctx.r5.s64 = r11.s64 + -7356;
loc_8241581C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,-744
	ctx.r4.s64 = r11.s64 + -744;
loc_82415828:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8241582C:
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x824157a4
	goto loc_824157A4;
loc_82415834:
	// addi r11,r31,180
	r11.s64 = r31.s64 + 180;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r30,24(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// blt cr6,0x82415860
	if (cr6.lt) goto loc_82415860;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-816
	ctx.r4.s64 = r11.s64 + -816;
	// b 0x8241579c
	goto loc_8241579C;
loc_82415860:
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 212);
	// and. r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & r27.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82415894
	if (cr0.eq) goto loc_82415894;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,-888
	ctx.r4.s64 = ctx.r10.s64 + -888;
loc_8241587C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-10024
	r11.s64 = r11.s64 + -10024;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// b 0x8241582c
	goto loc_8241582C;
loc_82415894:
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,212(r11)
	PPC_STORE_U8(r11.u32 + 212, ctx.r10.u8);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// rlwimi r29,r23,4,24,27
	r29.u64 = (__builtin_rotateleft32(r23.u32, 4) & 0xF0) | (r29.u64 & 0xFFFFFFFFFFFFFF0F);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r6,r29,24
	ctx.r6.u64 = r29.u32 & 0xFF;
	// bl 0x823ce870
	sub_823CE870(ctx, base);
	// b 0x82415d90
	goto loc_82415D90;
loc_824158BC:
	// mr r11,r23
	r11.u64 = r23.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r25,4,26,27
	r11.u64 = (__builtin_rotateleft32(r25.u32, 4) & 0x30) | (r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// rlwimi r29,r11,4,0,27
	r29.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xFFFFFFF0) | (r29.u64 & 0xFFFFFFFF0000000F);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r10,33
	r11.s64 = ctx.r10.s64 + 33;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
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
	// beq 0x82415910
	if (cr0.eq) goto loc_82415910;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-952
	ctx.r4.s64 = r11.s64 + -952;
	// b 0x8241579c
	goto loc_8241579C;
loc_82415910:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,132
	r11.s64 = r31.s64 + 132;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r30,24(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// cmplwi cr6,r30,15
	cr6.compare<uint32_t>(r30.u32, 15, xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,111
	ctx.r10.s64 = ctx.r10.s64 + 111;
	// ble cr6,0x82415958
	if (!cr6.gt) goto loc_82415958;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-996
	ctx.r4.s64 = r11.s64 + -996;
	// b 0x82415828
	goto loc_82415828;
loc_82415958:
	// cmplwi cr6,r23,9
	cr6.compare<uint32_t>(r23.u32, 9, xer);
	// bne cr6,0x8241596c
	if (!cr6.eq) goto loc_8241596C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-1072
	ctx.r4.s64 = r11.s64 + -1072;
	// b 0x8241579c
	goto loc_8241579C;
loc_8241596C:
	// cmplwi cr6,r23,14
	cr6.compare<uint32_t>(r23.u32, 14, xer);
	// bne cr6,0x82415980
	if (!cr6.eq) goto loc_82415980;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-1160
	ctx.r4.s64 = r11.s64 + -1160;
	// b 0x8241579c
	goto loc_8241579C;
loc_82415980:
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x824159cc
	if (cr6.eq) goto loc_824159CC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824159b4
	if (cr6.eq) goto loc_824159B4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-4376
	ctx.r5.s64 = r11.s64 + -4376;
	// b 0x824159bc
	goto loc_824159BC;
loc_824159B4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-4368
	ctx.r5.s64 = r11.s64 + -4368;
loc_824159BC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// addi r4,r11,-1216
	ctx.r4.s64 = r11.s64 + -1216;
	// b 0x82415828
	goto loc_82415828;
loc_824159CC:
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 164);
	// and. r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & r27.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x824159ec
	if (cr0.eq) goto loc_824159EC;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,-1280
	ctx.r4.s64 = ctx.r10.s64 + -1280;
	// b 0x8241587c
	goto loc_8241587C;
loc_824159EC:
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,164(r11)
	PPC_STORE_U8(r11.u32 + 164, ctx.r10.u8);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823ce858
	sub_823CE858(ctx, base);
	// b 0x82415d90
	goto loc_82415D90;
loc_82415A10:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82415a2c
	if (cr6.eq) goto loc_82415A2C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1320
	ctx.r4.s64 = r11.s64 + -1320;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82415A2C:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bne cr6,0x82415acc
	if (!cr6.eq) goto loc_82415ACC;
	// lwz r29,24(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r9,r29,27
	ctx.r9.u64 = r29.u32 & 0x1F;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r30,r10,1
	r30.u64 = ctx.r10.u64 ^ 1;
	// rlwinm r10,r29,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r10,63
	r11.s64 = ctx.r10.s64 + 63;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
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
	// beq 0x82415aa0
	if (cr0.eq) goto loc_82415AA0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-1368
	ctx.r4.s64 = r11.s64 + -1368;
loc_82415A98:
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82415d90
	goto loc_82415D90;
loc_82415AA0:
	// addi r11,r31,252
	r11.s64 = r31.s64 + 252;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823cb600
	sub_823CB600(ctx, base);
	// b 0x82415d90
	goto loc_82415D90;
loc_82415ACC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-1404
	ctx.r4.s64 = r11.s64 + -1404;
	// b 0x82415d88
	goto loc_82415D88;
loc_82415AD8:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82415af4
	if (cr6.eq) goto loc_82415AF4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1444
	ctx.r4.s64 = r11.s64 + -1444;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82415AF4:
	// lwz r29,84(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82415c60
	if (!cr6.eq) goto loc_82415C60;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82415B14:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x82415b2c
	if (cr6.eq) goto loc_82415B2C;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// bne cr6,0x82415b34
	if (!cr6.eq) goto loc_82415B34;
loc_82415B2C:
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82415B34:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82415b14
	if (!cr0.eq) goto loc_82415B14;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82415b58
	if (cr6.lt) goto loc_82415B58;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x82415b6c
	if (!cr6.gt) goto loc_82415B6C;
loc_82415B58:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1512
	ctx.r4.s64 = r11.s64 + -1512;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82415B6C:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82415b80
	if (cr6.lt) goto loc_82415B80;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// ble cr6,0x82415b94
	if (!cr6.gt) goto loc_82415B94;
loc_82415B80:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1584
	ctx.r4.s64 = r11.s64 + -1584;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82415B94:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,-128
	cr6.compare<int32_t>(r11.s32, -128, xer);
	// blt cr6,0x82415ba8
	if (cr6.lt) goto loc_82415BA8;
	// cmpwi cr6,r11,127
	cr6.compare<int32_t>(r11.s32, 127, xer);
	// ble cr6,0x82415bbc
	if (!cr6.gt) goto loc_82415BBC;
loc_82415BA8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1656
	ctx.r4.s64 = r11.s64 + -1656;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82415BBC:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82415bdc
	if (cr6.eq) goto loc_82415BDC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1712
	ctx.r4.s64 = r11.s64 + -1712;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82415BDC:
	// lwz r30,24(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r30,27
	r11.u64 = r30.u32 & 0x1F;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// addi r11,r10,62
	r11.s64 = ctx.r10.s64 + 62;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
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
	// beq 0x82415c28
	if (cr0.eq) goto loc_82415C28;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-1760
	ctx.r4.s64 = r11.s64 + -1760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82415a98
	goto loc_82415A98;
loc_82415C28:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82415d90
	if (!cr6.eq) goto loc_82415D90;
	// addi r11,r31,248
	r11.s64 = r31.s64 + 248;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823cd0b0
	sub_823CD0B0(ctx, base);
	// b 0x82415d90
	goto loc_82415D90;
loc_82415C60:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-1800
	ctx.r4.s64 = r11.s64 + -1800;
	// b 0x82415d88
	goto loc_82415D88;
loc_82415C6C:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82415c88
	if (cr6.eq) goto loc_82415C88;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1840
	ctx.r4.s64 = r11.s64 + -1840;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82415C88:
	// lwz r26,84(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82415d80
	if (!cr6.eq) goto loc_82415D80;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// li r28,4
	r28.s64 = 4;
	// addi r27,r11,-1876
	r27.s64 = r11.s64 + -1876;
loc_82415CAC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82415d38
	if (cr6.eq) goto loc_82415D38;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82415d38
	if (cr6.eq) goto loc_82415D38;
	// ble cr6,0x82415d3c
	if (!cr6.gt) goto loc_82415D3C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bgt cr6,0x82415d3c
	if (cr6.gt) goto loc_82415D3C;
loc_82415CD0:
	// lfd f0,24(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_82415CDC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82415cac
	if (!cr0.eq) goto loc_82415CAC;
	// lwz r30,24(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r10,54
	r11.s64 = ctx.r10.s64 + 54;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
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
	// beq 0x82415d54
	if (cr0.eq) goto loc_82415D54;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-1924
	ctx.r4.s64 = r11.s64 + -1924;
	// b 0x82415a98
	goto loc_82415A98;
loc_82415D38:
	// li r11,2
	r11.s64 = 2;
loc_82415D3C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82415cd0
	if (cr6.eq) goto loc_82415CD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82415cdc
	goto loc_82415CDC;
loc_82415D54:
	// addi r11,r31,216
	r11.s64 = r31.s64 + 216;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823cb618
	sub_823CB618(ctx, base);
	// b 0x82415d90
	goto loc_82415D90;
loc_82415D80:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-1960
	ctx.r4.s64 = r11.s64 + -1960;
loc_82415D88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82415D90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82415D94:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82415D9C"))) PPC_WEAK_FUNC(sub_82415D9C);
PPC_FUNC_IMPL(__imp__sub_82415D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82415DA0"))) PPC_WEAK_FUNC(sub_82415DA0);
PPC_FUNC_IMPL(__imp__sub_82415DA0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r22,300(r21)
	PPC_STORE_U32(r21.u32 + 300, r22.u32);
	// lwz r10,92(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 92);
	// std r22,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r22.u64);
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82415e0c
	if (cr0.eq) goto loc_82415E0C;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,-1
	r11.s64 = -1;
	// beq cr6,0x82415dec
	if (cr6.eq) goto loc_82415DEC;
	// li r11,1
	r11.s64 = 1;
loc_82415DEC:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// bgt cr6,0x82415e04
	if (cr6.gt) goto loc_82415E04;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82415E04:
	// rlwimi r10,r11,27,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82415E0C:
	// lwz r11,48(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// addi r10,r11,-3
	ctx.r10.s64 = r11.s64 + -3;
	// addi r9,r11,-2
	ctx.r9.s64 = r11.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r23,r10,24
	r23.u64 = ctx.r10.u32 & 0xFF;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// clrlwi r24,r9,24
	r24.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// addi r27,r10,-10112
	r27.s64 = ctx.r10.s64 + -10112;
	// beq cr6,0x82415e48
	if (cr6.eq) goto loc_82415E48;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82415ef0
	if (!cr6.eq) goto loc_82415EF0;
loc_82415E48:
	// lwz r11,52(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// cmplwi cr6,r11,240
	cr6.compare<uint32_t>(r11.u32, 240, xer);
	// beq cr6,0x82415e8c
	if (cr6.eq) goto loc_82415E8C;
	// cmplwi cr6,r11,242
	cr6.compare<uint32_t>(r11.u32, 242, xer);
	// beq cr6,0x82415e78
	if (cr6.eq) goto loc_82415E78;
	// cmplwi cr6,r11,244
	cr6.compare<uint32_t>(r11.u32, 244, xer);
	// bne cr6,0x82415e90
	if (!cr6.eq) goto loc_82415E90;
	// lwz r11,96(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 96);
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r11,100(r26)
	PPC_STORE_U32(r26.u32 + 100, r11.u32);
	// stw r10,52(r26)
	PPC_STORE_U32(r26.u32 + 52, ctx.r10.u32);
	// b 0x82415e90
	goto loc_82415E90;
loc_82415E78:
	// lwz r11,96(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 96);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,52(r26)
	PPC_STORE_U32(r26.u32 + 52, ctx.r10.u32);
	// stw r11,100(r26)
	PPC_STORE_U32(r26.u32 + 100, r11.u32);
	// b 0x82415e90
	goto loc_82415E90;
loc_82415E8C:
	// li r23,1
	r23.s64 = 1;
loc_82415E90:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82415ef0
	if (!cr0.eq) goto loc_82415EF0;
	// lwz r11,52(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// addi r10,r27,52
	ctx.r10.s64 = r27.s64 + 52;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r31,r22
	r31.u64 = r22.u64;
	// rlwimi r9,r11,24,3,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0x1F000000) | (ctx.r9.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r11,r9,8,27,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lbzx r30,r11,r10
	r30.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82415ef4
	if (cr0.eq) goto loc_82415EF4;
	// addi r29,r26,96
	r29.s64 = r26.s64 + 96;
loc_82415EC4:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x82415ee0
	if (cr0.eq) goto loc_82415EE0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824143f8
	sub_824143F8(ctx, base);
loc_82415EE0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82415ec4
	if (cr6.lt) goto loc_82415EC4;
loc_82415EF0:
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82415EF4:
	// lwz r8,48(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// beq cr6,0x82415f08
	if (cr6.eq) goto loc_82415F08;
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bne cr6,0x82416180
	if (!cr6.eq) goto loc_82416180;
loc_82415F08:
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
	// lwz r11,56(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cmplwi cr6,r11,241
	cr6.compare<uint32_t>(r11.u32, 241, xer);
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// xori r29,r7,2
	r29.u64 = ctx.r7.u64 ^ 2;
	// addi r7,r29,24
	ctx.r7.s64 = r29.s64 + 24;
	// rlwinm r25,r7,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r25,r26
	r28.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// beq cr6,0x82415f68
	if (cr6.eq) goto loc_82415F68;
	// cmplwi cr6,r11,243
	cr6.compare<uint32_t>(r11.u32, 243, xer);
	// beq cr6,0x82415f5c
	if (cr6.eq) goto loc_82415F5C;
	// cmplwi cr6,r11,252
	cr6.compare<uint32_t>(r11.u32, 252, xer);
	// beq cr6,0x82415f54
	if (cr6.eq) goto loc_82415F54;
	// cmplwi cr6,r11,253
	cr6.compare<uint32_t>(r11.u32, 253, xer);
	// bne cr6,0x82415f6c
	if (!cr6.eq) goto loc_82415F6C;
	// li r11,24
	r11.s64 = 24;
	// b 0x82415f60
	goto loc_82415F60;
loc_82415F54:
	// li r11,23
	r11.s64 = 23;
	// b 0x82415f60
	goto loc_82415F60;
loc_82415F5C:
	// li r11,5
	r11.s64 = 5;
loc_82415F60:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82415f6c
	goto loc_82415F6C;
loc_82415F68:
	// li r24,1
	r24.s64 = 1;
loc_82415F6C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82415fa4
	if (cr0.eq) goto loc_82415FA4;
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// mulli r7,r7,85
	ctx.r7.s64 = ctx.r7.s64 * 85;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x82415fa4
	if (cr6.eq) goto loc_82415FA4;
loc_82415F88:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,408
	ctx.r4.s64 = r11.s64 + 408;
loc_82415F90:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82415F98:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824163e0
	goto loc_824163E0;
loc_82415FA4:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r7,r24,24
	ctx.r7.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bne 0x82416184
	if (!cr0.eq) goto loc_82416184;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// beq cr6,0x82415fd4
	if (cr6.eq) goto loc_82415FD4;
	// lwz r7,52(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// addi r8,r27,52
	ctx.r8.s64 = r27.s64 + 52;
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bge cr6,0x82416184
	if (!cr6.lt) goto loc_82416184;
loc_82415FD4:
	// lbzx r31,r11,r27
	r31.u64 = PPC_LOAD_U8(r11.u32 + r27.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82416184
	if (cr0.eq) goto loc_82416184;
	// addi r11,r28,36
	r11.s64 = r28.s64 + 36;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bne cr6,0x82416014
	if (!cr6.eq) goto loc_82416014;
	// clrlwi r11,r10,30
	r11.u64 = ctx.r10.u32 & 0x3;
	// mulli r11,r11,85
	r11.s64 = r11.s64 * 85;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82416094
	if (!cr6.eq) goto loc_82416094;
	// b 0x82415f88
	goto loc_82415F88;
loc_82416014:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// beq cr6,0x82416054
	if (cr6.eq) goto loc_82416054;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bne cr6,0x82416084
	if (!cr6.eq) goto loc_82416084;
	// clrlwi r11,r10,30
	r11.u64 = ctx.r10.u32 & 0x3;
	// mulli r11,r11,85
	r11.s64 = r11.s64 * 85;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82416078
	if (!cr6.eq) goto loc_82416078;
	// addi r11,r29,25
	r11.s64 = r29.s64 + 25;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// b 0x82416068
	goto loc_82416068;
loc_82416054:
	// rlwinm r11,r10,30,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// mulli r11,r11,84
	r11.s64 = r11.s64 * 84;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82416068:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82416084
	if (!cr6.eq) goto loc_82416084;
loc_82416078:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,304
	ctx.r4.s64 = r11.s64 + 304;
	// b 0x82415f90
	goto loc_82415F90;
loc_82416084:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8240f200
	sub_8240F200(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82416094:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824143f8
	sub_824143F8(ctx, base);
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bne cr6,0x8241617c
	if (!cr6.eq) goto loc_8241617C;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x824160c8
	if (cr6.eq) goto loc_824160C8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,216
	ctx.r4.s64 = r11.s64 + 216;
	// b 0x82415f90
	goto loc_82415F90;
loc_824160C8:
	// addi r11,r29,25
	r11.s64 = r29.s64 + 25;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82416170
	if (cr0.eq) goto loc_82416170;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82416170
	if (!cr6.eq) goto loc_82416170;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r9,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82416120
	if (!cr6.eq) goto loc_82416120;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r11,r11,208
	r11.s64 = r11.s64 + 208;
	// addi r4,r9,96
	ctx.r4.s64 = ctx.r9.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82415f98
	goto loc_82415F98;
loc_82416120:
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82416140
	if (cr6.eq) goto loc_82416140;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// b 0x82415f90
	goto loc_82415F90;
loc_82416140:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r7,r8,0,30,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFFFFC3) | (ctx.r7.u64 & 0x3C);
	// rlwimi r9,r11,28,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwimi r10,r11,26,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82416184
	goto loc_82416184;
loc_82416170:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-104
	ctx.r4.s64 = r11.s64 + -104;
	// b 0x82415f90
	goto loc_82415F90;
loc_8241617C:
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82416180:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82416184:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82416198
	if (cr0.eq) goto loc_82416198;
	// clrlwi r11,r10,6
	r11.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// oris r11,r11,51200
	r11.u64 = r11.u64 | 3355443200;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_82416198:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824161ac
	if (cr0.eq) goto loc_824161AC;
	// li r11,1
	r11.s64 = 1;
	// rlwimi r9,r11,25,3,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0x1F000000) | (ctx.r9.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
loc_824161AC:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82414568
	sub_82414568(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lwz r5,48(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// std r22,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r22.u64);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r28,-1
	r28.s64 = -1;
loc_824161EC:
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bne cr6,0x82416204
	if (!cr6.eq) goto loc_82416204;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82416218
	if (!cr6.eq) goto loc_82416218;
	// lwz r11,96(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 96);
	// b 0x82416210
	goto loc_82416210;
loc_82416204:
	// addi r11,r8,24
	r11.s64 = ctx.r8.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
loc_82416210:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82416220
	if (!cr6.eq) goto loc_82416220;
loc_82416218:
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r28.u32);
	// b 0x82416284
	goto loc_82416284;
loc_82416220:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8241628c
	if (!cr6.eq) goto loc_8241628C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lis r4,2816
	ctx.r4.s64 = 184549376;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82416250
	if (cr6.eq) goto loc_82416250;
	// lis r4,3072
	ctx.r4.s64 = 201326592;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82416250
	if (cr6.eq) goto loc_82416250;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x82416254
	goto loc_82416254;
loc_82416250:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82416254:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mr r11,r22
	r11.u64 = r22.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82416280
	if (cr0.eq) goto loc_82416280;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bne cr6,0x82416278
	if (!cr6.eq) goto loc_82416278;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8241627c
	goto loc_8241627C;
loc_82416278:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8241627C:
	// li r11,1
	r11.s64 = 1;
loc_82416280:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_82416284:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8241628C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// blt cr6,0x824161ec
	if (cr6.lt) goto loc_824161EC;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x824162c8
	if (cr6.eq) goto loc_824162C8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x824162bc
	if (cr6.eq) goto loc_824162BC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,-240
	ctx.r4.s64 = r11.s64 + -240;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x824162c8
	goto loc_824162C8;
loc_824162BC:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_824162C8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824162e8
	if (cr6.eq) goto loc_824162E8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824162e8
	if (cr6.eq) goto loc_824162E8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,-360
	ctx.r4.s64 = r11.s64 + -360;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_824162E8:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// lwz r30,136(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r31,132(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bne cr6,0x82416320
	if (!cr6.eq) goto loc_82416320;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82416320
	if (cr6.eq) goto loc_82416320;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82416320
	if (cr6.eq) goto loc_82416320;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82416320
	if (cr6.eq) goto loc_82416320;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,-496
	ctx.r4.s64 = r11.s64 + -496;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416320:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cntlzw r10,r29
	ctx.r10.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwinm r11,r11,29,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x4;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r9,r9,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// rlwinm r11,r11,29,0,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0xE0000000;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// beq cr6,0x82416364
	if (cr6.eq) goto loc_82416364;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82416370
	goto loc_82416370;
loc_82416364:
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82416370:
	// rlwimi r11,r10,30,1,1
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823cef40
	sub_823CEF40(ctx, base);
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824163b0
	if (cr6.eq) goto loc_824163B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cb630
	sub_823CB630(ctx, base);
loc_824163B0:
	// lwz r11,324(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824163dc
	if (cr6.eq) goto loc_824163DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r6,32(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,316(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82490de0
	sub_82490DE0(ctx, base);
loc_824163DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824163E0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_824163E8"))) PPC_WEAK_FUNC(sub_824163E8);
PPC_FUNC_IMPL(__imp__sub_824163E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-32191
	r11.s64 = -2109669376;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r8,r11,2960
	ctx.r8.s64 = r11.s64 + 2960;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r10,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240f6e8
	sub_8240F6E8(ctx, base);
	// lwz r30,52(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82414b00
	sub_82414B00(ctx, base);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// bne cr6,0x824164a0
	if (!cr6.eq) goto loc_824164A0;
	// lwz r11,100(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,-1003
	cr6.compare<int32_t>(ctx.r10.s32, -1003, xer);
	// beq cr6,0x82416474
	if (cr6.eq) goto loc_82416474;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,564
	ctx.r4.s64 = r11.s64 + 564;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8241656c
	goto loc_8241656C;
loc_82416474:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r11,r11,95
	xer.ca = r11.u32 <= 95;
	r11.s64 = 95 - r11.s64;
	// divwu r8,r11,r10
	ctx.r8.u32 = r11.u32 / ctx.r10.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 * 3;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// rlwimi r10,r11,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwimi r9,r10,20,5,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x7F00000) | (ctx.r9.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_824164A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8241650c
	if (!cr6.eq) goto loc_8241650C;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x824164d0
	if (!cr6.eq) goto loc_824164D0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-8320
	ctx.r4.s64 = r11.s64 + -8320;
	// b 0x824164ec
	goto loc_824164EC;
loc_824164D0:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824164f8
	if (cr0.eq) goto loc_824164F8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,508
	ctx.r4.s64 = r11.s64 + 508;
loc_824164EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82416568
	goto loc_82416568;
loc_824164F8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cef28
	sub_823CEF28(ctx, base);
	// b 0x8241651c
	goto loc_8241651C;
loc_8241650C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cef10
	sub_823CEF10(ctx, base);
loc_8241651C:
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8241653c
	if (cr6.eq) goto loc_8241653C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cb630
	sub_823CB630(ctx, base);
loc_8241653C:
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82416568
	if (cr6.eq) goto loc_82416568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82490de0
	sub_82490DE0(ctx, base);
loc_82416568:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241656C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82416574"))) PPC_WEAK_FUNC(sub_82416574);
PPC_FUNC_IMPL(__imp__sub_82416574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82416578"))) PPC_WEAK_FUNC(sub_82416578);
PPC_FUNC_IMPL(__imp__sub_82416578) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32191
	r11.s64 = -2109669376;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r11,2960
	ctx.r6.s64 = r11.s64 + 2960;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240fbd8
	sub_8240FBD8(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414b00
	sub_82414B00(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	cr6.compare<uint32_t>(ctx.r10.u32, 19, xer);
	// bgt cr6,0x8241660c
	if (cr6.gt) goto loc_8241660C;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1002
	cr6.compare<int32_t>(ctx.r9.s32, -1002, xer);
	// beq cr6,0x82416600
	if (cr6.eq) goto loc_82416600;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,620
	ctx.r4.s64 = r11.s64 + 620;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82416674
	goto loc_82416674;
loc_82416600:
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r11,r10,20,7,11
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1F00000) | (r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_8241660C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823ceef8
	sub_823CEEF8(ctx, base);
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82416644
	if (cr6.eq) goto loc_82416644;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cb630
	sub_823CB630(ctx, base);
loc_82416644:
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82416670
	if (cr6.eq) goto loc_82416670;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82490de0
	sub_82490DE0(ctx, base);
loc_82416670:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82416674:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8241667C"))) PPC_WEAK_FUNC(sub_8241667C);
PPC_FUNC_IMPL(__imp__sub_8241667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82416680"))) PPC_WEAK_FUNC(sub_82416680);
PPC_FUNC_IMPL(__imp__sub_82416680) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,24
	r11.s64 = ctx.r5.s64 + 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// beq cr6,0x824166b8
	if (cr6.eq) goto loc_824166B8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,684
	ctx.r4.s64 = r11.s64 + 684;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82416758
	goto loc_82416758;
loc_824166B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823cf180
	sub_823CF180(ctx, base);
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x824166e4
	goto loc_824166E4;
loc_824166D4:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x824166ec
	if (cr6.eq) goto loc_824166EC;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_824166E4:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824166d4
	if (!cr0.eq) goto loc_824166D4;
loc_824166EC:
	// mr r28,r11
	r28.u64 = r11.u64;
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82416710
	if (!cr6.eq) goto loc_82416710;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410260
	sub_82410260(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82416710:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82416744
	if (cr0.eq) goto loc_82416744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824093f0
	sub_824093F0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r10,r11,-8472
	ctx.r10.s64 = r11.s64 + -8472;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x82416748
	goto loc_82416748;
loc_82416744:
	// li r11,0
	r11.s64 = 0;
loc_82416748:
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
loc_82416758:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82416760"))) PPC_WEAK_FUNC(sub_82416760);
PPC_FUNC_IMPL(__imp__sub_82416760) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,328(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 328);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823cf180
	sub_823CF180(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8241681c
	if (cr6.eq) goto loc_8241681C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,760
	r26.s64 = r11.s64 + 760;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r25,r11,720
	r25.s64 = r11.s64 + 720;
loc_8241679C:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x824167b0
	if (!cr6.eq) goto loc_824167B0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x824167bc
	goto loc_824167BC;
loc_824167B0:
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// blt cr6,0x824167cc
	if (cr6.lt) goto loc_824167CC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_824167BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82416810
	goto loc_82416810;
loc_824167CC:
	// lwz r31,8(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82416810
	if (cr0.eq) goto loc_82416810;
	// clrlwi r28,r11,19
	r28.u64 = r11.u32 & 0x1FFF;
loc_824167DC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823cb678
	sub_823CB678(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x824167dc
	if (!cr0.eq) goto loc_824167DC;
loc_82416810:
	// lwz r27,12(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x8241679c
	if (!cr0.eq) goto loc_8241679C;
loc_8241681C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,328(r29)
	PPC_STORE_U32(r29.u32 + 328, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8241682C"))) PPC_WEAK_FUNC(sub_8241682C);
PPC_FUNC_IMPL(__imp__sub_8241682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82416830"))) PPC_WEAK_FUNC(sub_82416830);
PPC_FUNC_IMPL(__imp__sub_82416830) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x823cb648
	sub_823CB648(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82416914
	if (cr0.eq) goto loc_82416914;
	// li r24,1
	r24.s64 = 1;
loc_8241686C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823cb6a8
	sub_823CB6A8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82416938
	if (cr0.eq) goto loc_82416938;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824168fc
	if (!cr6.eq) goto loc_824168FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824168fc
	if (cr0.eq) goto loc_824168FC;
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824168d4
	if (cr0.eq) goto loc_824168D4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x824168dc
	if (cr6.lt) goto loc_824168DC;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// bne cr6,0x824168fc
	if (!cr6.eq) goto loc_824168FC;
	// lwz r11,288(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 288);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// stw r11,288(r28)
	PPC_STORE_U32(r28.u32 + 288, r11.u32);
	// b 0x824168fc
	goto loc_824168FC;
loc_824168D4:
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bgt cr6,0x824168fc
	if (cr6.gt) goto loc_824168FC;
loc_824168DC:
	// slw r10,r24,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r24.u32 << (r11.u8 & 0x3F));
	// and. r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & r31.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x824168fc
	if (!cr0.eq) goto loc_824168FC;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// or r31,r10,r31
	r31.u64 = ctx.r10.u64 | r31.u64;
	// bge cr6,0x824168fc
	if (!cr6.lt) goto loc_824168FC;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_824168FC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// blt cr6,0x8241686c
	if (cr6.lt) goto loc_8241686C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// bne cr6,0x82416918
	if (!cr6.eq) goto loc_82416918;
loc_82416914:
	// li r11,0
	r11.s64 = 0;
loc_82416918:
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8241694c
	if (cr0.eq) goto loc_8241694C;
	// lwz r10,288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 288);
	// rlwimi r10,r11,28,1,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x70000000) | (ctx.r10.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x82416970
	goto loc_82416970;
loc_82416938:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,828
	ctx.r4.s64 = r11.s64 + 828;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82416974
	goto loc_82416974;
loc_8241694C:
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 96);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8241695c
	if (!cr0.eq) goto loc_8241695C;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8241695C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82416968
	if (cr6.eq) goto loc_82416968;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82416968:
	// lwz r10,288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 288);
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_82416970:
	// stw r10,288(r28)
	PPC_STORE_U32(r28.u32 + 288, ctx.r10.u32);
loc_82416974:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8241697C"))) PPC_WEAK_FUNC(sub_8241697C);
PPC_FUNC_IMPL(__imp__sub_8241697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82416980"))) PPC_WEAK_FUNC(sub_82416980);
PPC_FUNC_IMPL(__imp__sub_82416980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r11,r1,120
	r11.s64 = ctx.r1.s64 + 120;
	// li r27,1
	r27.s64 = 1;
	// stw r24,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r24.u32);
	// lwz r10,80(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// std r24,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r24.u64);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824169c0
	if (cr6.eq) goto loc_824169C0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,1196
	ctx.r4.s64 = r11.s64 + 1196;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_824169C0:
	// lwz r28,92(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 92);
	// lis r23,3328
	r23.s64 = 218103808;
	// lwz r29,52(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x824169e4
	if (cr0.eq) goto loc_824169E4;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r25,r27
	r25.u64 = r27.u64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bne cr6,0x824169e8
	if (!cr6.eq) goto loc_824169E8;
loc_824169E4:
	// mr r25,r24
	r25.u64 = r24.u64;
loc_824169E8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82416a28
	if (cr6.eq) goto loc_82416A28;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82416a18
	if (cr6.eq) goto loc_82416A18;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(r29.u32, 2, xer);
	// ble cr6,0x82416a28
	if (!cr6.gt) goto loc_82416A28;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// beq cr6,0x82416a28
	if (cr6.eq) goto loc_82416A28;
	// cmplwi cr6,r29,249
	cr6.compare<uint32_t>(r29.u32, 249, xer);
	// ble cr6,0x82416a18
	if (!cr6.gt) goto loc_82416A18;
	// cmplwi cr6,r29,251
	cr6.compare<uint32_t>(r29.u32, 251, xer);
	// ble cr6,0x82416a28
	if (!cr6.gt) goto loc_82416A28;
loc_82416A18:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1156
	ctx.r4.s64 = r11.s64 + 1156;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416A28:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r11,r29,12,16,19
	r11.u64 = (__builtin_rotateleft32(r29.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823cb648
	sub_823CB648(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// slw r11,r27,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r27.u32 << (r29.u8 & 0x3F));
	// andi. r11,r11,16404
	r11.u64 = r11.u64 & 16404;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82416a5c
	if (cr0.eq) goto loc_82416A5C;
	// stw r27,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r27.u32);
loc_82416A5C:
	// cmplwi cr6,r29,30
	cr6.compare<uint32_t>(r29.u32, 30, xer);
	// bgt cr6,0x82416e18
	if (cr6.gt) goto loc_82416E18;
	// beq cr6,0x82416d6c
	if (cr6.eq) goto loc_82416D6C;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bgt cr6,0x82416f14
	if (cr6.gt) goto loc_82416F14;
	// lis r12,-32248
	r12.s64 = -2113404928;
	// addi r12,r12,-8952
	r12.s64 = r12.s64 + -8952;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32191
	r12.s64 = -2109669376;
	// addi r12,r12,27292
	r12.s64 = r12.s64 + 27292;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82416A9C;
	case 1:
		goto loc_82416AE4;
	case 2:
		goto loc_82416B18;
	case 3:
		goto loc_82416B18;
	case 4:
		goto loc_82416F14;
	case 5:
		goto loc_82416F14;
	case 6:
		goto loc_82416B84;
	case 7:
		goto loc_82416C1C;
	case 8:
		goto loc_82416CE8;
	case 9:
		goto loc_82416F14;
	case 10:
		goto loc_82416C90;
	case 11:
		goto loc_82416D54;
	case 12:
		goto loc_82416B18;
	case 13:
		goto loc_82416B18;
	default:
		__builtin_unreachable();
	}
loc_82416A9C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414350
	sub_82414350(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// rlwimi r11,r3,15,16,16
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r30,0,20,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// beq cr6,0x82416f14
	if (cr6.eq) goto loc_82416F14;
	// lis r12,-1
	r12.s64 = -65536;
	// li r11,20480
	r11.s64 = 20480;
	// ori r12,r12,23551
	r12.u64 = r12.u64 | 23551;
loc_82416ACC:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwimi r11,r25,10,21,21
	r11.u64 = (__builtin_rotateleft32(r25.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82416ADC:
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// b 0x82416f14
	goto loc_82416F14;
loc_82416AE4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414350
	sub_82414350(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// rlwimi r11,r3,15,16,16
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r30,0,20,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// beq cr6,0x82416f14
	if (cr6.eq) goto loc_82416F14;
	// lis r12,-1
	r12.s64 = -65536;
	// li r11,24576
	r11.s64 = 24576;
	// ori r12,r12,27647
	r12.u64 = r12.u64 | 27647;
	// b 0x82416acc
	goto loc_82416ACC;
loc_82416B18:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414350
	sub_82414350(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,96(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 96);
	// rlwimi r10,r3,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r10,r30,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bne cr6,0x82416b70
	if (!cr6.eq) goto loc_82416B70;
	// lbz r10,27(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 27);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r9,r9,0,30,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x82416f14
	if (cr6.eq) goto loc_82416F14;
	// ori r11,r10,1024
	r11.u64 = ctx.r10.u64 | 1024;
	// b 0x82416adc
	goto loc_82416ADC;
loc_82416B70:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,1116
	ctx.r4.s64 = r11.s64 + 1116;
loc_82416B78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82416f14
	goto loc_82416F14;
loc_82416B84:
	// lwz r11,96(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x82416ba8
	if (cr6.eq) goto loc_82416BA8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = r11.s64 + 1072;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82416bb8
	goto loc_82416BB8;
loc_82416BA8:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82416BB8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416680
	sub_82416680(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1064
	ctx.r5.s64 = r11.s64 + 1064;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414248
	sub_82414248(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82416f14
	if (cr0.eq) goto loc_82416F14;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// bl 0x8240f608
	sub_8240F608(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82416c10
	if (cr0.lt) goto loc_82416C10;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,13,18,18
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x2000) | (r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// b 0x82416f14
	goto loc_82416F14;
loc_82416C10:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,1020
	ctx.r4.s64 = r11.s64 + 1020;
	// b 0x82416b78
	goto loc_82416B78;
loc_82416C1C:
	// lwz r11,96(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x82416c40
	if (cr6.eq) goto loc_82416C40;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1072
	ctx.r4.s64 = r11.s64 + 1072;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82416c50
	goto loc_82416C50;
loc_82416C40:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82416C50:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416680
	sub_82416680(ctx, base);
	// lwz r11,92(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82416f14
	if (cr0.eq) goto loc_82416F14;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x82416f14
	if (cr6.eq) goto loc_82416F14;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// b 0x82416adc
	goto loc_82416ADC;
loc_82416C90:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1008
	ctx.r5.s64 = r11.s64 + 1008;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414248
	sub_82414248(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82416ce8
	if (cr0.eq) goto loc_82416CE8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// bl 0x8240f608
	sub_8240F608(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82416cd8
	if (cr0.lt) goto loc_82416CD8;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// b 0x82416cec
	goto loc_82416CEC;
loc_82416CD8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,956
	ctx.r4.s64 = r11.s64 + 956;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416CE8:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82416CEC:
	// lwz r10,96(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,14
	cr6.compare<uint32_t>(ctx.r9.u32, 14, xer);
	// bne cr6,0x82416d30
	if (!cr6.eq) goto loc_82416D30;
	// lbz r9,27(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// rlwinm r11,r11,0,30,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r10,r10,r23
	ctx.r10.s64 = r23.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwimi r11,r10,10,21,21
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// b 0x82416d40
	goto loc_82416D40;
loc_82416D30:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,912
	ctx.r4.s64 = r11.s64 + 912;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416D40:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82416D44:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416680
	sub_82416680(ctx, base);
	// b 0x82416f14
	goto loc_82416F14;
loc_82416D54:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413db0
	sub_82413DB0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x82416f0c
	goto loc_82416F0C;
loc_82416D6C:
	// lwz r11,96(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 96);
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// beq cr6,0x82416d94
	if (cr6.eq) goto loc_82416D94;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,864
	ctx.r4.s64 = r11.s64 + 864;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x82416df4
	goto loc_82416DF4;
loc_82416D94:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823cf180
	sub_823CF180(ctx, base);
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82416e08
	if (cr0.eq) goto loc_82416E08;
loc_82416DB4:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82416dcc
	if (cr6.eq) goto loc_82416DCC;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82416db4
	if (!cr0.eq) goto loc_82416DB4;
loc_82416DCC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82416e08
	if (cr6.eq) goto loc_82416E08;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82416e00
	if (cr6.eq) goto loc_82416E00;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,844
	ctx.r4.s64 = r11.s64 + 844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416DF4:
	// lis r24,-32768
	r24.s64 = -2147483648;
	// ori r24,r24,16389
	r24.u64 = r24.u64 | 16389;
	// b 0x82416f5c
	goto loc_82416F5C;
loc_82416E00:
	// stw r5,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r5.u32);
	// b 0x82416f14
	goto loc_82416F14;
loc_82416E08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82410260
	sub_82410260(ctx, base);
	// b 0x82416f14
	goto loc_82416F14;
loc_82416E18:
	// cmplwi cr6,r29,250
	cr6.compare<uint32_t>(r29.u32, 250, xer);
	// beq cr6,0x82416e6c
	if (cr6.eq) goto loc_82416E6C;
	// cmplwi cr6,r29,251
	cr6.compare<uint32_t>(r29.u32, 251, xer);
	// bne cr6,0x82416f14
	if (!cr6.eq) goto loc_82416F14;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// rlwinm r11,r11,0,19,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// ori r11,r11,36864
	r11.u64 = r11.u64 | 36864;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// beq cr6,0x82416e58
	if (cr6.eq) goto loc_82416E58;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	r11.u64 = (__builtin_rotateleft32(r25.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x82416e64
	goto loc_82416E64;
loc_82416E58:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
loc_82416E64:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82416d44
	goto loc_82416D44;
loc_82416E6C:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// ori r11,r11,45056
	r11.u64 = r11.u64 | 45056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// beq cr6,0x82416e9c
	if (cr6.eq) goto loc_82416E9C;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	r11.u64 = (__builtin_rotateleft32(r25.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x82416ea8
	goto loc_82416EA8;
loc_82416E9C:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
loc_82416EA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416680
	sub_82416680(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1008
	ctx.r5.s64 = r11.s64 + 1008;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414248
	sub_82414248(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82416f14
	if (cr0.eq) goto loc_82416F14;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// bl 0x8240f608
	sub_8240F608(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82416efc
	if (cr0.lt) goto loc_82416EFC;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82416adc
	goto loc_82416ADC;
loc_82416EFC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,956
	ctx.r4.s64 = r11.s64 + 956;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416F0C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82416f5c
	if (cr6.lt) goto loc_82416F5C;
loc_82416F14:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82416f5c
	if (cr0.eq) goto loc_82416F5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x823cf168
	sub_823CF168(ctx, base);
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82416f5c
	if (cr6.eq) goto loc_82416F5C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// bl 0x82490de0
	sub_82490DE0(ctx, base);
loc_82416F5C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82416F68"))) PPC_WEAK_FUNC(sub_82416F68);
PPC_FUNC_IMPL(__imp__sub_82416F68) {
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
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82416f94
	if (!cr6.eq) goto loc_82416F94;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8241709c
	goto loc_8241709C;
loc_82416F94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416830
	sub_82416830(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82416ffc
	if (!cr0.eq) goto loc_82416FFC;
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82416fc4
	if (cr0.eq) goto loc_82416FC4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1528
	ctx.r4.s64 = r11.s64 + 1528;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416FC4:
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82416fe0
	if (cr0.eq) goto loc_82416FE0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1456
	ctx.r4.s64 = r11.s64 + 1456;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416FE0:
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82416ffc
	if (cr0.eq) goto loc_82416FFC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1384
	ctx.r4.s64 = r11.s64 + 1384;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82416FFC:
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r10,0,18,18
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82417014
	if (cr0.eq) goto loc_82417014;
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// oris r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 262144;
	// stw r9,288(r31)
	PPC_STORE_U32(r31.u32 + 288, ctx.r9.u32);
loc_82417014:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82417068
	if (!cr6.eq) goto loc_82417068;
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82417040
	if (cr0.eq) goto loc_82417040;
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82417040
	if (cr0.eq) goto loc_82417040;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1316
	ctx.r4.s64 = r11.s64 + 1316;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82417040:
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82417068
	if (cr0.eq) goto loc_82417068;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82417068
	if (cr0.eq) goto loc_82417068;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1248
	ctx.r4.s64 = r11.s64 + 1248;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_82417068:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417080
	if (cr6.eq) goto loc_82417080;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x8241709c
	goto loc_8241709C;
loc_82417080:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// bl 0x823c9128
	sub_823C9128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241709C:
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

__attribute__((alias("__imp__sub_824170B0"))) PPC_WEAK_FUNC(sub_824170B0);
PPC_FUNC_IMPL(__imp__sub_824170B0) {
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
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82416f68
	sub_82416F68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241750c
	if (cr0.lt) goto loc_8241750C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82417114
	if (cr0.eq) goto loc_82417114;
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82417108
	if (!cr6.eq) goto loc_82417108;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,1776
	ctx.r4.s64 = r11.s64 + 1776;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x8241750c
	goto loc_8241750C;
loc_82417108:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823ce840
	sub_823CE840(ctx, base);
loc_82417114:
	// lwz r27,316(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82417140
	if (cr0.eq) goto loc_82417140;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823c9140
	sub_823C9140(ctx, base);
loc_82417140:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823cef60
	sub_823CEF60(ctx, base);
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417180
	if (cr6.eq) goto loc_82417180;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823cf180
	sub_823CF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x8248c680
	sub_8248C680(ctx, base);
loc_82417180:
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824171ec
	if (cr6.eq) goto loc_824171EC;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x824171cc
	if (cr0.eq) goto loc_824171CC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x823b9d68
	sub_823B9D68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x823cef58
	sub_823CEF58(ctx, base);
loc_824171CC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// bl 0x824904f0
	sub_824904F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x823cb5d0
	sub_823CB5D0(ctx, base);
loc_824171EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823cf198
	sub_823CF198(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x823e01b0
	sub_823E01B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241750c
	if (cr0.lt) goto loc_8241750C;
	// li r28,0
	r28.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// bl 0x82415580
	sub_82415580(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cef68
	sub_823CEF68(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82417300
	if (cr0.lt) goto loc_82417300;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x824172a4
	if (cr6.eq) goto loc_824172A4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32183
	r11.s64 = -2109145088;
	// addi r29,r11,1344
	r29.s64 = r11.s64 + 1344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823cb978
	sub_823CB978(ctx, base);
loc_824172A4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82417300
	if (cr6.eq) goto loc_82417300;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82417300
	if (cr0.eq) goto loc_82417300;
	// lis r11,-32191
	r11.s64 = -2109669376;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r8,r11,-3400
	ctx.r8.s64 = r11.s64 + -3400;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82497d70
	sub_82497D70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82417300
	if (!cr0.eq) goto loc_82417300;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8241750c
	goto loc_8241750C;
loc_82417300:
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2945
	r11.u64 = r11.u64 | 2945;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82417328
	if (!cr6.eq) goto loc_82417328;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1696
	ctx.r4.s64 = r11.s64 + 1696;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_82417328:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// blt cr6,0x82417508
	if (cr6.lt) goto loc_82417508;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82417508
	if (!cr0.eq) goto loc_82417508;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8241735c
	if (cr6.eq) goto loc_8241735C;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// rlwinm r29,r10,10,15,21
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
loc_8241735C:
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82417368
	if (cr0.eq) goto loc_82417368;
	// oris r29,r29,4
	r29.u64 = r29.u64 | 262144;
loc_82417368:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32191
	r11.s64 = -2109669376;
	// addi r30,r1,116
	r30.s64 = ctx.r1.s64 + 116;
	// addi r27,r11,-6576
	r27.s64 = r11.s64 + -6576;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x824173cc
	if (cr0.lt) goto loc_824173CC;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417508
	if (cr6.eq) goto loc_82417508;
loc_824173CC:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// sth r28,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, r28.u16);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// bge cr6,0x82417408
	if (!cr6.lt) goto loc_82417408;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r7,r11,1648
	ctx.r7.s64 = r11.s64 + 1648;
	// b 0x82417414
	goto loc_82417414;
loc_82417408:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r7,r11,1596
	ctx.r7.s64 = r11.s64 + 1596;
loc_82417414:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r6,r11,-24616
	ctx.r6.s64 = r11.s64 + -24616;
	// beq cr6,0x8241742c
	if (cr6.eq) goto loc_8241742C;
	// li r5,7101
	ctx.r5.s64 = 7101;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// b 0x82417434
	goto loc_82417434;
loc_8241742C:
	// li r5,7102
	ctx.r5.s64 = 7102;
	// bl 0x823ebe20
	sub_823EBE20(ctx, base);
loc_82417434:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32191
	r11.s64 = -2109669376;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,-2792
	r28.s64 = r11.s64 + -2792;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// lhz r11,152(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8241749c
	if (cr0.eq) goto loc_8241749C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8240f428
	sub_8240F428(ctx, base);
loc_8241749C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32191
	r11.s64 = -2109669376;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// addi r29,r11,-2792
	r29.s64 = r11.s64 + -2792;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x82496aa0
	sub_82496AA0(ctx, base);
	// lhz r11,152(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82417508
	if (cr0.eq) goto loc_82417508;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8240f428
	sub_8240F428(ctx, base);
loc_82417508:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8241750C:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82417514"))) PPC_WEAK_FUNC(sub_82417514);
PPC_FUNC_IMPL(__imp__sub_82417514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82417518"))) PPC_WEAK_FUNC(sub_82417518);
PPC_FUNC_IMPL(__imp__sub_82417518) {
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
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// ori r30,r10,16389
	r30.u64 = ctx.r10.u64 | 16389;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417550
	if (cr6.eq) goto loc_82417550;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,2048
	ctx.r4.s64 = r11.s64 + 2048;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82417550:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82417570
	if (!cr0.eq) goto loc_82417570;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1976
	ctx.r4.s64 = r11.s64 + 1976;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82417570:
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417590
	if (cr6.eq) goto loc_82417590;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1924
	ctx.r4.s64 = r11.s64 + 1924;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82417590:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824175b0
	if (cr6.eq) goto loc_824175B0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1856
	ctx.r4.s64 = r11.s64 + 1856;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_824175B0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x82417620
	if (cr6.lt) goto loc_82417620;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416760
	sub_82416760(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// bl 0x82416f68
	sub_82416F68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823ce840
	sub_823CE840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415580
	sub_82415580(ctx, base);
	// bl 0x823cf180
	sub_823CF180(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x8241760c
	if (cr0.eq) goto loc_8241760C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8248c6a0
	sub_8248C6A0(ctx, base);
loc_8241760C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x824101b0
	sub_824101B0(ctx, base);
loc_82417620:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241762C"))) PPC_WEAK_FUNC(sub_8241762C);
PPC_FUNC_IMPL(__imp__sub_8241762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82417630"))) PPC_WEAK_FUNC(sub_82417630);
PPC_FUNC_IMPL(__imp__sub_82417630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// beq cr6,0x824176b0
	if (cr6.eq) goto loc_824176B0;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x82417698
	if (cr6.eq) goto loc_82417698;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x82417674
	if (cr6.eq) goto loc_82417674;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x82417718
	if (!cr6.eq) goto loc_82417718;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,2248
	ctx.r4.s64 = r11.s64 + 2248;
	// b 0x824176a0
	goto loc_824176A0;
loc_82417674:
	// lwz r11,52(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(r11.u32, 248, xer);
	// beq cr6,0x8241768c
	if (cr6.eq) goto loc_8241768C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,2196
	ctx.r4.s64 = r11.s64 + 2196;
	// b 0x824176a0
	goto loc_824176A0;
loc_8241768C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,2144
	ctx.r4.s64 = r11.s64 + 2144;
	// b 0x824176a0
	goto loc_824176A0;
loc_82417698:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,2088
	ctx.r4.s64 = r11.s64 + 2088;
loc_824176A0:
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// b 0x82417718
	goto loc_82417718;
loc_824176B0:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x82417718
	if (cr6.gt) goto loc_82417718;
	// lis r12,-32248
	r12.s64 = -2113404928;
	// addi r12,r12,-8920
	r12.s64 = r12.s64 + -8920;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// lis r12,-32191
	r12.s64 = -2109669376;
	// addi r12,r12,30432
	r12.s64 = r12.s64 + 30432;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82417708;
	case 1:
		goto loc_82417700;
	case 2:
		goto loc_824176E0;
	case 3:
		goto loc_824176E0;
	case 4:
		goto loc_824176E0;
	case 5:
		goto loc_824176E8;
	case 6:
		goto loc_824176F8;
	case 7:
		goto loc_82417710;
	case 8:
		goto loc_824176F0;
	default:
		__builtin_unreachable();
	}
loc_824176E0:
	// bl 0x82415da0
	sub_82415DA0(ctx, base);
	// b 0x82417714
	goto loc_82417714;
loc_824176E8:
	// bl 0x82416980
	sub_82416980(ctx, base);
	// b 0x82417714
	goto loc_82417714;
loc_824176F0:
	// bl 0x82417518
	sub_82417518(ctx, base);
	// b 0x82417714
	goto loc_82417714;
loc_824176F8:
	// bl 0x824150d0
	sub_824150D0(ctx, base);
	// b 0x82417714
	goto loc_82417714;
loc_82417700:
	// bl 0x824163e8
	sub_824163E8(ctx, base);
	// b 0x82417714
	goto loc_82417714;
loc_82417708:
	// bl 0x82416578
	sub_82416578(ctx, base);
	// b 0x82417714
	goto loc_82417714;
loc_82417710:
	// bl 0x82415638
	sub_82415638(ctx, base);
loc_82417714:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82417718:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241772C"))) PPC_WEAK_FUNC(sub_8241772C);
PPC_FUNC_IMPL(__imp__sub_8241772C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82417730"))) PPC_WEAK_FUNC(sub_82417730);
PPC_FUNC_IMPL(__imp__sub_82417730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8241804c
	if (!cr6.eq) goto loc_8241804C;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8241779c
	if (cr6.eq) goto loc_8241779C;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
loc_82417770:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824177d0
	if (cr0.eq) goto loc_824177D0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// bdnz 0x82417770
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82417770;
loc_8241779C:
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r4,98
	cr6.compare<uint32_t>(ctx.r4.u32, 98, xer);
	// bgt cr6,0x82417fe4
	if (cr6.gt) goto loc_82417FE4;
	// lis r12,-32248
	r12.s64 = -2113404928;
	// addi r12,r12,-8904
	r12.s64 = r12.s64 + -8904;
	// rlwinm r0,r4,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32191
	r12.s64 = -2109669376;
	// addi r12,r12,30672
	r12.s64 = r12.s64 + 30672;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_824178E4;
	case 1:
		goto loc_824177F4;
	case 2:
		goto loc_824177F4;
	case 3:
		goto loc_824177FC;
	case 4:
		goto loc_824177F4;
	case 5:
		goto loc_824177F4;
	case 6:
		goto loc_82417810;
	case 7:
		goto loc_824178E4;
	case 8:
		goto loc_824178CC;
	case 9:
		goto loc_824178EC;
	case 10:
		goto loc_82417900;
	case 11:
		goto loc_824177F4;
	case 12:
		goto loc_8241790C;
	case 13:
		goto loc_824177F4;
	case 14:
		goto loc_82417920;
	case 15:
		goto loc_82417930;
	case 16:
		goto loc_82417930;
	case 17:
		goto loc_82417930;
	case 18:
		goto loc_82417930;
	case 19:
		goto loc_82417930;
	case 20:
		goto loc_82417930;
	case 21:
		goto loc_82417930;
	case 22:
		goto loc_82417930;
	case 23:
		goto loc_82417930;
	case 24:
		goto loc_82417984;
	case 25:
		goto loc_82417984;
	case 26:
		goto loc_824179C0;
	case 27:
		goto loc_824179D0;
	case 28:
		goto loc_824179E0;
	case 29:
		goto loc_824179F0;
	case 30:
		goto loc_82417A08;
	case 31:
		goto loc_82417930;
	case 32:
		goto loc_82417A38;
	case 33:
		goto loc_82417930;
	case 34:
		goto loc_82417A38;
	case 35:
		goto loc_82417930;
	case 36:
		goto loc_824179C0;
	case 37:
		goto loc_824179E0;
	case 38:
		goto loc_82417A08;
	case 39:
		goto loc_82417984;
	case 40:
		goto loc_82417A18;
	case 41:
		goto loc_82417AA4;
	case 42:
		goto loc_82417AD4;
	case 43:
		goto loc_82417AFC;
	case 44:
		goto loc_82417B20;
	case 45:
		goto loc_82417BA8;
	case 46:
		goto loc_824177F4;
	case 47:
		goto loc_82417BC8;
	case 48:
		goto loc_824177F4;
	case 49:
		goto loc_824177F4;
	case 50:
		goto loc_824177F4;
	case 51:
		goto loc_82417C10;
	case 52:
		goto loc_824177F4;
	case 53:
		goto loc_82417C60;
	case 54:
		goto loc_82417C8C;
	case 55:
		goto loc_82417CB8;
	case 56:
		goto loc_824177F4;
	case 57:
		goto loc_82417D00;
	case 58:
		goto loc_82417FE4;
	case 59:
		goto loc_82417FE4;
	case 60:
		goto loc_82417D50;
	case 61:
		goto loc_82417D68;
	case 62:
		goto loc_824177F4;
	case 63:
		goto loc_82417D70;
	case 64:
		goto loc_82417DD0;
	case 65:
		goto loc_82417DFC;
	case 66:
		goto loc_82417E1C;
	case 67:
		goto loc_82417E5C;
	case 68:
		goto loc_824177F4;
	case 69:
		goto loc_824177F4;
	case 70:
		goto loc_82417E9C;
	case 71:
		goto loc_82417EB0;
	case 72:
		goto loc_82417EB0;
	case 73:
		goto loc_82417ED4;
	case 74:
		goto loc_824177F4;
	case 75:
		goto loc_824177F4;
	case 76:
		goto loc_82417EF8;
	case 77:
		goto loc_82417F84;
	case 78:
		goto loc_82417F84;
	case 79:
		goto loc_82417F84;
	case 80:
		goto loc_82417F84;
	case 81:
		goto loc_82417F84;
	case 82:
		goto loc_82417F84;
	case 83:
		goto loc_82417F84;
	case 84:
		goto loc_82417F84;
	case 85:
		goto loc_82417F84;
	case 86:
		goto loc_82417F84;
	case 87:
		goto loc_82417F84;
	case 88:
		goto loc_82417F84;
	case 89:
		goto loc_82417F84;
	case 90:
		goto loc_82417FE4;
	case 91:
		goto loc_82417F84;
	case 92:
		goto loc_82417F84;
	case 93:
		goto loc_82417F84;
	case 94:
		goto loc_82417F84;
	case 95:
		goto loc_82417F84;
	case 96:
		goto loc_82417FB4;
	case 97:
		goto loc_82417FB4;
	case 98:
		goto loc_82417FB4;
	default:
		__builtin_unreachable();
	}
loc_824177D0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,13028
	ctx.r6.s64 = r11.s64 + 13028;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// b 0x8241804c
	goto loc_8241804C;
loc_824177F4:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_824177FC:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82409510
	sub_82409510(ctx, base);
loc_82417808:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417810:
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82417fe4
	if (cr6.eq) goto loc_82417FE4;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417840
	if (cr6.eq) goto loc_82417840;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,2320
	ctx.r4.s64 = r11.s64 + 2320;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
	// b 0x824178a8
	goto loc_824178A8;
loc_82417840:
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82417864
	if (!cr6.eq) goto loc_82417864;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r26,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r26.u32);
	// bl 0x82414d60
	sub_82414D60(ctx, base);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r3,312(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 312);
	// bl 0x823ceee8
	sub_823CEEE8(ctx, base);
loc_82417864:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// lwz r29,312(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 312);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ceef0
	sub_823CEEF0(ctx, base);
loc_824178A8:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82417fe4
	if (cr0.eq) goto loc_82417FE4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r27.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_824178CC:
	// lwz r11,284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824178e4
	if (!cr6.eq) goto loc_824178E4;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r11,284(r30)
	PPC_STORE_U32(r30.u32 + 284, r11.u32);
loc_824178E4:
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x82417fe4
	goto loc_82417FE4;
loc_824178EC:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_824178F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82417630
	sub_82417630(ctx, base);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417900:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, r26.u32);
	// b 0x824178f0
	goto loc_824178F0;
loc_8241790C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82413940
	sub_82413940(ctx, base);
	// b 0x82417808
	goto loc_82417808;
loc_82417920:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,132(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417930:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// ble cr6,0x82417950
	if (!cr6.gt) goto loc_82417950;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82485ee0
	sub_82485EE0(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
loc_82417950:
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(r29.u32, 2, xer);
	// ble cr6,0x82417fe4
	if (!cr6.gt) goto loc_82417FE4;
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// addi r10,r29,-2
	ctx.r10.s64 = r29.s64 + -2;
loc_82417964:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82417964
	if (!cr0.eq) goto loc_82417964;
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417984:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// ble cr6,0x82417fe4
	if (!cr6.gt) goto loc_82417FE4;
	// addi r11,r1,132
	r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
loc_824179A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x824179a0
	if (!cr0.eq) goto loc_824179A0;
	// b 0x82417fe4
	goto loc_82417FE4;
loc_824179C0:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_824179D0:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_824179E0:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_824179F0:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_824179FC:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82417A00:
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417A08:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// b 0x824179fc
	goto loc_824179FC;
loc_82417A18:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417A38:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// ble cr6,0x82417a58
	if (!cr6.gt) goto loc_82417A58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82485ee0
	sub_82485EE0(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
loc_82417A58:
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x82417a8c
	if (!cr6.gt) goto loc_82417A8C;
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82417A70:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82417a70
	if (!cr0.eq) goto loc_82417A70;
loc_82417A8C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r27,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r27.u32);
	// b 0x82417a00
	goto loc_82417A00;
loc_82417AA4:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82417fe4
	if (cr6.eq) goto loc_82417FE4;
loc_82417AB4:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x82417ab4
	if (!cr0.eq) goto loc_82417AB4;
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417AD4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824178e4
	if (cr0.eq) goto loc_824178E4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,2312
	ctx.r6.s64 = r11.s64 + 2312;
loc_82417AF0:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82417AF4:
	// bl 0x82409578
	sub_82409578(ctx, base);
	// b 0x82417808
	goto loc_82417808;
loc_82417AFC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824178e4
	if (cr0.eq) goto loc_824178E4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r11,2312
	ctx.r6.s64 = r11.s64 + 2312;
	// b 0x82417af4
	goto loc_82417AF4;
loc_82417B20:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r29,r11
	r29.u64 = r11.u64;
	// beq cr6,0x82417b84
	if (cr6.eq) goto loc_82417B84;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82417b84
	if (!cr6.eq) goto loc_82417B84;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e7d0
	sub_8240E7D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82417b84
	if (!cr0.eq) goto loc_82417B84;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82417b84
	if (!cr0.eq) goto loc_82417B84;
	// lwz r29,112(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82417B84:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824178e4
	if (cr0.eq) goto loc_824178E4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,2304
	ctx.r6.s64 = r11.s64 + 2304;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82417af4
	goto loc_82417AF4;
loc_82417BA8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824178e4
	if (cr0.eq) goto loc_824178E4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r11,2304
	ctx.r6.s64 = r11.s64 + 2304;
	// b 0x82417af0
	goto loc_82417AF0;
loc_82417BC8:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417fe4
	if (cr6.eq) goto loc_82417FE4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82417fe4
	if (!cr6.eq) goto loc_82417FE4;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82417fe4
	if (!cr0.eq) goto loc_82417FE4;
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417C10:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417c48
	if (cr6.eq) goto loc_82417C48;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,27856
	ctx.r6.s64 = r11.s64 + 27856;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r11,2257
	r11.s64 = 2257;
	// stw r26,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r26.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417C48:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x8240ef00
	sub_8240EF00(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417C60:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82417c80
	if (cr6.eq) goto loc_82417C80;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,2018
	ctx.r5.s64 = 2018;
	// addi r6,r11,27816
	ctx.r6.s64 = r11.s64 + 27816;
	// b 0x82417dbc
	goto loc_82417DBC;
loc_82417C80:
	// lis r11,3328
	r11.s64 = 218103808;
loc_82417C84:
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417C8C:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82417cb0
	if (cr0.eq) goto loc_82417CB0;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82417fe4
	if (!cr6.eq) goto loc_82417FE4;
	// lis r11,3072
	r11.s64 = 201326592;
	// b 0x82417c84
	goto loc_82417C84;
loc_82417CB0:
	// lis r11,256
	r11.s64 = 16777216;
	// b 0x82417c84
	goto loc_82417C84;
loc_82417CB8:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,132(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82417cdc
	if (cr6.eq) goto loc_82417CDC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,2010
	ctx.r5.s64 = 2010;
	// addi r6,r11,27736
	ctx.r6.s64 = r11.s64 + 27736;
	// b 0x82417dbc
	goto loc_82417DBC;
loc_82417CDC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82417cf8
	if (cr6.eq) goto loc_82417CF8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// addi r6,r11,27688
	ctx.r6.s64 = r11.s64 + 27688;
	// b 0x82417dbc
	goto loc_82417DBC;
loc_82417CF8:
	// lis r11,1536
	r11.s64 = 100663296;
	// b 0x82417c84
	goto loc_82417C84;
loc_82417D00:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82417d38
	if (cr6.eq) goto loc_82417D38;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,27600
	ctx.r6.s64 = r11.s64 + 27600;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r11,228
	r11.s64 = 228;
	// stw r26,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r26.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417D38:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x8240f0f8
	sub_8240F0F8(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417D50:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82417D54:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82413358
	sub_82413358(ctx, base);
	// b 0x82417fcc
	goto loc_82417FCC;
loc_82417D68:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82417d54
	goto loc_82417D54;
loc_82417D70:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x82417da4
	if (!cr6.eq) goto loc_82417DA4;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r27,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r27.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417DA4:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82417fe4
	if (cr6.eq) goto loc_82417FE4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r6,r11,27520
	ctx.r6.s64 = r11.s64 + 27520;
loc_82417DBC:
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// stw r26,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r26.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417DD0:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82417fd4
	if (cr0.eq) goto loc_82417FD4;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
loc_82417DE8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824860f8
	sub_824860F8(ctx, base);
	// b 0x82417fcc
	goto loc_82417FCC;
loc_82417DFC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82417fd4
	if (cr0.eq) goto loc_82417FD4;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x82417de8
	goto loc_82417DE8;
loc_82417E1C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82417e3c
	if (cr0.eq) goto loc_82417E3C;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82417e40
	goto loc_82417E40;
loc_82417E3C:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82417E40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240ec58
	sub_8240EC58(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417E5C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82417e7c
	if (cr0.eq) goto loc_82417E7C;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82417e80
	goto loc_82417E80;
loc_82417E7C:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82417E80:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240ec58
	sub_8240EC58(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r27,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r27.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417E9C:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417EB0:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,5
	r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
loc_82417ECC:
	// stfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 24, f0.u64);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417ED4:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,5
	r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x82417ecc
	goto loc_82417ECC;
loc_82417EF8:
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82417f1c
	if (!cr6.eq) goto loc_82417F1C;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// b 0x82417f74
	goto loc_82417F74;
loc_82417F1C:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82417f30
	if (!cr6.eq) goto loc_82417F30;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// b 0x82417f78
	goto loc_82417F78;
loc_82417F30:
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7F800000;
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82417f70
	if (!cr6.eq) goto loc_82417F70;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82417f50
	if (!cr6.eq) goto loc_82417F50;
	// lis r11,-128
	r11.s64 = -8388608;
	// b 0x82417f74
	goto loc_82417F74;
loc_82417F50:
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82417f68
	if (cr6.eq) goto loc_82417F68;
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82417f70
	if (!cr6.eq) goto loc_82417F70;
loc_82417F68:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82417f78
	goto loc_82417F78;
loc_82417F70:
	// xoris r11,r11,32768
	r11.u64 = r11.u64 ^ 2147483648;
loc_82417F74:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_82417F78:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfd f0,24(r31)
	PPC_STORE_U64(r31.u32 + 24, f0.u64);
	// b 0x82417fe4
	goto loc_82417FE4;
loc_82417F84:
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82417fd4
	if (cr0.eq) goto loc_82417FD4;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// bl 0x82485df8
	sub_82485DF8(ctx, base);
	// b 0x82417fcc
	goto loc_82417FCC;
loc_82417FB4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82417fd4
	if (cr0.eq) goto loc_82417FD4;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
loc_82417FCC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82417fd8
	goto loc_82417FD8;
loc_82417FD4:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82417FD8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240ec58
	sub_8240EC58(ctx, base);
loc_82417FE4:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8241804c
	if (!cr6.eq) goto loc_8241804C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82418018
	if (cr0.eq) goto loc_82418018;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r11,12976
	ctx.r6.s64 = r11.s64 + 12976;
	// bl 0x82409578
	sub_82409578(ctx, base);
	// b 0x8241801c
	goto loc_8241801C;
loc_82418018:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8241801C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82418048
	if (!cr6.eq) goto loc_82418048;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,12944
	ctx.r6.s64 = r11.s64 + 12944;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// stw r26,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r26.u32);
	// stw r26,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r26.u32);
	// b 0x8241804c
	goto loc_8241804C;
loc_82418048:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_8241804C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82418054"))) PPC_WEAK_FUNC(sub_82418054);
PPC_FUNC_IMPL(__imp__sub_82418054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418058"))) PPC_WEAK_FUNC(sub_82418058);
PPC_FUNC_IMPL(__imp__sub_82418058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r11,r31,1032
	r11.s64 = r31.s64 + 1032;
	// addi r24,r31,32
	r24.s64 = r31.s64 + 32;
	// li r26,-1
	r26.s64 = -1;
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r25,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r25.u32);
	// addi r27,r11,-17032
	r27.s64 = r11.s64 + -17032;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r24,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r24.u32);
	// sth r25,0(r24)
	PPC_STORE_U16(r24.u32 + 0, r25.u16);
	// addi r23,r11,12644
	r23.s64 = r11.s64 + 12644;
loc_824180A4:
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r27,400
	r11.s64 = r27.s64 + 400;
	// lhax r11,r29,r11
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + r11.u32));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824181a0
	if (!cr0.eq) goto loc_824181A0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x824180dc
	if (!cr6.lt) goto loc_824180DC;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3032);
	// bl 0x82414e40
	sub_82414E40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bge 0x824180dc
	if (!cr0.lt) goto loc_824180DC;
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
loc_824180DC:
	// addi r11,r27,880
	r11.s64 = r27.s64 + 880;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r29.u32 + r11.u32));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82418164
	if (cr0.eq) goto loc_82418164;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,917
	cr6.compare<uint32_t>(ctx.r10.u32, 917, xer);
	// bgt cr6,0x82418164
	if (cr6.gt) goto loc_82418164;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,3584
	ctx.r9.s64 = r27.s64 + 3584;
	// lhax r9,r10,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x82418164
	if (!cr6.eq) goto loc_82418164;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8241880c
	if (!cr6.lt) goto loc_8241880C;
	// addi r9,r27,1744
	ctx.r9.s64 = r27.s64 + 1744;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhax r30,r10,r9
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x824180a4
	if (!cr0.gt) goto loc_824180A4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x824180a4
	goto loc_824180A4;
loc_82418164:
	// addi r11,r27,1264
	r11.s64 = r27.s64 + 1264;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r29.u32 + r11.u32));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82418734
	if (cr0.eq) goto loc_82418734;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,917
	cr6.compare<uint32_t>(ctx.r10.u32, 917, xer);
	// bgt cr6,0x82418734
	if (cr6.gt) goto loc_82418734;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,3584
	ctx.r9.s64 = r27.s64 + 3584;
	// lhax r9,r10,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x82418734
	if (!cr6.eq) goto loc_82418734;
	// addi r11,r27,1744
	r11.s64 = r27.s64 + 1744;
	// lhax r11,r10,r11
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r11.u32));
loc_824181A0:
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r9,r27,200
	ctx.r9.s64 = r27.s64 + 200;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// lhax r29,r30,r9
	r29.s64 = int16_t(PPC_LOAD_U16(r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - r28.s64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x82418620
	if (cr6.gt) goto loc_82418620;
	// lis r12,-32248
	r12.s64 = -2113404928;
	// addi r12,r12,-8704
	r12.s64 = r12.s64 + -8704;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32190
	r12.s64 = -2109603840;
	// addi r12,r12,-32268
	r12.s64 = r12.s64 + -32268;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_824181F4;
	case 1:
		goto loc_824181FC;
	case 2:
		goto loc_82418208;
	case 3:
		goto loc_82418214;
	case 4:
		goto loc_82418220;
	case 5:
		goto loc_8241822C;
	case 6:
		goto loc_82418238;
	case 7:
		goto loc_82418244;
	case 8:
		goto loc_8241824C;
	case 9:
		goto loc_82418258;
	case 10:
		goto loc_82418264;
	case 11:
		goto loc_82418270;
	case 12:
		goto loc_8241827C;
	case 13:
		goto loc_82418288;
	case 14:
		goto loc_82418294;
	case 15:
		goto loc_824182A0;
	case 16:
		goto loc_824182AC;
	case 17:
		goto loc_824182B8;
	case 18:
		goto loc_824182C4;
	case 19:
		goto loc_824182D0;
	case 20:
		goto loc_824182DC;
	case 21:
		goto loc_824182E8;
	case 22:
		goto loc_824182F4;
	case 23:
		goto loc_82418300;
	case 24:
		goto loc_8241830C;
	case 25:
		goto loc_82418318;
	case 26:
		goto loc_82418324;
	case 27:
		goto loc_82418330;
	case 28:
		goto loc_8241833C;
	case 29:
		goto loc_82418348;
	case 30:
		goto loc_82418354;
	case 31:
		goto loc_82418360;
	case 32:
		goto loc_8241836C;
	case 33:
		goto loc_82418378;
	case 34:
		goto loc_82418384;
	case 35:
		goto loc_82418390;
	case 36:
		goto loc_8241839C;
	case 37:
		goto loc_824183A8;
	case 38:
		goto loc_824183B4;
	case 39:
		goto loc_824183C0;
	case 40:
		goto loc_824183CC;
	case 41:
		goto loc_824183D8;
	case 42:
		goto loc_824183E4;
	case 43:
		goto loc_824183F0;
	case 44:
		goto loc_824183FC;
	case 45:
		goto loc_82418408;
	case 46:
		goto loc_82418414;
	case 47:
		goto loc_82418420;
	case 48:
		goto loc_8241842C;
	case 49:
		goto loc_82418438;
	case 50:
		goto loc_82418444;
	case 51:
		goto loc_82418450;
	case 52:
		goto loc_8241845C;
	case 53:
		goto loc_82418468;
	case 54:
		goto loc_82418474;
	case 55:
		goto loc_82418480;
	case 56:
		goto loc_8241848C;
	case 57:
		goto loc_82418498;
	case 58:
		goto loc_824184A4;
	case 59:
		goto loc_824184B0;
	case 60:
		goto loc_824184BC;
	case 61:
		goto loc_824184C8;
	case 62:
		goto loc_824184D4;
	case 63:
		goto loc_824184E0;
	case 64:
		goto loc_824184EC;
	case 65:
		goto loc_824184F4;
	case 66:
		goto loc_824184FC;
	case 67:
		goto loc_82418508;
	case 68:
		goto loc_82418514;
	case 69:
		goto loc_82418520;
	case 70:
		goto loc_8241852C;
	case 71:
		goto loc_82418538;
	case 72:
		goto loc_82418544;
	case 73:
		goto loc_82418550;
	case 74:
		goto loc_8241855C;
	case 75:
		goto loc_82418568;
	case 76:
		goto loc_82418570;
	case 77:
		goto loc_82418578;
	case 78:
		goto loc_82418580;
	case 79:
		goto loc_82418588;
	case 80:
		goto loc_82418590;
	case 81:
		goto loc_82418598;
	case 82:
		goto loc_824185A0;
	case 83:
		goto loc_824185A8;
	case 84:
		goto loc_824185B0;
	case 85:
		goto loc_824185B8;
	case 86:
		goto loc_824185C0;
	case 87:
		goto loc_824185C8;
	case 88:
		goto loc_824185D0;
	case 89:
		goto loc_824185D0;
	case 90:
		goto loc_824185D8;
	case 91:
		goto loc_824185E0;
	case 92:
		goto loc_824185E8;
	case 93:
		goto loc_824185F0;
	case 94:
		goto loc_824185F8;
	case 95:
		goto loc_82418600;
	case 96:
		goto loc_82418608;
	case 97:
		goto loc_82418610;
	default:
		__builtin_unreachable();
	}
loc_824181F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82418614
	goto loc_82418614;
loc_824181FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82418618
	goto loc_82418618;
loc_82418208:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82418618
	goto loc_82418618;
loc_82418214:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82418618
	goto loc_82418618;
loc_82418220:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82418618
	goto loc_82418618;
loc_8241822C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82418618
	goto loc_82418618;
loc_82418238:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82418618
	goto loc_82418618;
loc_82418244:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82418614
	goto loc_82418614;
loc_8241824C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82418618
	goto loc_82418618;
loc_82418258:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82418618
	goto loc_82418618;
loc_82418264:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82418618
	goto loc_82418618;
loc_82418270:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82418618
	goto loc_82418618;
loc_8241827C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82418618
	goto loc_82418618;
loc_82418288:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82418618
	goto loc_82418618;
loc_82418294:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82418618
	goto loc_82418618;
loc_824182A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82418618
	goto loc_82418618;
loc_824182AC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82418618
	goto loc_82418618;
loc_824182B8:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x82418618
	goto loc_82418618;
loc_824182C4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82418618
	goto loc_82418618;
loc_824182D0:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x82418618
	goto loc_82418618;
loc_824182DC:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82418618
	goto loc_82418618;
loc_824182E8:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82418618
	goto loc_82418618;
loc_824182F4:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x82418618
	goto loc_82418618;
loc_82418300:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82418618
	goto loc_82418618;
loc_8241830C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82418618
	goto loc_82418618;
loc_82418318:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82418618
	goto loc_82418618;
loc_82418324:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x82418618
	goto loc_82418618;
loc_82418330:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x82418618
	goto loc_82418618;
loc_8241833C:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x82418618
	goto loc_82418618;
loc_82418348:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x82418618
	goto loc_82418618;
loc_82418354:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x82418618
	goto loc_82418618;
loc_82418360:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82418618
	goto loc_82418618;
loc_8241836C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82418618
	goto loc_82418618;
loc_82418378:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x82418618
	goto loc_82418618;
loc_82418384:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x82418618
	goto loc_82418618;
loc_82418390:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x82418618
	goto loc_82418618;
loc_8241839C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x82418618
	goto loc_82418618;
loc_824183A8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x82418618
	goto loc_82418618;
loc_824183B4:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82418618
	goto loc_82418618;
loc_824183C0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x82418618
	goto loc_82418618;
loc_824183CC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x82418618
	goto loc_82418618;
loc_824183D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x82418618
	goto loc_82418618;
loc_824183E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x82418618
	goto loc_82418618;
loc_824183F0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x82418618
	goto loc_82418618;
loc_824183FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x82418618
	goto loc_82418618;
loc_82418408:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x82418618
	goto loc_82418618;
loc_82418414:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x82418618
	goto loc_82418618;
loc_82418420:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82418618
	goto loc_82418618;
loc_8241842C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x82418618
	goto loc_82418618;
loc_82418438:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x82418618
	goto loc_82418618;
loc_82418444:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x82418618
	goto loc_82418618;
loc_82418450:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x82418618
	goto loc_82418618;
loc_8241845C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x82418618
	goto loc_82418618;
loc_82418468:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x82418618
	goto loc_82418618;
loc_82418474:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,54
	ctx.r4.s64 = 54;
	// b 0x82418618
	goto loc_82418618;
loc_82418480:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x82418618
	goto loc_82418618;
loc_8241848C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x82418618
	goto loc_82418618;
loc_82418498:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,57
	ctx.r4.s64 = 57;
	// b 0x82418618
	goto loc_82418618;
loc_824184A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82418618
	goto loc_82418618;
loc_824184B0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x82418618
	goto loc_82418618;
loc_824184BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x82418618
	goto loc_82418618;
loc_824184C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x82418618
	goto loc_82418618;
loc_824184D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x82418618
	goto loc_82418618;
loc_824184E0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x82418618
	goto loc_82418618;
loc_824184EC:
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x82418614
	goto loc_82418614;
loc_824184F4:
	// li r4,67
	ctx.r4.s64 = 67;
	// b 0x82418614
	goto loc_82418614;
loc_824184FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x82418618
	goto loc_82418618;
loc_82418508:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,69
	ctx.r4.s64 = 69;
	// b 0x82418618
	goto loc_82418618;
loc_82418514:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x82418618
	goto loc_82418618;
loc_82418520:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x82418618
	goto loc_82418618;
loc_8241852C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x82418618
	goto loc_82418618;
loc_82418538:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// b 0x82418618
	goto loc_82418618;
loc_82418544:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,74
	ctx.r4.s64 = 74;
	// b 0x82418618
	goto loc_82418618;
loc_82418550:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,75
	ctx.r4.s64 = 75;
	// b 0x82418618
	goto loc_82418618;
loc_8241855C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// b 0x82418618
	goto loc_82418618;
loc_82418568:
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x82418614
	goto loc_82418614;
loc_82418570:
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x82418614
	goto loc_82418614;
loc_82418578:
	// li r4,79
	ctx.r4.s64 = 79;
	// b 0x82418614
	goto loc_82418614;
loc_82418580:
	// li r4,80
	ctx.r4.s64 = 80;
	// b 0x82418614
	goto loc_82418614;
loc_82418588:
	// li r4,81
	ctx.r4.s64 = 81;
	// b 0x82418614
	goto loc_82418614;
loc_82418590:
	// li r4,82
	ctx.r4.s64 = 82;
	// b 0x82418614
	goto loc_82418614;
loc_82418598:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x82418614
	goto loc_82418614;
loc_824185A0:
	// li r4,84
	ctx.r4.s64 = 84;
	// b 0x82418614
	goto loc_82418614;
loc_824185A8:
	// li r4,85
	ctx.r4.s64 = 85;
	// b 0x82418614
	goto loc_82418614;
loc_824185B0:
	// li r4,87
	ctx.r4.s64 = 87;
	// b 0x82418614
	goto loc_82418614;
loc_824185B8:
	// li r4,89
	ctx.r4.s64 = 89;
	// b 0x82418614
	goto loc_82418614;
loc_824185C0:
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x82418614
	goto loc_82418614;
loc_824185C8:
	// li r4,86
	ctx.r4.s64 = 86;
	// b 0x82418614
	goto loc_82418614;
loc_824185D0:
	// li r4,88
	ctx.r4.s64 = 88;
	// b 0x82418614
	goto loc_82418614;
loc_824185D8:
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x82418614
	goto loc_82418614;
loc_824185E0:
	// li r4,93
	ctx.r4.s64 = 93;
	// b 0x82418614
	goto loc_82418614;
loc_824185E8:
	// li r4,94
	ctx.r4.s64 = 94;
	// b 0x82418614
	goto loc_82418614;
loc_824185F0:
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x82418614
	goto loc_82418614;
loc_824185F8:
	// li r4,96
	ctx.r4.s64 = 96;
	// b 0x82418614
	goto loc_82418614;
loc_82418600:
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x82418614
	goto loc_82418614;
loc_82418608:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x82418614
	goto loc_82418614;
loc_82418610:
	// li r4,99
	ctx.r4.s64 = 99;
loc_82418614:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82418618:
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3032);
	// bl 0x82417730
	sub_82417730(ctx, base);
loc_82418620:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - r28.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lha r11,0(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lhax r10,r30,r27
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + r27.u32));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824186b8
	if (!cr0.eq) goto loc_824186B8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x824186b8
	if (!cr6.eq) goto loc_824186B8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r30,25
	r30.s64 = 25;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x824186a4
	if (!cr6.lt) goto loc_824186A4;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3032);
	// bl 0x82414e40
	sub_82414E40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bge 0x824186a4
	if (!cr0.lt) goto loc_824186A4;
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
loc_824186A4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824180a4
	if (!cr6.eq) goto loc_824180A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82418820
	goto loc_82418820;
loc_824186B8:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,1648
	ctx.r10.s64 = r27.s64 + 1648;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824186f8
	if (cr0.eq) goto loc_824186F8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r10,917
	cr6.compare<uint32_t>(ctx.r10.u32, 917, xer);
	// bgt cr6,0x824186f8
	if (cr6.gt) goto loc_824186F8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r27,3584
	ctx.r8.s64 = r27.s64 + 3584;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bne cr6,0x824186f8
	if (!cr6.eq) goto loc_824186F8;
	// addi r11,r27,1744
	r11.s64 = r27.s64 + 1744;
	// lhax r30,r10,r11
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r11.u32));
	// b 0x82418700
	goto loc_82418700;
loc_824186F8:
	// addi r11,r27,784
	r11.s64 = r27.s64 + 784;
	// lhax r30,r9,r11
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r11.u32));
loc_82418700:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8241880c
	if (!cr6.lt) goto loc_8241880C;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_82418720:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x824180a4
	goto loc_824180A4;
loc_82418734:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82418758
	if (!cr6.eq) goto loc_82418758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82410af8
	sub_82410AF8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82418758:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x824187f8
	if (!cr6.lt) goto loc_824187F8;
	// li r11,3
	r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8241876C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r27,880
	r11.s64 = r27.s64 + 880;
	// lha r10,0(r9)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 0));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r11
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r11.u32));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824187a8
	if (cr0.eq) goto loc_824187A8;
	// addi r10,r11,256
	ctx.r10.s64 = r11.s64 + 256;
	// cmplwi cr6,r10,917
	cr6.compare<uint32_t>(ctx.r10.u32, 917, xer);
	// bgt cr6,0x824187a8
	if (cr6.gt) goto loc_824187A8;
	// addi r11,r27,3584
	r11.s64 = r27.s64 + 3584;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// beq cr6,0x824187c8
	if (cr6.eq) goto loc_824187C8;
loc_824187A8:
	// cmplw cr6,r9,r24
	cr6.compare<uint32_t>(ctx.r9.u32, r24.u32, xer);
	// ble cr6,0x8241881c
	if (!cr6.gt) goto loc_8241881C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8241876c
	goto loc_8241876C;
loc_824187C8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8241880c
	if (!cr6.lt) goto loc_8241880C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,1744
	ctx.r9.s64 = r27.s64 + 1744;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhax r30,r10,r9
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x82418720
	goto loc_82418720;
loc_824187F8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8241881c
	if (cr6.eq) goto loc_8241881C;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// b 0x824180a4
	goto loc_824180A4;
loc_8241880C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,13060
	ctx.r4.s64 = r11.s64 + 13060;
	// bl 0x82410af8
	sub_82410AF8(ctx, base);
loc_8241881C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82418820:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82418828"))) PPC_WEAK_FUNC(sub_82418828);
PPC_FUNC_IMPL(__imp__sub_82418828) {
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
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x823e1b08
	sub_823E1B08(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82418868
	if (!cr6.eq) goto loc_82418868;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
loc_82418868:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// li r29,1
	r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r29.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// bl 0x824101b0
	sub_824101B0(ctx, base);
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// clrlwi. r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824188c4
	if (cr0.eq) goto loc_824188C4;
	// stw r29,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r29.u32);
	// b 0x824188cc
	goto loc_824188CC;
loc_824188C4:
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
loc_824188CC:
	// rlwinm. r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824188dc
	if (cr0.eq) goto loc_824188DC;
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// b 0x824188e0
	goto loc_824188E0;
loc_824188DC:
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
loc_824188E0:
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82418908
	if (!cr6.eq) goto loc_82418908;
	// bl 0x823cdca0
	sub_823CDCA0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// bne 0x82418908
	if (!cr0.eq) goto loc_82418908;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82418a20
	goto loc_82418A20;
loc_82418908:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// beq cr6,0x82418928
	if (cr6.eq) goto loc_82418928;
	// li r11,4
	r11.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_82418928:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82418940
	if (cr6.eq) goto loc_82418940;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne 0x82418944
	if (!cr0.eq) goto loc_82418944;
loc_82418940:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82418944:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// beq cr6,0x824189a4
	if (cr6.eq) goto loc_824189A4;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824189a4
	if (!cr6.eq) goto loc_824189A4;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r3.u32);
	// bne 0x82418978
	if (!cr0.eq) goto loc_82418978;
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// b 0x824189a4
	goto loc_824189A4;
loc_82418978:
	// bl 0x8257b900
	sub_8257B900(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r29,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r29.u32);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82418994
	if (cr6.eq) goto loc_82418994;
	// lis r5,-2
	ctx.r5.s64 = -131072;
loc_82418994:
	// ori r5,r5,1021
	ctx.r5.u64 = ctx.r5.u64 | 1021;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82490dd8
	sub_82490DD8(ctx, base);
loc_824189A4:
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,3160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3160, r31.u32);
	// bl 0x82418058
	sub_82418058(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821efd88
	sub_821EFD88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824189f8
	if (!cr0.eq) goto loc_824189F8;
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824189f8
	if (!cr6.eq) goto loc_824189F8;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824189f8
	if (!cr6.eq) goto loc_824189F8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2376
	ctx.r4.s64 = r11.s64 + 2376;
	// bl 0x82410b48
	sub_82410B48(ctx, base);
loc_824189F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82416760
	sub_82416760(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821efd88
	sub_821EFD88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82418a1c
	if (cr0.eq) goto loc_82418A1C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82418a20
	goto loc_82418A20;
loc_82418A1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82418A20:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82418A28"))) PPC_WEAK_FUNC(sub_82418A28);
PPC_FUNC_IMPL(__imp__sub_82418A28) {
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
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r31,0
	r31.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// addi r11,r11,29876
	r11.s64 = r11.s64 + 29876;
	// mr r28,r31
	r28.u64 = r31.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82418A60:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x82418a84
	if (cr0.eq) goto loc_82418A84;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82418a60
	if (cr6.eq) goto loc_82418A60;
loc_82418A84:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,29868
	r11.s64 = r11.s64 + 29868;
loc_82418A8C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82418ab0
	if (cr0.eq) goto loc_82418AB0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82418a8c
	if (cr6.eq) goto loc_82418A8C;
loc_82418AB0:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// bne cr6,0x82418ad4
	if (!cr6.eq) goto loc_82418AD4;
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82418afc
	if (!cr0.eq) goto loc_82418AFC;
loc_82418AD4:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82418afc
	if (!cr0.eq) goto loc_82418AFC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,2001
	ctx.r5.s64 = 2001;
	// addi r6,r11,2440
	ctx.r6.s64 = r11.s64 + 2440;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// lis r31,-30602
	r31.s64 = -2005532672;
	// ori r31,r31,2905
	r31.u64 = r31.u64 | 2905;
	// b 0x82418bb0
	goto loc_82418BB0;
loc_82418AFC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82418b08
	if (cr0.eq) goto loc_82418B08;
	// li r28,1
	r28.s64 = 1;
loc_82418B08:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82418b4c
	if (cr0.eq) goto loc_82418B4C;
	// li r11,1
	r11.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r31.u32);
	// stw r31,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, r31.u32);
	// stw r31,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, r31.u32);
	// stw r31,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r31.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r11.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// b 0x82418b50
	goto loc_82418B50;
loc_82418B4C:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82418B50:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82418b64
	if (!cr6.eq) goto loc_82418B64;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82418bb0
	goto loc_82418BB0;
loc_82418B64:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82418828
	sub_82418828(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82418b9c
	if (cr0.lt) goto loc_82418B9C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824170b0
	sub_824170B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82418B9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824102d0
	sub_824102D0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82418BB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82418BBC"))) PPC_WEAK_FUNC(sub_82418BBC);
PPC_FUNC_IMPL(__imp__sub_82418BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82418BC0"))) PPC_WEAK_FUNC(sub_82418BC0);
PPC_FUNC_IMPL(__imp__sub_82418BC0) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,336
	ctx.r3.s64 = 336;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82418c28
	if (cr0.eq) goto loc_82418C28;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// b 0x82418c2c
	goto loc_82418C2C;
loc_82418C28:
	// li r31,0
	r31.s64 = 0;
loc_82418C2C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82418c40
	if (!cr6.eq) goto loc_82418C40;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82418cac
	goto loc_82418CAC;
loc_82418C40:
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// bl 0x823e2270
	sub_823E2270(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82418c98
	if (cr0.lt) goto loc_82418C98;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82418828
	sub_82418828(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82418c90
	if (cr0.lt) goto loc_82418C90;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240f2e8
	sub_8240F2E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82418C90:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e52d0
	sub_823E52D0(ctx, base);
loc_82418C98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824102d0
	sub_824102D0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82418CAC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82418CB8"))) PPC_WEAK_FUNC(sub_82418CB8);
PPC_FUNC_IMPL(__imp__sub_82418CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r6,1279
	ctx.r6.s64 = 1279;
	// lwz r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r9,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r9.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r9,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,340(r11)
	PPC_STORE_U32(r11.u32 + 340, ctx.r9.u32);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// stw r7,264(r11)
	PPC_STORE_U32(r11.u32 + 264, ctx.r7.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// rlwinm r9,r9,0,10,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// ori r9,r9,513
	ctx.r9.u64 = ctx.r9.u64 | 513;
	// stw r7,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r7.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// rlwimi r10,r6,18,6,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 18) & 0x3FC0000) | (ctx.r10.u64 & 0xFFFFFFFFFC03FFFF);
	// stw r5,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r5.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r8,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r8.u32);
	// rlwimi r10,r6,18,2,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 18) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r8,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r8.u32);
	// stw r4,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r4.u32);
	// stw r7,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r7.u32);
	// stw r8,464(r11)
	PPC_STORE_U32(r11.u32 + 464, ctx.r8.u32);
	// stw r5,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r5.u32);
	// stw r9,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82418D50"))) PPC_WEAK_FUNC(sub_82418D50);
PPC_FUNC_IMPL(__imp__sub_82418D50) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82418da0
	if (!cr6.gt) goto loc_82418DA0;
	// li r29,0
	r29.s64 = 0;
loc_82418D74:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// bl 0x82425998
	sub_82425998(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82418d74
	if (cr6.lt) goto loc_82418D74;
loc_82418DA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x824194f0
	if (!cr6.gt) goto loc_824194F0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lis r29,24816
	r29.s64 = 1626341376;
	// lis r14,4336
	r14.s64 = 284164096;
	// lis r15,4176
	r15.s64 = 273678336;
	// lis r30,1
	r30.s64 = 65536;
	// ori r16,r11,16385
	r16.u64 = r11.u64 | 16385;
	// lis r17,8208
	r17.s64 = 537919488;
	// lis r18,24640
	r18.s64 = 1614807040;
	// lis r19,20528
	r19.s64 = 1345323008;
	// lis r28,15
	r28.s64 = 983040;
	// lis r20,24736
	r20.s64 = 1621098496;
	// lis r21,29504
	r21.s64 = 1933574144;
	// lis r22,28768
	r22.s64 = 1885339648;
	// lis r23,28688
	r23.s64 = 1880096768;
	// lis r24,28880
	r24.s64 = 1892679680;
	// lis r25,29680
	r25.s64 = 1945108480;
	// lis r26,29600
	r26.s64 = 1939865600;
	// lis r27,29776
	r27.s64 = 1951399936;
loc_82418DFC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82418e34
	if (cr0.eq) goto loc_82418E34;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bne cr6,0x82418e34
	if (!cr6.eq) goto loc_82418E34;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
loc_82418E34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243b738
	sub_8243B738(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x824194f4
	if (cr0.lt) goto loc_824194F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// stw r10,1816(r31)
	PPC_STORE_U32(r31.u32 + 1816, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r10,0,0,11
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bgt cr6,0x82419210
	if (cr6.gt) goto loc_82419210;
	// beq cr6,0x824191f8
	if (cr6.eq) goto loc_824191F8;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82419068
	if (cr6.gt) goto loc_82419068;
	// beq cr6,0x8241905c
	if (cr6.eq) goto loc_8241905C;
	// cmplw cr6,r11,r14
	cr6.compare<uint32_t>(r11.u32, r14.u32, xer);
	// bgt cr6,0x82418f90
	if (cr6.gt) goto loc_82418F90;
	// beq cr6,0x82419448
	if (cr6.eq) goto loc_82419448;
	// cmplw cr6,r11,r15
	cr6.compare<uint32_t>(r11.u32, r15.u32, xer);
	// bgt cr6,0x82418f10
	if (cr6.gt) goto loc_82418F10;
	// beq cr6,0x82418f04
	if (cr6.eq) goto loc_82418F04;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82418ef8
	if (cr6.eq) goto loc_82418EF8;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418eec
	if (cr6.eq) goto loc_82418EEC;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418ee0
	if (cr6.eq) goto loc_82418EE0;
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418ed0
	if (cr6.eq) goto loc_82418ED0;
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418ED0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
loc_82418ED8:
	// stw r30,1816(r31)
	PPC_STORE_U32(r31.u32 + 1816, r30.u32);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418EE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418EEC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418EF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418F04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// b 0x82418ed8
	goto loc_82418ED8;
loc_82418F10:
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418f84
	if (cr6.eq) goto loc_82418F84;
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418f78
	if (cr6.eq) goto loc_82418F78;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418f58
	if (cr6.eq) goto loc_82418F58;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82418f70
	if (cr0.eq) goto loc_82418F70;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418F58:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82418f70
	if (cr0.eq) goto loc_82418F70;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418F70:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// b 0x824194d0
	goto loc_824194D0;
loc_82418F78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// b 0x82418ed8
	goto loc_82418ED8;
loc_82418F84:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// b 0x82418ed8
	goto loc_82418ED8;
loc_82418F90:
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(r11.u32, r17.u32, xer);
	// bgt cr6,0x82418ffc
	if (cr6.gt) goto loc_82418FFC;
	// beq cr6,0x82419348
	if (cr6.eq) goto loc_82419348;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418fe4
	if (cr6.eq) goto loc_82418FE4;
	// lis r10,4384
	ctx.r10.s64 = 287309824;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418eec
	if (cr6.eq) goto loc_82418EEC;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824194d8
	if (cr6.eq) goto loc_824194D8;
	// lis r10,4432
	ctx.r10.s64 = 290455552;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418eec
	if (cr6.eq) goto loc_82418EEC;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
loc_82418FD8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418FE4:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82419560
	if (!cr0.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// b 0x824194c4
	goto loc_824194C4;
loc_82418FFC:
	// lis r10,8224
	ctx.r10.s64 = 538968064;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419050
	if (cr6.eq) goto loc_82419050;
	// lis r10,8240
	ctx.r10.s64 = 540016640;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419044
	if (cr6.eq) goto loc_82419044;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419038
	if (cr6.eq) goto loc_82419038;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419038:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419044:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419050:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// b 0x824194c4
	goto loc_824194C4;
loc_8241905C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,260(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419068:
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(r11.u32, r18.u32, xer);
	// bgt cr6,0x8241916c
	if (cr6.gt) goto loc_8241916C;
	// beq cr6,0x824191b4
	if (cr6.eq) goto loc_824191B4;
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(r11.u32, r19.u32, xer);
	// bgt cr6,0x82419124
	if (cr6.gt) goto loc_82419124;
	// beq cr6,0x82419118
	if (cr6.eq) goto loc_82419118;
	// lis r9,8320
	ctx.r9.s64 = 545259520;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x824194d8
	if (cr6.eq) goto loc_824194D8;
	// lis r9,8336
	ctx.r9.s64 = 546308096;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82418eec
	if (cr6.eq) goto loc_82418EEC;
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82419100
	if (cr6.eq) goto loc_82419100;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x824190c8
	if (cr6.eq) goto loc_824190C8;
	// lis r10,20496
	ctx.r10.s64 = 1343225856;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// b 0x824194c4
	goto loc_824194C4;
loc_824190C8:
	// clrlwi r11,r10,12
	r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x824190ec
	if (cr6.eq) goto loc_824190EC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8241955c
	if (!cr6.eq) goto loc_8241955C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,584(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 584);
loc_824190E4:
	// stw r28,1816(r31)
	PPC_STORE_U32(r31.u32 + 1816, r28.u32);
	// b 0x824194c4
	goto loc_824194C4;
loc_824190EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lwz r11,580(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 580);
loc_824190F8:
	// stw r10,1816(r31)
	PPC_STORE_U32(r31.u32 + 1816, ctx.r10.u32);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419100:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82419560
	if (!cr0.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419118:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// b 0x824190e4
	goto loc_824190E4;
loc_82419124:
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824191f8
	if (cr6.eq) goto loc_824191F8;
	// lis r10,24592
	ctx.r10.s64 = 1611661312;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419294
	if (cr6.eq) goto loc_82419294;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241927c
	if (cr6.eq) goto loc_8241927C;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
loc_82419154:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82419560
	if (!cr0.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// b 0x824194c4
	goto loc_824194C4;
loc_8241916C:
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bgt cr6,0x824191cc
	if (cr6.gt) goto loc_824191CC;
	// beq cr6,0x824191f8
	if (cr6.eq) goto loc_824191F8;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824191f8
	if (cr6.eq) goto loc_824191F8;
	// lis r10,24672
	ctx.r10.s64 = 1616904192;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419294
	if (cr6.eq) goto loc_82419294;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241927c
	if (cr6.eq) goto loc_8241927C;
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419154
	if (cr6.eq) goto loc_82419154;
	// lis r10,24720
	ctx.r10.s64 = 1620049920;
loc_824191AC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
loc_824191B4:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,6,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82419560
	if (cr0.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// b 0x824194c4
	goto loc_824194C4;
loc_824191CC:
	// lis r10,24752
	ctx.r10.s64 = 1622147072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419294
	if (cr6.eq) goto loc_82419294;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241927c
	if (cr6.eq) goto loc_8241927C;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419154
	if (cr6.eq) goto loc_82419154;
	// lis r10,24800
	ctx.r10.s64 = 1625292800;
	// b 0x824191ac
	goto loc_824191AC;
loc_824191F8:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82419560
	if (!cr0.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419210:
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// bgt cr6,0x824193e8
	if (cr6.gt) goto loc_824193E8;
	// beq cr6,0x824193dc
	if (cr6.eq) goto loc_824193DC;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bgt cr6,0x82419300
	if (cr6.gt) goto loc_82419300;
	// beq cr6,0x824192dc
	if (cr6.eq) goto loc_824192DC;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bgt cr6,0x824192ac
	if (cr6.gt) goto loc_824192AC;
	// beq cr6,0x824192a0
	if (cr6.eq) goto loc_824192A0;
	// lis r10,24832
	ctx.r10.s64 = 1627389952;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419294
	if (cr6.eq) goto loc_82419294;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241927c
	if (cr6.eq) goto loc_8241927C;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419154
	if (cr6.eq) goto loc_82419154;
	// lis r10,24880
	ctx.r10.s64 = 1630535680;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824191b4
	if (cr6.eq) goto loc_824191B4;
	// lis r10,28672
	ctx.r10.s64 = 1879048192;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// b 0x824194c4
	goto loc_824194C4;
loc_8241927C:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82419560
	if (!cr0.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419294:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// b 0x824194c4
	goto loc_824194C4;
loc_824192A0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// b 0x824194c4
	goto loc_824194C4;
loc_824192AC:
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824192f4
	if (cr6.eq) goto loc_824192F4;
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824192e8
	if (cr6.eq) goto loc_824192E8;
	// lis r10,28736
	ctx.r10.s64 = 1883242496;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824192e8
	if (cr6.eq) goto loc_824192E8;
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
loc_824192DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// b 0x824194c4
	goto loc_824194C4;
loc_824192E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// b 0x824194c4
	goto loc_824194C4;
loc_824192F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419300:
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bgt cr6,0x8241937c
	if (cr6.gt) goto loc_8241937C;
	// beq cr6,0x82419370
	if (cr6.eq) goto loc_82419370;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824192dc
	if (cr6.eq) goto loc_824192DC;
	// lis r10,28800
	ctx.r10.s64 = 1887436800;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419360
	if (cr6.eq) goto loc_82419360;
	// lis r10,28816
	ctx.r10.s64 = 1888485376;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419354
	if (cr6.eq) goto loc_82419354;
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82418fd8
	if (cr6.eq) goto loc_82418FD8;
	// lis r10,28864
	ctx.r10.s64 = 1891631104;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
loc_82419348:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419354:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419360:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r11,284(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 284);
	// b 0x824190f8
	goto loc_824190F8;
loc_82419370:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// b 0x824194c4
	goto loc_824194C4;
loc_8241937C:
	// lis r10,29440
	ctx.r10.s64 = 1929379840;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824193c0
	if (cr6.eq) goto loc_824193C0;
	// lis r10,29456
	ctx.r10.s64 = 1930428416;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824193ac
	if (cr6.eq) goto loc_824193AC;
	// lis r10,29472
	ctx.r10.s64 = 1931476992;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824193b8
	if (cr6.eq) goto loc_824193B8;
	// lis r10,29488
	ctx.r10.s64 = 1932525568;
loc_824193A4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
loc_824193AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,296(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// b 0x824194c4
	goto loc_824194C4;
loc_824193B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824193c4
	goto loc_824193C4;
loc_824193C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824193C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,292(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x824194d0
	goto loc_824194D0;
loc_824193DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,300(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 300);
	// b 0x824194c4
	goto loc_824194C4;
loc_824193E8:
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bgt cr6,0x82419480
	if (cr6.gt) goto loc_82419480;
	// beq cr6,0x824193ac
	if (cr6.eq) goto loc_824193AC;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bgt cr6,0x82419454
	if (cr6.gt) goto loc_82419454;
	// beq cr6,0x8241943c
	if (cr6.eq) goto loc_8241943C;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419448
	if (cr6.eq) goto loc_82419448;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419448
	if (cr6.eq) goto loc_82419448;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419448
	if (cr6.eq) goto loc_82419448;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419448
	if (cr6.eq) goto loc_82419448;
	// lis r10,29584
	ctx.r10.s64 = 1938817024;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
loc_8241943C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419448:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,256(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 256);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419454:
	// lis r10,29616
	ctx.r10.s64 = 1940914176;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241943c
	if (cr6.eq) goto loc_8241943C;
	// lis r10,29632
	ctx.r10.s64 = 1941962752;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241943c
	if (cr6.eq) goto loc_8241943C;
	// lis r10,29648
	ctx.r10.s64 = 1943011328;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824193ac
	if (cr6.eq) goto loc_824193AC;
	// lis r10,29664
	ctx.r10.s64 = 1944059904;
	// b 0x824193a4
	goto loc_824193A4;
loc_82419480:
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bgt cr6,0x82419514
	if (cr6.gt) goto loc_82419514;
	// beq cr6,0x824194bc
	if (cr6.eq) goto loc_824194BC;
	// lis r10,29696
	ctx.r10.s64 = 1946157056;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824193ac
	if (cr6.eq) goto loc_824193AC;
	// lis r10,29712
	ctx.r10.s64 = 1947205632;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419508
	if (cr6.eq) goto loc_82419508;
	// lis r10,29728
	ctx.r10.s64 = 1948254208;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824194fc
	if (cr6.eq) goto loc_824194FC;
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
loc_824194BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 252);
loc_824194C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824194D0:
	// cmpw cr6,r3,r16
	cr6.compare<int32_t>(ctx.r3.s32, r16.s32, xer);
	// beq cr6,0x82419560
	if (cr6.eq) goto loc_82419560;
loc_824194D8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x82418dfc
	if (cr6.lt) goto loc_82418DFC;
loc_824194F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824194F4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd10
	return;
loc_824194FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419508:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419514:
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824194bc
	if (cr6.eq) goto loc_824194BC;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824194bc
	if (cr6.eq) goto loc_824194BC;
	// lis r10,29856
	ctx.r10.s64 = 1956642816;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419550
	if (cr6.eq) goto loc_82419550;
	// lis r10,29872
	ctx.r10.s64 = 1957691392;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419560
	if (!cr6.eq) goto loc_82419560;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// b 0x824194c4
	goto loc_824194C4;
loc_82419550:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// b 0x824194c4
	goto loc_824194C4;
loc_8241955C:
	// twi 31,r0,22
loc_82419560:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r5,4532
	ctx.r5.s64 = 4532;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r11,r11,0,7,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82419588
	if (cr0.eq) goto loc_82419588;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r11,2800
	ctx.r6.s64 = r11.s64 + 2800;
	// b 0x82419590
	goto loc_82419590;
loc_82419588:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r11,2744
	ctx.r6.s64 = r11.s64 + 2744;
loc_82419590:
	// bl 0x8244f958
	sub_8244F958(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// b 0x824194f4
	goto loc_824194F4;
}

__attribute__((alias("__imp__sub_8241959C"))) PPC_WEAK_FUNC(sub_8241959C);
PPC_FUNC_IMPL(__imp__sub_8241959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824195A0"))) PPC_WEAK_FUNC(sub_824195A0);
PPC_FUNC_IMPL(__imp__sub_824195A0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,344(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824195d0
	if (cr6.eq) goto loc_824195D0;
loc_824195C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82419698
	goto loc_82419698;
loc_824195D0:
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x824369d8
	sub_824369D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82419698
	if (cr0.lt) goto loc_82419698;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419650
	if (!cr6.eq) goto loc_82419650;
	// lis r4,-28672
	ctx.r4.s64 = -1879048192;
loc_824195FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82419600:
	// bl 0x82433c50
	sub_82433C50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82419698
	if (cr0.lt) goto loc_82419698;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,16389
	ctx.r10.s64 = 16389;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// rlwimi r4,r10,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,312(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 312);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82419698
	if (cr0.lt) goto loc_82419698;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242e1e8
	sub_8242E1E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82419698
	if (cr0.lt) goto loc_82419698;
	// b 0x824195c8
	goto loc_824195C8;
loc_82419650:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419664
	if (!cr6.eq) goto loc_82419664;
	// lis r4,-24576
	ctx.r4.s64 = -1610612736;
	// b 0x824195fc
	goto loc_824195FC;
loc_82419664:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8241967c
	if (!cr6.eq) goto loc_8241967C;
	// lis r4,-26624
	ctx.r4.s64 = -1744830464;
	// b 0x82419600
	goto loc_82419600;
loc_8241967C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,4814
	ctx.r5.s64 = 4814;
	// addi r6,r11,2856
	ctx.r6.s64 = r11.s64 + 2856;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8244f958
	sub_8244F958(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82419698:
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

__attribute__((alias("__imp__sub_824196B0"))) PPC_WEAK_FUNC(sub_824196B0);
PPC_FUNC_IMPL(__imp__sub_824196B0) {
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
	// lwz r11,344(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8241970c
	if (cr6.eq) goto loc_8241970C;
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// clrlwi r4,r11,1
	ctx.r4.u64 = r11.u32 & 0x7FFFFFFF;
loc_824196D8:
	// bl 0x82433c50
	sub_82433C50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x824196f8
	if (cr0.lt) goto loc_824196F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242e1e8
	sub_8242E1E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x824196f8
	if (cr0.lt) goto loc_824196F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824196F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8241970C:
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// b 0x824196d8
	goto loc_824196D8;
}

__attribute__((alias("__imp__sub_82419714"))) PPC_WEAK_FUNC(sub_82419714);
PPC_FUNC_IMPL(__imp__sub_82419714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419718"))) PPC_WEAK_FUNC(sub_82419718);
PPC_FUNC_IMPL(__imp__sub_82419718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419728"))) PPC_WEAK_FUNC(sub_82419728);
PPC_FUNC_IMPL(__imp__sub_82419728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,376(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 376);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419738"))) PPC_WEAK_FUNC(sub_82419738);
PPC_FUNC_IMPL(__imp__sub_82419738) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8243c9d8
	sub_8243C9D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241977c
	if (cr0.lt) goto loc_8241977C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8241977C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82419784"))) PPC_WEAK_FUNC(sub_82419784);
PPC_FUNC_IMPL(__imp__sub_82419784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419788"))) PPC_WEAK_FUNC(sub_82419788);
PPC_FUNC_IMPL(__imp__sub_82419788) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r10,112(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// bne cr6,0x824197e4
	if (!cr6.eq) goto loc_824197E4;
	// lis r11,228
	r11.s64 = 14942208;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x824197fc
	goto loc_824197FC;
loc_824197E4:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8242df90
	sub_8242DF90(ctx, base);
loc_824197FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82419804"))) PPC_WEAK_FUNC(sub_82419804);
PPC_FUNC_IMPL(__imp__sub_82419804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419808"))) PPC_WEAK_FUNC(sub_82419808);
PPC_FUNC_IMPL(__imp__sub_82419808) {
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
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8242d5c0
	sub_8242D5C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82419858
	if (cr0.lt) goto loc_82419858;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// bne cr6,0x82419854
	if (!cr6.eq) goto loc_82419854;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82419854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82419858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82419860"))) PPC_WEAK_FUNC(sub_82419860);
PPC_FUNC_IMPL(__imp__sub_82419860) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82419890
	if (cr6.eq) goto loc_82419890;
	// lis r24,15
	r24.s64 = 983040;
	// b 0x82419944
	goto loc_82419944;
loc_82419890:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824198b0
	if (cr0.eq) goto loc_824198B0;
	// lis r24,16
	r24.s64 = 1048576;
loc_824198B0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82419944
	if (cr6.eq) goto loc_82419944;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// addi r27,r11,2912
	r27.s64 = r11.s64 + 2912;
loc_824198C8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82419910
	if (cr6.lt) goto loc_82419910;
	// beq cr6,0x82419908
	if (cr6.eq) goto loc_82419908;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82419900
	if (cr6.lt) goto loc_82419900;
	// bne cr6,0x82419914
	if (!cr6.eq) goto loc_82419914;
	// lis r31,8
	r31.s64 = 524288;
	// b 0x82419914
	goto loc_82419914;
loc_82419900:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x82419914
	goto loc_82419914;
loc_82419908:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x82419914
	goto loc_82419914;
loc_82419910:
	// lis r31,1
	r31.s64 = 65536;
loc_82419914:
	// and. r11,r31,r24
	r11.u64 = r31.u64 & r24.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82419934
	if (cr0.eq) goto loc_82419934;
	// lwz r11,256(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 256);
	// li r5,4821
	ctx.r5.s64 = 4821;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x8244f958
	sub_8244F958(ctx, base);
loc_82419934:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// or r24,r31,r24
	r24.u64 = r31.u64 | r24.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824198c8
	if (!cr0.eq) goto loc_824198C8;
loc_82419944:
	// lwz r11,112(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824199d8
	if (!cr0.eq) goto loc_824199D8;
	// lwz r11,204(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 204);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824199d4
	if (!cr0.eq) goto loc_824199D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x824199cc
	if (cr6.eq) goto loc_824199CC;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82419970:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r7,r7,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x824199bc
	if (!cr0.eq) goto loc_824199BC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x824199cc
	if (cr0.eq) goto loc_824199CC;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x824199cc
	if (cr6.eq) goto loc_824199CC;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x824199cc
	if (!cr6.eq) goto loc_824199CC;
loc_824199BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// blt cr6,0x82419970
	if (cr6.lt) goto loc_82419970;
loc_824199CC:
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x824199d8
	if (!cr6.eq) goto loc_824199D8;
loc_824199D4:
	// oris r24,r24,32
	r24.u64 = r24.u64 | 2097152;
loc_824199D8:
	// lwz r11,204(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 204);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82419a30
	if (cr0.eq) goto loc_82419A30;
	// lwz r11,292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82419a30
	if (cr6.eq) goto loc_82419A30;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82419a30
	if (cr6.eq) goto loc_82419A30;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82419A00:
	// lwz r9,296(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 296);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 * 6;
	// lwz r7,292(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 292);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// blt cr6,0x82419a00
	if (cr6.lt) goto loc_82419A00;
loc_82419A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82419A40"))) PPC_WEAK_FUNC(sub_82419A40);
PPC_FUNC_IMPL(__imp__sub_82419A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r8,r11,12
	ctx.r8.u64 = r11.u32 & 0xFFFFF;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,0,0,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFF00000;
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r10,17
	cr6.compare<uint32_t>(ctx.r10.u32, 17, xer);
	// beq cr6,0x82419a7c
	if (cr6.eq) goto loc_82419A7C;
loc_82419A74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82419A7C:
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419a90
	if (!cr6.eq) goto loc_82419A90;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// b 0x82419af8
	goto loc_82419AF8;
loc_82419A90:
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82419acc
	if (cr6.gt) goto loc_82419ACC;
	// beq cr6,0x82419afc
	if (cr6.eq) goto loc_82419AFC;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419afc
	if (cr6.eq) goto loc_82419AFC;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419afc
	if (cr6.eq) goto loc_82419AFC;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419afc
	if (cr6.eq) goto loc_82419AFC;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// b 0x82419af4
	goto loc_82419AF4;
loc_82419ACC:
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419afc
	if (cr6.eq) goto loc_82419AFC;
	// lis r10,29776
	ctx.r10.s64 = 1951399936;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419afc
	if (cr6.eq) goto loc_82419AFC;
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82419afc
	if (cr6.eq) goto loc_82419AFC;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
loc_82419AF4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
loc_82419AF8:
	// bne cr6,0x82419a74
	if (!cr6.eq) goto loc_82419A74;
loc_82419AFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82419B04"))) PPC_WEAK_FUNC(sub_82419B04);
PPC_FUNC_IMPL(__imp__sub_82419B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419B08"))) PPC_WEAK_FUNC(sub_82419B08);
PPC_FUNC_IMPL(__imp__sub_82419B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,2992
	ctx.r6.s64 = r11.s64 + 2992;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,2972
	ctx.r5.s64 = r11.s64 + 2972;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,2956
	ctx.r4.s64 = r11.s64 + 2956;
	// lwz r11,524(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419B30"))) PPC_WEAK_FUNC(sub_82419B30);
PPC_FUNC_IMPL(__imp__sub_82419B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,3052
	ctx.r6.s64 = r11.s64 + 3052;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3028
	ctx.r5.s64 = r11.s64 + 3028;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,3020
	ctx.r4.s64 = r11.s64 + 3020;
	// lwz r11,532(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419B58"))) PPC_WEAK_FUNC(sub_82419B58);
PPC_FUNC_IMPL(__imp__sub_82419B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,3052
	ctx.r6.s64 = r11.s64 + 3052;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3028
	ctx.r5.s64 = r11.s64 + 3028;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,3020
	ctx.r4.s64 = r11.s64 + 3020;
	// lwz r11,536(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 536);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419B80"))) PPC_WEAK_FUNC(sub_82419B80);
PPC_FUNC_IMPL(__imp__sub_82419B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,3116
	ctx.r6.s64 = r11.s64 + 3116;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3096
	ctx.r5.s64 = r11.s64 + 3096;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,3080
	ctx.r4.s64 = r11.s64 + 3080;
	// lwz r11,532(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419BA8"))) PPC_WEAK_FUNC(sub_82419BA8);
PPC_FUNC_IMPL(__imp__sub_82419BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,3116
	ctx.r6.s64 = r11.s64 + 3116;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3096
	ctx.r5.s64 = r11.s64 + 3096;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,3080
	ctx.r4.s64 = r11.s64 + 3080;
	// lwz r11,536(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 536);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419BD0"))) PPC_WEAK_FUNC(sub_82419BD0);
PPC_FUNC_IMPL(__imp__sub_82419BD0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82419bf8
	if (!cr6.eq) goto loc_82419BF8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82419d44
	goto loc_82419D44;
loc_82419BF8:
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82419c10
	if (!cr6.eq) goto loc_82419C10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82419d44
	goto loc_82419D44;
loc_82419C10:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_82419C28:
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82419c8c
	if (!cr6.eq) goto loc_82419C8C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82419c8c
	if (!cr6.eq) goto loc_82419C8C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82419c8c
	if (!cr6.eq) goto loc_82419C8C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82419d30
	if (cr6.eq) goto loc_82419D30;
loc_82419C8C:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// oris r9,r9,45056
	ctx.r9.u64 = ctx.r9.u64 | 2952790016;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82419cf0
	if (cr6.lt) goto loc_82419CF0;
	// beq cr6,0x82419ce8
	if (cr6.eq) goto loc_82419CE8;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x82419ce0
	if (cr6.lt) goto loc_82419CE0;
	// bne cr6,0x82419cf0
	if (!cr6.eq) goto loc_82419CF0;
	// oris r9,r9,255
	ctx.r9.u64 = ctx.r9.u64 | 16711680;
	// b 0x82419cec
	goto loc_82419CEC;
loc_82419CE0:
	// oris r9,r9,170
	ctx.r9.u64 = ctx.r9.u64 | 11141120;
	// b 0x82419cec
	goto loc_82419CEC;
loc_82419CE8:
	// oris r9,r9,85
	ctx.r9.u64 = ctx.r9.u64 | 5570560;
loc_82419CEC:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82419CF0:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82419d04
	if (!cr6.eq) goto loc_82419D04;
	// oris r11,r9,3328
	r11.u64 = ctx.r9.u64 | 218103808;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82419D04:
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,572(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82419d44
	if (cr0.lt) goto loc_82419D44;
loc_82419D30:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// blt cr6,0x82419c28
	if (cr6.lt) goto loc_82419C28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82438240
	sub_82438240(ctx, base);
loc_82419D44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82419D4C"))) PPC_WEAK_FUNC(sub_82419D4C);
PPC_FUNC_IMPL(__imp__sub_82419D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419D50"))) PPC_WEAK_FUNC(sub_82419D50);
PPC_FUNC_IMPL(__imp__sub_82419D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,588(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 588);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419D64"))) PPC_WEAK_FUNC(sub_82419D64);
PPC_FUNC_IMPL(__imp__sub_82419D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419D68"))) PPC_WEAK_FUNC(sub_82419D68);
PPC_FUNC_IMPL(__imp__sub_82419D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,592(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 592);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419D7C"))) PPC_WEAK_FUNC(sub_82419D7C);
PPC_FUNC_IMPL(__imp__sub_82419D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419D80"))) PPC_WEAK_FUNC(sub_82419D80);
PPC_FUNC_IMPL(__imp__sub_82419D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,588(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 588);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419D94"))) PPC_WEAK_FUNC(sub_82419D94);
PPC_FUNC_IMPL(__imp__sub_82419D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419D98"))) PPC_WEAK_FUNC(sub_82419D98);
PPC_FUNC_IMPL(__imp__sub_82419D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,592(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 592);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419DAC"))) PPC_WEAK_FUNC(sub_82419DAC);
PPC_FUNC_IMPL(__imp__sub_82419DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82419DB0"))) PPC_WEAK_FUNC(sub_82419DB0);
PPC_FUNC_IMPL(__imp__sub_82419DB0) {
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
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82419e1c
	if (!cr6.eq) goto loc_82419E1C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,576(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 576);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82419f98
	if (cr0.lt) goto loc_82419F98;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82439278
	sub_82439278(ctx, base);
	// b 0x82419f98
	goto loc_82419F98;
loc_82419E1C:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82419ef0
	if (!cr0.eq) goto loc_82419EF0;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x82419ee0
	if (cr0.eq) goto loc_82419EE0;
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r7,r10,r11
	ctx.r7.s64 = r11.s64 - ctx.r10.s64;
loc_82419E50:
	// lwzx r11,r7,r9
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r30,4(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82419ee0
	if (!cr6.eq) goto loc_82419EE0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x82419ee0
	if (!cr6.eq) goto loc_82419EE0;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x82419ee0
	if (!cr6.eq) goto loc_82419EE0;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x82419ee0
	if (!cr6.eq) goto loc_82419EE0;
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82419ee0
	if (!cr6.eq) goto loc_82419EE0;
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82419ed0
	if (cr0.eq) goto loc_82419ED0;
	// lwz r11,96(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82419ee0
	if (!cr6.eq) goto loc_82419EE0;
loc_82419ED0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// blt cr6,0x82419e50
	if (cr6.lt) goto loc_82419E50;
loc_82419EE0:
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82419ef0
	if (!cr6.eq) goto loc_82419EF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82419f98
	goto loc_82419F98;
loc_82419EF0:
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82419f60
	if (!cr6.gt) goto loc_82419F60;
	// li r11,0
	r11.s64 = 0;
loc_82419F04:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r5,r7,0,4,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82419f48
	if (!cr0.eq) goto loc_82419F48;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82419F48:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// blt cr6,0x82419f04
	if (cr6.lt) goto loc_82419F04;
loc_82419F60:
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// clrlwi r5,r11,12
	ctx.r5.u64 = r11.u32 & 0xFFFFF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82419f98
	if (cr0.lt) goto loc_82419F98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82439878
	sub_82439878(ctx, base);
loc_82419F98:
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

__attribute__((alias("__imp__sub_82419FB0"))) PPC_WEAK_FUNC(sub_82419FB0);
PPC_FUNC_IMPL(__imp__sub_82419FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,604(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 604);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419FD0"))) PPC_WEAK_FUNC(sub_82419FD0);
PPC_FUNC_IMPL(__imp__sub_82419FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,604(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 604);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82419FF0"))) PPC_WEAK_FUNC(sub_82419FF0);
PPC_FUNC_IMPL(__imp__sub_82419FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,600(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 600);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A000"))) PPC_WEAK_FUNC(sub_8241A000);
PPC_FUNC_IMPL(__imp__sub_8241A000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,632(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 632);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A010"))) PPC_WEAK_FUNC(sub_8241A010);
PPC_FUNC_IMPL(__imp__sub_8241A010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,620(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 620);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A020"))) PPC_WEAK_FUNC(sub_8241A020);
PPC_FUNC_IMPL(__imp__sub_8241A020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,636(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 636);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A030"))) PPC_WEAK_FUNC(sub_8241A030);
PPC_FUNC_IMPL(__imp__sub_8241A030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,608(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 608);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A040"))) PPC_WEAK_FUNC(sub_8241A040);
PPC_FUNC_IMPL(__imp__sub_8241A040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,624(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 624);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A050"))) PPC_WEAK_FUNC(sub_8241A050);
PPC_FUNC_IMPL(__imp__sub_8241A050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,640(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 640);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A060"))) PPC_WEAK_FUNC(sub_8241A060);
PPC_FUNC_IMPL(__imp__sub_8241A060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,612(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 612);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A070"))) PPC_WEAK_FUNC(sub_8241A070);
PPC_FUNC_IMPL(__imp__sub_8241A070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,628(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 628);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A080"))) PPC_WEAK_FUNC(sub_8241A080);
PPC_FUNC_IMPL(__imp__sub_8241A080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r12,0(r3)
	r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,644(r12)
	r11.u64 = PPC_LOAD_U32(r12.u32 + 644);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8241A090"))) PPC_WEAK_FUNC(sub_8241A090);
PPC_FUNC_IMPL(__imp__sub_8241A090) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r11,r11,3144
	r11.s64 = r11.s64 + 3144;
	// lwz r3,1528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1528);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8241a0c4
	if (cr0.eq) goto loc_8241A0C4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_8241A0C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82439d60
	sub_82439D60(ctx, base);
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

__attribute__((alias("__imp__sub_8241A0E0"))) PPC_WEAK_FUNC(sub_8241A0E0);
PPC_FUNC_IMPL(__imp__sub_8241A0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241A0EC"))) PPC_WEAK_FUNC(sub_8241A0EC);
PPC_FUNC_IMPL(__imp__sub_8241A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A0F0"))) PPC_WEAK_FUNC(sub_8241A0F0);
PPC_FUNC_IMPL(__imp__sub_8241A0F0) {
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
	// lwz r10,1536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1536);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bne 0x8241a114
	if (!cr0.eq) goto loc_8241A114;
	// li r30,1024
	r30.s64 = 1024;
loc_8241A114:
	// lwz r11,1532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1532);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x8241a138
	if (!cr6.gt) goto loc_8241A138;
	// lwz r11,1532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1532);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
loc_8241A12C:
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x8241a12c
	if (cr6.gt) goto loc_8241A12C;
loc_8241A138:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241a184
	if (cr6.eq) goto loc_8241A184;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8241a160
	if (!cr0.eq) goto loc_8241A160;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8241a188
	goto loc_8241A188;
loc_8241A160:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,1532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1532);
	// lwz r4,1528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1528);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,1528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1528);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r29,1528(r31)
	PPC_STORE_U32(r31.u32 + 1528, r29.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(r31.u32 + 1536, r30.u32);
loc_8241A184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241A188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241A190"))) PPC_WEAK_FUNC(sub_8241A190);
PPC_FUNC_IMPL(__imp__sub_8241A190) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x8241a1b8
	if (!cr6.eq) goto loc_8241A1B8;
loc_8241A1B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241a464
	goto loc_8241A464;
loc_8241A1B8:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r10,0,0,11
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8241a460
	if (cr0.eq) goto loc_8241A460;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8241a460
	if (cr6.eq) goto loc_8241A460;
	// clrlwi r22,r10,12
	r22.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lis r9,28752
	ctx.r9.s64 = 1884291072;
	// divwu r25,r10,r22
	r25.u32 = ctx.r10.u32 / r22.u32;
	// twllei r22,0
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8241a204
	if (cr6.eq) goto loc_8241A204;
	// lis r10,28768
	ctx.r10.s64 = 1885339648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241a204
	if (cr6.eq) goto loc_8241A204;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8241a208
	if (!cr6.eq) goto loc_8241A208;
loc_8241A204:
	// li r25,2
	r25.s64 = 2;
loc_8241A208:
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(r25.u32, 1, xer);
	// ble cr6,0x8241a460
	if (!cr6.gt) goto loc_8241A460;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r29,3
	r29.s64 = 3;
	// stwx r30,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, r30.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r5
	PPC_STORE_U32(r11.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// addi r26,r1,160
	r26.s64 = ctx.r1.s64 + 160;
	// stwx r30,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r30.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r1,80
	r20.s64 = ctx.r1.s64 + 80;
	// stwx r29,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r29.u32);
	// addi r19,r1,160
	r19.s64 = ctx.r1.s64 + 160;
	// stwx r30,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + r27.u32, r30.u32);
	// mr r23,r30
	r23.u64 = r30.u64;
	// stwx r7,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + r26.u32, ctx.r7.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stwx r30,r8,r20
	PPC_STORE_U32(ctx.r8.u32 + r20.u32, r30.u32);
	// stwx r7,r8,r19
	PPC_STORE_U32(ctx.r8.u32 + r19.u32, ctx.r7.u32);
	// beq cr6,0x8241a3e8
	if (cr6.eq) goto loc_8241A3E8;
	// rlwinm r26,r22,2,0,29
	r26.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_8241A294:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,17
	cr6.compare<uint32_t>(ctx.r4.u32, 17, xer);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bne cr6,0x8241a2d0
	if (!cr6.eq) goto loc_8241A2D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8241a3d8
	if (!cr0.eq) goto loc_8241A3D8;
loc_8241A2D0:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8241a2ec
	if (cr0.eq) goto loc_8241A2EC;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8241a2ec
	if (!cr0.eq) goto loc_8241A2EC;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// b 0x8241a334
	goto loc_8241A334;
loc_8241A2EC:
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8241a2fc
	if (cr0.eq) goto loc_8241A2FC;
	// lwz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// b 0x8241a334
	goto loc_8241A334;
loc_8241A2FC:
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8241a330
	if (cr0.eq) goto loc_8241A330;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241a330
	if (!cr6.eq) goto loc_8241A330;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x8241a330
	if (cr6.eq) goto loc_8241A330;
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x8241a334
	goto loc_8241A334;
loc_8241A330:
	// lwz r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 136);
loc_8241A334:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8241a394
	if (cr6.eq) goto loc_8241A394;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
loc_8241A34C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x8241a384
	if (!cr6.eq) goto loc_8241A384;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bne cr6,0x8241a384
	if (!cr6.eq) goto loc_8241A384;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241a394
	if (cr6.eq) goto loc_8241A394;
loc_8241A384:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// blt cr6,0x8241a34c
	if (cr6.lt) goto loc_8241A34C;
loc_8241A394:
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x8241a3c0
	if (!cr6.eq) goto loc_8241A3C0;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// bgt cr6,0x8241a46c
	if (cr6.gt) goto loc_8241A46C;
loc_8241A3C0:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8241a3d8
	if (!cr6.eq) goto loc_8241A3D8;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r23,2
	cr6.compare<uint32_t>(r23.u32, 2, xer);
	// bgt cr6,0x8241a46c
	if (cr6.gt) goto loc_8241A46C;
loc_8241A3D8:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r27,r26,r27
	r27.u64 = r26.u64 + r27.u64;
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(r28.u32, r25.u32, xer);
	// blt cr6,0x8241a294
	if (cr6.lt) goto loc_8241A294;
loc_8241A3E8:
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8241a460
	if (cr6.eq) goto loc_8241A460;
	// rlwinm r27,r22,2,0,29
	r27.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_8241A3F8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r11,r11,0,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8241a450
	if (!cr6.eq) goto loc_8241A450;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,112(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r4,108(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// bne cr6,0x8241a450
	if (!cr6.eq) goto loc_8241A450;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8241a46c
	if (cr6.eq) goto loc_8241A46C;
loc_8241A450:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(r28.u32, r25.u32, xer);
	// blt cr6,0x8241a3f8
	if (cr6.lt) goto loc_8241A3F8;
loc_8241A460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241A464:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8239bd24
	return;
loc_8241A46C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8241a1b0
	if (cr6.eq) goto loc_8241A1B0;
	// stw r28,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r28.u32);
	// b 0x8241a1b0
	goto loc_8241A1B0;
}

__attribute__((alias("__imp__sub_8241A47C"))) PPC_WEAK_FUNC(sub_8241A47C);
PPC_FUNC_IMPL(__imp__sub_8241A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A480"))) PPC_WEAK_FUNC(sub_8241A480);
PPC_FUNC_IMPL(__imp__sub_8241A480) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82439cf0
	sub_82439CF0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r11,3144
	ctx.r10.s64 = r11.s64 + 3144;
	// li r11,0
	r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,504
	ctx.r3.s64 = r31.s64 + 504;
	// stw r9,1812(r31)
	PPC_STORE_U32(r31.u32 + 1812, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,1528(r31)
	PPC_STORE_U32(r31.u32 + 1528, r11.u32);
	// stw r11,1532(r31)
	PPC_STORE_U32(r31.u32 + 1532, r11.u32);
	// stw r11,1536(r31)
	PPC_STORE_U32(r31.u32 + 1536, r11.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
	// stw r11,1672(r31)
	PPC_STORE_U32(r31.u32 + 1672, r11.u32);
	// stw r11,1808(r31)
	PPC_STORE_U32(r31.u32 + 1808, r11.u32);
	// stw r11,1804(r31)
	PPC_STORE_U32(r31.u32 + 1804, r11.u32);
	// bl 0x8240f360
	sub_8240F360(ctx, base);
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

__attribute__((alias("__imp__sub_8241A500"))) PPC_WEAK_FUNC(sub_8241A500);
PPC_FUNC_IMPL(__imp__sub_8241A500) {
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
	// bl 0x8241a090
	sub_8241A090(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8241a534
	if (cr0.eq) goto loc_8241A534;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_8241A534:
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

__attribute__((alias("__imp__sub_8241A550"))) PPC_WEAK_FUNC(sub_8241A550);
PPC_FUNC_IMPL(__imp__sub_8241A550) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823defe0
	sub_823DEFE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stb r10,2143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2143, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8241A5B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8241a5b0
	if (!cr6.eq) goto loc_8241A5B0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8241a0f0
	sub_8241A0F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a608
	if (cr0.lt) goto loc_8241A608;
	// lwz r11,1528(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1528);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,1532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1532);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,1532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1532);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,1532(r31)
	PPC_STORE_U32(r31.u32 + 1532, r11.u32);
loc_8241A608:
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

__attribute__((alias("__imp__sub_8241A620"))) PPC_WEAK_FUNC(sub_8241A620);
PPC_FUNC_IMPL(__imp__sub_8241A620) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241a66c
	if (!cr6.gt) goto loc_8241A66C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3792
	r29.s64 = r11.s64 + 3792;
loc_8241A648:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a670
	if (cr0.lt) goto loc_8241A670;
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241a648
	if (cr6.lt) goto loc_8241A648;
loc_8241A66C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241A670:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241A678"))) PPC_WEAK_FUNC(sub_8241A678);
PPC_FUNC_IMPL(__imp__sub_8241A678) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241a7b8
	if (!cr6.gt) goto loc_8241A7B8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r22,r11,3820
	r22.s64 = r11.s64 + 3820;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3812
	r29.s64 = r11.s64 + 3812;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3800
	r28.s64 = r11.s64 + 3800;
loc_8241A6C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a7bc
	if (cr0.lt) goto loc_8241A7BC;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a7bc
	if (cr0.lt) goto loc_8241A7BC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8241a75c
	if (cr6.eq) goto loc_8241A75C;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a7bc
	if (cr0.lt) goto loc_8241A7BC;
loc_8241A75C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8241a794
	if (cr6.eq) goto loc_8241A794;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a7bc
	if (cr0.lt) goto loc_8241A7BC;
loc_8241A794:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a7bc
	if (cr0.lt) goto loc_8241A7BC;
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8241a6c4
	if (cr6.lt) goto loc_8241A6C4;
loc_8241A7B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241A7BC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8241A7C4"))) PPC_WEAK_FUNC(sub_8241A7C4);
PPC_FUNC_IMPL(__imp__sub_8241A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A7C8"))) PPC_WEAK_FUNC(sub_8241A7C8);
PPC_FUNC_IMPL(__imp__sub_8241A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwimi r11,r10,12,21,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// bgt cr6,0x8241a86c
	if (cr6.gt) goto loc_8241A86C;
	// beq cr6,0x8241a84c
	if (cr6.eq) goto loc_8241A84C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x8241a80c
	if (!cr6.gt) goto loc_8241A80C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8241a82c
	if (cr6.eq) goto loc_8241A82C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// ble cr6,0x8241a87c
	if (!cr6.gt) goto loc_8241A87C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x8241a87c
	if (cr6.gt) goto loc_8241A87C;
loc_8241A80C:
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-7744
	ctx.r9.s64 = ctx.r9.s64 + -7744;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r11,3888
	ctx.r5.s64 = r11.s64 + 3888;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x823df1b0
	sub_823DF1B0(ctx, base);
	return;
loc_8241A82C:
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-7744
	ctx.r9.s64 = ctx.r9.s64 + -7744;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r11,3872
	ctx.r5.s64 = r11.s64 + 3872;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x823df1b0
	sub_823DF1B0(ctx, base);
	return;
loc_8241A84C:
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-7744
	ctx.r9.s64 = ctx.r9.s64 + -7744;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r11,3852
	ctx.r5.s64 = r11.s64 + 3852;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x823df1b0
	sub_823DF1B0(ctx, base);
	return;
loc_8241A86C:
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x8241a80c
	if (cr6.eq) goto loc_8241A80C;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// beq cr6,0x8241a8a0
	if (cr6.eq) goto loc_8241A8A0;
loc_8241A87C:
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-7744
	ctx.r9.s64 = ctx.r9.s64 + -7744;
	// clrlwi r11,r10,21
	r11.u64 = ctx.r10.u32 & 0x7FF;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// addi r5,r10,3840
	ctx.r5.s64 = ctx.r10.s64 + 3840;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x823df1b0
	sub_823DF1B0(ctx, base);
	return;
loc_8241A8A0:
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7744
	ctx.r10.s64 = ctx.r10.s64 + -7744;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3828
	ctx.r5.s64 = r11.s64 + 3828;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x823df1b0
	sub_823DF1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8241A8BC"))) PPC_WEAK_FUNC(sub_8241A8BC);
PPC_FUNC_IMPL(__imp__sub_8241A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241A8C0"))) PPC_WEAK_FUNC(sub_8241A8C0);
PPC_FUNC_IMPL(__imp__sub_8241A8C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a950
	if (cr0.lt) goto loc_8241A950;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3916
	ctx.r4.s64 = r11.s64 + 3916;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a950
	if (cr0.lt) goto loc_8241A950;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r8,r30,13,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1;
	// addi r4,r11,3908
	ctx.r4.s64 = r11.s64 + 3908;
	// rlwinm r7,r30,14,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 14) & 0x1;
	// rlwinm r6,r30,15,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 15) & 0x1;
	// lwz r11,388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// rlwinm r5,r30,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a950
	if (cr0.lt) goto loc_8241A950;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3904
	ctx.r4.s64 = r11.s64 + 3904;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241a950
	if (cr0.lt) goto loc_8241A950;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241A950:
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

__attribute__((alias("__imp__sub_8241A968"))) PPC_WEAK_FUNC(sub_8241A968);
PPC_FUNC_IMPL(__imp__sub_8241A968) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1808(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1808);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8241aa1c
	if (cr6.eq) goto loc_8241AA1C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241aa1c
	if (!cr6.gt) goto loc_8241AA1C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,3904
	r27.s64 = r11.s64 + 3904;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,2956
	r29.s64 = r11.s64 + 2956;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3928
	r28.s64 = r11.s64 + 3928;
loc_8241A9AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241aa20
	if (cr0.lt) goto loc_8241AA20;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241aa20
	if (cr0.lt) goto loc_8241AA20;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 436);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241aa20
	if (cr0.lt) goto loc_8241AA20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241aa20
	if (cr0.lt) goto loc_8241AA20;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241a9ac
	if (cr6.lt) goto loc_8241A9AC;
loc_8241AA1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241AA20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8241AA28"))) PPC_WEAK_FUNC(sub_8241AA28);
PPC_FUNC_IMPL(__imp__sub_8241AA28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8241ab1c
	if (cr6.eq) goto loc_8241AB1C;
	// andis. r11,r4,85
	r11.u64 = ctx.r4.u64 & 5570560;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8241aa54
	if (cr0.eq) goto loc_8241AA54;
	// li r26,1
	r26.s64 = 1;
	// b 0x8241aa64
	goto loc_8241AA64;
loc_8241AA54:
	// andis. r11,r4,170
	r11.u64 = ctx.r4.u64 & 11141120;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r26,r11,2
	r26.s64 = r11.s64 + 2;
loc_8241AA64:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241ab1c
	if (!cr6.gt) goto loc_8241AB1C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,3904
	r27.s64 = r11.s64 + 3904;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3928
	r29.s64 = r11.s64 + 3928;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3944
	r28.s64 = r11.s64 + 3944;
loc_8241AA8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ab20
	if (cr0.lt) goto loc_8241AB20;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ab20
	if (cr0.lt) goto loc_8241AB20;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ab20
	if (cr0.lt) goto loc_8241AB20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ab20
	if (cr0.lt) goto loc_8241AB20;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241aa8c
	if (cr6.lt) goto loc_8241AA8C;
loc_8241AB1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241AB20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8241AB28"))) PPC_WEAK_FUNC(sub_8241AB28);
PPC_FUNC_IMPL(__imp__sub_8241AB28) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8241ac98
	if (cr6.eq) goto loc_8241AC98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241ac98
	if (!cr6.gt) goto loc_8241AC98;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,3904
	r27.s64 = r11.s64 + 3904;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3980
	r29.s64 = r11.s64 + 3980;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,3944
	r26.s64 = r11.s64 + 3944;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r25,r11,3968
	r25.s64 = r11.s64 + 3968;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3956
	r28.s64 = r11.s64 + 3956;
loc_8241AB8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ac9c
	if (cr0.lt) goto loc_8241AC9C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bne cr6,0x8241abe4
	if (!cr6.eq) goto loc_8241ABE4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8241ABE4:
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x8241ac00
	if (!cr6.eq) goto loc_8241AC00;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_8241AC00:
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8241ac9c
	if (cr6.lt) goto loc_8241AC9C;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x8241ac1c
	if (!cr6.eq) goto loc_8241AC1C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x8241ac38
	goto loc_8241AC38;
loc_8241AC1C:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_8241AC38:
	// andis. r11,r23,3328
	r11.u64 = r23.u64 & 218103808;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// beq 0x8241ac5c
	if (cr0.eq) goto loc_8241AC5C;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// b 0x8241ac64
	goto loc_8241AC64;
loc_8241AC5C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8241AC64:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ac9c
	if (cr0.lt) goto loc_8241AC9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ac9c
	if (cr0.lt) goto loc_8241AC9C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ab8c
	if (cr6.lt) goto loc_8241AB8C;
loc_8241AC98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241AC9C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8241ACA4"))) PPC_WEAK_FUNC(sub_8241ACA4);
PPC_FUNC_IMPL(__imp__sub_8241ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241ACA8"))) PPC_WEAK_FUNC(sub_8241ACA8);
PPC_FUNC_IMPL(__imp__sub_8241ACA8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15
	r11.s64 = 983040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x8241add4
	if (cr6.eq) goto loc_8241ADD4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241add4
	if (!cr6.gt) goto loc_8241ADD4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,3904
	r26.s64 = r11.s64 + 3904;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3988
	r28.s64 = r11.s64 + 3988;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3980
	r29.s64 = r11.s64 + 3980;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,3956
	r27.s64 = r11.s64 + 3956;
loc_8241AD00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241add8
	if (cr0.lt) goto loc_8241ADD8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x8241ad54
	if (!cr6.eq) goto loc_8241AD54;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_8241AD54:
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8241add8
	if (cr6.lt) goto loc_8241ADD8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8241ad70
	if (!cr6.eq) goto loc_8241AD70;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x8241ad8c
	goto loc_8241AD8C;
loc_8241AD70:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_8241AD8C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241add8
	if (cr0.lt) goto loc_8241ADD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241add8
	if (cr0.lt) goto loc_8241ADD8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ad00
	if (cr6.lt) goto loc_8241AD00;
loc_8241ADD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241ADD8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8241ADE0"))) PPC_WEAK_FUNC(sub_8241ADE0);
PPC_FUNC_IMPL(__imp__sub_8241ADE0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r11,1808(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1808);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8241af20
	if (cr6.eq) goto loc_8241AF20;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241af20
	if (!cr6.gt) goto loc_8241AF20;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,3904
	r26.s64 = r11.s64 + 3904;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3980
	r29.s64 = r11.s64 + 3980;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3968
	r28.s64 = r11.s64 + 3968;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,3956
	r27.s64 = r11.s64 + 3956;
loc_8241AE38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241af24
	if (cr0.lt) goto loc_8241AF24;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x8241aea0
	if (!cr6.eq) goto loc_8241AEA0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_8241AEA0:
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8241af24
	if (cr6.lt) goto loc_8241AF24;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8241aebc
	if (!cr6.eq) goto loc_8241AEBC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// b 0x8241aed8
	goto loc_8241AED8;
loc_8241AEBC:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_8241AED8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241af24
	if (cr0.lt) goto loc_8241AF24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241af24
	if (cr0.lt) goto loc_8241AF24;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ae38
	if (cr6.lt) goto loc_8241AE38;
loc_8241AF20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241AF24:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8241AF2C"))) PPC_WEAK_FUNC(sub_8241AF2C);
PPC_FUNC_IMPL(__imp__sub_8241AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241AF30"))) PPC_WEAK_FUNC(sub_8241AF30);
PPC_FUNC_IMPL(__imp__sub_8241AF30) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241afe0
	if (cr0.lt) goto loc_8241AFE0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r11,4008
	ctx.r5.s64 = r11.s64 + 4008;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 440);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241afe0
	if (cr0.lt) goto loc_8241AFE0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3904
	ctx.r4.s64 = r11.s64 + 3904;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241afe0
	if (cr0.lt) goto loc_8241AFE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241afe0
	if (cr0.lt) goto loc_8241AFE0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,3996
	ctx.r4.s64 = r11.s64 + 3996;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241afe0
	if (cr0.lt) goto loc_8241AFE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241AFE0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8241AFE8"))) PPC_WEAK_FUNC(sub_8241AFE8);
PPC_FUNC_IMPL(__imp__sub_8241AFE8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b0b0
	if (cr0.lt) goto loc_8241B0B0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4024
	ctx.r4.s64 = r11.s64 + 4024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b0b0
	if (cr0.lt) goto loc_8241B0B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b0b0
	if (cr0.lt) goto loc_8241B0B0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,3980
	ctx.r4.s64 = r11.s64 + 3980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b0b0
	if (cr0.lt) goto loc_8241B0B0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r5,r11,4008
	ctx.r5.s64 = r11.s64 + 4008;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 472);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b0b0
	if (cr0.lt) goto loc_8241B0B0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b0b0
	if (cr0.lt) goto loc_8241B0B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241B0B0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8241B0B8"))) PPC_WEAK_FUNC(sub_8241B0B8);
PPC_FUNC_IMPL(__imp__sub_8241B0B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b134
	if (cr0.lt) goto loc_8241B134;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,4032
	ctx.r4.s64 = r11.s64 + 4032;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b134
	if (cr0.lt) goto loc_8241B134;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b134
	if (cr0.lt) goto loc_8241B134;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,3996
	ctx.r4.s64 = r11.s64 + 3996;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b134
	if (cr0.lt) goto loc_8241B134;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241B134:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8241B13C"))) PPC_WEAK_FUNC(sub_8241B13C);
PPC_FUNC_IMPL(__imp__sub_8241B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B140"))) PPC_WEAK_FUNC(sub_8241B140);
PPC_FUNC_IMPL(__imp__sub_8241B140) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b1bc
	if (cr0.lt) goto loc_8241B1BC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4024
	ctx.r4.s64 = r11.s64 + 4024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b1bc
	if (cr0.lt) goto loc_8241B1BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b1bc
	if (cr0.lt) goto loc_8241B1BC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r4,r11,4048
	ctx.r4.s64 = r11.s64 + 4048;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b1bc
	if (cr0.lt) goto loc_8241B1BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241B1BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8241B1C4"))) PPC_WEAK_FUNC(sub_8241B1C4);
PPC_FUNC_IMPL(__imp__sub_8241B1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B1C8"))) PPC_WEAK_FUNC(sub_8241B1C8);
PPC_FUNC_IMPL(__imp__sub_8241B1C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r11,2992
	ctx.r6.s64 = r11.s64 + 2992;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,2972
	ctx.r5.s64 = r11.s64 + 2972;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r30,r11,2956
	r30.s64 = r11.s64 + 2956;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,528(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b2a0
	if (cr0.lt) goto loc_8241B2A0;
	// lwz r11,1804(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1804);
	// addi r11,r11,418
	r11.s64 = r11.s64 + 418;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8241b2b8
	if (cr6.eq) goto loc_8241B2B8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8241b2b8
	if (cr6.eq) goto loc_8241B2B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b2a0
	if (cr0.lt) goto loc_8241B2A0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4088
	ctx.r4.s64 = r11.s64 + 4088;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b2a0
	if (cr0.lt) goto loc_8241B2A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,4072
	ctx.r5.s64 = r11.s64 + 4072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,460(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b2a0
	if (cr0.lt) goto loc_8241B2A0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
loc_8241B28C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b2a0
	if (cr0.lt) goto loc_8241B2A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241B2A0:
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
loc_8241B2B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4072
	ctx.r4.s64 = r11.s64 + 4072;
	// lwz r11,564(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b2a0
	if (cr0.lt) goto loc_8241B2A0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4068
	ctx.r4.s64 = r11.s64 + 4068;
	// b 0x8241b28c
	goto loc_8241B28C;
}

__attribute__((alias("__imp__sub_8241B2E8"))) PPC_WEAK_FUNC(sub_8241B2E8);
PPC_FUNC_IMPL(__imp__sub_8241B2E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b364
	if (cr0.lt) goto loc_8241B364;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,3980
	ctx.r4.s64 = r11.s64 + 3980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b364
	if (cr0.lt) goto loc_8241B364;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 392);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b364
	if (cr0.lt) goto loc_8241B364;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3904
	ctx.r4.s64 = r11.s64 + 3904;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b364
	if (cr0.lt) goto loc_8241B364;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241B364:
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

__attribute__((alias("__imp__sub_8241B37C"))) PPC_WEAK_FUNC(sub_8241B37C);
PPC_FUNC_IMPL(__imp__sub_8241B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B380"))) PPC_WEAK_FUNC(sub_8241B380);
PPC_FUNC_IMPL(__imp__sub_8241B380) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,540(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 540);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,2956
	r30.s64 = r11.s64 + 2956;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,568(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,3988
	ctx.r5.s64 = r11.s64 + 3988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,488(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4116
	ctx.r4.s64 = r11.s64 + 4116;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,492(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 492);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4112
	ctx.r4.s64 = r11.s64 + 4112;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4108
	ctx.r4.s64 = r11.s64 + 4108;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b4cc
	if (cr0.lt) goto loc_8241B4CC;
	// lwz r10,1804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1804);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,1808(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1808);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,419
	ctx.r10.s64 = ctx.r10.s64 + 419;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,1808(r31)
	PPC_STORE_U32(r31.u32 + 1808, r11.u32);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
	// lwz r10,1804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1804);
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,1804(r31)
	PPC_STORE_U32(r31.u32 + 1804, ctx.r10.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
	// bl 0x824384f0
	sub_824384F0(ctx, base);
loc_8241B4CC:
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

__attribute__((alias("__imp__sub_8241B4E4"))) PPC_WEAK_FUNC(sub_8241B4E4);
PPC_FUNC_IMPL(__imp__sub_8241B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241B4E8"))) PPC_WEAK_FUNC(sub_8241B4E8);
PPC_FUNC_IMPL(__imp__sub_8241B4E8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1804(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1804);
	// addi r11,r11,418
	r11.s64 = r11.s64 + 418;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8241b6b0
	if (cr6.lt) goto loc_8241B6B0;
	// bne cr6,0x8241b740
	if (!cr6.eq) goto loc_8241B740;
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4144
	ctx.r4.s64 = r11.s64 + 4144;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3916
	ctx.r4.s64 = r11.s64 + 3916;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r7,r11,2992
	ctx.r7.s64 = r11.s64 + 2992;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,2972
	ctx.r6.s64 = r11.s64 + 2972;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,4132
	ctx.r5.s64 = r11.s64 + 4132;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,472(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 472);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,3904
	r28.s64 = r11.s64 + 3904;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4088
	ctx.r4.s64 = r11.s64 + 4088;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,2956
	r30.s64 = r11.s64 + 2956;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r29,r11,3988
	r29.s64 = r11.s64 + 3988;
	// lwz r11,460(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 488);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4116
	ctx.r4.s64 = r11.s64 + 4116;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,492(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 492);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4112
	ctx.r4.s64 = r11.s64 + 4112;
	// b 0x8241b6fc
	goto loc_8241B6FC;
loc_8241B6B0:
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4144
	ctx.r4.s64 = r11.s64 + 4144;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4124
	ctx.r4.s64 = r11.s64 + 4124;
loc_8241B6FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4108
	ctx.r4.s64 = r11.s64 + 4108;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b748
	if (cr0.lt) goto loc_8241B748;
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
loc_8241B740:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824387e0
	sub_824387E0(ctx, base);
loc_8241B748:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8241B750"))) PPC_WEAK_FUNC(sub_8241B750);
PPC_FUNC_IMPL(__imp__sub_8241B750) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1804(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1804);
	// addi r11,r11,418
	r11.s64 = r11.s64 + 418;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8241b800
	if (cr6.lt) goto loc_8241B800;
	// bne cr6,0x8241b7d8
	if (!cr6.eq) goto loc_8241B7D8;
	// lwz r10,1808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1808);
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r10,1808(r31)
	PPC_STORE_U32(r31.u32 + 1808, ctx.r10.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b7ec
	if (cr0.lt) goto loc_8241B7EC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4148
	ctx.r4.s64 = r11.s64 + 4148;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b7ec
	if (cr0.lt) goto loc_8241B7EC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 544);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8241B7D0:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b7ec
	if (cr0.lt) goto loc_8241B7EC;
loc_8241B7D8:
	// lwz r11,1804(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1804);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1804(r31)
	PPC_STORE_U32(r31.u32 + 1804, r11.u32);
	// bl 0x82438848
	sub_82438848(ctx, base);
loc_8241B7EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8241B800:
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b7ec
	if (cr0.lt) goto loc_8241B7EC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4148
	ctx.r4.s64 = r11.s64 + 4148;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// b 0x8241b7d0
	goto loc_8241B7D0;
}

__attribute__((alias("__imp__sub_8241B830"))) PPC_WEAK_FUNC(sub_8241B830);
PPC_FUNC_IMPL(__imp__sub_8241B830) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,3988
	r30.s64 = r11.s64 + 3988;
	// lwz r11,1808(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1808);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// stw r11,1808(r31)
	PPC_STORE_U32(r31.u32 + 1808, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b950
	if (cr0.lt) goto loc_8241B950;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,2956
	ctx.r4.s64 = r11.s64 + 2956;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,488(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b950
	if (cr0.lt) goto loc_8241B950;
	// lwz r11,1540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1540);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1540(r31)
	PPC_STORE_U32(r31.u32 + 1540, r11.u32);
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b950
	if (cr0.lt) goto loc_8241B950;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4148
	ctx.r4.s64 = r11.s64 + 4148;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b950
	if (cr0.lt) goto loc_8241B950;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8241b8f4
	if (cr6.eq) goto loc_8241B8F4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,552(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 552);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b950
	if (cr0.lt) goto loc_8241B950;
loc_8241B8F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,560(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 560);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b950
	if (cr0.lt) goto loc_8241B950;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 544);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241b950
	if (cr0.lt) goto loc_8241B950;
	// lwz r11,1804(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1804);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1804(r31)
	PPC_STORE_U32(r31.u32 + 1804, r11.u32);
	// beq cr6,0x8241b94c
	if (cr6.eq) goto loc_8241B94C;
	// bl 0x82437358
	sub_82437358(ctx, base);
	// b 0x8241b950
	goto loc_8241B950;
loc_8241B94C:
	// bl 0x824372f0
	sub_824372F0(ctx, base);
loc_8241B950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241B958"))) PPC_WEAK_FUNC(sub_8241B958);
PPC_FUNC_IMPL(__imp__sub_8241B958) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,4072
	r30.s64 = r11.s64 + 4072;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,568(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ba0c
	if (cr0.lt) goto loc_8241BA0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ba0c
	if (cr0.lt) goto loc_8241BA0C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4088
	ctx.r4.s64 = r11.s64 + 4088;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ba0c
	if (cr0.lt) goto loc_8241BA0C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,2956
	ctx.r4.s64 = r11.s64 + 2956;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,460(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ba0c
	if (cr0.lt) goto loc_8241BA0C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4016
	ctx.r4.s64 = r11.s64 + 4016;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ba0c
	if (cr0.lt) goto loc_8241BA0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824373c0
	sub_824373C0(ctx, base);
loc_8241BA0C:
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

__attribute__((alias("__imp__sub_8241BA24"))) PPC_WEAK_FUNC(sub_8241BA24);
PPC_FUNC_IMPL(__imp__sub_8241BA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BA28"))) PPC_WEAK_FUNC(sub_8241BA28);
PPC_FUNC_IMPL(__imp__sub_8241BA28) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lis r28,29600
	r28.s64 = 1939865600;
	// bne cr6,0x8241ba54
	if (!cr6.eq) goto loc_8241BA54;
	// lis r28,29584
	r28.s64 = 1938817024;
loc_8241BA54:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r26,r11,3956
	r26.s64 = r11.s64 + 3956;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4164
	ctx.r4.s64 = r11.s64 + 4164;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r11,3908
	ctx.r4.s64 = r11.s64 + 3908;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,3904
	r27.s64 = r11.s64 + 3904;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241bbd0
	if (!cr6.gt) goto loc_8241BBD0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,4156
	r28.s64 = r11.s64 + 4156;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3980
	r29.s64 = r11.s64 + 3980;
loc_8241BB30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241bbd4
	if (cr0.lt) goto loc_8241BBD4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241bb30
	if (cr6.lt) goto loc_8241BB30;
loc_8241BBD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241BBD4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8241BBDC"))) PPC_WEAK_FUNC(sub_8241BBDC);
PPC_FUNC_IMPL(__imp__sub_8241BBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241BBE0"))) PPC_WEAK_FUNC(sub_8241BBE0);
PPC_FUNC_IMPL(__imp__sub_8241BBE0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r24,r11,4164
	r24.s64 = r11.s64 + 4164;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r11,3908
	r27.s64 = r11.s64 + 3908;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,3904
	r22.s64 = r11.s64 + 3904;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,4204
	r29.s64 = r11.s64 + 4204;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,4156
	r26.s64 = r11.s64 + 4156;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r25,r11,4196
	r25.s64 = r11.s64 + 4196;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3980
	r28.s64 = r11.s64 + 3980;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r23,r11,4184
	r23.s64 = r11.s64 + 4184;
	// ble cr6,0x8241bdb8
	if (!cr6.gt) goto loc_8241BDB8;
loc_8241BD18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241bd18
	if (cr6.lt) goto loc_8241BD18;
loc_8241BDB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,4176
	ctx.r4.s64 = r11.s64 + 4176;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// beq 0x8241beb8
	if (cr0.eq) goto loc_8241BEB8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3968
	ctx.r5.s64 = r11.s64 + 3968;
	// b 0x8241bec0
	goto loc_8241BEC0;
loc_8241BEB8:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3956
	ctx.r5.s64 = r11.s64 + 3956;
loc_8241BEC0:
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241bf74
	if (!cr6.gt) goto loc_8241BF74;
loc_8241BED4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241bed4
	if (cr6.lt) goto loc_8241BED4;
loc_8241BF74:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241c050
	if (!cr6.gt) goto loc_8241C050;
loc_8241BF84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,520(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 520);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241c054
	if (cr0.lt) goto loc_8241C054;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241bf84
	if (cr6.lt) goto loc_8241BF84;
loc_8241C050:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241C054:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8241C05C"))) PPC_WEAK_FUNC(sub_8241C05C);
PPC_FUNC_IMPL(__imp__sub_8241C05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241C060"))) PPC_WEAK_FUNC(sub_8241C060);
PPC_FUNC_IMPL(__imp__sub_8241C060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r20,r11,4164
	r20.s64 = r11.s64 + 4164;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r19,r11,3908
	r19.s64 = r11.s64 + 3908;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r24,r11,3904
	r24.s64 = r11.s64 + 3904;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,3980
	r26.s64 = r11.s64 + 3980;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r25,r11,3968
	r25.s64 = r11.s64 + 3968;
	// ble cr6,0x8241c1bc
	if (!cr6.gt) goto loc_8241C1BC;
loc_8241C114:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c114
	if (cr6.lt) goto loc_8241C114;
loc_8241C1BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r21,r11,4156
	r21.s64 = r11.s64 + 4156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,412(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r22,r11,4184
	r22.s64 = r11.s64 + 4184;
	// ble cr6,0x8241c2e0
	if (!cr6.gt) goto loc_8241C2E0;
loc_8241C238:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c238
	if (cr6.lt) goto loc_8241C238;
loc_8241C2E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,408(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 408);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,4204
	r28.s64 = r11.s64 + 4204;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,4236
	ctx.r4.s64 = r11.s64 + 4236;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241c444
	if (!cr6.gt) goto loc_8241C444;
loc_8241C3C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,496(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 496);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c3c0
	if (cr6.lt) goto loc_8241C3C0;
loc_8241C444:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r23,r11,4196
	r23.s64 = r11.s64 + 4196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r11,468(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241c538
	if (!cr6.gt) goto loc_8241C538;
loc_8241C4B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 504);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c4b8
	if (cr6.lt) goto loc_8241C4B8;
loc_8241C538:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241c5cc
	if (!cr6.gt) goto loc_8241C5CC;
loc_8241C548:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,500(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 500);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c548
	if (cr6.lt) goto loc_8241C548;
loc_8241C5CC:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241c674
	if (!cr6.gt) goto loc_8241C674;
loc_8241C5DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,516(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 516);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c5dc
	if (cr6.lt) goto loc_8241C5DC;
loc_8241C674:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241c704
	if (!cr6.gt) goto loc_8241C704;
loc_8241C684:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,508(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 508);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c684
	if (cr6.lt) goto loc_8241C684;
loc_8241C704:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 392);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241c810
	if (!cr6.gt) goto loc_8241C810;
loc_8241C768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c768
	if (cr6.lt) goto loc_8241C768;
loc_8241C810:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3956
	r29.s64 = r11.s64 + 3956;
	// ble cr6,0x8241c900
	if (!cr6.gt) goto loc_8241C900;
loc_8241C864:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,476(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 476);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c864
	if (cr6.lt) goto loc_8241C864;
loc_8241C900:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241c9ac
	if (!cr6.gt) goto loc_8241C9AC;
loc_8241C910:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241c910
	if (cr6.lt) goto loc_8241C910;
loc_8241C9AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4224
	ctx.r4.s64 = r11.s64 + 4224;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241cb34
	if (!cr6.gt) goto loc_8241CB34;
loc_8241CA90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ca90
	if (cr6.lt) goto loc_8241CA90;
loc_8241CB34:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241cc1c
	if (!cr6.gt) goto loc_8241CC1C;
loc_8241CB80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241cb80
	if (cr6.lt) goto loc_8241CB80;
loc_8241CC1C:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241ccc8
	if (!cr6.gt) goto loc_8241CCC8;
loc_8241CC2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241cc2c
	if (cr6.lt) goto loc_8241CC2C;
loc_8241CCC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,388(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241cddc
	if (!cr6.gt) goto loc_8241CDDC;
loc_8241CD40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241cd40
	if (cr6.lt) goto loc_8241CD40;
loc_8241CDDC:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241ce94
	if (!cr6.gt) goto loc_8241CE94;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,4216
	r29.s64 = r11.s64 + 4216;
loc_8241CDF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241ce98
	if (cr0.lt) goto loc_8241CE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241cdf4
	if (cr6.lt) goto loc_8241CDF4;
loc_8241CE94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241CE98:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8241CEA0"))) PPC_WEAK_FUNC(sub_8241CEA0);
PPC_FUNC_IMPL(__imp__sub_8241CEA0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r31,r11,4244
	r31.s64 = r11.s64 + 4244;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8241cf04
	if (cr0.eq) goto loc_8241CF04;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8241cf04
	if (cr0.eq) goto loc_8241CF04;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,4184
	ctx.r5.s64 = r11.s64 + 4184;
	// b 0x8241cf50
	goto loc_8241CF50;
loc_8241CF04:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r31,r11,4176
	r31.s64 = r11.s64 + 4176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8241cf48
	if (cr0.eq) goto loc_8241CF48;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8241cf48
	if (cr0.eq) goto loc_8241CF48;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3968
	ctx.r5.s64 = r11.s64 + 3968;
	// b 0x8241cf50
	goto loc_8241CF50;
loc_8241CF48:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,3956
	ctx.r5.s64 = r11.s64 + 3956;
loc_8241CF50:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,3904
	r27.s64 = r11.s64 + 3904;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,3980
	r29.s64 = r11.s64 + 3980;
	// ble cr6,0x8241d030
	if (!cr6.gt) goto loc_8241D030;
loc_8241CF7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d114
	if (cr0.lt) goto loc_8241D114;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d114
	if (cr0.lt) goto loc_8241D114;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,512(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 512);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d114
	if (cr0.lt) goto loc_8241D114;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d114
	if (cr0.lt) goto loc_8241D114;
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8241cf7c
	if (cr6.lt) goto loc_8241CF7C;
loc_8241D030:
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241d110
	if (!cr6.gt) goto loc_8241D110;
loc_8241D040:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d114
	if (cr0.lt) goto loc_8241D114;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d114
	if (cr0.lt) goto loc_8241D114;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,520(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 520);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d114
	if (cr0.lt) goto loc_8241D114;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d114
	if (cr0.lt) goto loc_8241D114;
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8241d040
	if (cr6.lt) goto loc_8241D040;
loc_8241D110:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241D114:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8241D11C"))) PPC_WEAK_FUNC(sub_8241D11C);
PPC_FUNC_IMPL(__imp__sub_8241D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D120"))) PPC_WEAK_FUNC(sub_8241D120);
PPC_FUNC_IMPL(__imp__sub_8241D120) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	r11.s64 = 5;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8241a7c8
	sub_8241A7C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r26
	r29.u64 = r26.u64;
	// addi r28,r11,4252
	r28.s64 = r11.s64 + 4252;
loc_8241D178:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d1d0
	if (cr0.lt) goto loc_8241D1D0;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d1d0
	if (cr0.lt) goto loc_8241D1D0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x8241d178
	if (cr6.lt) goto loc_8241D178;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82436fe0
	sub_82436FE0(ctx, base);
loc_8241D1D0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8241D1D8"))) PPC_WEAK_FUNC(sub_8241D1D8);
PPC_FUNC_IMPL(__imp__sub_8241D1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8241d260
	if (!cr6.eq) goto loc_8241D260;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8241d260
	if (!cr6.eq) goto loc_8241D260;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8241d260
	if (!cr6.eq) goto loc_8241D260;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8241d24c
	if (cr6.lt) goto loc_8241D24C;
	// beq cr6,0x8241d240
	if (cr6.eq) goto loc_8241D240;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8241d234
	if (cr6.lt) goto loc_8241D234;
	// beq cr6,0x8241d228
	if (cr6.eq) goto loc_8241D228;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8241d29c
	goto loc_8241D29C;
loc_8241D228:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4340
	ctx.r4.s64 = r11.s64 + 4340;
	// b 0x8241d254
	goto loc_8241D254;
loc_8241D234:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4324
	ctx.r4.s64 = r11.s64 + 4324;
	// b 0x8241d254
	goto loc_8241D254;
loc_8241D240:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4308
	ctx.r4.s64 = r11.s64 + 4308;
	// b 0x8241d254
	goto loc_8241D254;
loc_8241D24C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4292
	ctx.r4.s64 = r11.s64 + 4292;
loc_8241D254:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// b 0x8241d29c
	goto loc_8241D29C;
loc_8241D260:
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// or r5,r11,r6
	ctx.r5.u64 = r11.u64 | ctx.r6.u64;
	// addi r4,r9,4272
	ctx.r4.s64 = ctx.r9.s64 + 4272;
	// or r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 | ctx.r7.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r11,r8
	ctx.r6.u64 = r11.u64 | ctx.r8.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
loc_8241D29C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D2AC"))) PPC_WEAK_FUNC(sub_8241D2AC);
PPC_FUNC_IMPL(__imp__sub_8241D2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D2B0"))) PPC_WEAK_FUNC(sub_8241D2B0);
PPC_FUNC_IMPL(__imp__sub_8241D2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4356
	ctx.r4.s64 = ctx.r10.s64 + 4356;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D2E4"))) PPC_WEAK_FUNC(sub_8241D2E4);
PPC_FUNC_IMPL(__imp__sub_8241D2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D2E8"))) PPC_WEAK_FUNC(sub_8241D2E8);
PPC_FUNC_IMPL(__imp__sub_8241D2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4372
	ctx.r4.s64 = ctx.r10.s64 + 4372;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D31C"))) PPC_WEAK_FUNC(sub_8241D31C);
PPC_FUNC_IMPL(__imp__sub_8241D31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D320"))) PPC_WEAK_FUNC(sub_8241D320);
PPC_FUNC_IMPL(__imp__sub_8241D320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4388
	ctx.r4.s64 = ctx.r10.s64 + 4388;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D354"))) PPC_WEAK_FUNC(sub_8241D354);
PPC_FUNC_IMPL(__imp__sub_8241D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D358"))) PPC_WEAK_FUNC(sub_8241D358);
PPC_FUNC_IMPL(__imp__sub_8241D358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4404
	ctx.r4.s64 = ctx.r10.s64 + 4404;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D38C"))) PPC_WEAK_FUNC(sub_8241D38C);
PPC_FUNC_IMPL(__imp__sub_8241D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D390"))) PPC_WEAK_FUNC(sub_8241D390);
PPC_FUNC_IMPL(__imp__sub_8241D390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4420
	ctx.r4.s64 = r11.s64 + 4420;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D3B8"))) PPC_WEAK_FUNC(sub_8241D3B8);
PPC_FUNC_IMPL(__imp__sub_8241D3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,4436
	ctx.r4.s64 = r11.s64 + 4436;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D3E0"))) PPC_WEAK_FUNC(sub_8241D3E0);
PPC_FUNC_IMPL(__imp__sub_8241D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4452
	ctx.r4.s64 = ctx.r10.s64 + 4452;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D418"))) PPC_WEAK_FUNC(sub_8241D418);
PPC_FUNC_IMPL(__imp__sub_8241D418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,4472
	ctx.r4.s64 = r11.s64 + 4472;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D444"))) PPC_WEAK_FUNC(sub_8241D444);
PPC_FUNC_IMPL(__imp__sub_8241D444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D448"))) PPC_WEAK_FUNC(sub_8241D448);
PPC_FUNC_IMPL(__imp__sub_8241D448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4484
	ctx.r4.s64 = ctx.r10.s64 + 4484;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D47C"))) PPC_WEAK_FUNC(sub_8241D47C);
PPC_FUNC_IMPL(__imp__sub_8241D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D480"))) PPC_WEAK_FUNC(sub_8241D480);
PPC_FUNC_IMPL(__imp__sub_8241D480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4500
	ctx.r4.s64 = ctx.r10.s64 + 4500;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D4B4"))) PPC_WEAK_FUNC(sub_8241D4B4);
PPC_FUNC_IMPL(__imp__sub_8241D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D4B8"))) PPC_WEAK_FUNC(sub_8241D4B8);
PPC_FUNC_IMPL(__imp__sub_8241D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4520
	ctx.r4.s64 = ctx.r10.s64 + 4520;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D4EC"))) PPC_WEAK_FUNC(sub_8241D4EC);
PPC_FUNC_IMPL(__imp__sub_8241D4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D4F0"))) PPC_WEAK_FUNC(sub_8241D4F0);
PPC_FUNC_IMPL(__imp__sub_8241D4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4536
	ctx.r4.s64 = ctx.r10.s64 + 4536;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D524"))) PPC_WEAK_FUNC(sub_8241D524);
PPC_FUNC_IMPL(__imp__sub_8241D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D528"))) PPC_WEAK_FUNC(sub_8241D528);
PPC_FUNC_IMPL(__imp__sub_8241D528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4556
	ctx.r4.s64 = ctx.r10.s64 + 4556;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D55C"))) PPC_WEAK_FUNC(sub_8241D55C);
PPC_FUNC_IMPL(__imp__sub_8241D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D560"))) PPC_WEAK_FUNC(sub_8241D560);
PPC_FUNC_IMPL(__imp__sub_8241D560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,4576
	ctx.r4.s64 = r11.s64 + 4576;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D58C"))) PPC_WEAK_FUNC(sub_8241D58C);
PPC_FUNC_IMPL(__imp__sub_8241D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D590"))) PPC_WEAK_FUNC(sub_8241D590);
PPC_FUNC_IMPL(__imp__sub_8241D590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,4592
	ctx.r4.s64 = r11.s64 + 4592;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D5BC"))) PPC_WEAK_FUNC(sub_8241D5BC);
PPC_FUNC_IMPL(__imp__sub_8241D5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D5C0"))) PPC_WEAK_FUNC(sub_8241D5C0);
PPC_FUNC_IMPL(__imp__sub_8241D5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4608
	ctx.r4.s64 = ctx.r10.s64 + 4608;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D5F4"))) PPC_WEAK_FUNC(sub_8241D5F4);
PPC_FUNC_IMPL(__imp__sub_8241D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D5F8"))) PPC_WEAK_FUNC(sub_8241D5F8);
PPC_FUNC_IMPL(__imp__sub_8241D5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,4628
	ctx.r4.s64 = r11.s64 + 4628;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D624"))) PPC_WEAK_FUNC(sub_8241D624);
PPC_FUNC_IMPL(__imp__sub_8241D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D628"))) PPC_WEAK_FUNC(sub_8241D628);
PPC_FUNC_IMPL(__imp__sub_8241D628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,4644
	ctx.r4.s64 = r11.s64 + 4644;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D654"))) PPC_WEAK_FUNC(sub_8241D654);
PPC_FUNC_IMPL(__imp__sub_8241D654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D658"))) PPC_WEAK_FUNC(sub_8241D658);
PPC_FUNC_IMPL(__imp__sub_8241D658) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d720
	if (cr0.lt) goto loc_8241D720;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4776
	ctx.r4.s64 = r11.s64 + 4776;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d720
	if (cr0.lt) goto loc_8241D720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d720
	if (cr0.lt) goto loc_8241D720;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4736
	ctx.r4.s64 = r11.s64 + 4736;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d720
	if (cr0.lt) goto loc_8241D720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d720
	if (cr0.lt) goto loc_8241D720;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4708
	ctx.r4.s64 = r11.s64 + 4708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d720
	if (cr0.lt) goto loc_8241D720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d720
	if (cr0.lt) goto loc_8241D720;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,4664
	ctx.r4.s64 = r11.s64 + 4664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d720
	if (cr0.lt) goto loc_8241D720;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241D720:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241D728"))) PPC_WEAK_FUNC(sub_8241D728);
PPC_FUNC_IMPL(__imp__sub_8241D728) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4988
	ctx.r4.s64 = r11.s64 + 4988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,4948
	ctx.r4.s64 = r11.s64 + 4948;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4912
	ctx.r4.s64 = r11.s64 + 4912;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4876
	ctx.r4.s64 = r11.s64 + 4876;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4840
	ctx.r4.s64 = r11.s64 + 4840;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4804
	ctx.r4.s64 = r11.s64 + 4804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d84c
	if (cr0.lt) goto loc_8241D84C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241D84C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241D854"))) PPC_WEAK_FUNC(sub_8241D854);
PPC_FUNC_IMPL(__imp__sub_8241D854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D858"))) PPC_WEAK_FUNC(sub_8241D858);
PPC_FUNC_IMPL(__imp__sub_8241D858) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,5048
	ctx.r4.s64 = r11.s64 + 5048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d8bc
	if (cr0.lt) goto loc_8241D8BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d8bc
	if (cr0.lt) goto loc_8241D8BC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,5028
	ctx.r4.s64 = r11.s64 + 5028;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241d8bc
	if (cr0.lt) goto loc_8241D8BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241D8BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241D8C4"))) PPC_WEAK_FUNC(sub_8241D8C4);
PPC_FUNC_IMPL(__imp__sub_8241D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D8C8"))) PPC_WEAK_FUNC(sub_8241D8C8);
PPC_FUNC_IMPL(__imp__sub_8241D8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r7,r10,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// addi r4,r11,5072
	ctx.r4.s64 = r11.s64 + 5072;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D900"))) PPC_WEAK_FUNC(sub_8241D900);
PPC_FUNC_IMPL(__imp__sub_8241D900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// addi r4,r11,5072
	ctx.r4.s64 = r11.s64 + 5072;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D938"))) PPC_WEAK_FUNC(sub_8241D938);
PPC_FUNC_IMPL(__imp__sub_8241D938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5096
	ctx.r4.s64 = ctx.r10.s64 + 5096;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D96C"))) PPC_WEAK_FUNC(sub_8241D96C);
PPC_FUNC_IMPL(__imp__sub_8241D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D970"))) PPC_WEAK_FUNC(sub_8241D970);
PPC_FUNC_IMPL(__imp__sub_8241D970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5116
	ctx.r4.s64 = ctx.r10.s64 + 5116;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D9A4"))) PPC_WEAK_FUNC(sub_8241D9A4);
PPC_FUNC_IMPL(__imp__sub_8241D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D9A8"))) PPC_WEAK_FUNC(sub_8241D9A8);
PPC_FUNC_IMPL(__imp__sub_8241D9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,5136
	ctx.r4.s64 = r11.s64 + 5136;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241D9D4"))) PPC_WEAK_FUNC(sub_8241D9D4);
PPC_FUNC_IMPL(__imp__sub_8241D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241D9D8"))) PPC_WEAK_FUNC(sub_8241D9D8);
PPC_FUNC_IMPL(__imp__sub_8241D9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,5152
	ctx.r4.s64 = r11.s64 + 5152;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DA04"))) PPC_WEAK_FUNC(sub_8241DA04);
PPC_FUNC_IMPL(__imp__sub_8241DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DA08"))) PPC_WEAK_FUNC(sub_8241DA08);
PPC_FUNC_IMPL(__imp__sub_8241DA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5168
	ctx.r4.s64 = ctx.r10.s64 + 5168;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DA3C"))) PPC_WEAK_FUNC(sub_8241DA3C);
PPC_FUNC_IMPL(__imp__sub_8241DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DA40"))) PPC_WEAK_FUNC(sub_8241DA40);
PPC_FUNC_IMPL(__imp__sub_8241DA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5188
	ctx.r4.s64 = ctx.r10.s64 + 5188;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DA74"))) PPC_WEAK_FUNC(sub_8241DA74);
PPC_FUNC_IMPL(__imp__sub_8241DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DA78"))) PPC_WEAK_FUNC(sub_8241DA78);
PPC_FUNC_IMPL(__imp__sub_8241DA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5208
	ctx.r4.s64 = ctx.r10.s64 + 5208;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DAB0"))) PPC_WEAK_FUNC(sub_8241DAB0);
PPC_FUNC_IMPL(__imp__sub_8241DAB0) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// lis r20,29760
	r20.s64 = 1950351360;
	// lis r19,29616
	r19.s64 = 1940914176;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241dbf8
	if (!cr6.gt) goto loc_8241DBF8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,5292
	r28.s64 = r11.s64 + 5292;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,5280
	r27.s64 = r11.s64 + 5280;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,5268
	r26.s64 = r11.s64 + 5268;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r25,r11,5256
	r25.s64 = r11.s64 + 5256;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r24,r11,3980
	r24.s64 = r11.s64 + 3980;
loc_8241DB10:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241dc7c
	if (cr0.lt) goto loc_8241DC7C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241dc7c
	if (cr0.lt) goto loc_8241DC7C;
	// cmplw cr6,r29,r20
	cr6.compare<uint32_t>(r29.u32, r20.u32, xer);
	// bgt cr6,0x8241dc84
	if (cr6.gt) goto loc_8241DC84;
	// beq cr6,0x8241dbb8
	if (cr6.eq) goto loc_8241DBB8;
	// lis r11,29584
	r11.s64 = 1938817024;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8241dca8
	if (cr6.eq) goto loc_8241DCA8;
	// lis r11,29600
	r11.s64 = 1939865600;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8241dcb0
	if (cr6.eq) goto loc_8241DCB0;
	// cmplw cr6,r29,r19
	cr6.compare<uint32_t>(r29.u32, r19.u32, xer);
	// beq cr6,0x8241dbb8
	if (cr6.eq) goto loc_8241DBB8;
	// lis r11,29632
	r11.s64 = 1941962752;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x8241dcb8
	if (!cr6.eq) goto loc_8241DCB8;
loc_8241DBB8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8241DBBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8241dc7c
	if (cr6.lt) goto loc_8241DC7C;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241dc7c
	if (cr0.lt) goto loc_8241DC7C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241db10
	if (cr6.lt) goto loc_8241DB10;
loc_8241DBF8:
	// cmplw cr6,r29,r19
	cr6.compare<uint32_t>(r29.u32, r19.u32, xer);
	// beq cr6,0x8241dc08
	if (cr6.eq) goto loc_8241DC08;
	// cmplw cr6,r29,r20
	cr6.compare<uint32_t>(r29.u32, r20.u32, xer);
	// bne cr6,0x8241dc78
	if (!cr6.eq) goto loc_8241DC78;
loc_8241DC08:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241dc78
	if (!cr6.gt) goto loc_8241DC78;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5232
	r29.s64 = r11.s64 + 5232;
loc_8241DC20:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241dc7c
	if (cr0.lt) goto loc_8241DC7C;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241dc7c
	if (cr0.lt) goto loc_8241DC7C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241dc20
	if (cr6.lt) goto loc_8241DC20;
loc_8241DC78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241DC7C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8239bd24
	return;
loc_8241DC84:
	// lis r11,29776
	r11.s64 = 1951399936;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8241dbb8
	if (cr6.eq) goto loc_8241DBB8;
	// lis r11,29792
	r11.s64 = 1952448512;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8241dcb0
	if (cr6.eq) goto loc_8241DCB0;
	// lis r11,29808
	r11.s64 = 1953497088;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x8241dcb8
	if (!cr6.eq) goto loc_8241DCB8;
loc_8241DCA8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8241dbbc
	goto loc_8241DBBC;
loc_8241DCB0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x8241dbbc
	goto loc_8241DBBC;
loc_8241DCB8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8241dc7c
	goto loc_8241DC7C;
}

__attribute__((alias("__imp__sub_8241DCC4"))) PPC_WEAK_FUNC(sub_8241DCC4);
PPC_FUNC_IMPL(__imp__sub_8241DCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DCC8"))) PPC_WEAK_FUNC(sub_8241DCC8);
PPC_FUNC_IMPL(__imp__sub_8241DCC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241dd04
	if (cr0.lt) goto loc_8241DD04;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,5304
	ctx.r4.s64 = r11.s64 + 5304;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
loc_8241DD04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241DD0C"))) PPC_WEAK_FUNC(sub_8241DD0C);
PPC_FUNC_IMPL(__imp__sub_8241DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241DD10"))) PPC_WEAK_FUNC(sub_8241DD10);
PPC_FUNC_IMPL(__imp__sub_8241DD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,5344
	ctx.r4.s64 = r11.s64 + 5344;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241DD38"))) PPC_WEAK_FUNC(sub_8241DD38);
PPC_FUNC_IMPL(__imp__sub_8241DD38) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4164
	ctx.r4.s64 = r11.s64 + 4164;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,4236
	ctx.r4.s64 = r11.s64 + 4236;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,3904
	r27.s64 = r11.s64 + 3904;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241de94
	if (!cr6.gt) goto loc_8241DE94;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,4156
	r29.s64 = r11.s64 + 4156;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3980
	r28.s64 = r11.s64 + 3980;
loc_8241DDE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,468(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 468);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241de98
	if (cr0.lt) goto loc_8241DE98;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241dde4
	if (cr6.lt) goto loc_8241DDE4;
loc_8241DE94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241DE98:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8241DEA0"))) PPC_WEAK_FUNC(sub_8241DEA0);
PPC_FUNC_IMPL(__imp__sub_8241DEA0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4164
	ctx.r4.s64 = r11.s64 + 4164;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r11,3908
	ctx.r4.s64 = r11.s64 + 3908;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3904
	ctx.r4.s64 = r11.s64 + 3904;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r23,r11,5500
	r23.s64 = r11.s64 + 5500;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r25,r11,3968
	r25.s64 = r11.s64 + 3968;
	// ble cr6,0x8241dfb0
	if (!cr6.gt) goto loc_8241DFB0;
loc_8241DF48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241df48
	if (cr6.lt) goto loc_8241DF48;
loc_8241DFB0:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5468
	r29.s64 = r11.s64 + 5468;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,4156
	r28.s64 = r11.s64 + 4156;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,4184
	r26.s64 = r11.s64 + 4184;
	// ble cr6,0x8241e05c
	if (!cr6.gt) goto loc_8241E05C;
loc_8241DFD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241dfd8
	if (cr6.lt) goto loc_8241DFD8;
loc_8241E05C:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,5436
	r27.s64 = r11.s64 + 5436;
	// ble cr6,0x8241e0e0
	if (!cr6.gt) goto loc_8241E0E0;
loc_8241E074:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e074
	if (cr6.lt) goto loc_8241E074;
loc_8241E0E0:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241e174
	if (!cr6.gt) goto loc_8241E174;
loc_8241E0F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e0f0
	if (cr6.lt) goto loc_8241E0F0;
loc_8241E174:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241e1f0
	if (!cr6.gt) goto loc_8241E1F0;
loc_8241E184:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e184
	if (cr6.lt) goto loc_8241E184;
loc_8241E1F0:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241e270
	if (!cr6.gt) goto loc_8241E270;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5408
	r29.s64 = r11.s64 + 5408;
loc_8241E208:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e208
	if (cr6.lt) goto loc_8241E208;
loc_8241E270:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3956
	r28.s64 = r11.s64 + 3956;
	// ble cr6,0x8241e2f0
	if (!cr6.gt) goto loc_8241E2F0;
loc_8241E288:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e288
	if (cr6.lt) goto loc_8241E288;
loc_8241E2F0:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241e3a0
	if (!cr6.gt) goto loc_8241E3A0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5380
	r29.s64 = r11.s64 + 5380;
loc_8241E308:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e3a4
	if (cr0.lt) goto loc_8241E3A4;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e308
	if (cr6.lt) goto loc_8241E308;
loc_8241E3A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E3A4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8241E3AC"))) PPC_WEAK_FUNC(sub_8241E3AC);
PPC_FUNC_IMPL(__imp__sub_8241E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E3B0"))) PPC_WEAK_FUNC(sub_8241E3B0);
PPC_FUNC_IMPL(__imp__sub_8241E3B0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,3968
	r27.s64 = r11.s64 + 3968;
	// ble cr6,0x8241e450
	if (!cr6.gt) goto loc_8241E450;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5548
	r29.s64 = r11.s64 + 5548;
loc_8241E3E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e4f0
	if (cr0.lt) goto loc_8241E4F0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e4f0
	if (cr0.lt) goto loc_8241E4F0;
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8241e3e8
	if (cr6.lt) goto loc_8241E3E8;
loc_8241E450:
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241e4ec
	if (!cr6.gt) goto loc_8241E4EC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5520
	r29.s64 = r11.s64 + 5520;
loc_8241E468:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e4f0
	if (cr0.lt) goto loc_8241E4F0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e4f0
	if (cr0.lt) goto loc_8241E4F0;
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8241e468
	if (cr6.lt) goto loc_8241E468;
loc_8241E4EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E4F0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8241E4F8"))) PPC_WEAK_FUNC(sub_8241E4F8);
PPC_FUNC_IMPL(__imp__sub_8241E4F8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5620
	ctx.r4.s64 = r11.s64 + 5620;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4164
	ctx.r4.s64 = r11.s64 + 4164;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,4156
	r25.s64 = r11.s64 + 4156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,408(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3904
	ctx.r4.s64 = r11.s64 + 3904;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,3968
	r26.s64 = r11.s64 + 3968;
	// ble cr6,0x8241e628
	if (!cr6.gt) goto loc_8241E628;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5596
	r29.s64 = r11.s64 + 5596;
loc_8241E5C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e5c0
	if (cr6.lt) goto loc_8241E5C0;
loc_8241E628:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5568
	r29.s64 = r11.s64 + 5568;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,4184
	r27.s64 = r11.s64 + 4184;
	// ble cr6,0x8241e6b4
	if (!cr6.gt) goto loc_8241E6B4;
loc_8241E648:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e648
	if (cr6.lt) goto loc_8241E648;
loc_8241E6B4:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3956
	r28.s64 = r11.s64 + 3956;
	// ble cr6,0x8241e734
	if (!cr6.gt) goto loc_8241E734;
loc_8241E6CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e6cc
	if (cr6.lt) goto loc_8241E6CC;
loc_8241E734:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241e7cc
	if (!cr6.gt) goto loc_8241E7CC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5468
	r29.s64 = r11.s64 + 5468;
loc_8241E74C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e74c
	if (cr6.lt) goto loc_8241E74C;
loc_8241E7CC:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241e868
	if (!cr6.gt) goto loc_8241E868;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5436
	r29.s64 = r11.s64 + 5436;
loc_8241E7E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e86c
	if (cr0.lt) goto loc_8241E86C;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e7e4
	if (cr6.lt) goto loc_8241E7E4;
loc_8241E868:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E86C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8241E874"))) PPC_WEAK_FUNC(sub_8241E874);
PPC_FUNC_IMPL(__imp__sub_8241E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241E878"))) PPC_WEAK_FUNC(sub_8241E878);
PPC_FUNC_IMPL(__imp__sub_8241E878) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4164
	ctx.r4.s64 = r11.s64 + 4164;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,4236
	ctx.r4.s64 = r11.s64 + 4236;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,3904
	r27.s64 = r11.s64 + 3904;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241e9d4
	if (!cr6.gt) goto loc_8241E9D4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,4156
	r29.s64 = r11.s64 + 4156;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3980
	r28.s64 = r11.s64 + 3980;
loc_8241E924:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,456(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 456);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241e9d8
	if (cr0.lt) goto loc_8241E9D8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241e924
	if (cr6.lt) goto loc_8241E924;
loc_8241E9D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E9D8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8241E9E0"))) PPC_WEAK_FUNC(sub_8241E9E0);
PPC_FUNC_IMPL(__imp__sub_8241E9E0) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5620
	ctx.r4.s64 = r11.s64 + 5620;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,5688
	r26.s64 = r11.s64 + 5688;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r25,r11,3968
	r25.s64 = r11.s64 + 3968;
	// ble cr6,0x8241eaa8
	if (!cr6.gt) goto loc_8241EAA8;
loc_8241EA3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ea3c
	if (cr6.lt) goto loc_8241EA3C;
loc_8241EAA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4164
	ctx.r4.s64 = r11.s64 + 4164;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r23,r11,4156
	r23.s64 = r11.s64 + 4156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,408(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3904
	ctx.r4.s64 = r11.s64 + 3904;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r24,r11,4184
	r24.s64 = r11.s64 + 4184;
	// ble cr6,0x8241eb98
	if (!cr6.gt) goto loc_8241EB98;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5596
	r29.s64 = r11.s64 + 5596;
loc_8241EB34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241eb34
	if (cr6.lt) goto loc_8241EB34;
loc_8241EB98:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r27,r11,5568
	r27.s64 = r11.s64 + 5568;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,5676
	r28.s64 = r11.s64 + 5676;
	// ble cr6,0x8241ec20
	if (!cr6.gt) goto loc_8241EC20;
loc_8241EBB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ebb8
	if (cr6.lt) goto loc_8241EBB8;
loc_8241EC20:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241ec84
	if (!cr6.gt) goto loc_8241EC84;
loc_8241EC30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ec30
	if (cr6.lt) goto loc_8241EC30;
loc_8241EC84:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241ed08
	if (!cr6.gt) goto loc_8241ED08;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5468
	r29.s64 = r11.s64 + 5468;
loc_8241EC9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ec9c
	if (cr6.lt) goto loc_8241EC9C;
loc_8241ED08:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241ed84
	if (!cr6.gt) goto loc_8241ED84;
loc_8241ED18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ed18
	if (cr6.lt) goto loc_8241ED18;
loc_8241ED84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5648
	ctx.r4.s64 = r11.s64 + 5648;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241ee30
	if (!cr6.gt) goto loc_8241EE30;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5436
	r29.s64 = r11.s64 + 5436;
loc_8241EDC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241edc4
	if (cr6.lt) goto loc_8241EDC4;
loc_8241EE30:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241eeac
	if (!cr6.gt) goto loc_8241EEAC;
loc_8241EE40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ee40
	if (cr6.lt) goto loc_8241EE40;
loc_8241EEAC:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r28,r11,3956
	r28.s64 = r11.s64 + 3956;
	// ble cr6,0x8241ef34
	if (!cr6.gt) goto loc_8241EF34;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5408
	r29.s64 = r11.s64 + 5408;
loc_8241EECC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241eecc
	if (cr6.lt) goto loc_8241EECC;
loc_8241EF34:
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8241efe4
	if (!cr6.gt) goto loc_8241EFE4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,5380
	r29.s64 = r11.s64 + 5380;
loc_8241EF4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241efe8
	if (cr0.lt) goto loc_8241EFE8;
	// lwz r11,1812(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8241ef4c
	if (cr6.lt) goto loc_8241EF4C;
loc_8241EFE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241EFE8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8241EFF0"))) PPC_WEAK_FUNC(sub_8241EFF0);
PPC_FUNC_IMPL(__imp__sub_8241EFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241f0a8
	if (cr0.lt) goto loc_8241F0A8;
	// li r11,5
	r11.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a7c8
	sub_8241A7C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r11,5716
	ctx.r4.s64 = r11.s64 + 5716;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241f0a8
	if (cr0.lt) goto loc_8241F0A8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82436fe0
	sub_82436FE0(ctx, base);
loc_8241F0A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241F0B0"))) PPC_WEAK_FUNC(sub_8241F0B0);
PPC_FUNC_IMPL(__imp__sub_8241F0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x8241f138
	if (!cr6.eq) goto loc_8241F138;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bne cr6,0x8241f138
	if (!cr6.eq) goto loc_8241F138;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bne cr6,0x8241f138
	if (!cr6.eq) goto loc_8241F138;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x8241f124
	if (cr6.lt) goto loc_8241F124;
	// beq cr6,0x8241f118
	if (cr6.eq) goto loc_8241F118;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x8241f10c
	if (cr6.lt) goto loc_8241F10C;
	// beq cr6,0x8241f100
	if (cr6.eq) goto loc_8241F100;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8241f154
	goto loc_8241F154;
loc_8241F100:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,5848
	ctx.r4.s64 = ctx.r10.s64 + 5848;
	// b 0x8241f12c
	goto loc_8241F12C;
loc_8241F10C:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,5828
	ctx.r4.s64 = ctx.r10.s64 + 5828;
	// b 0x8241f12c
	goto loc_8241F12C;
loc_8241F118:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,5808
	ctx.r4.s64 = ctx.r10.s64 + 5808;
	// b 0x8241f12c
	goto loc_8241F12C;
loc_8241F124:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,5788
	ctx.r4.s64 = ctx.r10.s64 + 5788;
loc_8241F12C:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// b 0x8241f154
	goto loc_8241F154;
loc_8241F138:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5752
	ctx.r4.s64 = ctx.r10.s64 + 5752;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
loc_8241F154:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F164"))) PPC_WEAK_FUNC(sub_8241F164);
PPC_FUNC_IMPL(__imp__sub_8241F164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F168"))) PPC_WEAK_FUNC(sub_8241F168);
PPC_FUNC_IMPL(__imp__sub_8241F168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5868
	ctx.r4.s64 = ctx.r10.s64 + 5868;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F19C"))) PPC_WEAK_FUNC(sub_8241F19C);
PPC_FUNC_IMPL(__imp__sub_8241F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F1A0"))) PPC_WEAK_FUNC(sub_8241F1A0);
PPC_FUNC_IMPL(__imp__sub_8241F1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5892
	ctx.r4.s64 = ctx.r10.s64 + 5892;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F1D4"))) PPC_WEAK_FUNC(sub_8241F1D4);
PPC_FUNC_IMPL(__imp__sub_8241F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F1D8"))) PPC_WEAK_FUNC(sub_8241F1D8);
PPC_FUNC_IMPL(__imp__sub_8241F1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5916
	ctx.r4.s64 = ctx.r10.s64 + 5916;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F20C"))) PPC_WEAK_FUNC(sub_8241F20C);
PPC_FUNC_IMPL(__imp__sub_8241F20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F210"))) PPC_WEAK_FUNC(sub_8241F210);
PPC_FUNC_IMPL(__imp__sub_8241F210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,5940
	ctx.r4.s64 = ctx.r10.s64 + 5940;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F244"))) PPC_WEAK_FUNC(sub_8241F244);
PPC_FUNC_IMPL(__imp__sub_8241F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F248"))) PPC_WEAK_FUNC(sub_8241F248);
PPC_FUNC_IMPL(__imp__sub_8241F248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,5964
	ctx.r4.s64 = r11.s64 + 5964;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F270"))) PPC_WEAK_FUNC(sub_8241F270);
PPC_FUNC_IMPL(__imp__sub_8241F270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,5980
	ctx.r4.s64 = r11.s64 + 5980;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F298"))) PPC_WEAK_FUNC(sub_8241F298);
PPC_FUNC_IMPL(__imp__sub_8241F298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,6000
	ctx.r4.s64 = ctx.r10.s64 + 6000;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F2D0"))) PPC_WEAK_FUNC(sub_8241F2D0);
PPC_FUNC_IMPL(__imp__sub_8241F2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,6028
	ctx.r4.s64 = r11.s64 + 6028;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F2FC"))) PPC_WEAK_FUNC(sub_8241F2FC);
PPC_FUNC_IMPL(__imp__sub_8241F2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F300"))) PPC_WEAK_FUNC(sub_8241F300);
PPC_FUNC_IMPL(__imp__sub_8241F300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,6048
	ctx.r4.s64 = ctx.r10.s64 + 6048;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F334"))) PPC_WEAK_FUNC(sub_8241F334);
PPC_FUNC_IMPL(__imp__sub_8241F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F338"))) PPC_WEAK_FUNC(sub_8241F338);
PPC_FUNC_IMPL(__imp__sub_8241F338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,6084
	ctx.r4.s64 = ctx.r10.s64 + 6084;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F36C"))) PPC_WEAK_FUNC(sub_8241F36C);
PPC_FUNC_IMPL(__imp__sub_8241F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F370"))) PPC_WEAK_FUNC(sub_8241F370);
PPC_FUNC_IMPL(__imp__sub_8241F370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,6120
	ctx.r4.s64 = ctx.r10.s64 + 6120;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F3A4"))) PPC_WEAK_FUNC(sub_8241F3A4);
PPC_FUNC_IMPL(__imp__sub_8241F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F3A8"))) PPC_WEAK_FUNC(sub_8241F3A8);
PPC_FUNC_IMPL(__imp__sub_8241F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,6156
	ctx.r4.s64 = ctx.r10.s64 + 6156;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F3DC"))) PPC_WEAK_FUNC(sub_8241F3DC);
PPC_FUNC_IMPL(__imp__sub_8241F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F3E0"))) PPC_WEAK_FUNC(sub_8241F3E0);
PPC_FUNC_IMPL(__imp__sub_8241F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4556
	ctx.r4.s64 = ctx.r10.s64 + 4556;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F414"))) PPC_WEAK_FUNC(sub_8241F414);
PPC_FUNC_IMPL(__imp__sub_8241F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F418"))) PPC_WEAK_FUNC(sub_8241F418);
PPC_FUNC_IMPL(__imp__sub_8241F418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,4576
	ctx.r4.s64 = r11.s64 + 4576;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F444"))) PPC_WEAK_FUNC(sub_8241F444);
PPC_FUNC_IMPL(__imp__sub_8241F444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F448"))) PPC_WEAK_FUNC(sub_8241F448);
PPC_FUNC_IMPL(__imp__sub_8241F448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,4592
	ctx.r4.s64 = r11.s64 + 4592;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F474"))) PPC_WEAK_FUNC(sub_8241F474);
PPC_FUNC_IMPL(__imp__sub_8241F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F478"))) PPC_WEAK_FUNC(sub_8241F478);
PPC_FUNC_IMPL(__imp__sub_8241F478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,4608
	ctx.r4.s64 = ctx.r10.s64 + 4608;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F4AC"))) PPC_WEAK_FUNC(sub_8241F4AC);
PPC_FUNC_IMPL(__imp__sub_8241F4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F4B0"))) PPC_WEAK_FUNC(sub_8241F4B0);
PPC_FUNC_IMPL(__imp__sub_8241F4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,6192
	ctx.r4.s64 = ctx.r10.s64 + 6192;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F4E4"))) PPC_WEAK_FUNC(sub_8241F4E4);
PPC_FUNC_IMPL(__imp__sub_8241F4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F4E8"))) PPC_WEAK_FUNC(sub_8241F4E8);
PPC_FUNC_IMPL(__imp__sub_8241F4E8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241f524
	if (cr0.lt) goto loc_8241F524;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,6232
	ctx.r4.s64 = r11.s64 + 6232;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
loc_8241F524:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241F52C"))) PPC_WEAK_FUNC(sub_8241F52C);
PPC_FUNC_IMPL(__imp__sub_8241F52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F530"))) PPC_WEAK_FUNC(sub_8241F530);
PPC_FUNC_IMPL(__imp__sub_8241F530) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241f56c
	if (cr0.lt) goto loc_8241F56C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,6268
	ctx.r4.s64 = r11.s64 + 6268;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
loc_8241F56C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241F574"))) PPC_WEAK_FUNC(sub_8241F574);
PPC_FUNC_IMPL(__imp__sub_8241F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F578"))) PPC_WEAK_FUNC(sub_8241F578);
PPC_FUNC_IMPL(__imp__sub_8241F578) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,5048
	ctx.r4.s64 = r11.s64 + 5048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241f5dc
	if (cr0.lt) goto loc_8241F5DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a620
	sub_8241A620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241f5dc
	if (cr0.lt) goto loc_8241F5DC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,5028
	ctx.r4.s64 = r11.s64 + 5028;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8241f5dc
	if (cr0.lt) goto loc_8241F5DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241F5DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8241F5E4"))) PPC_WEAK_FUNC(sub_8241F5E4);
PPC_FUNC_IMPL(__imp__sub_8241F5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F5E8"))) PPC_WEAK_FUNC(sub_8241F5E8);
PPC_FUNC_IMPL(__imp__sub_8241F5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,4628
	ctx.r4.s64 = r11.s64 + 4628;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F614"))) PPC_WEAK_FUNC(sub_8241F614);
PPC_FUNC_IMPL(__imp__sub_8241F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F618"))) PPC_WEAK_FUNC(sub_8241F618);
PPC_FUNC_IMPL(__imp__sub_8241F618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,6304
	ctx.r4.s64 = ctx.r10.s64 + 6304;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F64C"))) PPC_WEAK_FUNC(sub_8241F64C);
PPC_FUNC_IMPL(__imp__sub_8241F64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8241F650"))) PPC_WEAK_FUNC(sub_8241F650);
PPC_FUNC_IMPL(__imp__sub_8241F650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// addi r4,r11,5072
	ctx.r4.s64 = r11.s64 + 5072;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241F688"))) PPC_WEAK_FUNC(sub_8241F688);
PPC_FUNC_IMPL(__imp__sub_8241F688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,6332
	ctx.r4.s64 = ctx.r10.s64 + 6332;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8241a550
	sub_8241A550(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

