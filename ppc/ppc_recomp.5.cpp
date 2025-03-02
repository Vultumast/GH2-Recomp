#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821347A0"))) PPC_WEAK_FUNC(sub_821347A0);
PPC_FUNC_IMPL(__imp__sub_821347A0) {
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
	// bl 0x82134488
	sub_82134488(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821347C8"))) PPC_WEAK_FUNC(sub_821347C8);
PPC_FUNC_IMPL(__imp__sub_821347C8) {
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
	// lwz r16,19096(0)
	r16.u64 = PPC_LOAD_U32(19096);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r25,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r25.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82133408
	sub_82133408(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x821348a8
	if (cr0.eq) goto loc_821348A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r27,r11,18672
	r27.s64 = r11.s64 + 18672;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,520(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 520);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82134850
	if (cr0.eq) goto loc_82134850;
loc_82134844:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82134844
	if (!cr0.eq) goto loc_82134844;
loc_82134850:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821348a8
	if (cr0.eq) goto loc_821348A8;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
loc_82134878:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821348d8
	if (!cr0.eq) goto loc_821348D8;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// bne 0x82134878
	if (!cr0.eq) goto loc_82134878;
loc_821348A8:
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
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82134ad0
	if (cr0.eq) goto loc_82134AD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82134ad4
	goto loc_82134AD4;
loc_821348D8:
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
	// beq 0x82134938
	if (cr0.eq) goto loc_82134938;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82134914
	goto loc_82134914;
loc_8213490C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82134914:
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
	// bne 0x8213490c
	if (!cr0.eq) goto loc_8213490C;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8213493c
	goto loc_8213493C;
loc_82134938:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8213493C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82132de0
	sub_82132DE0(ctx, base);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r30,104(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// addi r10,r11,96
	ctx.r10.s64 = r11.s64 + 96;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821349cc
	if (cr0.eq) goto loc_821349CC;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,96
	r28.s64 = r11.s64 + 96;
loc_82134970:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82275fb0
	sub_82275FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821349ac
	if (cr0.eq) goto loc_821349AC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821349AC:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// subf r11,r30,r28
	r11.s64 = r28.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82134970
	if (!cr0.eq) goto loc_82134970;
loc_821349CC:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,19032
	ctx.r4.s64 = r11.s64 + 19032;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82134a30
	if (cr0.eq) goto loc_82134A30;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82134A30:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315440
	sub_82315440(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
loc_82134A5C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x82134a80
	if (cr0.eq) goto loc_82134A80;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82134a5c
	if (cr6.eq) goto loc_82134A5C;
loc_82134A80:
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82134aa8
	if (!cr0.eq) goto loc_82134AA8;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82314ee8
	sub_82314EE8(ctx, base);
loc_82134AA8:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317b48
	sub_82317B48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// b 0x82134b00
	goto loc_82134B00;
loc_82134AD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82134AD4:
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82132de0
	sub_82132DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317b48
	sub_82317B48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_82134B00:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821347D0"))) PPC_WEAK_FUNC(sub_821347D0);
PPC_FUNC_IMPL(__imp__sub_821347D0) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r25,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r25.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82133408
	sub_82133408(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x821348a8
	if (cr0.eq) goto loc_821348A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r27,r11,18672
	r27.s64 = r11.s64 + 18672;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,520(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 520);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82134850
	if (cr0.eq) goto loc_82134850;
loc_82134844:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82134844
	if (!cr0.eq) goto loc_82134844;
loc_82134850:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821348a8
	if (cr0.eq) goto loc_821348A8;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
loc_82134878:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821348d8
	if (!cr0.eq) goto loc_821348D8;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// bne 0x82134878
	if (!cr0.eq) goto loc_82134878;
loc_821348A8:
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
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82134ad0
	if (cr0.eq) goto loc_82134AD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82134ad4
	goto loc_82134AD4;
loc_821348D8:
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
	// beq 0x82134938
	if (cr0.eq) goto loc_82134938;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82134914
	goto loc_82134914;
loc_8213490C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82134914:
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
	// bne 0x8213490c
	if (!cr0.eq) goto loc_8213490C;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8213493c
	goto loc_8213493C;
loc_82134938:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8213493C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82132de0
	sub_82132DE0(ctx, base);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r30,104(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// addi r10,r11,96
	ctx.r10.s64 = r11.s64 + 96;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821349cc
	if (cr0.eq) goto loc_821349CC;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,96
	r28.s64 = r11.s64 + 96;
loc_82134970:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82275fb0
	sub_82275FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821349ac
	if (cr0.eq) goto loc_821349AC;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821349AC:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// subf r11,r30,r28
	r11.s64 = r28.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82134970
	if (!cr0.eq) goto loc_82134970;
loc_821349CC:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,19032
	ctx.r4.s64 = r11.s64 + 19032;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82134a30
	if (cr0.eq) goto loc_82134A30;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82134A30:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82315440
	sub_82315440(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
loc_82134A5C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// beq 0x82134a80
	if (cr0.eq) goto loc_82134A80;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82134a5c
	if (cr6.eq) goto loc_82134A5C;
loc_82134A80:
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82134aa8
	if (!cr0.eq) goto loc_82134AA8;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82314ee8
	sub_82314EE8(ctx, base);
loc_82134AA8:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317b48
	sub_82317B48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// b 0x82134b00
	goto loc_82134B00;
loc_82134AD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82134AD4:
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82132de0
	sub_82132DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317b48
	sub_82317B48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,18448
	r11.s64 = r11.s64 + 18448;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_82134B00:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82134B10"))) PPC_WEAK_FUNC(sub_82134B10);
PPC_FUNC_IMPL(__imp__sub_82134B10) {
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

__attribute__((alias("__imp__sub_82134B38"))) PPC_WEAK_FUNC(sub_82134B38);
PPC_FUNC_IMPL(__imp__sub_82134B38) {
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

__attribute__((alias("__imp__sub_82134B60"))) PPC_WEAK_FUNC(sub_82134B60);
PPC_FUNC_IMPL(__imp__sub_82134B60) {
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

__attribute__((alias("__imp__sub_82134B88"))) PPC_WEAK_FUNC(sub_82134B88);
PPC_FUNC_IMPL(__imp__sub_82134B88) {
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

__attribute__((alias("__imp__sub_82134BB0"))) PPC_WEAK_FUNC(sub_82134BB0);
PPC_FUNC_IMPL(__imp__sub_82134BB0) {
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

__attribute__((alias("__imp__sub_82134BD8"))) PPC_WEAK_FUNC(sub_82134BD8);
PPC_FUNC_IMPL(__imp__sub_82134BD8) {
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
	// beq 0x82134c08
	if (cr0.eq) goto loc_82134C08;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_82134C08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82134C18"))) PPC_WEAK_FUNC(sub_82134C18);
PPC_FUNC_IMPL(__imp__sub_82134C18) {
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

__attribute__((alias("__imp__sub_82134C40"))) PPC_WEAK_FUNC(sub_82134C40);
PPC_FUNC_IMPL(__imp__sub_82134C40) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82133408
	sub_82133408(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82134d3c
	if (cr0.eq) goto loc_82134D3C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18672
	ctx.r4.s64 = r11.s64 + 18672;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82318bf0
	sub_82318BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,520(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82134cb4
	if (cr0.eq) goto loc_82134CB4;
loc_82134CA8:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82134ca8
	if (!cr0.eq) goto loc_82134CA8;
loc_82134CB4:
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82134d24
	goto loc_82134D24;
loc_82134CC0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82134d20
	if (cr0.eq) goto loc_82134D20;
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82134d20
	if (cr0.eq) goto loc_82134D20;
loc_82134CF8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x82134cf8
	if (!cr0.eq) goto loc_82134CF8;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x82134d50
	if (cr6.gt) goto loc_82134D50;
loc_82134D20:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82134D24:
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
	// bne 0x82134cc0
	if (!cr0.eq) goto loc_82134CC0;
loc_82134D3C:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82134D40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_82134D50:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82134d40
	goto loc_82134D40;
}

__attribute__((alias("__imp__sub_82134D5C"))) PPC_WEAK_FUNC(sub_82134D5C);
PPC_FUNC_IMPL(__imp__sub_82134D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82134D60"))) PPC_WEAK_FUNC(sub_82134D60);
PPC_FUNC_IMPL(__imp__sub_82134D60) {
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
	// lwz r16,19488(0)
	r16.u64 = PPC_LOAD_U32(19488);
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
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x82134da0
	if (!cr6.eq) goto loc_82134DA0;
loc_82134D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8213525c
	goto loc_8213525C;
loc_82134DA0:
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
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7544
	r29.s64 = ctx.r10.s64 + 7544;
	// bne 0x82134df0
	if (!cr0.eq) goto loc_82134DF0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134DF0:
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
	// beq 0x82134e24
	if (cr0.eq) goto loc_82134E24;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82326a90
	sub_82326A90(ctx, base);
	// b 0x8213525c
	goto loc_8213525C;
loc_82134E24:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7540
	r29.s64 = ctx.r10.s64 + 7540;
	// bne 0x82134e50
	if (!cr0.eq) goto loc_82134E50;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19032
	ctx.r4.s64 = r11.s64 + 19032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134E50:
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
	// beq 0x82134ea8
	if (cr0.eq) goto loc_82134EA8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,44
	ctx.r3.s64 = r26.s64 + 44;
	// bl 0x82326a90
	sub_82326A90(ctx, base);
loc_82134E80:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82135258
	if (cr0.eq) goto loc_82135258;
	// andi. r11,r25,17
	r11.u64 = r25.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82134d98
	if (!cr0.eq) goto loc_82134D98;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,7492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 7492);
	// bl 0x821342f8
	sub_821342F8(ctx, base);
	// b 0x82134d98
	goto loc_82134D98;
loc_82134EA8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7536
	r29.s64 = ctx.r10.s64 + 7536;
	// bne 0x82134ed4
	if (!cr0.eq) goto loc_82134ED4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19384
	ctx.r4.s64 = r11.s64 + 19384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134ED4:
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
	// beq 0x82134f08
	if (cr0.eq) goto loc_82134F08;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,20
	ctx.r3.s64 = r26.s64 + 20;
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x82134e80
	goto loc_82134E80;
loc_82134F08:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7532
	r29.s64 = ctx.r10.s64 + 7532;
	// bne 0x82134f34
	if (!cr0.eq) goto loc_82134F34;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19376
	ctx.r4.s64 = r11.s64 + 19376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134F34:
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
	// beq 0x82134f68
	if (cr0.eq) goto loc_82134F68;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,24
	ctx.r3.s64 = r26.s64 + 24;
	// bl 0x82326c00
	sub_82326C00(ctx, base);
	// b 0x82134e80
	goto loc_82134E80;
loc_82134F68:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7528
	r29.s64 = ctx.r10.s64 + 7528;
	// bne 0x82134f94
	if (!cr0.eq) goto loc_82134F94;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19368
	ctx.r4.s64 = r11.s64 + 19368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134F94:
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
	// beq 0x82134fc8
	if (cr0.eq) goto loc_82134FC8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,40
	ctx.r3.s64 = r26.s64 + 40;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82134e80
	goto loc_82134E80;
loc_82134FC8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7524
	r29.s64 = ctx.r10.s64 + 7524;
	// bne 0x82134ff4
	if (!cr0.eq) goto loc_82134FF4;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19356
	ctx.r4.s64 = r11.s64 + 19356;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134FF4:
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
	// beq 0x82135028
	if (cr0.eq) goto loc_82135028;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,64
	ctx.r3.s64 = r26.s64 + 64;
	// bl 0x82326b38
	sub_82326B38(ctx, base);
	// b 0x82134e80
	goto loc_82134E80;
loc_82135028:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7520
	r29.s64 = ctx.r10.s64 + 7520;
	// bne 0x82135054
	if (!cr0.eq) goto loc_82135054;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19340
	ctx.r4.s64 = r11.s64 + 19340;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82135054:
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
	// beq 0x82135088
	if (cr0.eq) goto loc_82135088;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,85
	ctx.r3.s64 = r26.s64 + 85;
loc_82135080:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8213525c
	goto loc_8213525C;
loc_82135088:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7516
	r29.s64 = ctx.r10.s64 + 7516;
	// bne 0x821350b4
	if (!cr0.eq) goto loc_821350B4;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19328
	ctx.r4.s64 = r11.s64 + 19328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_821350B4:
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
	// beq 0x821350e4
	if (cr0.eq) goto loc_821350E4;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,86
	ctx.r3.s64 = r26.s64 + 86;
	// b 0x82135080
	goto loc_82135080;
loc_821350E4:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7512
	r29.s64 = ctx.r10.s64 + 7512;
	// bne 0x82135110
	if (!cr0.eq) goto loc_82135110;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19316
	ctx.r4.s64 = r11.s64 + 19316;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82135110:
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
	// beq 0x82135140
	if (cr0.eq) goto loc_82135140;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,87
	ctx.r3.s64 = r26.s64 + 87;
	// b 0x82135080
	goto loc_82135080;
loc_82135140:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7508
	r29.s64 = ctx.r10.s64 + 7508;
	// bne 0x8213516c
	if (!cr0.eq) goto loc_8213516C;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19304
	ctx.r4.s64 = r11.s64 + 19304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_8213516C:
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
	// beq 0x821351a0
	if (cr0.eq) goto loc_821351A0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,88
	ctx.r3.s64 = r26.s64 + 88;
loc_82135198:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8213525c
	goto loc_8213525C;
loc_821351A0:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7504
	r29.s64 = ctx.r10.s64 + 7504;
	// bne 0x821351cc
	if (!cr0.eq) goto loc_821351CC;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19292
	ctx.r4.s64 = r11.s64 + 19292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_821351CC:
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
	// beq 0x821351fc
	if (cr0.eq) goto loc_821351FC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,92
	ctx.r3.s64 = r26.s64 + 92;
	// b 0x82135198
	goto loc_82135198;
loc_821351FC:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7500
	r29.s64 = ctx.r10.s64 + 7500;
	// bne 0x82135224
	if (!cr0.eq) goto loc_82135224;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19280
	ctx.r4.s64 = r11.s64 + 19280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82135224:
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
	// beq 0x82135258
	if (cr0.eq) goto loc_82135258;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,96
	ctx.r3.s64 = r26.s64 + 96;
	// bl 0x82134550
	sub_82134550(ctx, base);
	// b 0x8213525c
	goto loc_8213525C;
loc_82135258:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213525C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82134D68"))) PPC_WEAK_FUNC(sub_82134D68);
PPC_FUNC_IMPL(__imp__sub_82134D68) {
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
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x82134da0
	if (!cr6.eq) goto loc_82134DA0;
loc_82134D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8213525c
	goto loc_8213525C;
loc_82134DA0:
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
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7544
	r29.s64 = ctx.r10.s64 + 7544;
	// bne 0x82134df0
	if (!cr0.eq) goto loc_82134DF0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134DF0:
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
	// beq 0x82134e24
	if (cr0.eq) goto loc_82134E24;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82326a90
	sub_82326A90(ctx, base);
	// b 0x8213525c
	goto loc_8213525C;
loc_82134E24:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7540
	r29.s64 = ctx.r10.s64 + 7540;
	// bne 0x82134e50
	if (!cr0.eq) goto loc_82134E50;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19032
	ctx.r4.s64 = r11.s64 + 19032;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134E50:
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
	// beq 0x82134ea8
	if (cr0.eq) goto loc_82134EA8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,44
	ctx.r3.s64 = r26.s64 + 44;
	// bl 0x82326a90
	sub_82326A90(ctx, base);
loc_82134E80:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82135258
	if (cr0.eq) goto loc_82135258;
	// andi. r11,r25,17
	r11.u64 = r25.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82134d98
	if (!cr0.eq) goto loc_82134D98;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,7492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 7492);
	// bl 0x821342f8
	sub_821342F8(ctx, base);
	// b 0x82134d98
	goto loc_82134D98;
loc_82134EA8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7536
	r29.s64 = ctx.r10.s64 + 7536;
	// bne 0x82134ed4
	if (!cr0.eq) goto loc_82134ED4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19384
	ctx.r4.s64 = r11.s64 + 19384;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134ED4:
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
	// beq 0x82134f08
	if (cr0.eq) goto loc_82134F08;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,20
	ctx.r3.s64 = r26.s64 + 20;
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x82134e80
	goto loc_82134E80;
loc_82134F08:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7532
	r29.s64 = ctx.r10.s64 + 7532;
	// bne 0x82134f34
	if (!cr0.eq) goto loc_82134F34;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19376
	ctx.r4.s64 = r11.s64 + 19376;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134F34:
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
	// beq 0x82134f68
	if (cr0.eq) goto loc_82134F68;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,24
	ctx.r3.s64 = r26.s64 + 24;
	// bl 0x82326c00
	sub_82326C00(ctx, base);
	// b 0x82134e80
	goto loc_82134E80;
loc_82134F68:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7528
	r29.s64 = ctx.r10.s64 + 7528;
	// bne 0x82134f94
	if (!cr0.eq) goto loc_82134F94;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19368
	ctx.r4.s64 = r11.s64 + 19368;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134F94:
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
	// beq 0x82134fc8
	if (cr0.eq) goto loc_82134FC8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,40
	ctx.r3.s64 = r26.s64 + 40;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82134e80
	goto loc_82134E80;
loc_82134FC8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7524
	r29.s64 = ctx.r10.s64 + 7524;
	// bne 0x82134ff4
	if (!cr0.eq) goto loc_82134FF4;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19356
	ctx.r4.s64 = r11.s64 + 19356;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82134FF4:
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
	// beq 0x82135028
	if (cr0.eq) goto loc_82135028;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,64
	ctx.r3.s64 = r26.s64 + 64;
	// bl 0x82326b38
	sub_82326B38(ctx, base);
	// b 0x82134e80
	goto loc_82134E80;
loc_82135028:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7520
	r29.s64 = ctx.r10.s64 + 7520;
	// bne 0x82135054
	if (!cr0.eq) goto loc_82135054;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19340
	ctx.r4.s64 = r11.s64 + 19340;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82135054:
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
	// beq 0x82135088
	if (cr0.eq) goto loc_82135088;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,85
	ctx.r3.s64 = r26.s64 + 85;
loc_82135080:
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x8213525c
	goto loc_8213525C;
loc_82135088:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7516
	r29.s64 = ctx.r10.s64 + 7516;
	// bne 0x821350b4
	if (!cr0.eq) goto loc_821350B4;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19328
	ctx.r4.s64 = r11.s64 + 19328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_821350B4:
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
	// beq 0x821350e4
	if (cr0.eq) goto loc_821350E4;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,86
	ctx.r3.s64 = r26.s64 + 86;
	// b 0x82135080
	goto loc_82135080;
loc_821350E4:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7512
	r29.s64 = ctx.r10.s64 + 7512;
	// bne 0x82135110
	if (!cr0.eq) goto loc_82135110;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19316
	ctx.r4.s64 = r11.s64 + 19316;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_82135110:
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
	// beq 0x82135140
	if (cr0.eq) goto loc_82135140;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,87
	ctx.r3.s64 = r26.s64 + 87;
	// b 0x82135080
	goto loc_82135080;
loc_82135140:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7508
	r29.s64 = ctx.r10.s64 + 7508;
	// bne 0x8213516c
	if (!cr0.eq) goto loc_8213516C;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19304
	ctx.r4.s64 = r11.s64 + 19304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_8213516C:
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
	// beq 0x821351a0
	if (cr0.eq) goto loc_821351A0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,88
	ctx.r3.s64 = r26.s64 + 88;
loc_82135198:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x8213525c
	goto loc_8213525C;
loc_821351A0:
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7504
	r29.s64 = ctx.r10.s64 + 7504;
	// bne 0x821351cc
	if (!cr0.eq) goto loc_821351CC;
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19292
	ctx.r4.s64 = r11.s64 + 19292;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7548);
loc_821351CC:
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
	// beq 0x821351fc
	if (cr0.eq) goto loc_821351FC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,92
	ctx.r3.s64 = r26.s64 + 92;
	// b 0x82135198
	goto loc_82135198;
loc_821351FC:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7500
	r29.s64 = ctx.r10.s64 + 7500;
	// bne 0x82135224
	if (!cr0.eq) goto loc_82135224;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,7548(r30)
	PPC_STORE_U32(r30.u32 + 7548, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19280
	ctx.r4.s64 = r11.s64 + 19280;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82135224:
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
	// beq 0x82135258
	if (cr0.eq) goto loc_82135258;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r26,96
	ctx.r3.s64 = r26.s64 + 96;
	// bl 0x82134550
	sub_82134550(ctx, base);
	// b 0x8213525c
	goto loc_8213525C;
loc_82135258:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213525C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82135264"))) PPC_WEAK_FUNC(sub_82135264);
PPC_FUNC_IMPL(__imp__sub_82135264) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213528C"))) PPC_WEAK_FUNC(sub_8213528C);
PPC_FUNC_IMPL(__imp__sub_8213528C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821352B4"))) PPC_WEAK_FUNC(sub_821352B4);
PPC_FUNC_IMPL(__imp__sub_821352B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821352DC"))) PPC_WEAK_FUNC(sub_821352DC);
PPC_FUNC_IMPL(__imp__sub_821352DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135304"))) PPC_WEAK_FUNC(sub_82135304);
PPC_FUNC_IMPL(__imp__sub_82135304) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213532C"))) PPC_WEAK_FUNC(sub_8213532C);
PPC_FUNC_IMPL(__imp__sub_8213532C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135354"))) PPC_WEAK_FUNC(sub_82135354);
PPC_FUNC_IMPL(__imp__sub_82135354) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213537C"))) PPC_WEAK_FUNC(sub_8213537C);
PPC_FUNC_IMPL(__imp__sub_8213537C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821353A4"))) PPC_WEAK_FUNC(sub_821353A4);
PPC_FUNC_IMPL(__imp__sub_821353A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821353CC"))) PPC_WEAK_FUNC(sub_821353CC);
PPC_FUNC_IMPL(__imp__sub_821353CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821353F4"))) PPC_WEAK_FUNC(sub_821353F4);
PPC_FUNC_IMPL(__imp__sub_821353F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213541C"))) PPC_WEAK_FUNC(sub_8213541C);
PPC_FUNC_IMPL(__imp__sub_8213541C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7548
	r11.s64 = r11.s64 + 7548;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7548
	ctx.r10.s64 = ctx.r10.s64 + 7548;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135444"))) PPC_WEAK_FUNC(sub_82135444);
PPC_FUNC_IMPL(__imp__sub_82135444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135448"))) PPC_WEAK_FUNC(sub_82135448);
PPC_FUNC_IMPL(__imp__sub_82135448) {
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
	// lwz r16,20040(0)
	r16.u64 = PPC_LOAD_U32(20040);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-20
	ctx.r4.s64 = r27.s64 + -20;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82152108
	sub_82152108(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821354c8
	if (cr6.eq) goto loc_821354C8;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821354C0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82135978
	goto loc_82135978;
loc_821354C8:
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7584
	r29.s64 = ctx.r10.s64 + 7584;
	// bne 0x821354fc
	if (!cr0.eq) goto loc_821354FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19868
	ctx.r4.s64 = r11.s64 + 19868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821354FC:
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
	// beq 0x82135554
	if (cr0.eq) goto loc_82135554;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82133920
	sub_82133920(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82135550
	if (cr6.eq) goto loc_82135550;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821354c0
	goto loc_821354C0;
loc_82135550:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135554:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7580
	r29.s64 = ctx.r10.s64 + 7580;
	// bne 0x82135580
	if (!cr0.eq) goto loc_82135580;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19852
	ctx.r4.s64 = r11.s64 + 19852;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135580:
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
	// beq 0x821355d8
	if (cr0.eq) goto loc_821355D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82133ac0
	sub_82133AC0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821355d4
	if (cr6.eq) goto loc_821355D4;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821354c0
	goto loc_821354C0;
loc_821355D4:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821355D8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7576
	r29.s64 = ctx.r10.s64 + 7576;
	// bne 0x82135604
	if (!cr0.eq) goto loc_82135604;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19832
	ctx.r4.s64 = r11.s64 + 19832;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135604:
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
	// beq 0x8213565c
	if (cr0.eq) goto loc_8213565C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82133b90
	sub_82133B90(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82135658
	if (cr6.eq) goto loc_82135658;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821354c0
	goto loc_821354C0;
loc_82135658:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_8213565C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7572
	r29.s64 = ctx.r10.s64 + 7572;
	// bne 0x82135688
	if (!cr0.eq) goto loc_82135688;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19816
	ctx.r4.s64 = r11.s64 + 19816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135688:
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
	// beq 0x821356e0
	if (cr0.eq) goto loc_821356E0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82133c60
	sub_82133C60(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821356dc
	if (cr6.eq) goto loc_821356DC;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821354c0
	goto loc_821354C0;
loc_821356DC:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821356E0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7568
	r29.s64 = ctx.r10.s64 + 7568;
	// bne 0x8213570c
	if (!cr0.eq) goto loc_8213570C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19800
	ctx.r4.s64 = r11.s64 + 19800;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_8213570C:
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
	// beq 0x82135764
	if (cr0.eq) goto loc_82135764;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82133d40
	sub_82133D40(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82135760
	if (cr6.eq) goto loc_82135760;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821354c0
	goto loc_821354C0;
loc_82135760:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135764:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7564
	r29.s64 = ctx.r10.s64 + 7564;
	// bne 0x82135790
	if (!cr0.eq) goto loc_82135790;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19784
	ctx.r4.s64 = r11.s64 + 19784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135790:
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
	// beq 0x821357e8
	if (cr0.eq) goto loc_821357E8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821347d0
	sub_821347D0(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821357e4
	if (cr6.eq) goto loc_821357E4;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821354c0
	goto loc_821354C0;
loc_821357E4:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821357E8:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7560
	r29.s64 = ctx.r10.s64 + 7560;
	// bne 0x82135814
	if (!cr0.eq) goto loc_82135814;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19764
	ctx.r4.s64 = r11.s64 + 19764;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135814:
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
	// beq 0x8213586c
	if (cr0.eq) goto loc_8213586C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82134c40
	sub_82134C40(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82135868
	if (cr6.eq) goto loc_82135868;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821354c0
	goto loc_821354C0;
loc_82135868:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_8213586C:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7556
	r29.s64 = ctx.r10.s64 + 7556;
	// bne 0x82135898
	if (!cr0.eq) goto loc_82135898;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19748
	ctx.r4.s64 = r11.s64 + 19748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135898:
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
	// beq 0x821358f0
	if (cr0.eq) goto loc_821358F0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821339f0
	sub_821339F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821358ec
	if (cr6.eq) goto loc_821358EC;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x821354c0
	goto loc_821354C0;
loc_821358EC:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821358F0:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7552
	r29.s64 = ctx.r10.s64 + 7552;
	// bne 0x82135918
	if (!cr0.eq) goto loc_82135918;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19728
	ctx.r4.s64 = r11.s64 + 19728;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82135918:
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
	// beq 0x8213596c
	if (cr0.eq) goto loc_8213596C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82134400
	sub_82134400(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8213596c
	if (cr6.eq) goto loc_8213596C;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821354c0
	goto loc_821354C0;
loc_8213596C:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_82135978:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82135450"))) PPC_WEAK_FUNC(sub_82135450);
PPC_FUNC_IMPL(__imp__sub_82135450) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-20
	ctx.r4.s64 = r27.s64 + -20;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82152108
	sub_82152108(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821354c8
	if (cr6.eq) goto loc_821354C8;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821354C0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82135978
	goto loc_82135978;
loc_821354C8:
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7584
	r29.s64 = ctx.r10.s64 + 7584;
	// bne 0x821354fc
	if (!cr0.eq) goto loc_821354FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19868
	ctx.r4.s64 = r11.s64 + 19868;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821354FC:
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
	// beq 0x82135554
	if (cr0.eq) goto loc_82135554;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82133920
	sub_82133920(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82135550
	if (cr6.eq) goto loc_82135550;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821354c0
	goto loc_821354C0;
loc_82135550:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135554:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7580
	r29.s64 = ctx.r10.s64 + 7580;
	// bne 0x82135580
	if (!cr0.eq) goto loc_82135580;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19852
	ctx.r4.s64 = r11.s64 + 19852;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135580:
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
	// beq 0x821355d8
	if (cr0.eq) goto loc_821355D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82133ac0
	sub_82133AC0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821355d4
	if (cr6.eq) goto loc_821355D4;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821354c0
	goto loc_821354C0;
loc_821355D4:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821355D8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7576
	r29.s64 = ctx.r10.s64 + 7576;
	// bne 0x82135604
	if (!cr0.eq) goto loc_82135604;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19832
	ctx.r4.s64 = r11.s64 + 19832;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135604:
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
	// beq 0x8213565c
	if (cr0.eq) goto loc_8213565C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82133b90
	sub_82133B90(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82135658
	if (cr6.eq) goto loc_82135658;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821354c0
	goto loc_821354C0;
loc_82135658:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_8213565C:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7572
	r29.s64 = ctx.r10.s64 + 7572;
	// bne 0x82135688
	if (!cr0.eq) goto loc_82135688;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19816
	ctx.r4.s64 = r11.s64 + 19816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135688:
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
	// beq 0x821356e0
	if (cr0.eq) goto loc_821356E0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82133c60
	sub_82133C60(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821356dc
	if (cr6.eq) goto loc_821356DC;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821354c0
	goto loc_821354C0;
loc_821356DC:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821356E0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7568
	r29.s64 = ctx.r10.s64 + 7568;
	// bne 0x8213570c
	if (!cr0.eq) goto loc_8213570C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19800
	ctx.r4.s64 = r11.s64 + 19800;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_8213570C:
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
	// beq 0x82135764
	if (cr0.eq) goto loc_82135764;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82133d40
	sub_82133D40(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82135760
	if (cr6.eq) goto loc_82135760;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821354c0
	goto loc_821354C0;
loc_82135760:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135764:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7564
	r29.s64 = ctx.r10.s64 + 7564;
	// bne 0x82135790
	if (!cr0.eq) goto loc_82135790;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19784
	ctx.r4.s64 = r11.s64 + 19784;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135790:
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
	// beq 0x821357e8
	if (cr0.eq) goto loc_821357E8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821347d0
	sub_821347D0(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821357e4
	if (cr6.eq) goto loc_821357E4;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x821354c0
	goto loc_821354C0;
loc_821357E4:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821357E8:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7560
	r29.s64 = ctx.r10.s64 + 7560;
	// bne 0x82135814
	if (!cr0.eq) goto loc_82135814;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19764
	ctx.r4.s64 = r11.s64 + 19764;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135814:
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
	// beq 0x8213586c
	if (cr0.eq) goto loc_8213586C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82134c40
	sub_82134C40(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82135868
	if (cr6.eq) goto loc_82135868;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// b 0x821354c0
	goto loc_821354C0;
loc_82135868:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_8213586C:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7556
	r29.s64 = ctx.r10.s64 + 7556;
	// bne 0x82135898
	if (!cr0.eq) goto loc_82135898;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19748
	ctx.r4.s64 = r11.s64 + 19748;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_82135898:
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
	// beq 0x821358f0
	if (cr0.eq) goto loc_821358F0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x821339f0
	sub_821339F0(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821358ec
	if (cr6.eq) goto loc_821358EC;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// b 0x821354c0
	goto loc_821354C0;
loc_821358EC:
	// lwz r11,7588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7588);
loc_821358F0:
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7552
	r29.s64 = ctx.r10.s64 + 7552;
	// bne 0x82135918
	if (!cr0.eq) goto loc_82135918;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,7588(r30)
	PPC_STORE_U32(r30.u32 + 7588, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19728
	ctx.r4.s64 = r11.s64 + 19728;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82135918:
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
	// beq 0x8213596c
	if (cr0.eq) goto loc_8213596C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r27,-540
	ctx.r4.s64 = r27.s64 + -540;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82134400
	sub_82134400(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8213596c
	if (cr6.eq) goto loc_8213596C;
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
	// beq 0x82135978
	if (cr0.eq) goto loc_82135978;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// b 0x821354c0
	goto loc_821354C0;
loc_8213596C:
	// li r11,6
	r11.s64 = 6;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_82135978:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82135984"))) PPC_WEAK_FUNC(sub_82135984);
PPC_FUNC_IMPL(__imp__sub_82135984) {
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

__attribute__((alias("__imp__sub_821359AC"))) PPC_WEAK_FUNC(sub_821359AC);
PPC_FUNC_IMPL(__imp__sub_821359AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821359D4"))) PPC_WEAK_FUNC(sub_821359D4);
PPC_FUNC_IMPL(__imp__sub_821359D4) {
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

__attribute__((alias("__imp__sub_821359FC"))) PPC_WEAK_FUNC(sub_821359FC);
PPC_FUNC_IMPL(__imp__sub_821359FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135A24"))) PPC_WEAK_FUNC(sub_82135A24);
PPC_FUNC_IMPL(__imp__sub_82135A24) {
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

__attribute__((alias("__imp__sub_82135A4C"))) PPC_WEAK_FUNC(sub_82135A4C);
PPC_FUNC_IMPL(__imp__sub_82135A4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135A74"))) PPC_WEAK_FUNC(sub_82135A74);
PPC_FUNC_IMPL(__imp__sub_82135A74) {
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

__attribute__((alias("__imp__sub_82135A9C"))) PPC_WEAK_FUNC(sub_82135A9C);
PPC_FUNC_IMPL(__imp__sub_82135A9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135AC4"))) PPC_WEAK_FUNC(sub_82135AC4);
PPC_FUNC_IMPL(__imp__sub_82135AC4) {
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

__attribute__((alias("__imp__sub_82135AEC"))) PPC_WEAK_FUNC(sub_82135AEC);
PPC_FUNC_IMPL(__imp__sub_82135AEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135B14"))) PPC_WEAK_FUNC(sub_82135B14);
PPC_FUNC_IMPL(__imp__sub_82135B14) {
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

__attribute__((alias("__imp__sub_82135B3C"))) PPC_WEAK_FUNC(sub_82135B3C);
PPC_FUNC_IMPL(__imp__sub_82135B3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135B64"))) PPC_WEAK_FUNC(sub_82135B64);
PPC_FUNC_IMPL(__imp__sub_82135B64) {
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

__attribute__((alias("__imp__sub_82135B8C"))) PPC_WEAK_FUNC(sub_82135B8C);
PPC_FUNC_IMPL(__imp__sub_82135B8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,26,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135BB4"))) PPC_WEAK_FUNC(sub_82135BB4);
PPC_FUNC_IMPL(__imp__sub_82135BB4) {
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

__attribute__((alias("__imp__sub_82135BDC"))) PPC_WEAK_FUNC(sub_82135BDC);
PPC_FUNC_IMPL(__imp__sub_82135BDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135C04"))) PPC_WEAK_FUNC(sub_82135C04);
PPC_FUNC_IMPL(__imp__sub_82135C04) {
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

__attribute__((alias("__imp__sub_82135C2C"))) PPC_WEAK_FUNC(sub_82135C2C);
PPC_FUNC_IMPL(__imp__sub_82135C2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7588
	r11.s64 = r11.s64 + 7588;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,24,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7588
	ctx.r10.s64 = ctx.r10.s64 + 7588;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135C54"))) PPC_WEAK_FUNC(sub_82135C54);
PPC_FUNC_IMPL(__imp__sub_82135C54) {
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

__attribute__((alias("__imp__sub_82135C7C"))) PPC_WEAK_FUNC(sub_82135C7C);
PPC_FUNC_IMPL(__imp__sub_82135C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135C80"))) PPC_WEAK_FUNC(sub_82135C80);
PPC_FUNC_IMPL(__imp__sub_82135C80) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82135cac
	goto loc_82135CAC;
loc_82135CA0:
	// bge cr6,0x82135cc8
	if (!cr6.lt) goto loc_82135CC8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82135CAC:
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82135ca0
	if (!cr0.eq) goto loc_82135CA0;
loc_82135CC8:
	// bne cr6,0x82135cec
	if (!cr6.eq) goto loc_82135CEC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821340f0
	sub_821340F0(ctx, base);
	// b 0x82135d14
	goto loc_82135D14;
loc_82135CEC:
	// subf. r30,r11,r4
	r30.s64 = ctx.r4.s64 - r11.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82135d14
	if (cr0.eq) goto loc_82135D14;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_82135CF8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82133fd0
	sub_82133FD0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82135cf8
	if (!cr0.eq) goto loc_82135CF8;
loc_82135D14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82135D1C"))) PPC_WEAK_FUNC(sub_82135D1C);
PPC_FUNC_IMPL(__imp__sub_82135D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135D20"))) PPC_WEAK_FUNC(sub_82135D20);
PPC_FUNC_IMPL(__imp__sub_82135D20) {
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
	// lwz r16,20400(0)
	r16.u64 = PPC_LOAD_U32(20400);
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
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// bl 0x82134298
	sub_82134298(ctx, base);
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

__attribute__((alias("__imp__sub_82135D28"))) PPC_WEAK_FUNC(sub_82135D28);
PPC_FUNC_IMPL(__imp__sub_82135D28) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// bl 0x82134298
	sub_82134298(ctx, base);
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

__attribute__((alias("__imp__sub_82135D98"))) PPC_WEAK_FUNC(sub_82135D98);
PPC_FUNC_IMPL(__imp__sub_82135D98) {
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
	// bl 0x82134488
	sub_82134488(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135DC0"))) PPC_WEAK_FUNC(sub_82135DC0);
PPC_FUNC_IMPL(__imp__sub_82135DC0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82134730
	sub_82134730(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82134038
	sub_82134038(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82135E24"))) PPC_WEAK_FUNC(sub_82135E24);
PPC_FUNC_IMPL(__imp__sub_82135E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135E28"))) PPC_WEAK_FUNC(sub_82135E28);
PPC_FUNC_IMPL(__imp__sub_82135E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
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
	// lwz r16,20464(0)
	r16.u64 = PPC_LOAD_U32(20464);
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,1
	r28.s64 = 1;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r28,20(r30)
	PPC_STORE_U8(r30.u32 + 20, r28.u8);
	// stfs f31,36(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,5048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5048);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// stfs f30,28(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// stfs f30,32(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f31,40(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// stfs f30,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// stfs f31,92(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// stb r28,86(r30)
	PPC_STORE_U8(r30.u32 + 86, r28.u8);
	// stb r10,84(r30)
	PPC_STORE_U8(r30.u32 + 84, ctx.r10.u8);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// stb r10,85(r30)
	PPC_STORE_U8(r30.u32 + 85, ctx.r10.u8);
	// stb r10,87(r30)
	PPC_STORE_U8(r30.u32 + 87, ctx.r10.u8);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82135E30"))) PPC_WEAK_FUNC(sub_82135E30);
PPC_FUNC_IMPL(__imp__sub_82135E30) {
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
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,1
	r28.s64 = 1;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f31,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r28,20(r30)
	PPC_STORE_U8(r30.u32 + 20, r28.u8);
	// stfs f31,36(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,5048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5048);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// stfs f30,28(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// stfs f30,32(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f31,40(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120008
	sub_82120008(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// stfs f30,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// stfs f31,92(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// stb r28,86(r30)
	PPC_STORE_U8(r30.u32 + 86, r28.u8);
	// stb r10,84(r30)
	PPC_STORE_U8(r30.u32 + 84, ctx.r10.u8);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// stb r10,85(r30)
	PPC_STORE_U8(r30.u32 + 85, ctx.r10.u8);
	// stb r10,87(r30)
	PPC_STORE_U8(r30.u32 + 87, ctx.r10.u8);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82135EF8"))) PPC_WEAK_FUNC(sub_82135EF8);
PPC_FUNC_IMPL(__imp__sub_82135EF8) {
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

__attribute__((alias("__imp__sub_82135F20"))) PPC_WEAK_FUNC(sub_82135F20);
PPC_FUNC_IMPL(__imp__sub_82135F20) {
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
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
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

__attribute__((alias("__imp__sub_82135F4C"))) PPC_WEAK_FUNC(sub_82135F4C);
PPC_FUNC_IMPL(__imp__sub_82135F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135F50"))) PPC_WEAK_FUNC(sub_82135F50);
PPC_FUNC_IMPL(__imp__sub_82135F50) {
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
	// lwz r16,20552(0)
	r16.u64 = PPC_LOAD_U32(20552);
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
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x82134038
	sub_82134038(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
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

__attribute__((alias("__imp__sub_82135F58"))) PPC_WEAK_FUNC(sub_82135F58);
PPC_FUNC_IMPL(__imp__sub_82135F58) {
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
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x82134038
	sub_82134038(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
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

__attribute__((alias("__imp__sub_82135FB0"))) PPC_WEAK_FUNC(sub_82135FB0);
PPC_FUNC_IMPL(__imp__sub_82135FB0) {
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

__attribute__((alias("__imp__sub_82135FD8"))) PPC_WEAK_FUNC(sub_82135FD8);
PPC_FUNC_IMPL(__imp__sub_82135FD8) {
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
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
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

__attribute__((alias("__imp__sub_82136004"))) PPC_WEAK_FUNC(sub_82136004);
PPC_FUNC_IMPL(__imp__sub_82136004) {
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

__attribute__((alias("__imp__sub_82136030"))) PPC_WEAK_FUNC(sub_82136030);
PPC_FUNC_IMPL(__imp__sub_82136030) {
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
	// lwz r16,20632(0)
	r16.u64 = PPC_LOAD_U32(20632);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82135c80
	sub_82135C80(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8213609c
	goto loc_8213609C;
loc_82136090:
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8213609C:
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82136090
	if (!cr0.eq) goto loc_82136090;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82136038"))) PPC_WEAK_FUNC(sub_82136038);
PPC_FUNC_IMPL(__imp__sub_82136038) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82135c80
	sub_82135C80(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8213609c
	goto loc_8213609C;
loc_82136090:
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// bl 0x82132d78
	sub_82132D78(ctx, base);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8213609C:
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82136090
	if (!cr0.eq) goto loc_82136090;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821360C0"))) PPC_WEAK_FUNC(sub_821360C0);
PPC_FUNC_IMPL(__imp__sub_821360C0) {
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

__attribute__((alias("__imp__sub_821360E8"))) PPC_WEAK_FUNC(sub_821360E8);
PPC_FUNC_IMPL(__imp__sub_821360E8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,20736(0)
	r16.u64 = PPC_LOAD_U32(20736);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lbz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// addi r11,r29,24
	r11.s64 = r29.s64 + 24;
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// addi r4,r29,44
	ctx.r4.s64 = r29.s64 + 44;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// stb r9,20(r30)
	PPC_STORE_U8(r30.u32 + 20, ctx.r9.u8);
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
	// lfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// addi r28,r30,64
	r28.s64 = r30.s64 + 64;
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lbz r11,84(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 84);
	// addi r4,r29,96
	ctx.r4.s64 = r29.s64 + 96;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// stb r11,84(r30)
	PPC_STORE_U8(r30.u32 + 84, r11.u8);
	// lbz r11,85(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 85);
	// stb r11,85(r30)
	PPC_STORE_U8(r30.u32 + 85, r11.u8);
	// lbz r11,86(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 86);
	// stb r11,86(r30)
	PPC_STORE_U8(r30.u32 + 86, r11.u8);
	// lbz r11,87(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 87);
	// stb r11,87(r30)
	PPC_STORE_U8(r30.u32 + 87, r11.u8);
	// lfs f0,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// lfs f0,92(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// bl 0x82135d28
	sub_82135D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821360F0"))) PPC_WEAK_FUNC(sub_821360F0);
PPC_FUNC_IMPL(__imp__sub_821360F0) {
	PPC_FUNC_PROLOGUE();
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lbz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// addi r11,r29,24
	r11.s64 = r29.s64 + 24;
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// addi r4,r29,44
	ctx.r4.s64 = r29.s64 + 44;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// stb r9,20(r30)
	PPC_STORE_U8(r30.u32 + 20, ctx.r9.u8);
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
	// lfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// bl 0x82353768
	sub_82353768(ctx, base);
	// addi r28,r30,64
	r28.s64 = r30.s64 + 64;
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2488
	r11.s64 = r11.s64 + 2488;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lbz r11,84(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 84);
	// addi r4,r29,96
	ctx.r4.s64 = r29.s64 + 96;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// stb r11,84(r30)
	PPC_STORE_U8(r30.u32 + 84, r11.u8);
	// lbz r11,85(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 85);
	// stb r11,85(r30)
	PPC_STORE_U8(r30.u32 + 85, r11.u8);
	// lbz r11,86(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 86);
	// stb r11,86(r30)
	PPC_STORE_U8(r30.u32 + 86, r11.u8);
	// lbz r11,87(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 87);
	// stb r11,87(r30)
	PPC_STORE_U8(r30.u32 + 87, r11.u8);
	// lfs f0,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// lfs f0,92(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// bl 0x82135d28
	sub_82135D28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821361B8"))) PPC_WEAK_FUNC(sub_821361B8);
PPC_FUNC_IMPL(__imp__sub_821361B8) {
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

__attribute__((alias("__imp__sub_821361E0"))) PPC_WEAK_FUNC(sub_821361E0);
PPC_FUNC_IMPL(__imp__sub_821361E0) {
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

__attribute__((alias("__imp__sub_8213620C"))) PPC_WEAK_FUNC(sub_8213620C);
PPC_FUNC_IMPL(__imp__sub_8213620C) {
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

__attribute__((alias("__imp__sub_82136238"))) PPC_WEAK_FUNC(sub_82136238);
PPC_FUNC_IMPL(__imp__sub_82136238) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x821362f4
	if (cr6.eq) goto loc_821362F4;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82136290
	goto loc_82136290;
loc_82136260:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821362a8
	if (cr0.eq) goto loc_821362A8;
	// mr r11,r29
	r11.u64 = r29.u64;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
loc_82136290:
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82136260
	if (!cr0.eq) goto loc_82136260;
loc_821362A8:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821362d8
	if (cr0.eq) goto loc_821362D8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x821340f0
	sub_821340F0(ctx, base);
	// b 0x821362f4
	goto loc_821362F4;
loc_821362D8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82135dc0
	sub_82135DC0(ctx, base);
loc_821362F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82136300"))) PPC_WEAK_FUNC(sub_82136300);
PPC_FUNC_IMPL(__imp__sub_82136300) {
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
	// lwz r16,20816(0)
	r16.u64 = PPC_LOAD_U32(20816);
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
	// beq cr6,0x82136330
	if (cr6.eq) goto loc_82136330;
	// bl 0x821360f0
	sub_821360F0(ctx, base);
loc_82136330:
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

__attribute__((alias("__imp__sub_82136308"))) PPC_WEAK_FUNC(sub_82136308);
PPC_FUNC_IMPL(__imp__sub_82136308) {
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
	// beq cr6,0x82136330
	if (cr6.eq) goto loc_82136330;
	// bl 0x821360f0
	sub_821360F0(ctx, base);
loc_82136330:
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

__attribute__((alias("__imp__sub_82136344"))) PPC_WEAK_FUNC(sub_82136344);
PPC_FUNC_IMPL(__imp__sub_82136344) {
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

__attribute__((alias("__imp__sub_82136370"))) PPC_WEAK_FUNC(sub_82136370);
PPC_FUNC_IMPL(__imp__sub_82136370) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// lbz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// stb r9,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r9.u8);
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
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// lbz r11,84(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 84);
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stb r11,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r11.u8);
	// lbz r11,85(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 85);
	// stb r11,85(r31)
	PPC_STORE_U8(r31.u32 + 85, r11.u8);
	// lbz r11,86(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 86);
	// stb r11,86(r31)
	PPC_STORE_U8(r31.u32 + 86, r11.u8);
	// lbz r11,87(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 87);
	// stb r11,87(r31)
	PPC_STORE_U8(r31.u32 + 87, r11.u8);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,92(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// bl 0x82136238
	sub_82136238(ctx, base);
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

__attribute__((alias("__imp__sub_82136438"))) PPC_WEAK_FUNC(sub_82136438);
PPC_FUNC_IMPL(__imp__sub_82136438) {
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
	// lwz r16,20916(0)
	r16.u64 = PPC_LOAD_U32(20916);
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
	// bl 0x82133150
	sub_82133150(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82136308
	sub_82136308(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82136440"))) PPC_WEAK_FUNC(sub_82136440);
PPC_FUNC_IMPL(__imp__sub_82136440) {
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
	// bl 0x82133150
	sub_82133150(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82136308
	sub_82136308(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8213648C"))) PPC_WEAK_FUNC(sub_8213648C);
PPC_FUNC_IMPL(__imp__sub_8213648C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,20916(0)
	r16.u64 = PPC_LOAD_U32(20916);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,112
	ctx.r3.s64 = 112;
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

__attribute__((alias("__imp__sub_82136494"))) PPC_WEAK_FUNC(sub_82136494);
PPC_FUNC_IMPL(__imp__sub_82136494) {
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
	// li r3,112
	ctx.r3.s64 = 112;
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

__attribute__((alias("__imp__sub_821364C0"))) PPC_WEAK_FUNC(sub_821364C0);
PPC_FUNC_IMPL(__imp__sub_821364C0) {
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
	// b 0x821364f4
	goto loc_821364F4;
loc_821364D8:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821364F4:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821364d8
	if (!cr6.eq) goto loc_821364D8;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8213650C"))) PPC_WEAK_FUNC(sub_8213650C);
PPC_FUNC_IMPL(__imp__sub_8213650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136510"))) PPC_WEAK_FUNC(sub_82136510);
PPC_FUNC_IMPL(__imp__sub_82136510) {
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
	// bl 0x82136440
	sub_82136440(ctx, base);
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

__attribute__((alias("__imp__sub_82136574"))) PPC_WEAK_FUNC(sub_82136574);
PPC_FUNC_IMPL(__imp__sub_82136574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136578"))) PPC_WEAK_FUNC(sub_82136578);
PPC_FUNC_IMPL(__imp__sub_82136578) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// b 0x821365c4
	goto loc_821365C4;
loc_82136594:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821365C4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// bne 0x82136594
	if (!cr0.eq) goto loc_82136594;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821365F8"))) PPC_WEAK_FUNC(sub_821365F8);
PPC_FUNC_IMPL(__imp__sub_821365F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// b 0x82136638
	goto loc_82136638;
loc_82136618:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82136510
	sub_82136510(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82136638:
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
	// bne 0x82136618
	if (!cr0.eq) goto loc_82136618;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82136658"))) PPC_WEAK_FUNC(sub_82136658);
PPC_FUNC_IMPL(__imp__sub_82136658) {
	PPC_FUNC_PROLOGUE();
	// b 0x821364c0
	sub_821364C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213665C"))) PPC_WEAK_FUNC(sub_8213665C);
PPC_FUNC_IMPL(__imp__sub_8213665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136660"))) PPC_WEAK_FUNC(sub_82136660);
PPC_FUNC_IMPL(__imp__sub_82136660) {
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
	// lwz r16,20984(0)
	r16.u64 = PPC_LOAD_U32(20984);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x821366f8
	if (!cr6.eq) goto loc_821366F8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821366ac
	goto loc_821366AC;
loc_821366A4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_821366AC:
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x821366a4
	if (!cr0.eq) goto loc_821366A4;
	// li r11,0
	r11.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821366f0
	if (cr0.eq) goto loc_821366F0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821366F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821367f0
	goto loc_821367F0;
loc_821366F8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82136724
	if (cr0.eq) goto loc_82136724;
loc_82136718:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82136718
	if (!cr0.eq) goto loc_82136718;
loc_82136724:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821367d8
	if (cr6.lt) goto loc_821367D8;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821367d8
	if (!cr0.eq) goto loc_821367D8;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x82136770
	if (!cr6.eq) goto loc_82136770;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x821366f0
	goto loc_821366F0;
loc_82136770:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x821367d0
	if (!cr6.eq) goto loc_821367D0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82135e30
	sub_82135E30(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82134d68
	sub_82134D68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821367c8
	if (cr0.eq) goto loc_821367C8;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82136510
	sub_82136510(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// b 0x821366f0
	goto loc_821366F0;
loc_821367C8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
loc_821367D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821367f0
	goto loc_821367F0;
loc_821367D8:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82134d68
	sub_82134D68(ctx, base);
loc_821367F0:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82136668"))) PPC_WEAK_FUNC(sub_82136668);
PPC_FUNC_IMPL(__imp__sub_82136668) {
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x821366f8
	if (!cr6.eq) goto loc_821366F8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821366ac
	goto loc_821366AC;
loc_821366A4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_821366AC:
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x821366a4
	if (!cr0.eq) goto loc_821366A4;
	// li r11,0
	r11.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821366f0
	if (cr0.eq) goto loc_821366F0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821366F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821367f0
	goto loc_821367F0;
loc_821366F8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82136724
	if (cr0.eq) goto loc_82136724;
loc_82136718:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82136718
	if (!cr0.eq) goto loc_82136718;
loc_82136724:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821367d8
	if (cr6.lt) goto loc_821367D8;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821367d8
	if (!cr0.eq) goto loc_821367D8;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x82136770
	if (!cr6.eq) goto loc_82136770;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x821366f0
	goto loc_821366F0;
loc_82136770:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x821367d0
	if (!cr6.eq) goto loc_821367D0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82135e30
	sub_82135E30(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82134d68
	sub_82134D68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821367c8
	if (cr0.eq) goto loc_821367C8;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82136510
	sub_82136510(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// b 0x821366f0
	goto loc_821366F0;
loc_821367C8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
loc_821367D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821367f0
	goto loc_821367F0;
loc_821367D8:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82134d68
	sub_82134D68(ctx, base);
loc_821367F0:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821367F8"))) PPC_WEAK_FUNC(sub_821367F8);
PPC_FUNC_IMPL(__imp__sub_821367F8) {
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

__attribute__((alias("__imp__sub_82136820"))) PPC_WEAK_FUNC(sub_82136820);
PPC_FUNC_IMPL(__imp__sub_82136820) {
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
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136848"))) PPC_WEAK_FUNC(sub_82136848);
PPC_FUNC_IMPL(__imp__sub_82136848) {
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
	// lwz r16,21088(0)
	r16.u64 = PPC_LOAD_U32(21088);
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
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x821365f8
	sub_821365F8(ctx, base);
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

__attribute__((alias("__imp__sub_82136850"))) PPC_WEAK_FUNC(sub_82136850);
PPC_FUNC_IMPL(__imp__sub_82136850) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x821365f8
	sub_821365F8(ctx, base);
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

__attribute__((alias("__imp__sub_821368C0"))) PPC_WEAK_FUNC(sub_821368C0);
PPC_FUNC_IMPL(__imp__sub_821368C0) {
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
	// bl 0x82136658
	sub_82136658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821368E8"))) PPC_WEAK_FUNC(sub_821368E8);
PPC_FUNC_IMPL(__imp__sub_821368E8) {
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
	// lwz r16,21264(0)
	r16.u64 = PPC_LOAD_U32(21264);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x82136928
	if (!cr6.eq) goto loc_82136928;
loc_82136920:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82136c28
	goto loc_82136C28;
loc_82136928:
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
	// addi r26,r29,1
	r26.s64 = r29.s64 + 1;
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7608
	r29.s64 = ctx.r10.s64 + 7608;
	// bne 0x82136978
	if (!cr0.eq) goto loc_82136978;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
loc_82136978:
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
	// beq 0x821369d8
	if (cr0.eq) goto loc_821369D8;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x82136920
	if (cr6.eq) goto loc_82136920;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82157c58
	sub_82157C58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_821369D0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82136920
	goto loc_82136920;
loc_821369D8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7604
	r29.s64 = ctx.r10.s64 + 7604;
	// bne 0x82136a04
	if (!cr0.eq) goto loc_82136A04;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21168
	ctx.r4.s64 = r11.s64 + 21168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
loc_82136A04:
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
	// beq 0x82136acc
	if (cr0.eq) goto loc_82136ACC;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x82136a8c
	if (!cr6.eq) goto loc_82136A8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,7496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 7496);
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 7496);
	// bl 0x82159e88
	sub_82159E88(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136A8C:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136ACC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7600
	r29.s64 = ctx.r10.s64 + 7600;
	// bne 0x82136af8
	if (!cr0.eq) goto loc_82136AF8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21160
	ctx.r4.s64 = r11.s64 + 21160;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
loc_82136AF8:
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
	// beq 0x82136b58
	if (cr0.eq) goto loc_82136B58;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x82136920
	if (cr6.eq) goto loc_82136920;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136B58:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7596
	r29.s64 = ctx.r10.s64 + 7596;
	// bne 0x82136b84
	if (!cr0.eq) goto loc_82136B84;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21152
	ctx.r4.s64 = r11.s64 + 21152;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
loc_82136B84:
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
	// beq 0x82136bb8
	if (cr0.eq) goto loc_82136BB8;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// bl 0x82136668
	sub_82136668(ctx, base);
	// b 0x82136c28
	goto loc_82136C28;
loc_82136BB8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7592
	r29.s64 = ctx.r10.s64 + 7592;
	// bne 0x82136be0
	if (!cr0.eq) goto loc_82136BE0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21136
	ctx.r4.s64 = r11.s64 + 21136;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82136BE0:
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
	// beq 0x82136c24
	if (cr0.eq) goto loc_82136C24;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82158558
	sub_82158558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136C24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82136C28:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821368F0"))) PPC_WEAK_FUNC(sub_821368F0);
PPC_FUNC_IMPL(__imp__sub_821368F0) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x82136928
	if (!cr6.eq) goto loc_82136928;
loc_82136920:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82136c28
	goto loc_82136C28;
loc_82136928:
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
	// addi r26,r29,1
	r26.s64 = r29.s64 + 1;
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7608
	r29.s64 = ctx.r10.s64 + 7608;
	// bne 0x82136978
	if (!cr0.eq) goto loc_82136978;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
loc_82136978:
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
	// beq 0x821369d8
	if (cr0.eq) goto loc_821369D8;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x82136920
	if (cr6.eq) goto loc_82136920;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82157c58
	sub_82157C58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_821369D0:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82136920
	goto loc_82136920;
loc_821369D8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7604
	r29.s64 = ctx.r10.s64 + 7604;
	// bne 0x82136a04
	if (!cr0.eq) goto loc_82136A04;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21168
	ctx.r4.s64 = r11.s64 + 21168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
loc_82136A04:
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
	// beq 0x82136acc
	if (cr0.eq) goto loc_82136ACC;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x82136a8c
	if (!cr6.eq) goto loc_82136A8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x821583d8
	sub_821583D8(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,7496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 7496);
	// bl 0x8215ac58
	sub_8215AC58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7496(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 7496);
	// bl 0x82159e88
	sub_82159E88(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136A8C:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136ACC:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7600
	r29.s64 = ctx.r10.s64 + 7600;
	// bne 0x82136af8
	if (!cr0.eq) goto loc_82136AF8;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21160
	ctx.r4.s64 = r11.s64 + 21160;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
loc_82136AF8:
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
	// beq 0x82136b58
	if (cr0.eq) goto loc_82136B58;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x82136920
	if (cr6.eq) goto loc_82136920;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x821584a0
	sub_821584A0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136B58:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7596
	r29.s64 = ctx.r10.s64 + 7596;
	// bne 0x82136b84
	if (!cr0.eq) goto loc_82136B84;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21152
	ctx.r4.s64 = r11.s64 + 21152;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7612(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7612);
loc_82136B84:
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
	// beq 0x82136bb8
	if (cr0.eq) goto loc_82136BB8;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// bl 0x82136668
	sub_82136668(ctx, base);
	// b 0x82136c28
	goto loc_82136C28;
loc_82136BB8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7592
	r29.s64 = ctx.r10.s64 + 7592;
	// bne 0x82136be0
	if (!cr0.eq) goto loc_82136BE0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7612(r30)
	PPC_STORE_U32(r30.u32 + 7612, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21136
	ctx.r4.s64 = r11.s64 + 21136;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82136BE0:
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
	// beq 0x82136c24
	if (cr0.eq) goto loc_82136C24;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82158558
	sub_82158558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82136920
	if (cr0.eq) goto loc_82136920;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821369d0
	goto loc_821369D0;
loc_82136C24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82136C28:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82136C30"))) PPC_WEAK_FUNC(sub_82136C30);
PPC_FUNC_IMPL(__imp__sub_82136C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7612
	r11.s64 = r11.s64 + 7612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7612
	ctx.r10.s64 = ctx.r10.s64 + 7612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136C58"))) PPC_WEAK_FUNC(sub_82136C58);
PPC_FUNC_IMPL(__imp__sub_82136C58) {
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

__attribute__((alias("__imp__sub_82136C80"))) PPC_WEAK_FUNC(sub_82136C80);
PPC_FUNC_IMPL(__imp__sub_82136C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7612
	r11.s64 = r11.s64 + 7612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7612
	ctx.r10.s64 = ctx.r10.s64 + 7612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136CA8"))) PPC_WEAK_FUNC(sub_82136CA8);
PPC_FUNC_IMPL(__imp__sub_82136CA8) {
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

__attribute__((alias("__imp__sub_82136CD0"))) PPC_WEAK_FUNC(sub_82136CD0);
PPC_FUNC_IMPL(__imp__sub_82136CD0) {
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

__attribute__((alias("__imp__sub_82136CF8"))) PPC_WEAK_FUNC(sub_82136CF8);
PPC_FUNC_IMPL(__imp__sub_82136CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7612
	r11.s64 = r11.s64 + 7612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7612
	ctx.r10.s64 = ctx.r10.s64 + 7612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136D20"))) PPC_WEAK_FUNC(sub_82136D20);
PPC_FUNC_IMPL(__imp__sub_82136D20) {
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

__attribute__((alias("__imp__sub_82136D48"))) PPC_WEAK_FUNC(sub_82136D48);
PPC_FUNC_IMPL(__imp__sub_82136D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7612
	r11.s64 = r11.s64 + 7612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7612
	ctx.r10.s64 = ctx.r10.s64 + 7612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136D70"))) PPC_WEAK_FUNC(sub_82136D70);
PPC_FUNC_IMPL(__imp__sub_82136D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7612
	r11.s64 = r11.s64 + 7612;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7612
	ctx.r10.s64 = ctx.r10.s64 + 7612;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136D98"))) PPC_WEAK_FUNC(sub_82136D98);
PPC_FUNC_IMPL(__imp__sub_82136D98) {
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

__attribute__((alias("__imp__sub_82136DC0"))) PPC_WEAK_FUNC(sub_82136DC0);
PPC_FUNC_IMPL(__imp__sub_82136DC0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82136dec
	goto loc_82136DEC;
loc_82136DE0:
	// bge cr6,0x82136e08
	if (!cr6.lt) goto loc_82136E08;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82136DEC:
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82136de0
	if (!cr0.eq) goto loc_82136DE0;
loc_82136E08:
	// bne cr6,0x82136e2c
	if (!cr6.eq) goto loc_82136E2C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82136578
	sub_82136578(ctx, base);
	// b 0x82136e54
	goto loc_82136E54;
loc_82136E2C:
	// subf. r30,r11,r4
	r30.s64 = ctx.r4.s64 - r11.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82136e54
	if (cr0.eq) goto loc_82136E54;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_82136E38:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82136510
	sub_82136510(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82136e38
	if (!cr0.eq) goto loc_82136E38;
loc_82136E54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82136E5C"))) PPC_WEAK_FUNC(sub_82136E5C);
PPC_FUNC_IMPL(__imp__sub_82136E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136E60"))) PPC_WEAK_FUNC(sub_82136E60);
PPC_FUNC_IMPL(__imp__sub_82136E60) {
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
	// lwz r16,21480(0)
	r16.u64 = PPC_LOAD_U32(21480);
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
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// bl 0x821365f8
	sub_821365F8(ctx, base);
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

__attribute__((alias("__imp__sub_82136E68"))) PPC_WEAK_FUNC(sub_82136E68);
PPC_FUNC_IMPL(__imp__sub_82136E68) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// bl 0x821365f8
	sub_821365F8(ctx, base);
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

__attribute__((alias("__imp__sub_82136ED8"))) PPC_WEAK_FUNC(sub_82136ED8);
PPC_FUNC_IMPL(__imp__sub_82136ED8) {
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
	// bl 0x82136658
	sub_82136658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136F00"))) PPC_WEAK_FUNC(sub_82136F00);
PPC_FUNC_IMPL(__imp__sub_82136F00) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82136850
	sub_82136850(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82136F64"))) PPC_WEAK_FUNC(sub_82136F64);
PPC_FUNC_IMPL(__imp__sub_82136F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136F68"))) PPC_WEAK_FUNC(sub_82136F68);
PPC_FUNC_IMPL(__imp__sub_82136F68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x821364c0
	sub_821364C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82136F70"))) PPC_WEAK_FUNC(sub_82136F70);
PPC_FUNC_IMPL(__imp__sub_82136F70) {
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
	// lwz r16,21536(0)
	r16.u64 = PPC_LOAD_U32(21536);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82135e30
	sub_82135E30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82136dc0
	sub_82136DC0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82136F78"))) PPC_WEAK_FUNC(sub_82136F78);
PPC_FUNC_IMPL(__imp__sub_82136F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82135e30
	sub_82135E30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82136dc0
	sub_82136DC0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82136FBC"))) PPC_WEAK_FUNC(sub_82136FBC);
PPC_FUNC_IMPL(__imp__sub_82136FBC) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82136FE4"))) PPC_WEAK_FUNC(sub_82136FE4);
PPC_FUNC_IMPL(__imp__sub_82136FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136FE8"))) PPC_WEAK_FUNC(sub_82136FE8);
PPC_FUNC_IMPL(__imp__sub_82136FE8) {
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
	// lwz r16,21616(0)
	r16.u64 = PPC_LOAD_U32(21616);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-672
	r31.s64 = ctx.r1.s64 + -672;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82137184
	if (cr6.eq) goto loc_82137184;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82137184
	if (cr6.eq) goto loc_82137184;
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r7,r10,26200
	ctx.r7.s64 = ctx.r10.s64 + 26200;
	// addi r6,r11,-11496
	ctx.r6.s64 = r11.s64 + -11496;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82137120
	if (!cr0.eq) goto loc_82137120;
loc_8213707C:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x821370ec
	if (!cr6.gt) goto loc_821370EC;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
loc_821370AC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821370ec
	if (!cr0.eq) goto loc_821370EC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82133728
	sub_82133728(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82134168
	sub_82134168(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x821370ac
	if (cr6.lt) goto loc_821370AC;
loc_821370EC:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82134168
	sub_82134168(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x8213710c
	if (!cr6.eq) goto loc_8213710C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8213710C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8213707c
	if (cr0.eq) goto loc_8213707C;
loc_82137120:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x8213714c
	if (!cr6.gt) goto loc_8213714C;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
loc_82137130:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82133728
	sub_82133728(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82137130
	if (!cr0.eq) goto loc_82137130;
loc_8213714C:
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x82134168
	sub_82134168(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r11,26200
	ctx.r6.s64 = r11.s64 + 26200;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
loc_82137184:
	// addi r1,r31,672
	ctx.r1.s64 = r31.s64 + 672;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82136FF0"))) PPC_WEAK_FUNC(sub_82136FF0);
PPC_FUNC_IMPL(__imp__sub_82136FF0) {
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
	// addi r31,r1,-672
	r31.s64 = ctx.r1.s64 + -672;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82137184
	if (cr6.eq) goto loc_82137184;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82137184
	if (cr6.eq) goto loc_82137184;
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r7,r10,26200
	ctx.r7.s64 = ctx.r10.s64 + 26200;
	// addi r6,r11,-11496
	ctx.r6.s64 = r11.s64 + -11496;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82137120
	if (!cr0.eq) goto loc_82137120;
loc_8213707C:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x821370ec
	if (!cr6.gt) goto loc_821370EC;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
loc_821370AC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821370ec
	if (!cr0.eq) goto loc_821370EC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82133728
	sub_82133728(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82134168
	sub_82134168(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x821370ac
	if (cr6.lt) goto loc_821370AC;
loc_821370EC:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82134168
	sub_82134168(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x8213710c
	if (!cr6.eq) goto loc_8213710C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8213710C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8213707c
	if (cr0.eq) goto loc_8213707C;
loc_82137120:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x8213714c
	if (!cr6.gt) goto loc_8213714C;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
loc_82137130:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82133728
	sub_82133728(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82137130
	if (!cr0.eq) goto loc_82137130;
loc_8213714C:
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x82134168
	sub_82134168(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r11,26200
	ctx.r6.s64 = r11.s64 + 26200;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
loc_82137184:
	// addi r1,r31,672
	ctx.r1.s64 = r31.s64 + 672;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8213718C"))) PPC_WEAK_FUNC(sub_8213718C);
PPC_FUNC_IMPL(__imp__sub_8213718C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-672
	r31.s64 = r12.s64 + -672;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82136658
	sub_82136658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821371B4"))) PPC_WEAK_FUNC(sub_821371B4);
PPC_FUNC_IMPL(__imp__sub_821371B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-672
	r31.s64 = r12.s64 + -672;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r6,r11,26200
	ctx.r6.s64 = r11.s64 + 26200;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821371EC"))) PPC_WEAK_FUNC(sub_821371EC);
PPC_FUNC_IMPL(__imp__sub_821371EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821371F0"))) PPC_WEAK_FUNC(sub_821371F0);
PPC_FUNC_IMPL(__imp__sub_821371F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x821372ac
	if (cr6.eq) goto loc_821372AC;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82137248
	goto loc_82137248;
loc_82137218:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137260
	if (cr0.eq) goto loc_82137260;
	// mr r11,r29
	r11.u64 = r29.u64;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82136370
	sub_82136370(ctx, base);
loc_82137248:
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137218
	if (!cr0.eq) goto loc_82137218;
loc_82137260:
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82137290
	if (cr0.eq) goto loc_82137290;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82136578
	sub_82136578(ctx, base);
	// b 0x821372ac
	goto loc_821372AC;
loc_82137290:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82136f00
	sub_82136F00(ctx, base);
loc_821372AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821372B8"))) PPC_WEAK_FUNC(sub_821372B8);
PPC_FUNC_IMPL(__imp__sub_821372B8) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x821372e8
	goto loc_821372E8;
loc_821372E0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_821372E8:
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x821372e0
	if (!cr0.eq) goto loc_821372E0;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82136f78
	sub_82136F78(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82136370
	sub_82136370(ctx, base);
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

__attribute__((alias("__imp__sub_82137334"))) PPC_WEAK_FUNC(sub_82137334);
PPC_FUNC_IMPL(__imp__sub_82137334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137338"))) PPC_WEAK_FUNC(sub_82137338);
PPC_FUNC_IMPL(__imp__sub_82137338) {
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
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x8213739c
	if (cr6.eq) goto loc_8213739C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82137370
	goto loc_82137370;
loc_82137368:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82137370:
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
	// bne 0x82137368
	if (!cr0.eq) goto loc_82137368;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82136f78
	sub_82136F78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821371f0
	sub_821371F0(ctx, base);
loc_8213739C:
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

__attribute__((alias("__imp__sub_821373B4"))) PPC_WEAK_FUNC(sub_821373B4);
PPC_FUNC_IMPL(__imp__sub_821373B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821373B8"))) PPC_WEAK_FUNC(sub_821373B8);
PPC_FUNC_IMPL(__imp__sub_821373B8) {
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
	// lwz r16,21704(0)
	r16.u64 = PPC_LOAD_U32(21704);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82137404
	if (cr6.eq) goto loc_82137404;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82136e68
	sub_82136E68(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_82137404:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821373C0"))) PPC_WEAK_FUNC(sub_821373C0);
PPC_FUNC_IMPL(__imp__sub_821373C0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82137404
	if (cr6.eq) goto loc_82137404;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82136e68
	sub_82136E68(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_82137404:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8213740C"))) PPC_WEAK_FUNC(sub_8213740C);
PPC_FUNC_IMPL(__imp__sub_8213740C) {
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
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
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

__attribute__((alias("__imp__sub_82137438"))) PPC_WEAK_FUNC(sub_82137438);
PPC_FUNC_IMPL(__imp__sub_82137438) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,21912(0)
	r16.u64 = PPC_LOAD_U32(21912);
	// mflr r12
	// bl 0x8239bce0
	// addi r31,r1,-480
	r31.s64 = ctx.r1.s64 + -480;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r29,0(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// b 0x8213747c
	goto loc_8213747C;
loc_82137464:
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82353098
	sub_82353098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82137514
	if (!cr0.eq) goto loc_82137514;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8213747C:
	// subf r11,r29,r24
	r11.s64 = r24.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137464
	if (!cr0.eq) goto loc_82137464;
	// lbz r11,112(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137504
	if (!cr0.eq) goto loc_82137504;
	// lbz r11,97(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 97);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137504
	if (!cr0.eq) goto loc_82137504;
	// lbz r11,96(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137504
	if (!cr0.eq) goto loc_82137504;
	// addi r11,r30,124
	r11.s64 = r30.s64 + 124;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x821377f0
	if (cr0.eq) goto loc_821377F0;
loc_821374DC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x821374dc
	if (!cr0.eq) goto loc_821374DC;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x821377f0
	if (!cr6.gt) goto loc_821377F0;
loc_82137504:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x821377f8
	if (!cr6.eq) goto loc_821377F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82137808
	goto loc_82137808;
loc_82137514:
	// lbz r11,112(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// li r22,1
	r22.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137528
	if (cr0.eq) goto loc_82137528;
	// stb r22,95(r29)
	PPC_STORE_U8(r29.u32 + 95, r22.u8);
loc_82137528:
	// lbz r11,97(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 97);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137538
	if (cr0.eq) goto loc_82137538;
	// stb r22,94(r29)
	PPC_STORE_U8(r29.u32 + 94, r22.u8);
loc_82137538:
	// lbz r11,96(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137548
	if (cr0.eq) goto loc_82137548;
	// stb r22,93(r29)
	PPC_STORE_U8(r29.u32 + 93, r22.u8);
loc_82137548:
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 116);
	f0.f64 = double(temp.f32);
	// lfs f13,96(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8213755c
	if (!cr6.gt) goto loc_8213755C;
	// stfs f0,96(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 96, temp.u32);
loc_8213755C:
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82137570
	if (!cr6.lt) goto loc_82137570;
	// stfs f0,100(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 100, temp.u32);
loc_82137570:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8213758c
	if (cr0.eq) goto loc_8213758C;
	// addi r3,r29,72
	ctx.r3.s64 = r29.s64 + 72;
	// stb r22,92(r29)
	PPC_STORE_U8(r29.u32 + 92, r22.u8);
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
loc_8213758C:
	// addi r23,r30,124
	r23.s64 = r30.s64 + 124;
	// lwz r26,0(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r11,r26,r23
	r11.s64 = r23.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821377f0
	if (cr0.eq) goto loc_821377F0;
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// addi r24,r29,104
	r24.s64 = r29.s64 + 104;
	// addi r25,r11,96
	r25.s64 = r11.s64 + 96;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,21768
	r28.s64 = r11.s64 + 21768;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,21760
	r27.s64 = r11.s64 + 21760;
loc_821375C8:
	// addi r4,r26,8
	ctx.r4.s64 = r26.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_821375DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821375dc
	if (!cr6.eq) goto loc_821375DC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r6,r11,-4
	ctx.r6.s64 = r11.s64 + -4;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137628:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137628
	if (!cr6.eq) goto loc_82137628;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821376bc
	if (cr0.eq) goto loc_821376BC;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137678:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137678
	if (!cr6.eq) goto loc_82137678;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r6,r11,-5
	ctx.r6.s64 = r11.s64 + -5;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_821376BC:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_821376C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821376c4
	if (!cr6.eq) goto loc_821376C4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82137758
	if (cr0.eq) goto loc_82137758;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137714:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137714
	if (!cr6.eq) goto loc_82137714;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r6,r11,-5
	ctx.r6.s64 = r11.s64 + -5;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82137758:
	// lwz r30,0(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// b 0x82137780
	goto loc_82137780;
loc_82137764:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353098
	sub_82353098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8213777c
	if (cr0.eq) goto loc_8213777C;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8213777C:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82137780:
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137764
	if (!cr0.eq) goto loc_82137764;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821377cc
	if (!cr0.eq) goto loc_821377CC;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r6,r31,336
	ctx.r6.s64 = r31.s64 + 336;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82133fd0
	sub_82133FD0(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_821377CC:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r26,0(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r11,r26,r23
	r11.s64 = r23.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821375c8
	if (!cr0.eq) goto loc_821375C8;
loc_821377F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82137b04
	goto loc_82137B04;
loc_821377F8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82137808:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82135e30
	sub_82135E30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// lbz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 116);
	f0.f64 = double(temp.f32);
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// stfs f0,312(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 312, temp.u32);
	// lfs f0,120(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	f0.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,316(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 316, temp.u32);
	// stb r10,309(r31)
	PPC_STORE_U8(r31.u32 + 309, ctx.r10.u8);
	// lbz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// stb r10,311(r31)
	PPC_STORE_U8(r31.u32 + 311, ctx.r10.u8);
	// lbz r10,97(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 97);
	// stb r10,310(r31)
	PPC_STORE_U8(r31.u32 + 310, ctx.r10.u8);
	// beq 0x82137864
	if (cr0.eq) goto loc_82137864;
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,308(r31)
	PPC_STORE_U8(r31.u32 + 308, r11.u8);
loc_82137864:
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// addi r10,r30,36
	ctx.r10.s64 = r30.s64 + 36;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	f0.f64 = double(temp.f32);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// stb r11,244(r31)
	PPC_STORE_U8(r31.u32 + 244, r11.u8);
	// addi r11,r31,248
	r11.s64 = r31.s64 + 248;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stfs f0,264(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r25,r30,124
	r25.s64 = r30.s64 + 124;
	// lwz r28,0(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r28,r25
	r11.s64 = r25.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137aec
	if (cr0.eq) goto loc_82137AEC;
	// addi r11,r31,320
	r11.s64 = r31.s64 + 320;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,21752
	r29.s64 = r11.s64 + 21752;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,21768
	r27.s64 = r11.s64 + 21768;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r11,21760
	r26.s64 = r11.s64 + 21760;
loc_821378E8:
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_821378FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821378fc
	if (!cr6.eq) goto loc_821378FC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r6,r11,-4
	ctx.r6.s64 = r11.s64 + -4;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137948:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137948
	if (!cr6.eq) goto loc_82137948;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821379f0
	if (cr0.eq) goto loc_821379F0;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137998:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137998
	if (!cr6.eq) goto loc_82137998;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823537f0
	sub_823537F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_821379F0:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_821379F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821379f8
	if (!cr6.eq) goto loc_821379F8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82137aa0
	if (cr0.eq) goto loc_82137AA0;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137A48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137a48
	if (!cr6.eq) goto loc_82137A48;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x823537f0
	sub_823537F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82137AA0:
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r6,r31,368
	ctx.r6.s64 = r31.s64 + 368;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x82133fd0
	sub_82133FD0(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r28,r25
	r11.s64 = r25.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821378e8
	if (!cr0.eq) goto loc_821378E8;
loc_82137AEC:
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821372b8
	sub_821372B8(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82137B04:
	// addi r1,r31,480
	ctx.r1.s64 = r31.s64 + 480;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82137440"))) PPC_WEAK_FUNC(sub_82137440);
PPC_FUNC_IMPL(__imp__sub_82137440) {
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
	// addi r31,r1,-480
	r31.s64 = ctx.r1.s64 + -480;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r29,0(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// b 0x8213747c
	goto loc_8213747C;
loc_82137464:
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82353098
	sub_82353098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82137514
	if (!cr0.eq) goto loc_82137514;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8213747C:
	// subf r11,r29,r24
	r11.s64 = r24.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137464
	if (!cr0.eq) goto loc_82137464;
	// lbz r11,112(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137504
	if (!cr0.eq) goto loc_82137504;
	// lbz r11,97(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 97);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137504
	if (!cr0.eq) goto loc_82137504;
	// lbz r11,96(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137504
	if (!cr0.eq) goto loc_82137504;
	// addi r11,r30,124
	r11.s64 = r30.s64 + 124;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x821377f0
	if (cr0.eq) goto loc_821377F0;
loc_821374DC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x821374dc
	if (!cr0.eq) goto loc_821374DC;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// ble cr6,0x821377f0
	if (!cr6.gt) goto loc_821377F0;
loc_82137504:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x821377f8
	if (!cr6.eq) goto loc_821377F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82137808
	goto loc_82137808;
loc_82137514:
	// lbz r11,112(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// li r22,1
	r22.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137528
	if (cr0.eq) goto loc_82137528;
	// stb r22,95(r29)
	PPC_STORE_U8(r29.u32 + 95, r22.u8);
loc_82137528:
	// lbz r11,97(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 97);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137538
	if (cr0.eq) goto loc_82137538;
	// stb r22,94(r29)
	PPC_STORE_U8(r29.u32 + 94, r22.u8);
loc_82137538:
	// lbz r11,96(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137548
	if (cr0.eq) goto loc_82137548;
	// stb r22,93(r29)
	PPC_STORE_U8(r29.u32 + 93, r22.u8);
loc_82137548:
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 116);
	f0.f64 = double(temp.f32);
	// lfs f13,96(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8213755c
	if (!cr6.gt) goto loc_8213755C;
	// stfs f0,96(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 96, temp.u32);
loc_8213755C:
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82137570
	if (!cr6.lt) goto loc_82137570;
	// stfs f0,100(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 100, temp.u32);
loc_82137570:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8213758c
	if (cr0.eq) goto loc_8213758C;
	// addi r3,r29,72
	ctx.r3.s64 = r29.s64 + 72;
	// stb r22,92(r29)
	PPC_STORE_U8(r29.u32 + 92, r22.u8);
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
loc_8213758C:
	// addi r23,r30,124
	r23.s64 = r30.s64 + 124;
	// lwz r26,0(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// subf r11,r26,r23
	r11.s64 = r23.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821377f0
	if (cr0.eq) goto loc_821377F0;
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// addi r24,r29,104
	r24.s64 = r29.s64 + 104;
	// addi r25,r11,96
	r25.s64 = r11.s64 + 96;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,21768
	r28.s64 = r11.s64 + 21768;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,21760
	r27.s64 = r11.s64 + 21760;
loc_821375C8:
	// addi r4,r26,8
	ctx.r4.s64 = r26.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_821375DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821375dc
	if (!cr6.eq) goto loc_821375DC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r6,r11,-4
	ctx.r6.s64 = r11.s64 + -4;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137628:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137628
	if (!cr6.eq) goto loc_82137628;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821376bc
	if (cr0.eq) goto loc_821376BC;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137678:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137678
	if (!cr6.eq) goto loc_82137678;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r6,r11,-5
	ctx.r6.s64 = r11.s64 + -5;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_821376BC:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_821376C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821376c4
	if (!cr6.eq) goto loc_821376C4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82137758
	if (cr0.eq) goto loc_82137758;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137714:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137714
	if (!cr6.eq) goto loc_82137714;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r6,r11,-5
	ctx.r6.s64 = r11.s64 + -5;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82137758:
	// lwz r30,0(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// b 0x82137780
	goto loc_82137780;
loc_82137764:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82353098
	sub_82353098(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8213777c
	if (cr0.eq) goto loc_8213777C;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8213777C:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82137780:
	// subf r11,r30,r25
	r11.s64 = r25.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82137764
	if (!cr0.eq) goto loc_82137764;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821377cc
	if (!cr0.eq) goto loc_821377CC;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r6,r31,336
	ctx.r6.s64 = r31.s64 + 336;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82133fd0
	sub_82133FD0(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_821377CC:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r26,0(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r11,r26,r23
	r11.s64 = r23.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821375c8
	if (!cr0.eq) goto loc_821375C8;
loc_821377F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82137b04
	goto loc_82137B04;
loc_821377F8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82137808:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82135e30
	sub_82135E30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// lbz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 116);
	f0.f64 = double(temp.f32);
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// stfs f0,312(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 312, temp.u32);
	// lfs f0,120(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	f0.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,316(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 316, temp.u32);
	// stb r10,309(r31)
	PPC_STORE_U8(r31.u32 + 309, ctx.r10.u8);
	// lbz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 112);
	// stb r10,311(r31)
	PPC_STORE_U8(r31.u32 + 311, ctx.r10.u8);
	// lbz r10,97(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 97);
	// stb r10,310(r31)
	PPC_STORE_U8(r31.u32 + 310, ctx.r10.u8);
	// beq 0x82137864
	if (cr0.eq) goto loc_82137864;
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,308(r31)
	PPC_STORE_U8(r31.u32 + 308, r11.u8);
loc_82137864:
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// addi r10,r30,36
	ctx.r10.s64 = r30.s64 + 36;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	f0.f64 = double(temp.f32);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// stb r11,244(r31)
	PPC_STORE_U8(r31.u32 + 244, r11.u8);
	// addi r11,r31,248
	r11.s64 = r31.s64 + 248;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stfs f0,264(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r25,r30,124
	r25.s64 = r30.s64 + 124;
	// lwz r28,0(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// subf r11,r28,r25
	r11.s64 = r25.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82137aec
	if (cr0.eq) goto loc_82137AEC;
	// addi r11,r31,320
	r11.s64 = r31.s64 + 320;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,21752
	r29.s64 = r11.s64 + 21752;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,21768
	r27.s64 = r11.s64 + 21768;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r11,21760
	r26.s64 = r11.s64 + 21760;
loc_821378E8:
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82353768
	sub_82353768(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_821378FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821378fc
	if (!cr6.eq) goto loc_821378FC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r6,r11,-4
	ctx.r6.s64 = r11.s64 + -4;
	// bl 0x823538b8
	sub_823538B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137948:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137948
	if (!cr6.eq) goto loc_82137948;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821379f0
	if (cr0.eq) goto loc_821379F0;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137998:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137998
	if (!cr6.eq) goto loc_82137998;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823537f0
	sub_823537F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_821379F0:
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_821379F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821379f8
	if (!cr6.eq) goto loc_821379F8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82353048
	sub_82353048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82137aa0
	if (cr0.eq) goto loc_82137AA0;
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82137A48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82137a48
	if (!cr6.eq) goto loc_82137A48;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,-5
	ctx.r5.s64 = r11.s64 + -5;
	// bl 0x82353878
	sub_82353878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x823537f0
	sub_823537F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352f98
	sub_82352F98(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
loc_82137AA0:
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x82120008
	sub_82120008(ctx, base);
	// addi r6,r31,368
	ctx.r6.s64 = r31.s64 + 368;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x82133fd0
	sub_82133FD0(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r28,r25
	r11.s64 = r25.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821378e8
	if (!cr0.eq) goto loc_821378E8;
loc_82137AEC:
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821372b8
	sub_821372B8(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82137B04:
	// addi r1,r31,480
	ctx.r1.s64 = r31.s64 + 480;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82137B0C"))) PPC_WEAK_FUNC(sub_82137B0C);
PPC_FUNC_IMPL(__imp__sub_82137B0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137B34"))) PPC_WEAK_FUNC(sub_82137B34);
PPC_FUNC_IMPL(__imp__sub_82137B34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137B5C"))) PPC_WEAK_FUNC(sub_82137B5C);
PPC_FUNC_IMPL(__imp__sub_82137B5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137B84"))) PPC_WEAK_FUNC(sub_82137B84);
PPC_FUNC_IMPL(__imp__sub_82137B84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137BAC"))) PPC_WEAK_FUNC(sub_82137BAC);
PPC_FUNC_IMPL(__imp__sub_82137BAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137BD4"))) PPC_WEAK_FUNC(sub_82137BD4);
PPC_FUNC_IMPL(__imp__sub_82137BD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137BFC"))) PPC_WEAK_FUNC(sub_82137BFC);
PPC_FUNC_IMPL(__imp__sub_82137BFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
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

__attribute__((alias("__imp__sub_82137C24"))) PPC_WEAK_FUNC(sub_82137C24);
PPC_FUNC_IMPL(__imp__sub_82137C24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82135f58
	sub_82135F58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82137C4C"))) PPC_WEAK_FUNC(sub_82137C4C);
PPC_FUNC_IMPL(__imp__sub_82137C4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
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

__attribute__((alias("__imp__sub_82137C74"))) PPC_WEAK_FUNC(sub_82137C74);
PPC_FUNC_IMPL(__imp__sub_82137C74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137C9C"))) PPC_WEAK_FUNC(sub_82137C9C);
PPC_FUNC_IMPL(__imp__sub_82137C9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137CC4"))) PPC_WEAK_FUNC(sub_82137CC4);
PPC_FUNC_IMPL(__imp__sub_82137CC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_82137CEC"))) PPC_WEAK_FUNC(sub_82137CEC);
PPC_FUNC_IMPL(__imp__sub_82137CEC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137D14"))) PPC_WEAK_FUNC(sub_82137D14);
PPC_FUNC_IMPL(__imp__sub_82137D14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_82137D3C"))) PPC_WEAK_FUNC(sub_82137D3C);
PPC_FUNC_IMPL(__imp__sub_82137D3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
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

__attribute__((alias("__imp__sub_82137D64"))) PPC_WEAK_FUNC(sub_82137D64);
PPC_FUNC_IMPL(__imp__sub_82137D64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_82137D8C"))) PPC_WEAK_FUNC(sub_82137D8C);
PPC_FUNC_IMPL(__imp__sub_82137D8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-480
	r31.s64 = r12.s64 + -480;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
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

__attribute__((alias("__imp__sub_82137DB4"))) PPC_WEAK_FUNC(sub_82137DB4);
PPC_FUNC_IMPL(__imp__sub_82137DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137DB8"))) PPC_WEAK_FUNC(sub_82137DB8);
PPC_FUNC_IMPL(__imp__sub_82137DB8) {
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
	// b 0x82137dec
	goto loc_82137DEC;
loc_82137DD0:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82137DEC:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82137dd0
	if (!cr6.eq) goto loc_82137DD0;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82137E04"))) PPC_WEAK_FUNC(sub_82137E04);
PPC_FUNC_IMPL(__imp__sub_82137E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137E08"))) PPC_WEAK_FUNC(sub_82137E08);
PPC_FUNC_IMPL(__imp__sub_82137E08) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// b 0x82137e54
	goto loc_82137E54;
loc_82137E24:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82137E54:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// bne 0x82137e24
	if (!cr0.eq) goto loc_82137E24;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82137E88"))) PPC_WEAK_FUNC(sub_82137E88);
PPC_FUNC_IMPL(__imp__sub_82137E88) {
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
	// lwz r16,22300(0)
	r16.u64 = PPC_LOAD_U32(22300);
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
	// bl 0x821331b8
	sub_821331B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x821373c0
	sub_821373C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82137E90"))) PPC_WEAK_FUNC(sub_82137E90);
PPC_FUNC_IMPL(__imp__sub_82137E90) {
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
	// bl 0x821331b8
	sub_821331B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x821373c0
	sub_821373C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82137EDC"))) PPC_WEAK_FUNC(sub_82137EDC);
PPC_FUNC_IMPL(__imp__sub_82137EDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,22300(0)
	r16.u64 = PPC_LOAD_U32(22300);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
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

__attribute__((alias("__imp__sub_82137EE4"))) PPC_WEAK_FUNC(sub_82137EE4);
PPC_FUNC_IMPL(__imp__sub_82137EE4) {
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
	// li r3,24
	ctx.r3.s64 = 24;
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

__attribute__((alias("__imp__sub_82137F10"))) PPC_WEAK_FUNC(sub_82137F10);
PPC_FUNC_IMPL(__imp__sub_82137F10) {
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
	// bl 0x82137e90
	sub_82137E90(ctx, base);
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

__attribute__((alias("__imp__sub_82137F74"))) PPC_WEAK_FUNC(sub_82137F74);
PPC_FUNC_IMPL(__imp__sub_82137F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137F78"))) PPC_WEAK_FUNC(sub_82137F78);
PPC_FUNC_IMPL(__imp__sub_82137F78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82137db8
	sub_82137DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82137F7C"))) PPC_WEAK_FUNC(sub_82137F7C);
PPC_FUNC_IMPL(__imp__sub_82137F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82137F80"))) PPC_WEAK_FUNC(sub_82137F80);
PPC_FUNC_IMPL(__imp__sub_82137F80) {
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
	// lwz r16,22368(0)
	r16.u64 = PPC_LOAD_U32(22368);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x82138018
	if (!cr6.eq) goto loc_82138018;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82137fcc
	goto loc_82137FCC;
loc_82137FC4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82137FCC:
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82137fc4
	if (!cr0.eq) goto loc_82137FC4;
	// li r11,0
	r11.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138010
	if (cr0.eq) goto loc_82138010;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82138010:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82138130
	goto loc_82138130;
loc_82138018:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82138044
	if (cr0.eq) goto loc_82138044;
loc_82138038:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82138038
	if (!cr0.eq) goto loc_82138038;
loc_82138044:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r6,r27,1
	ctx.r6.s64 = r27.s64 + 1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x8213811c
	if (cr6.lt) goto loc_8213811C;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8213811c
	if (!cr0.eq) goto loc_8213811C;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x82138090
	if (!cr6.eq) goto loc_82138090;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r28,12
	ctx.r3.s64 = r28.s64 + 12;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x82138010
	goto loc_82138010;
loc_82138090:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x82138114
	if (!cr6.eq) goto loc_82138114;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// stw r9,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821368f0
	sub_821368F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8213810c
	if (cr0.eq) goto loc_8213810C;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82137f10
	sub_82137F10(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// b 0x82138010
	goto loc_82138010;
loc_8213810C:
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
loc_82138114:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82138130
	goto loc_82138130;
loc_8213811C:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x821368f0
	sub_821368F0(ctx, base);
loc_82138130:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82137F88"))) PPC_WEAK_FUNC(sub_82137F88);
PPC_FUNC_IMPL(__imp__sub_82137F88) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x82138018
	if (!cr6.eq) goto loc_82138018;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82137fcc
	goto loc_82137FCC;
loc_82137FC4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82137FCC:
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82137fc4
	if (!cr0.eq) goto loc_82137FC4;
	// li r11,0
	r11.s64 = 0;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138010
	if (cr0.eq) goto loc_82138010;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82138010:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82138130
	goto loc_82138130;
loc_82138018:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82138044
	if (cr0.eq) goto loc_82138044;
loc_82138038:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82138038
	if (!cr0.eq) goto loc_82138038;
loc_82138044:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r6,r27,1
	ctx.r6.s64 = r27.s64 + 1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x8213811c
	if (cr6.lt) goto loc_8213811C;
	// andi. r11,r26,19
	r11.u64 = r26.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8213811c
	if (!cr0.eq) goto loc_8213811C;
	// cmpwi cr6,r26,8
	cr6.compare<int32_t>(r26.s32, 8, xer);
	// bne cr6,0x82138090
	if (!cr6.eq) goto loc_82138090;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r28,12
	ctx.r3.s64 = r28.s64 + 12;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x82138010
	goto loc_82138010;
loc_82138090:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bne cr6,0x82138114
	if (!cr6.eq) goto loc_82138114;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// stw r9,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821368f0
	sub_821368F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8213810c
	if (cr0.eq) goto loc_8213810C;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82137f10
	sub_82137F10(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// b 0x82138010
	goto loc_82138010;
loc_8213810C:
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
loc_82138114:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82138130
	goto loc_82138130;
loc_8213811C:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x821368f0
	sub_821368F0(ctx, base);
loc_82138130:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82138138"))) PPC_WEAK_FUNC(sub_82138138);
PPC_FUNC_IMPL(__imp__sub_82138138) {
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

__attribute__((alias("__imp__sub_82138160"))) PPC_WEAK_FUNC(sub_82138160);
PPC_FUNC_IMPL(__imp__sub_82138160) {
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
	// bl 0x82136f68
	sub_82136F68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82138188"))) PPC_WEAK_FUNC(sub_82138188);
PPC_FUNC_IMPL(__imp__sub_82138188) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,22480(0)
	r16.u64 = PPC_LOAD_U32(22480);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r10,-24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// addi r26,r30,-20
	r26.s64 = r30.s64 + -20;
	// addi r11,r11,7496
	r11.s64 = r11.s64 + 7496;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r30,-540
	ctx.r10.s64 = r30.s64 + -540;
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
	// bl 0x82156690
	sub_82156690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138200
	if (cr0.eq) goto loc_82138200;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82138268
	goto loc_82138268;
loc_82138200:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,7620(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7616
	r30.s64 = ctx.r9.s64 + 7616;
	// bne 0x82138230
	if (!cr0.eq) goto loc_82138230;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7620, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,22464
	ctx.r4.s64 = r11.s64 + 22464;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82138230:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138264
	if (cr0.eq) goto loc_82138264;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82137f88
	sub_82137F88(ctx, base);
	// b 0x82138268
	goto loc_82138268;
loc_82138264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82138268:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82138190"))) PPC_WEAK_FUNC(sub_82138190);
PPC_FUNC_IMPL(__imp__sub_82138190) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r10,-24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// addi r26,r30,-20
	r26.s64 = r30.s64 + -20;
	// addi r11,r11,7496
	r11.s64 = r11.s64 + 7496;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r30,-540
	ctx.r10.s64 = r30.s64 + -540;
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
	// bl 0x82156690
	sub_82156690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138200
	if (cr0.eq) goto loc_82138200;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82138268
	goto loc_82138268;
loc_82138200:
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,7620(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,7616
	r30.s64 = ctx.r9.s64 + 7616;
	// bne 0x82138230
	if (!cr0.eq) goto loc_82138230;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7620, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,22464
	ctx.r4.s64 = r11.s64 + 22464;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82138230:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138264
	if (cr0.eq) goto loc_82138264;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82137f88
	sub_82137F88(ctx, base);
	// b 0x82138268
	goto loc_82138268;
loc_82138264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82138268:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82138270"))) PPC_WEAK_FUNC(sub_82138270);
PPC_FUNC_IMPL(__imp__sub_82138270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7620
	r11.s64 = r11.s64 + 7620;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7620
	ctx.r10.s64 = ctx.r10.s64 + 7620;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82138298"))) PPC_WEAK_FUNC(sub_82138298);
PPC_FUNC_IMPL(__imp__sub_82138298) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x821382c4
	goto loc_821382C4;
loc_821382B8:
	// bge cr6,0x821382e0
	if (!cr6.lt) goto loc_821382E0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_821382C4:
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x821382b8
	if (!cr0.eq) goto loc_821382B8;
loc_821382E0:
	// bne cr6,0x82138304
	if (!cr6.eq) goto loc_82138304;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82137e08
	sub_82137E08(ctx, base);
	// b 0x8213832c
	goto loc_8213832C;
loc_82138304:
	// subf. r30,r11,r4
	r30.s64 = ctx.r4.s64 - r11.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8213832c
	if (cr0.eq) goto loc_8213832C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_82138310:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82137f10
	sub_82137F10(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82138310
	if (!cr0.eq) goto loc_82138310;
loc_8213832C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82138334"))) PPC_WEAK_FUNC(sub_82138334);
PPC_FUNC_IMPL(__imp__sub_82138334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138338"))) PPC_WEAK_FUNC(sub_82138338);
PPC_FUNC_IMPL(__imp__sub_82138338) {
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
	// lwz r16,22552(0)
	r16.u64 = PPC_LOAD_U32(22552);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-672
	r31.s64 = ctx.r1.s64 + -672;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x821384c4
	if (cr6.eq) goto loc_821384C4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x821384c4
	if (cr6.eq) goto loc_821384C4;
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r7,r10,32632
	ctx.r7.s64 = ctx.r10.s64 + 32632;
	// addi r6,r11,-11496
	ctx.r6.s64 = r11.s64 + -11496;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// b 0x8213844c
	goto loc_8213844C;
loc_821383BC:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8213842c
	if (!cr6.gt) goto loc_8213842C;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
loc_821383EC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8213842c
	if (!cr0.eq) goto loc_8213842C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82133830
	sub_82133830(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82134200
	sub_82134200(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x821383ec
	if (cr6.lt) goto loc_821383EC;
loc_8213842C:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82134200
	sub_82134200(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x8213844c
	if (!cr6.eq) goto loc_8213844C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8213844C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821383bc
	if (cr0.eq) goto loc_821383BC;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x8213848c
	if (!cr6.gt) goto loc_8213848C;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
loc_82138470:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82133830
	sub_82133830(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82138470
	if (!cr0.eq) goto loc_82138470;
loc_8213848C:
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x82134200
	sub_82134200(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r11,32632
	ctx.r6.s64 = r11.s64 + 32632;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82137db8
	sub_82137DB8(ctx, base);
loc_821384C4:
	// addi r1,r31,672
	ctx.r1.s64 = r31.s64 + 672;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82138340"))) PPC_WEAK_FUNC(sub_82138340);
PPC_FUNC_IMPL(__imp__sub_82138340) {
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
	// addi r31,r1,-672
	r31.s64 = ctx.r1.s64 + -672;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x821384c4
	if (cr6.eq) goto loc_821384C4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x821384c4
	if (cr6.eq) goto loc_821384C4;
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-32217
	r11.s64 = -2111373312;
	// addi r7,r10,32632
	ctx.r7.s64 = ctx.r10.s64 + 32632;
	// addi r6,r11,-11496
	ctx.r6.s64 = r11.s64 + -11496;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cc38
	sub_8239CC38(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// b 0x8213844c
	goto loc_8213844C;
loc_821383BC:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8213842c
	if (!cr6.gt) goto loc_8213842C;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
loc_821383EC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8213842c
	if (!cr0.eq) goto loc_8213842C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82133830
	sub_82133830(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82134200
	sub_82134200(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x821383ec
	if (cr6.lt) goto loc_821383EC;
loc_8213842C:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82134200
	sub_82134200(ctx, base);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bne cr6,0x8213844c
	if (!cr6.eq) goto loc_8213844C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8213844C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821383bc
	if (cr0.eq) goto loc_821383BC;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x8213848c
	if (!cr6.gt) goto loc_8213848C;
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
loc_82138470:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82133830
	sub_82133830(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82138470
	if (!cr0.eq) goto loc_82138470;
loc_8213848C:
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = r11.s64 + -8;
	// bl 0x82134200
	sub_82134200(ctx, base);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r6,r11,32632
	ctx.r6.s64 = r11.s64 + 32632;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239cb10
	sub_8239CB10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82137db8
	sub_82137DB8(ctx, base);
loc_821384C4:
	// addi r1,r31,672
	ctx.r1.s64 = r31.s64 + 672;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821384CC"))) PPC_WEAK_FUNC(sub_821384CC);
PPC_FUNC_IMPL(__imp__sub_821384CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-672
	r31.s64 = r12.s64 + -672;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82137f78
	sub_82137F78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821384F4"))) PPC_WEAK_FUNC(sub_821384F4);
PPC_FUNC_IMPL(__imp__sub_821384F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821384F8"))) PPC_WEAK_FUNC(sub_821384F8);
PPC_FUNC_IMPL(__imp__sub_821384F8) {
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
	// lwz r16,22912(0)
	r16.u64 = PPC_LOAD_U32(22912);
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x821385b4
	if (cr6.eq) goto loc_821385B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r11,22888
	r11.s64 = r11.s64 + 22888;
	// addi r10,r10,22876
	ctx.r10.s64 = ctx.r10.s64 + 22876;
	// addi r9,r9,22868
	ctx.r9.s64 = ctx.r9.s64 + 22868;
	// addi r8,r8,22856
	ctx.r8.s64 = ctx.r8.s64 + 22856;
	// addi r7,r7,22848
	ctx.r7.s64 = ctx.r7.s64 + 22848;
	// addi r6,r6,22840
	ctx.r6.s64 = ctx.r6.s64 + 22840;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r5,r5,22832
	ctx.r5.s64 = ctx.r5.s64 + 22832;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,540
	ctx.r3.s64 = r30.s64 + 540;
	// stw r9,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r6.u32);
	// stw r5,588(r30)
	PPC_STORE_U32(r30.u32 + 588, ctx.r5.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,584
	r11.s64 = r30.s64 + 584;
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
loc_821385B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82155498
	sub_82155498(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r8,r8,22828
	ctx.r8.s64 = ctx.r8.s64 + 22828;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r10,22748
	ctx.r10.s64 = ctx.r10.s64 + 22748;
	// stw r8,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r8.u32);
	// addi r9,r9,22712
	ctx.r9.s64 = ctx.r9.s64 + 22712;
	// addi r11,r11,22788
	r11.s64 = r11.s64 + 22788;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,22692
	ctx.r7.s64 = ctx.r7.s64 + 22692;
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r7,360(r30)
	PPC_STORE_U32(r30.u32 + 360, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r6,r11,22628
	ctx.r6.s64 = r11.s64 + 22628;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// addi r10,r11,22620
	ctx.r10.s64 = r11.s64 + 22620;
	// ld r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r11,r30,520
	r11.s64 = r30.s64 + 520;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-536
	ctx.r9.s64 = ctx.r10.s64 + -536;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-580
	ctx.r9.s64 = ctx.r10.s64 + -580;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r29,516(r30)
	PPC_STORE_U32(r30.u32 + 516, r29.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// std r7,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r7.u64);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r29,532(r30)
	PPC_STORE_U32(r30.u32 + 532, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82138500"))) PPC_WEAK_FUNC(sub_82138500);
PPC_FUNC_IMPL(__imp__sub_82138500) {
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
	// beq cr6,0x821385b4
	if (cr6.eq) goto loc_821385B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r11,22888
	r11.s64 = r11.s64 + 22888;
	// addi r10,r10,22876
	ctx.r10.s64 = ctx.r10.s64 + 22876;
	// addi r9,r9,22868
	ctx.r9.s64 = ctx.r9.s64 + 22868;
	// addi r8,r8,22856
	ctx.r8.s64 = ctx.r8.s64 + 22856;
	// addi r7,r7,22848
	ctx.r7.s64 = ctx.r7.s64 + 22848;
	// addi r6,r6,22840
	ctx.r6.s64 = ctx.r6.s64 + 22840;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r5,r5,22832
	ctx.r5.s64 = ctx.r5.s64 + 22832;
	// stw r10,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r10.u32);
	// addi r3,r30,540
	ctx.r3.s64 = r30.s64 + 540;
	// stw r9,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r9.u32);
	// stw r8,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r8.u32);
	// stw r7,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r7.u32);
	// stw r6,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r6.u32);
	// stw r5,588(r30)
	PPC_STORE_U32(r30.u32 + 588, ctx.r5.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,584
	r11.s64 = r30.s64 + 584;
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
loc_821385B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82155498
	sub_82155498(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r8,r8,22828
	ctx.r8.s64 = ctx.r8.s64 + 22828;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r10,22748
	ctx.r10.s64 = ctx.r10.s64 + 22748;
	// stw r8,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r8.u32);
	// addi r9,r9,22712
	ctx.r9.s64 = ctx.r9.s64 + 22712;
	// addi r11,r11,22788
	r11.s64 = r11.s64 + 22788;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r7,22692
	ctx.r7.s64 = ctx.r7.s64 + 22692;
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// stw r9,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r7,360(r30)
	PPC_STORE_U32(r30.u32 + 360, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r6,r11,22628
	ctx.r6.s64 = r11.s64 + 22628;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// addi r10,r11,22620
	ctx.r10.s64 = r11.s64 + 22620;
	// ld r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r11,r30,520
	r11.s64 = r30.s64 + 520;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-536
	ctx.r9.s64 = ctx.r10.s64 + -536;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-580
	ctx.r9.s64 = ctx.r10.s64 + -580;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r29,516(r30)
	PPC_STORE_U32(r30.u32 + 516, r29.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// std r7,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r7.u64);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r29,532(r30)
	PPC_STORE_U32(r30.u32 + 532, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82138690"))) PPC_WEAK_FUNC(sub_82138690);
PPC_FUNC_IMPL(__imp__sub_82138690) {
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
	// beq 0x821386c4
	if (cr0.eq) goto loc_821386C4;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,540
	ctx.r3.s64 = r11.s64 + 540;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_821386C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821386D4"))) PPC_WEAK_FUNC(sub_821386D4);
PPC_FUNC_IMPL(__imp__sub_821386D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821386D8"))) PPC_WEAK_FUNC(sub_821386D8);
PPC_FUNC_IMPL(__imp__sub_821386D8) {
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
	// bl 0x82121520
	sub_82121520(ctx, base);
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

__attribute__((alias("__imp__sub_82138708"))) PPC_WEAK_FUNC(sub_82138708);
PPC_FUNC_IMPL(__imp__sub_82138708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82132f28
	sub_82132F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138714"))) PPC_WEAK_FUNC(sub_82138714);
PPC_FUNC_IMPL(__imp__sub_82138714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138718"))) PPC_WEAK_FUNC(sub_82138718);
PPC_FUNC_IMPL(__imp__sub_82138718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-100
	ctx.r3.s64 = ctx.r3.s64 + -100;
	// b 0x821b83b0
	sub_821B83B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138728"))) PPC_WEAK_FUNC(sub_82138728);
PPC_FUNC_IMPL(__imp__sub_82138728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82151f30
	sub_82151F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138738"))) PPC_WEAK_FUNC(sub_82138738);
PPC_FUNC_IMPL(__imp__sub_82138738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82132f90
	sub_82132F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138744"))) PPC_WEAK_FUNC(sub_82138744);
PPC_FUNC_IMPL(__imp__sub_82138744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138748"))) PPC_WEAK_FUNC(sub_82138748);
PPC_FUNC_IMPL(__imp__sub_82138748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821386d8
	sub_821386D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138754"))) PPC_WEAK_FUNC(sub_82138754);
PPC_FUNC_IMPL(__imp__sub_82138754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138758"))) PPC_WEAK_FUNC(sub_82138758);
PPC_FUNC_IMPL(__imp__sub_82138758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82138a70
	sub_82138A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138764"))) PPC_WEAK_FUNC(sub_82138764);
PPC_FUNC_IMPL(__imp__sub_82138764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138768"))) PPC_WEAK_FUNC(sub_82138768);
PPC_FUNC_IMPL(__imp__sub_82138768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82132ff0
	sub_82132FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138774"))) PPC_WEAK_FUNC(sub_82138774);
PPC_FUNC_IMPL(__imp__sub_82138774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138778"))) PPC_WEAK_FUNC(sub_82138778);
PPC_FUNC_IMPL(__imp__sub_82138778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82132fe8
	sub_82132FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138784"))) PPC_WEAK_FUNC(sub_82138784);
PPC_FUNC_IMPL(__imp__sub_82138784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138788"))) PPC_WEAK_FUNC(sub_82138788);
PPC_FUNC_IMPL(__imp__sub_82138788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-408
	ctx.r3.s64 = ctx.r3.s64 + -408;
	// b 0x821262c8
	sub_821262C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138798"))) PPC_WEAK_FUNC(sub_82138798);
PPC_FUNC_IMPL(__imp__sub_82138798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-100
	ctx.r3.s64 = ctx.r3.s64 + -100;
	// b 0x821262f8
	sub_821262F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821387A8"))) PPC_WEAK_FUNC(sub_821387A8);
PPC_FUNC_IMPL(__imp__sub_821387A8) {
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
	// lwz r16,22968(0)
	r16.u64 = PPC_LOAD_U32(22968);
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
	// lwz r11,7628(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7628);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8213882c
	if (!cr0.eq) goto loc_8213882C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7628, r11.u32);
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
	// bl 0x82121520
	sub_82121520(ctx, base);
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
	// stw r3,7624(r27)
	PPC_STORE_U32(r27.u32 + 7624, ctx.r3.u32);
	// b 0x82138830
	goto loc_82138830;
loc_8213882C:
	// lwz r3,7624(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 7624);
loc_82138830:
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
	// beq 0x8213886c
	if (cr0.eq) goto loc_8213886C;
	// lwz r11,-536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -536);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-536
	ctx.r3.s64 = r11.s64 + -536;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821388e8
	goto loc_821388E8;
loc_8213886C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821388cc
	if (!cr0.eq) goto loc_821388CC;
	// addic. r11,r30,-540
	xer.ca = r30.u32 > 539;
	r11.s64 = r30.s64 + -540;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82138890
	if (!cr0.eq) goto loc_82138890;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821388a0
	goto loc_821388A0;
loc_82138890:
	// lwz r11,-536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -536);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-536
	ctx.r3.s64 = r11.s64 + -536;
loc_821388A0:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -536);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-536
	ctx.r4.s64 = r11.s64 + -536;
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
loc_821388CC:
	// lwz r11,-536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -536);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-536
	ctx.r3.s64 = r11.s64 + -536;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821388E8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821387B0"))) PPC_WEAK_FUNC(sub_821387B0);
PPC_FUNC_IMPL(__imp__sub_821387B0) {
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
	// lwz r11,7628(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7628);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8213882c
	if (!cr0.eq) goto loc_8213882C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7628, r11.u32);
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
	// bl 0x82121520
	sub_82121520(ctx, base);
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
	// stw r3,7624(r27)
	PPC_STORE_U32(r27.u32 + 7624, ctx.r3.u32);
	// b 0x82138830
	goto loc_82138830;
loc_8213882C:
	// lwz r3,7624(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 7624);
loc_82138830:
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
	// beq 0x8213886c
	if (cr0.eq) goto loc_8213886C;
	// lwz r11,-536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -536);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-536
	ctx.r3.s64 = r11.s64 + -536;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821388e8
	goto loc_821388E8;
loc_8213886C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821388cc
	if (!cr0.eq) goto loc_821388CC;
	// addic. r11,r30,-540
	xer.ca = r30.u32 > 539;
	r11.s64 = r30.s64 + -540;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82138890
	if (!cr0.eq) goto loc_82138890;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821388a0
	goto loc_821388A0;
loc_82138890:
	// lwz r11,-536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -536);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-536
	ctx.r3.s64 = r11.s64 + -536;
loc_821388A0:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -536);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-536
	ctx.r4.s64 = r11.s64 + -536;
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
loc_821388CC:
	// lwz r11,-536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -536);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-536
	ctx.r3.s64 = r11.s64 + -536;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821388E8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821388F4"))) PPC_WEAK_FUNC(sub_821388F4);
PPC_FUNC_IMPL(__imp__sub_821388F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7628
	r11.s64 = r11.s64 + 7628;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7628
	ctx.r10.s64 = ctx.r10.s64 + 7628;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213891C"))) PPC_WEAK_FUNC(sub_8213891C);
PPC_FUNC_IMPL(__imp__sub_8213891C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138920"))) PPC_WEAK_FUNC(sub_82138920);
PPC_FUNC_IMPL(__imp__sub_82138920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821387b0
	sub_821387B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213892C"))) PPC_WEAK_FUNC(sub_8213892C);
PPC_FUNC_IMPL(__imp__sub_8213892C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138930"))) PPC_WEAK_FUNC(sub_82138930);
PPC_FUNC_IMPL(__imp__sub_82138930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82135450
	sub_82135450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213893C"))) PPC_WEAK_FUNC(sub_8213893C);
PPC_FUNC_IMPL(__imp__sub_8213893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138940"))) PPC_WEAK_FUNC(sub_82138940);
PPC_FUNC_IMPL(__imp__sub_82138940) {
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
	// lwz r16,23040(0)
	r16.u64 = PPC_LOAD_U32(23040);
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addi r30,r3,-20
	r30.s64 = ctx.r3.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82137db8
	sub_82137DB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82155a38
	sub_82155A38(ctx, base);
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

__attribute__((alias("__imp__sub_82138948"))) PPC_WEAK_FUNC(sub_82138948);
PPC_FUNC_IMPL(__imp__sub_82138948) {
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addi r30,r3,-20
	r30.s64 = ctx.r3.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82137db8
	sub_82137DB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82155a38
	sub_82155A38(ctx, base);
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

__attribute__((alias("__imp__sub_82138990"))) PPC_WEAK_FUNC(sub_82138990);
PPC_FUNC_IMPL(__imp__sub_82138990) {
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
	// addi r11,r11,-540
	r11.s64 = r11.s64 + -540;
	// addi r3,r11,520
	ctx.r3.s64 = r11.s64 + 520;
	// bl 0x82155a38
	sub_82155A38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821389C0"))) PPC_WEAK_FUNC(sub_821389C0);
PPC_FUNC_IMPL(__imp__sub_821389C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82138190
	sub_82138190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821389CC"))) PPC_WEAK_FUNC(sub_821389CC);
PPC_FUNC_IMPL(__imp__sub_821389CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821389D0"))) PPC_WEAK_FUNC(sub_821389D0);
PPC_FUNC_IMPL(__imp__sub_821389D0) {
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
	// lwz r16,23104(0)
	r16.u64 = PPC_LOAD_U32(23104);
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
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x82138298
	sub_82138298(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
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

__attribute__((alias("__imp__sub_821389D8"))) PPC_WEAK_FUNC(sub_821389D8);
PPC_FUNC_IMPL(__imp__sub_821389D8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x82138298
	sub_82138298(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
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

__attribute__((alias("__imp__sub_82138A44"))) PPC_WEAK_FUNC(sub_82138A44);
PPC_FUNC_IMPL(__imp__sub_82138A44) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82136f68
	sub_82136F68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82138A6C"))) PPC_WEAK_FUNC(sub_82138A6C);
PPC_FUNC_IMPL(__imp__sub_82138A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138A70"))) PPC_WEAK_FUNC(sub_82138A70);
PPC_FUNC_IMPL(__imp__sub_82138A70) {
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
	// addi r30,r3,-540
	r30.s64 = ctx.r3.s64 + -540;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,540
	r31.s64 = r30.s64 + 540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82138948
	sub_82138948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138aa8
	if (cr0.eq) goto loc_82138AA8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82138AA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82138AB4"))) PPC_WEAK_FUNC(sub_82138AB4);
PPC_FUNC_IMPL(__imp__sub_82138AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138AB8"))) PPC_WEAK_FUNC(sub_82138AB8);
PPC_FUNC_IMPL(__imp__sub_82138AB8) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82138ae8
	goto loc_82138AE8;
loc_82138AE0:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82138AE8:
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82138ae0
	if (!cr0.eq) goto loc_82138AE0;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821389d8
	sub_821389D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82137338
	sub_82137338(ctx, base);
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

__attribute__((alias("__imp__sub_82138B40"))) PPC_WEAK_FUNC(sub_82138B40);
PPC_FUNC_IMPL(__imp__sub_82138B40) {
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
	// lwz r16,23216(0)
	r16.u64 = PPC_LOAD_U32(23216);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82133ef8
	sub_82133EF8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82138b7c
	if (cr6.eq) goto loc_82138B7C;
	// stw r11,516(r30)
	PPC_STORE_U32(r30.u32 + 516, r11.u32);
loc_82138B7C:
	// lwz r11,516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82138d80
	if (cr0.eq) goto loc_82138D80;
	// addi r27,r30,520
	r27.s64 = r30.s64 + 520;
	// addi r26,r11,72
	r26.s64 = r11.s64 + 72;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82137db8
	sub_82137DB8(ctx, base);
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// b 0x82138c94
	goto loc_82138C94;
loc_82138BA0:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// addi r11,r31,132
	r11.s64 = r31.s64 + 132;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r11,r31,132
	r11.s64 = r31.s64 + 132;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r28.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82133e20
	sub_82133E20(ctx, base);
	// b 0x82138c64
	goto loc_82138C64;
loc_82138BF8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82158908
	sub_82158908(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// bne cr6,0x82138c5c
	if (!cr6.eq) goto loc_82138C5C;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r11,r11,436
	r11.s64 = r11.s64 + 436;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82138c44
	goto loc_82138C44;
loc_82138C28:
	// addi r5,r29,8
	ctx.r5.s64 = r29.s64 + 8;
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82137440
	sub_82137440(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,436
	r11.s64 = r11.s64 + 436;
loc_82138C44:
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
	// bne 0x82138c28
	if (!cr0.eq) goto loc_82138C28;
loc_82138C5C:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82133ea0
	sub_82133EA0(ctx, base);
loc_82138C64:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82138bf8
	if (!cr6.eq) goto loc_82138BF8;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x82136ff0
	sub_82136FF0(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82138ab8
	sub_82138AB8(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// addi r28,r28,72
	r28.s64 = r28.s64 + 72;
loc_82138C94:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82138ba0
	if (!cr6.eq) goto loc_82138BA0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x82138340
	sub_82138340(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23180
	ctx.r4.s64 = r11.s64 + 23180;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82138d80
	if (cr0.eq) goto loc_82138D80;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,23160
	ctx.r4.s64 = r11.s64 + 23160;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138d58
	if (cr0.eq) goto loc_82138D58;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82138D58:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138d80
	if (cr0.eq) goto loc_82138D80;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82138D80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82157118
	sub_82157118(ctx, base);
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82138B48"))) PPC_WEAK_FUNC(sub_82138B48);
PPC_FUNC_IMPL(__imp__sub_82138B48) {
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
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82133ef8
	sub_82133EF8(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82138b7c
	if (cr6.eq) goto loc_82138B7C;
	// stw r11,516(r30)
	PPC_STORE_U32(r30.u32 + 516, r11.u32);
loc_82138B7C:
	// lwz r11,516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82138d80
	if (cr0.eq) goto loc_82138D80;
	// addi r27,r30,520
	r27.s64 = r30.s64 + 520;
	// addi r26,r11,72
	r26.s64 = r11.s64 + 72;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82137db8
	sub_82137DB8(ctx, base);
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// b 0x82138c94
	goto loc_82138C94;
loc_82138BA0:
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// ld r11,88(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// addi r11,r31,132
	r11.s64 = r31.s64 + 132;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// stw r10,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r11,r31,132
	r11.s64 = r31.s64 + 132;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r28.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82133e20
	sub_82133E20(ctx, base);
	// b 0x82138c64
	goto loc_82138C64;
loc_82138BF8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,516(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 516);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x82158908
	sub_82158908(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// bne cr6,0x82138c5c
	if (!cr6.eq) goto loc_82138C5C;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r11,r11,436
	r11.s64 = r11.s64 + 436;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82138c44
	goto loc_82138C44;
loc_82138C28:
	// addi r5,r29,8
	ctx.r5.s64 = r29.s64 + 8;
	// addi r4,r31,132
	ctx.r4.s64 = r31.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82137440
	sub_82137440(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,436
	r11.s64 = r11.s64 + 436;
loc_82138C44:
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
	// bne 0x82138c28
	if (!cr0.eq) goto loc_82138C28;
loc_82138C5C:
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82133ea0
	sub_82133EA0(ctx, base);
loc_82138C64:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82138bf8
	if (!cr6.eq) goto loc_82138BF8;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x82136ff0
	sub_82136FF0(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82138ab8
	sub_82138AB8(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x821364c0
	sub_821364C0(ctx, base);
	// addi r28,r28,72
	r28.s64 = r28.s64 + 72;
loc_82138C94:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82138ba0
	if (!cr6.eq) goto loc_82138BA0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x82138340
	sub_82138340(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23180
	ctx.r4.s64 = r11.s64 + 23180;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-2968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -2968);
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82138d80
	if (cr0.eq) goto loc_82138D80;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,23160
	ctx.r4.s64 = r11.s64 + 23160;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821332a0
	sub_821332A0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138d58
	if (cr0.eq) goto loc_82138D58;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82138D58:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82138d80
	if (cr0.eq) goto loc_82138D80;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82138D80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82157118
	sub_82157118(ctx, base);
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82138D90"))) PPC_WEAK_FUNC(sub_82138D90);
PPC_FUNC_IMPL(__imp__sub_82138D90) {
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
	// bl 0x82136f68
	sub_82136F68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82138DB8"))) PPC_WEAK_FUNC(sub_82138DB8);
PPC_FUNC_IMPL(__imp__sub_82138DB8) {
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

__attribute__((alias("__imp__sub_82138DE0"))) PPC_WEAK_FUNC(sub_82138DE0);
PPC_FUNC_IMPL(__imp__sub_82138DE0) {
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

__attribute__((alias("__imp__sub_82138E08"))) PPC_WEAK_FUNC(sub_82138E08);
PPC_FUNC_IMPL(__imp__sub_82138E08) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821b8d38
	sub_821B8D38(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82138e58
	if (cr0.eq) goto loc_82138E58;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	f0.f64 = double(temp.f32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82138E58:
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

__attribute__((alias("__imp__sub_82138E6C"))) PPC_WEAK_FUNC(sub_82138E6C);
PPC_FUNC_IMPL(__imp__sub_82138E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138E70"))) PPC_WEAK_FUNC(sub_82138E70);
PPC_FUNC_IMPL(__imp__sub_82138E70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stfs f1,28(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lfs f0,3128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3128);
	f0.f64 = double(temp.f32);
	// addi r11,r1,28
	r11.s64 = ctx.r1.s64 + 28;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x82138ea0
	if (!cr6.gt) goto loc_82138EA0;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// b 0x82138ea8
	goto loc_82138EA8;
loc_82138EA0:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
loc_82138EA8:
	// stfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// blt cr6,0x82138eb4
	if (cr6.lt) goto loc_82138EB4;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
loc_82138EB4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,436(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82138EC0"))) PPC_WEAK_FUNC(sub_82138EC0);
PPC_FUNC_IMPL(__imp__sub_82138EC0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23360(0)
	r16.u64 = PPC_LOAD_U32(23360);
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
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,7636(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r28,r9,7632
	r28.s64 = ctx.r9.s64 + 7632;
	// bne 0x82138f2c
	if (!cr0.eq) goto loc_82138F2C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7636, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23328
	ctx.r4.s64 = r11.s64 + 23328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82138F2C:
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
	// beq 0x82138f60
	if (cr0.eq) goto loc_82138F60;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,-72(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r26.u32 + -72, temp.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// b 0x82138fac
	goto loc_82138FAC;
loc_82138F60:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r26,-72
	ctx.r4.s64 = r26.s64 + -72;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b9e40
	sub_821B9E40(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82138fa4
	if (cr6.eq) goto loc_82138FA4;
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
	// beq 0x82138fb0
	if (cr0.eq) goto loc_82138FB0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82138fb0
	goto loc_82138FB0;
loc_82138FA4:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82138FAC:
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_82138FB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82138EC8"))) PPC_WEAK_FUNC(sub_82138EC8);
PPC_FUNC_IMPL(__imp__sub_82138EC8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,7636(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r28,r9,7632
	r28.s64 = ctx.r9.s64 + 7632;
	// bne 0x82138f2c
	if (!cr0.eq) goto loc_82138F2C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7636, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23328
	ctx.r4.s64 = r11.s64 + 23328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82138F2C:
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
	// beq 0x82138f60
	if (cr0.eq) goto loc_82138F60;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// stfs f1,-72(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r26.u32 + -72, temp.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// b 0x82138fac
	goto loc_82138FAC;
loc_82138F60:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r26,-72
	ctx.r4.s64 = r26.s64 + -72;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b9e40
	sub_821B9E40(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82138fa4
	if (cr6.eq) goto loc_82138FA4;
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
	// beq 0x82138fb0
	if (cr0.eq) goto loc_82138FB0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82138fb0
	goto loc_82138FB0;
loc_82138FA4:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82138FAC:
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_82138FB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82138FBC"))) PPC_WEAK_FUNC(sub_82138FBC);
PPC_FUNC_IMPL(__imp__sub_82138FBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7636
	r11.s64 = r11.s64 + 7636;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7636
	ctx.r10.s64 = ctx.r10.s64 + 7636;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82138FE4"))) PPC_WEAK_FUNC(sub_82138FE4);
PPC_FUNC_IMPL(__imp__sub_82138FE4) {
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

__attribute__((alias("__imp__sub_8213900C"))) PPC_WEAK_FUNC(sub_8213900C);
PPC_FUNC_IMPL(__imp__sub_8213900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139010"))) PPC_WEAK_FUNC(sub_82139010);
PPC_FUNC_IMPL(__imp__sub_82139010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-5056
	r29.s64 = r11.s64 + -5056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82139098
	if (cr6.eq) goto loc_82139098;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82311970
	sub_82311970(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,-360
	ctx.r3.s64 = r31.s64 + -360;
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82138e70
	sub_82138E70(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82139098
	if (cr0.eq) goto loc_82139098;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	f0.f64 = double(temp.f32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82139098:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x821390b0
	if (cr6.lt) goto loc_821390B0;
	// li r11,0
	r11.s64 = 0;
loc_821390B0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821390c0
	if (cr0.eq) goto loc_821390C0;
	// lwz r31,104(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821390f8
	goto loc_821390F8;
loc_821390C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// lfs f13,23444(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 23444);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x821390dc
	if (!cr6.lt) goto loc_821390DC;
	// lwz r31,116(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// b 0x821390f8
	goto loc_821390F8;
loc_821390DC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,23440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 23440);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x821390f4
	if (!cr6.lt) goto loc_821390F4;
	// lwz r31,128(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x821390f8
	goto loc_821390F8;
loc_821390F4:
	// lwz r31,140(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 140);
loc_821390F8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8213912c
	if (cr6.eq) goto loc_8213912C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lfs f0,8748(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8213912C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82139138"))) PPC_WEAK_FUNC(sub_82139138);
PPC_FUNC_IMPL(__imp__sub_82139138) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	r11.s64 = 3;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r29,r31,-72
	r29.s64 = r31.s64 + -72;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r11,r31,-512
	r11.s64 = r31.s64 + -512;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821391e8
	if (!cr0.eq) goto loc_821391E8;
	// addi r4,r31,-56
	ctx.r4.s64 = r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r31,-20
	r28.s64 = r31.s64 + -20;
	// addi r27,r31,-32
	r27.s64 = r31.s64 + -32;
	// addi r26,r31,-44
	r26.s64 = r31.s64 + -44;
	// bl 0x82127688
	sub_82127688(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82127688
	sub_82127688(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82127688
	sub_82127688(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82127688
	sub_82127688(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82131628
	sub_82131628(ctx, base);
loc_821391E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b9310
	sub_821B9310(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821391FC"))) PPC_WEAK_FUNC(sub_821391FC);
PPC_FUNC_IMPL(__imp__sub_821391FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139200"))) PPC_WEAK_FUNC(sub_82139200);
PPC_FUNC_IMPL(__imp__sub_82139200) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23552(0)
	r16.u64 = PPC_LOAD_U32(23552);
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7660
	r29.s64 = ctx.r10.s64 + 7660;
	// bne 0x8213926c
	if (!cr0.eq) goto loc_8213926C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17416
	ctx.r4.s64 = r11.s64 + 17416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_8213926C:
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
	// beq 0x821392a0
	if (cr0.eq) goto loc_821392A0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-72
	ctx.r3.s64 = r27.s64 + -72;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82139494
	goto loc_82139494;
loc_821392A0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7656
	r29.s64 = ctx.r10.s64 + 7656;
	// bne 0x821392cc
	if (!cr0.eq) goto loc_821392CC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9252
	ctx.r4.s64 = r11.s64 + 9252;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_821392CC:
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
	// beq 0x82139300
	if (cr0.eq) goto loc_82139300;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-68
	ctx.r3.s64 = r27.s64 + -68;
	// bl 0x82131550
	sub_82131550(ctx, base);
	// b 0x82139494
	goto loc_82139494;
loc_82139300:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7652
	r29.s64 = ctx.r10.s64 + 7652;
	// bne 0x8213932c
	if (!cr0.eq) goto loc_8213932C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23484
	ctx.r4.s64 = r11.s64 + 23484;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_8213932C:
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
	// beq 0x82139360
	if (cr0.eq) goto loc_82139360;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-56
	ctx.r3.s64 = r27.s64 + -56;
loc_82139358:
	// bl 0x82127408
	sub_82127408(ctx, base);
	// b 0x82139494
	goto loc_82139494;
loc_82139360:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7648
	r29.s64 = ctx.r10.s64 + 7648;
	// bne 0x8213938c
	if (!cr0.eq) goto loc_8213938C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23472
	ctx.r4.s64 = r11.s64 + 23472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_8213938C:
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
	// beq 0x821393bc
	if (cr0.eq) goto loc_821393BC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-44
	ctx.r3.s64 = r27.s64 + -44;
	// b 0x82139358
	goto loc_82139358;
loc_821393BC:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7644
	r29.s64 = ctx.r10.s64 + 7644;
	// bne 0x821393e8
	if (!cr0.eq) goto loc_821393E8;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23460
	ctx.r4.s64 = r11.s64 + 23460;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_821393E8:
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
	// beq 0x82139418
	if (cr0.eq) goto loc_82139418;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-32
	ctx.r3.s64 = r27.s64 + -32;
	// b 0x82139358
	goto loc_82139358;
loc_82139418:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7640
	r29.s64 = ctx.r10.s64 + 7640;
	// bne 0x82139440
	if (!cr0.eq) goto loc_82139440;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23448
	ctx.r4.s64 = r11.s64 + 23448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82139440:
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
	// beq 0x82139470
	if (cr0.eq) goto loc_82139470;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-20
	ctx.r3.s64 = r27.s64 + -20;
	// b 0x82139358
	goto loc_82139358;
loc_82139470:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r27,-72
	ctx.r3.s64 = r27.s64 + -72;
	// bl 0x821ba9d8
	sub_821BA9D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82139494:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82139208"))) PPC_WEAK_FUNC(sub_82139208);
PPC_FUNC_IMPL(__imp__sub_82139208) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7660
	r29.s64 = ctx.r10.s64 + 7660;
	// bne 0x8213926c
	if (!cr0.eq) goto loc_8213926C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17416
	ctx.r4.s64 = r11.s64 + 17416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_8213926C:
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
	// beq 0x821392a0
	if (cr0.eq) goto loc_821392A0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-72
	ctx.r3.s64 = r27.s64 + -72;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82139494
	goto loc_82139494;
loc_821392A0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7656
	r29.s64 = ctx.r10.s64 + 7656;
	// bne 0x821392cc
	if (!cr0.eq) goto loc_821392CC;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,9252
	ctx.r4.s64 = r11.s64 + 9252;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_821392CC:
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
	// beq 0x82139300
	if (cr0.eq) goto loc_82139300;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-68
	ctx.r3.s64 = r27.s64 + -68;
	// bl 0x82131550
	sub_82131550(ctx, base);
	// b 0x82139494
	goto loc_82139494;
loc_82139300:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7652
	r29.s64 = ctx.r10.s64 + 7652;
	// bne 0x8213932c
	if (!cr0.eq) goto loc_8213932C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23484
	ctx.r4.s64 = r11.s64 + 23484;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_8213932C:
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
	// beq 0x82139360
	if (cr0.eq) goto loc_82139360;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-56
	ctx.r3.s64 = r27.s64 + -56;
loc_82139358:
	// bl 0x82127408
	sub_82127408(ctx, base);
	// b 0x82139494
	goto loc_82139494;
loc_82139360:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7648
	r29.s64 = ctx.r10.s64 + 7648;
	// bne 0x8213938c
	if (!cr0.eq) goto loc_8213938C;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23472
	ctx.r4.s64 = r11.s64 + 23472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_8213938C:
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
	// beq 0x821393bc
	if (cr0.eq) goto loc_821393BC;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-44
	ctx.r3.s64 = r27.s64 + -44;
	// b 0x82139358
	goto loc_82139358;
loc_821393BC:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7644
	r29.s64 = ctx.r10.s64 + 7644;
	// bne 0x821393e8
	if (!cr0.eq) goto loc_821393E8;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23460
	ctx.r4.s64 = r11.s64 + 23460;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,7664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 7664);
loc_821393E8:
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
	// beq 0x82139418
	if (cr0.eq) goto loc_82139418;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-32
	ctx.r3.s64 = r27.s64 + -32;
	// b 0x82139358
	goto loc_82139358;
loc_82139418:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,7640
	r29.s64 = ctx.r10.s64 + 7640;
	// bne 0x82139440
	if (!cr0.eq) goto loc_82139440;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,7664(r30)
	PPC_STORE_U32(r30.u32 + 7664, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,23448
	ctx.r4.s64 = r11.s64 + 23448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82139440:
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
	// beq 0x82139470
	if (cr0.eq) goto loc_82139470;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r27,-20
	ctx.r3.s64 = r27.s64 + -20;
	// b 0x82139358
	goto loc_82139358;
loc_82139470:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r27,-72
	ctx.r3.s64 = r27.s64 + -72;
	// bl 0x821ba9d8
	sub_821BA9D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82139494:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8213949C"))) PPC_WEAK_FUNC(sub_8213949C);
PPC_FUNC_IMPL(__imp__sub_8213949C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7664
	r11.s64 = r11.s64 + 7664;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7664
	ctx.r10.s64 = ctx.r10.s64 + 7664;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821394C4"))) PPC_WEAK_FUNC(sub_821394C4);
PPC_FUNC_IMPL(__imp__sub_821394C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7664
	r11.s64 = r11.s64 + 7664;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7664
	ctx.r10.s64 = ctx.r10.s64 + 7664;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821394EC"))) PPC_WEAK_FUNC(sub_821394EC);
PPC_FUNC_IMPL(__imp__sub_821394EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7664
	r11.s64 = r11.s64 + 7664;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7664
	ctx.r10.s64 = ctx.r10.s64 + 7664;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82139514"))) PPC_WEAK_FUNC(sub_82139514);
PPC_FUNC_IMPL(__imp__sub_82139514) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7664
	r11.s64 = r11.s64 + 7664;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7664
	ctx.r10.s64 = ctx.r10.s64 + 7664;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213953C"))) PPC_WEAK_FUNC(sub_8213953C);
PPC_FUNC_IMPL(__imp__sub_8213953C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7664
	r11.s64 = r11.s64 + 7664;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7664
	ctx.r10.s64 = ctx.r10.s64 + 7664;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82139564"))) PPC_WEAK_FUNC(sub_82139564);
PPC_FUNC_IMPL(__imp__sub_82139564) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,7664
	r11.s64 = r11.s64 + 7664;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,7664
	ctx.r10.s64 = ctx.r10.s64 + 7664;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213958C"))) PPC_WEAK_FUNC(sub_8213958C);
PPC_FUNC_IMPL(__imp__sub_8213958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139590"))) PPC_WEAK_FUNC(sub_82139590);
PPC_FUNC_IMPL(__imp__sub_82139590) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r30,-72
	r29.s64 = r30.s64 + -72;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b9da0
	sub_821B9DA0(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,3132
	ctx.r6.s64 = r11.s64 + 3132;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82139628
	if (cr0.eq) goto loc_82139628;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x82139628
	if (cr6.eq) goto loc_82139628;
	// lfs f0,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 440);
	f0.f64 = double(temp.f32);
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// lwz r4,488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 488);
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// lwz r4,476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 476);
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// lwz r4,500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 500);
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// lwz r4,452(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// bl 0x82131148
	sub_82131148(ctx, base);
loc_82139628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82139630"))) PPC_WEAK_FUNC(sub_82139630);
PPC_FUNC_IMPL(__imp__sub_82139630) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bgt cr6,0x82139754
	if (cr6.gt) goto loc_82139754;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82139720
	if (cr6.lt) goto loc_82139720;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lbz r11,-4936(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -4936);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82139688
	if (!cr0.eq) goto loc_82139688;
	// addi r4,r31,-72
	ctx.r4.s64 = r31.s64 + -72;
loc_82139688:
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r11,r31,-512
	r11.s64 = r31.s64 + -512;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82139720
	if (!cr0.eq) goto loc_82139720;
	// addi r4,r31,-56
	ctx.r4.s64 = r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82127788
	sub_82127788(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r31,-44
	ctx.r4.s64 = r31.s64 + -44;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bgt cr6,0x821396f8
	if (cr6.gt) goto loc_821396F8;
	// bl 0x82127788
	sub_82127788(ctx, base);
	// addi r3,r31,-20
	ctx.r3.s64 = r31.s64 + -20;
	// lwz r4,-36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -36);
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// addi r3,r31,-32
	ctx.r3.s64 = r31.s64 + -32;
	// lwz r4,-36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -36);
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// b 0x82139714
	goto loc_82139714;
loc_821396F8:
	// addi r29,r31,-20
	r29.s64 = r31.s64 + -20;
	// addi r28,r31,-32
	r28.s64 = r31.s64 + -32;
	// bl 0x82127788
	sub_82127788(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82127788
	sub_82127788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82127788
	sub_82127788(ctx, base);
loc_82139714:
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82131680
	sub_82131680(ctx, base);
loc_82139720:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-72
	ctx.r3.s64 = r31.s64 + -72;
	// bl 0x821ba438
	sub_821BA438(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-4904
	ctx.r4.s64 = r11.s64 + -4904;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x821281a0
	sub_821281A0(ctx, base);
loc_82139754:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8213975C"))) PPC_WEAK_FUNC(sub_8213975C);
PPC_FUNC_IMPL(__imp__sub_8213975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139760"))) PPC_WEAK_FUNC(sub_82139760);
PPC_FUNC_IMPL(__imp__sub_82139760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x82128448
	sub_82128448(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// bgt cr6,0x821397e8
	if (cr6.gt) goto loc_821397E8;
	// addi r29,r31,-72
	r29.s64 = r31.s64 + -72;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821ba4c8
	sub_821BA4C8(ctx, base);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bge cr6,0x821397e8
	if (!cr6.lt) goto loc_821397E8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r31,-56
	ctx.r4.s64 = r31.s64 + -56;
	// addi r30,r31,-68
	r30.s64 = r31.s64 + -68;
	// addi r29,r31,-44
	r29.s64 = r31.s64 + -44;
	// bl 0x82127788
	sub_82127788(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82127788
	sub_82127788(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82131680
	sub_82131680(ctx, base);
	// addi r3,r31,-20
	ctx.r3.s64 = r31.s64 + -20;
	// lwz r4,-36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -36);
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
	// addi r3,r31,-32
	ctx.r3.s64 = r31.s64 + -32;
	// lwz r4,-36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -36);
	// bl 0x82126ba0
	sub_82126BA0(ctx, base);
loc_821397E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821397F0"))) PPC_WEAK_FUNC(sub_821397F0);
PPC_FUNC_IMPL(__imp__sub_821397F0) {
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
	// lwz r16,23952(0)
	r16.u64 = PPC_LOAD_U32(23952);
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r9,23880
	ctx.r9.s64 = ctx.r9.s64 + 23880;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r11,r11,23840
	r11.s64 = r11.s64 + 23840;
	// stw r9,-348(r30)
	PPC_STORE_U32(r30.u32 + -348, ctx.r9.u32);
	// addi r10,r10,23800
	ctx.r10.s64 = ctx.r10.s64 + 23800;
	// lwz r9,-508(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -508);
	// addi r8,r8,23792
	ctx.r8.s64 = ctx.r8.s64 + 23792;
	// addi r7,r7,23772
	ctx.r7.s64 = ctx.r7.s64 + 23772;
	// stw r11,-512(r30)
	PPC_STORE_U32(r30.u32 + -512, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,-384(r30)
	PPC_STORE_U32(r30.u32 + -384, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r8,-332(r30)
	PPC_STORE_U32(r30.u32 + -332, ctx.r8.u32);
	// addi r11,r11,23708
	r11.s64 = r11.s64 + 23708;
	// stw r7,-152(r30)
	PPC_STORE_U32(r30.u32 + -152, ctx.r7.u32);
	// addi r10,r10,23700
	ctx.r10.s64 = ctx.r10.s64 + 23700;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, r11.u32);
	// lwz r11,-508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -508);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-508(r11)
	PPC_STORE_U32(r11.u32 + -508, ctx.r10.u32);
	// lwz r11,-508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -508);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-508
	ctx.r10.s64 = r11.s64 + -508;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-512(r11)
	PPC_STORE_U32(r11.u32 + -512, ctx.r10.u32);
	// lwz r11,-508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -508);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-552
	ctx.r10.s64 = r11.s64 + -552;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-512(r11)
	PPC_STORE_U32(r11.u32 + -512, ctx.r10.u32);
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x82126780
	sub_82126780(ctx, base);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x82126780
	sub_82126780(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x82126780
	sub_82126780(ctx, base);
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x82126780
	sub_82126780(ctx, base);
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x82131058
	sub_82131058(ctx, base);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// bl 0x821286d0
	sub_821286D0(ctx, base);
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

__attribute__((alias("__imp__sub_821397F8"))) PPC_WEAK_FUNC(sub_821397F8);
PPC_FUNC_IMPL(__imp__sub_821397F8) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r9,23880
	ctx.r9.s64 = ctx.r9.s64 + 23880;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r11,r11,23840
	r11.s64 = r11.s64 + 23840;
	// stw r9,-348(r30)
	PPC_STORE_U32(r30.u32 + -348, ctx.r9.u32);
	// addi r10,r10,23800
	ctx.r10.s64 = ctx.r10.s64 + 23800;
	// lwz r9,-508(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -508);
	// addi r8,r8,23792
	ctx.r8.s64 = ctx.r8.s64 + 23792;
	// addi r7,r7,23772
	ctx.r7.s64 = ctx.r7.s64 + 23772;
	// stw r11,-512(r30)
	PPC_STORE_U32(r30.u32 + -512, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,-384(r30)
	PPC_STORE_U32(r30.u32 + -384, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r8,-332(r30)
	PPC_STORE_U32(r30.u32 + -332, ctx.r8.u32);
	// addi r11,r11,23708
	r11.s64 = r11.s64 + 23708;
	// stw r7,-152(r30)
	PPC_STORE_U32(r30.u32 + -152, ctx.r7.u32);
	// addi r10,r10,23700
	ctx.r10.s64 = ctx.r10.s64 + 23700;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, r11.u32);
	// lwz r11,-508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -508);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-508(r11)
	PPC_STORE_U32(r11.u32 + -508, ctx.r10.u32);
	// lwz r11,-508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -508);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-508
	ctx.r10.s64 = r11.s64 + -508;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-512(r11)
	PPC_STORE_U32(r11.u32 + -512, ctx.r10.u32);
	// lwz r11,-508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -508);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-552
	ctx.r10.s64 = r11.s64 + -552;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-512(r11)
	PPC_STORE_U32(r11.u32 + -512, ctx.r10.u32);
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x82126780
	sub_82126780(ctx, base);
	// addi r3,r30,-32
	ctx.r3.s64 = r30.s64 + -32;
	// bl 0x82126780
	sub_82126780(ctx, base);
	// addi r3,r30,-44
	ctx.r3.s64 = r30.s64 + -44;
	// bl 0x82126780
	sub_82126780(ctx, base);
	// addi r3,r30,-56
	ctx.r3.s64 = r30.s64 + -56;
	// bl 0x82126780
	sub_82126780(ctx, base);
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x82131058
	sub_82131058(ctx, base);
	// addi r3,r30,-72
	ctx.r3.s64 = r30.s64 + -72;
	// bl 0x821286d0
	sub_821286D0(ctx, base);
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

__attribute__((alias("__imp__sub_821398F4"))) PPC_WEAK_FUNC(sub_821398F4);
PPC_FUNC_IMPL(__imp__sub_821398F4) {
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
	// addi r11,r11,-512
	r11.s64 = r11.s64 + -512;
	// addi r3,r11,440
	ctx.r3.s64 = r11.s64 + 440;
	// bl 0x821286d0
	sub_821286D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82139924"))) PPC_WEAK_FUNC(sub_82139924);
PPC_FUNC_IMPL(__imp__sub_82139924) {
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
	// addi r11,r11,-512
	r11.s64 = r11.s64 + -512;
	// addi r3,r11,444
	ctx.r3.s64 = r11.s64 + 444;
	// bl 0x821311d0
	sub_821311D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82139954"))) PPC_WEAK_FUNC(sub_82139954);
PPC_FUNC_IMPL(__imp__sub_82139954) {
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
	// addi r11,r11,-512
	r11.s64 = r11.s64 + -512;
	// addi r3,r11,456
	ctx.r3.s64 = r11.s64 + 456;
	// bl 0x82126e68
	sub_82126E68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82139984"))) PPC_WEAK_FUNC(sub_82139984);
PPC_FUNC_IMPL(__imp__sub_82139984) {
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
	// addi r11,r11,-512
	r11.s64 = r11.s64 + -512;
	// addi r3,r11,468
	ctx.r3.s64 = r11.s64 + 468;
	// bl 0x82126e68
	sub_82126E68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821399B4"))) PPC_WEAK_FUNC(sub_821399B4);
PPC_FUNC_IMPL(__imp__sub_821399B4) {
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
	// addi r11,r11,-512
	r11.s64 = r11.s64 + -512;
	// addi r3,r11,480
	ctx.r3.s64 = r11.s64 + 480;
	// bl 0x82126e68
	sub_82126E68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

