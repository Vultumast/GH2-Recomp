#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821DAAA8"))) PPC_WEAK_FUNC(sub_821DAAA8);
PPC_FUNC_IMPL(__imp__sub_821DAAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11704
	r11.s64 = r11.s64 + 11704;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,23,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11704
	ctx.r10.s64 = ctx.r10.s64 + 11704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAAD0"))) PPC_WEAK_FUNC(sub_821DAAD0);
PPC_FUNC_IMPL(__imp__sub_821DAAD0) {
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
	// bl 0x821d9ed0
	sub_821D9ED0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dab00
	if (cr0.eq) goto loc_821DAB00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821DAB00:
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

__attribute__((alias("__imp__sub_821DAB1C"))) PPC_WEAK_FUNC(sub_821DAB1C);
PPC_FUNC_IMPL(__imp__sub_821DAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAB20"))) PPC_WEAK_FUNC(sub_821DAB20);
PPC_FUNC_IMPL(__imp__sub_821DAB20) {
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
	// lwz r16,-5096(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -5096);
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,11720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11720);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11716
	r29.s64 = ctx.r10.s64 + 11716;
	// bne 0x821dab90
	if (!cr0.eq) goto loc_821DAB90;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11720(r30)
	PPC_STORE_U32(r30.u32 + 11720, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5156
	ctx.r4.s64 = r11.s64 + -5156;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11720);
loc_821DAB90:
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
	// beq 0x821dabb8
	if (cr0.eq) goto loc_821DABB8;
	// addi r3,r25,40
	ctx.r3.s64 = r25.s64 + 40;
	// bl 0x821d9580
	sub_821D9580(ctx, base);
loc_821DABB0:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x821dace4
	goto loc_821DACE4;
loc_821DABB8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11712
	r29.s64 = ctx.r10.s64 + 11712;
	// bne 0x821dabe4
	if (!cr0.eq) goto loc_821DABE4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11720(r30)
	PPC_STORE_U32(r30.u32 + 11720, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5172
	ctx.r4.s64 = r11.s64 + -5172;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11720);
loc_821DABE4:
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
	// beq 0x821dac1c
	if (cr0.eq) goto loc_821DAC1C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821d9138
	sub_821D9138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,40
	ctx.r3.s64 = r25.s64 + 40;
	// bl 0x821d95e0
	sub_821D95E0(ctx, base);
	// b 0x821dabb0
	goto loc_821DABB0;
loc_821DAC1C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11708
	r29.s64 = ctx.r10.s64 + 11708;
	// bne 0x821dac44
	if (!cr0.eq) goto loc_821DAC44;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,11720(r30)
	PPC_STORE_U32(r30.u32 + 11720, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5192
	ctx.r4.s64 = r11.s64 + -5192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DAC44:
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
	// beq 0x821dac9c
	if (cr0.eq) goto loc_821DAC9C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821da258
	sub_821DA258(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dac9c
	if (cr6.eq) goto loc_821DAC9C;
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
	// beq 0x821dace8
	if (cr0.eq) goto loc_821DACE8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821DAC94:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821dace8
	goto loc_821DACE8;
loc_821DAC9C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dacdc
	if (cr6.eq) goto loc_821DACDC;
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
	// beq 0x821dace8
	if (cr0.eq) goto loc_821DACE8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821dac94
	goto loc_821DAC94;
loc_821DACDC:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_821DACE4:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_821DACE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DAB28"))) PPC_WEAK_FUNC(sub_821DAB28);
PPC_FUNC_IMPL(__imp__sub_821DAB28) {
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
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,11720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11720);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11716
	r29.s64 = ctx.r10.s64 + 11716;
	// bne 0x821dab90
	if (!cr0.eq) goto loc_821DAB90;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11720(r30)
	PPC_STORE_U32(r30.u32 + 11720, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5156
	ctx.r4.s64 = r11.s64 + -5156;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11720);
loc_821DAB90:
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
	// beq 0x821dabb8
	if (cr0.eq) goto loc_821DABB8;
	// addi r3,r25,40
	ctx.r3.s64 = r25.s64 + 40;
	// bl 0x821d9580
	sub_821D9580(ctx, base);
loc_821DABB0:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x821dace4
	goto loc_821DACE4;
loc_821DABB8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11712
	r29.s64 = ctx.r10.s64 + 11712;
	// bne 0x821dabe4
	if (!cr0.eq) goto loc_821DABE4;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11720(r30)
	PPC_STORE_U32(r30.u32 + 11720, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5172
	ctx.r4.s64 = r11.s64 + -5172;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11720);
loc_821DABE4:
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
	// beq 0x821dac1c
	if (cr0.eq) goto loc_821DAC1C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x821d9138
	sub_821D9138(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,40
	ctx.r3.s64 = r25.s64 + 40;
	// bl 0x821d95e0
	sub_821D95E0(ctx, base);
	// b 0x821dabb0
	goto loc_821DABB0;
loc_821DAC1C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11708
	r29.s64 = ctx.r10.s64 + 11708;
	// bne 0x821dac44
	if (!cr0.eq) goto loc_821DAC44;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,11720(r30)
	PPC_STORE_U32(r30.u32 + 11720, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5192
	ctx.r4.s64 = r11.s64 + -5192;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DAC44:
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
	// beq 0x821dac9c
	if (cr0.eq) goto loc_821DAC9C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821da258
	sub_821DA258(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dac9c
	if (cr6.eq) goto loc_821DAC9C;
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
	// beq 0x821dace8
	if (cr0.eq) goto loc_821DACE8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821DAC94:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821dace8
	goto loc_821DACE8;
loc_821DAC9C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dacdc
	if (cr6.eq) goto loc_821DACDC;
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
	// beq 0x821dace8
	if (cr0.eq) goto loc_821DACE8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821dac94
	goto loc_821DAC94;
loc_821DACDC:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_821DACE4:
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
loc_821DACE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DACF4"))) PPC_WEAK_FUNC(sub_821DACF4);
PPC_FUNC_IMPL(__imp__sub_821DACF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11720
	r11.s64 = r11.s64 + 11720;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11720
	ctx.r10.s64 = ctx.r10.s64 + 11720;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAD1C"))) PPC_WEAK_FUNC(sub_821DAD1C);
PPC_FUNC_IMPL(__imp__sub_821DAD1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11720
	r11.s64 = r11.s64 + 11720;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11720
	ctx.r10.s64 = ctx.r10.s64 + 11720;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAD44"))) PPC_WEAK_FUNC(sub_821DAD44);
PPC_FUNC_IMPL(__imp__sub_821DAD44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11720
	r11.s64 = r11.s64 + 11720;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11720
	ctx.r10.s64 = ctx.r10.s64 + 11720;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DAD6C"))) PPC_WEAK_FUNC(sub_821DAD6C);
PPC_FUNC_IMPL(__imp__sub_821DAD6C) {
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

__attribute__((alias("__imp__sub_821DAD94"))) PPC_WEAK_FUNC(sub_821DAD94);
PPC_FUNC_IMPL(__imp__sub_821DAD94) {
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

__attribute__((alias("__imp__sub_821DADBC"))) PPC_WEAK_FUNC(sub_821DADBC);
PPC_FUNC_IMPL(__imp__sub_821DADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DADC0"))) PPC_WEAK_FUNC(sub_821DADC0);
PPC_FUNC_IMPL(__imp__sub_821DADC0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821221a8
	sub_821221A8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_821DAE30:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821dae30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821DAE30;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_821DAE5C"))) PPC_WEAK_FUNC(sub_821DAE5C);
PPC_FUNC_IMPL(__imp__sub_821DAE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAE60"))) PPC_WEAK_FUNC(sub_821DAE60);
PPC_FUNC_IMPL(__imp__sub_821DAE60) {
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
	// lwz r16,-4944(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4944);
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
	// addi r11,r11,-4964
	r11.s64 = r11.s64 + -4964;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821daeb8
	if (cr0.eq) goto loc_821DAEB8;
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
loc_821DAEB8:
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

__attribute__((alias("__imp__sub_821DAE68"))) PPC_WEAK_FUNC(sub_821DAE68);
PPC_FUNC_IMPL(__imp__sub_821DAE68) {
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
	// addi r11,r11,-4964
	r11.s64 = r11.s64 + -4964;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821daeb8
	if (cr0.eq) goto loc_821DAEB8;
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
loc_821DAEB8:
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

__attribute__((alias("__imp__sub_821DAEDC"))) PPC_WEAK_FUNC(sub_821DAEDC);
PPC_FUNC_IMPL(__imp__sub_821DAEDC) {
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

__attribute__((alias("__imp__sub_821DAF04"))) PPC_WEAK_FUNC(sub_821DAF04);
PPC_FUNC_IMPL(__imp__sub_821DAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAF08"))) PPC_WEAK_FUNC(sub_821DAF08);
PPC_FUNC_IMPL(__imp__sub_821DAF08) {
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
	// bl 0x821dae68
	sub_821DAE68(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821daf38
	if (cr0.eq) goto loc_821DAF38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821DAF38:
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

__attribute__((alias("__imp__sub_821DAF54"))) PPC_WEAK_FUNC(sub_821DAF54);
PPC_FUNC_IMPL(__imp__sub_821DAF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAF58"))) PPC_WEAK_FUNC(sub_821DAF58);
PPC_FUNC_IMPL(__imp__sub_821DAF58) {
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
	// beq cr6,0x821dafc4
	if (cr6.eq) goto loc_821DAFC4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821dafa0
	if (cr6.eq) goto loc_821DAFA0;
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
loc_821DAFA0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x821dafc4
	if (cr6.eq) goto loc_821DAFC4;
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
loc_821DAFC4:
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

__attribute__((alias("__imp__sub_821DAFDC"))) PPC_WEAK_FUNC(sub_821DAFDC);
PPC_FUNC_IMPL(__imp__sub_821DAFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DAFE0"))) PPC_WEAK_FUNC(sub_821DAFE0);
PPC_FUNC_IMPL(__imp__sub_821DAFE0) {
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
	// bl 0x821dae68
	sub_821DAE68(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821db010
	if (cr0.eq) goto loc_821DB010;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821DB010:
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

__attribute__((alias("__imp__sub_821DB02C"))) PPC_WEAK_FUNC(sub_821DB02C);
PPC_FUNC_IMPL(__imp__sub_821DB02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB030"))) PPC_WEAK_FUNC(sub_821DB030);
PPC_FUNC_IMPL(__imp__sub_821DB030) {
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
	// beq 0x821db064
	if (cr0.eq) goto loc_821DB064;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x821db06c
	goto loc_821DB06C;
loc_821DB064:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_821DB06C:
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

__attribute__((alias("__imp__sub_821DB088"))) PPC_WEAK_FUNC(sub_821DB088);
PPC_FUNC_IMPL(__imp__sub_821DB088) {
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
	// beq 0x821db0f8
	if (cr0.eq) goto loc_821DB0F8;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821db0f8
	if (cr0.eq) goto loc_821DB0F8;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,1204
	r31.s64 = r11.s64 + 1204;
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
	// b 0x821db0fc
	goto loc_821DB0FC;
loc_821DB0F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821DB0FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821daf58
	sub_821DAF58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DB110"))) PPC_WEAK_FUNC(sub_821DB110);
PPC_FUNC_IMPL(__imp__sub_821DB110) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821db190
	if (cr0.eq) goto loc_821DB190;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
loc_821DB158:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821db170
	if (cr0.eq) goto loc_821DB170;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x821db174
	goto loc_821DB174;
loc_821DB170:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_821DB174:
	// bl 0x823594a8
	sub_823594A8(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821db158
	if (!cr0.eq) goto loc_821DB158;
loc_821DB190:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DB19C"))) PPC_WEAK_FUNC(sub_821DB19C);
PPC_FUNC_IMPL(__imp__sub_821DB19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB1A0"))) PPC_WEAK_FUNC(sub_821DB1A0);
PPC_FUNC_IMPL(__imp__sub_821DB1A0) {
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
	// lwz r16,-4872(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4872);
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
	// bne cr6,0x821db210
	if (!cr6.eq) goto loc_821DB210;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821db1e4
	if (cr0.eq) goto loc_821DB1E4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821DB1E4:
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
	// beq 0x821db248
	if (cr0.eq) goto loc_821DB248;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821db248
	goto loc_821DB248;
loc_821DB210:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,1204
	r30.s64 = r11.s64 + 1204;
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
	// bl 0x821daf58
	sub_821DAF58(ctx, base);
loc_821DB248:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DB1A8"))) PPC_WEAK_FUNC(sub_821DB1A8);
PPC_FUNC_IMPL(__imp__sub_821DB1A8) {
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
	// bne cr6,0x821db210
	if (!cr6.eq) goto loc_821DB210;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821db1e4
	if (cr0.eq) goto loc_821DB1E4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821DB1E4:
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
	// beq 0x821db248
	if (cr0.eq) goto loc_821DB248;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821db248
	goto loc_821DB248;
loc_821DB210:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,1204
	r30.s64 = r11.s64 + 1204;
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
	// bl 0x821daf58
	sub_821DAF58(ctx, base);
loc_821DB248:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DB254"))) PPC_WEAK_FUNC(sub_821DB254);
PPC_FUNC_IMPL(__imp__sub_821DB254) {
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

__attribute__((alias("__imp__sub_821DB27C"))) PPC_WEAK_FUNC(sub_821DB27C);
PPC_FUNC_IMPL(__imp__sub_821DB27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB280"))) PPC_WEAK_FUNC(sub_821DB280);
PPC_FUNC_IMPL(__imp__sub_821DB280) {
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
	// lwz r16,-4800(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4800);
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x821db2e0
	if (!cr6.eq) goto loc_821DB2E0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// beq 0x821db2ec
	if (cr0.eq) goto loc_821DB2EC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821db2ec
	goto loc_821DB2EC;
loc_821DB2E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_821DB2EC:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821DB288"))) PPC_WEAK_FUNC(sub_821DB288);
PPC_FUNC_IMPL(__imp__sub_821DB288) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x821db2e0
	if (!cr6.eq) goto loc_821DB2E0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// beq 0x821db2ec
	if (cr0.eq) goto loc_821DB2EC;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821db2ec
	goto loc_821DB2EC;
loc_821DB2E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_821DB2EC:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821DB308"))) PPC_WEAK_FUNC(sub_821DB308);
PPC_FUNC_IMPL(__imp__sub_821DB308) {
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

__attribute__((alias("__imp__sub_821DB330"))) PPC_WEAK_FUNC(sub_821DB330);
PPC_FUNC_IMPL(__imp__sub_821DB330) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,11200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11200);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -296);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-280
	ctx.r3.s64 = r31.s64 + -280;
	// bl 0x821e7640
	sub_821E7640(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-64
	ctx.r3.s64 = r31.s64 + -64;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-244
	ctx.r3.s64 = r31.s64 + -244;
	// bl 0x821b2a18
	sub_821B2A18(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,-24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -24);
	f0.f64 = double(temp.f32);
	// addi r30,r31,-36
	r30.s64 = r31.s64 + -36;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r31,r31,-48
	r31.s64 = r31.s64 + -48;
	// bl 0x821db110
	sub_821DB110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b8818
	sub_821B8818(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821db030
	sub_821DB030(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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

__attribute__((alias("__imp__sub_821DB3F4"))) PPC_WEAK_FUNC(sub_821DB3F4);
PPC_FUNC_IMPL(__imp__sub_821DB3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB3F8"))) PPC_WEAK_FUNC(sub_821DB3F8);
PPC_FUNC_IMPL(__imp__sub_821DB3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821db470
	if (cr0.eq) goto loc_821DB470;
	// addi r30,r3,280
	r30.s64 = ctx.r3.s64 + 280;
	// stfs f31,8(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821db458
	goto loc_821DB458;
loc_821DB438:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821DB458:
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
	// bne 0x821db438
	if (!cr0.eq) goto loc_821DB438;
loc_821DB470:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB490"))) PPC_WEAK_FUNC(sub_821DB490);
PPC_FUNC_IMPL(__imp__sub_821DB490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r30,r3,280
	r30.s64 = ctx.r3.s64 + 280;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// b 0x821db4e0
	goto loc_821DB4E0;
loc_821DB4BC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f1.f64);
	// bge cr6,0x821db4dc
	if (!cr6.lt) goto loc_821DB4DC;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_821DB4DC:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821DB4E0:
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
	// bne 0x821db4bc
	if (!cr0.eq) goto loc_821DB4BC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB518"))) PPC_WEAK_FUNC(sub_821DB518);
PPC_FUNC_IMPL(__imp__sub_821DB518) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-4736(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4736);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x821db5a8
	if (cr6.eq) goto loc_821DB5A8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821db5a8
	if (cr0.eq) goto loc_821DB5A8;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,11556(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// bl 0x8214fc60
	sub_8214FC60(ctx, base);
	// lfs f0,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x821db5a8
	if (!cr6.lt) goto loc_821DB5A8;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821db64c
	if (cr0.eq) goto loc_821DB64C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821db64c
	goto loc_821DB64C;
loc_821DB5A8:
	// addi r29,r30,272
	r29.s64 = r30.s64 + 272;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821db64c
	if (!cr0.eq) goto loc_821DB64C;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// lwz r30,244(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821b81a8
	sub_821B81A8(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// beq 0x821db61c
	if (cr0.eq) goto loc_821DB61C;
loc_821DB5F8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
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
	// bne 0x821db5f8
	if (!cr0.eq) goto loc_821DB5F8;
loc_821DB61C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821db64c
	if (cr6.eq) goto loc_821DB64C;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,11632(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11632);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x821db64c
	if (cr6.eq) goto loc_821DB64C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821DB64C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DB520"))) PPC_WEAK_FUNC(sub_821DB520);
PPC_FUNC_IMPL(__imp__sub_821DB520) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x821db5a8
	if (cr6.eq) goto loc_821DB5A8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821db5a8
	if (cr0.eq) goto loc_821DB5A8;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,11556(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 11556);
	// bl 0x8214fc60
	sub_8214FC60(ctx, base);
	// lfs f0,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x821db5a8
	if (!cr6.lt) goto loc_821DB5A8;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821db64c
	if (cr0.eq) goto loc_821DB64C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821db64c
	goto loc_821DB64C;
loc_821DB5A8:
	// addi r29,r30,272
	r29.s64 = r30.s64 + 272;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821db64c
	if (!cr0.eq) goto loc_821DB64C;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// lwz r30,244(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821b81a8
	sub_821B81A8(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
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
	// beq 0x821db61c
	if (cr0.eq) goto loc_821DB61C;
loc_821DB5F8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
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
	// bne 0x821db5f8
	if (!cr0.eq) goto loc_821DB5F8;
loc_821DB61C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821db64c
	if (cr6.eq) goto loc_821DB64C;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// lwz r11,11632(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11632);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x821db64c
	if (cr6.eq) goto loc_821DB64C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821DB64C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DB654"))) PPC_WEAK_FUNC(sub_821DB654);
PPC_FUNC_IMPL(__imp__sub_821DB654) {
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
	// bl 0x821b8218
	sub_821B8218(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DB67C"))) PPC_WEAK_FUNC(sub_821DB67C);
PPC_FUNC_IMPL(__imp__sub_821DB67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB680"))) PPC_WEAK_FUNC(sub_821DB680);
PPC_FUNC_IMPL(__imp__sub_821DB680) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x821b2b90
	sub_821B2B90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821db6e8
	if (cr0.eq) goto loc_821DB6E8;
	// addi r30,r31,272
	r30.s64 = r31.s64 + 272;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821db6d0
	goto loc_821DB6D0;
loc_821DB6B0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821DB6D0:
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
	// bne 0x821db6b0
	if (!cr0.eq) goto loc_821DB6B0;
loc_821DB6E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DB6F0"))) PPC_WEAK_FUNC(sub_821DB6F0);
PPC_FUNC_IMPL(__imp__sub_821DB6F0) {
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
	// addi r30,r3,272
	r30.s64 = ctx.r3.s64 + 272;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,-1
	r29.s64 = -1;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x821db754
	goto loc_821DB754;
loc_821DB710:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x821db744
	if (cr0.eq) goto loc_821DB744;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821db750
	goto loc_821DB750;
loc_821DB744:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x821db778
	if (!cr6.eq) goto loc_821DB778;
loc_821DB750:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821DB754:
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
	// bne 0x821db710
	if (!cr0.eq) goto loc_821DB710;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821DB770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_821DB778:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821db770
	goto loc_821DB770;
}

__attribute__((alias("__imp__sub_821DB780"))) PPC_WEAK_FUNC(sub_821DB780);
PPC_FUNC_IMPL(__imp__sub_821DB780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r31,272
	r30.s64 = r31.s64 + 272;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// b 0x821db80c
	goto loc_821DB80C;
loc_821DB7C4:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821b2c18
	sub_821B2C18(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821db808
	if (cr0.eq) goto loc_821DB808;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r11
	r28.u64 = r11.u64;
	// bl 0x82122100
	sub_82122100(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_821DB808:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821DB80C:
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
	// bne 0x821db7c4
	if (!cr0.eq) goto loc_821DB7C4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821DB834"))) PPC_WEAK_FUNC(sub_821DB834);
PPC_FUNC_IMPL(__imp__sub_821DB834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB838"))) PPC_WEAK_FUNC(sub_821DB838);
PPC_FUNC_IMPL(__imp__sub_821DB838) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// beq 0x821db918
	if (cr0.eq) goto loc_821DB918;
	// addi r29,r31,272
	r29.s64 = r31.s64 + 272;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stfs f31,8(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821db910
	if (cr0.eq) goto loc_821DB910;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,1204
	r28.s64 = r11.s64 + 1204;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r27,r11,1232
	r27.s64 = r11.s64 + 1232;
loc_821DB8A0:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821db8e8
	if (cr0.eq) goto loc_821DB8E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821c78e8
	sub_821C78E8(ctx, base);
loc_821DB8E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226b7d0
	sub_8226B7D0(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821db8a0
	if (!cr0.eq) goto loc_821DB8A0;
loc_821DB910:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821db954
	goto loc_821DB954;
loc_821DB918:
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x821db950
	if (cr6.eq) goto loc_821DB950;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// b 0x821db910
	goto loc_821DB910;
loc_821DB950:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DB954:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821DB960"))) PPC_WEAK_FUNC(sub_821DB960);
PPC_FUNC_IMPL(__imp__sub_821DB960) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x821db9b4
	if (cr0.eq) goto loc_821DB9B4;
loc_821DB980:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x821db9ac
	if (!cr6.eq) goto loc_821DB9AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82157de0
	sub_82157DE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_821DB9AC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x821db980
	if (!cr6.eq) goto loc_821DB980;
loc_821DB9B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DB9BC"))) PPC_WEAK_FUNC(sub_821DB9BC);
PPC_FUNC_IMPL(__imp__sub_821DB9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DB9C0"))) PPC_WEAK_FUNC(sub_821DB9C0);
PPC_FUNC_IMPL(__imp__sub_821DB9C0) {
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
	// beq cr6,0x821db9f8
	if (cr6.eq) goto loc_821DB9F8;
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
loc_821DB9F8:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x821dba28
	if (!cr6.eq) goto loc_821DBA28;
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
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821daf58
	sub_821DAF58(ctx, base);
loc_821DBA28:
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

__attribute__((alias("__imp__sub_821DBA3C"))) PPC_WEAK_FUNC(sub_821DBA3C);
PPC_FUNC_IMPL(__imp__sub_821DBA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBA40"))) PPC_WEAK_FUNC(sub_821DBA40);
PPC_FUNC_IMPL(__imp__sub_821DBA40) {
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
	// lwz r16,-4664(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4664);
	// mflr r12
	// bl 0x8239bcec
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x821dbab0
	if (!cr6.eq) goto loc_821DBAB0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
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
	// beq 0x821dbaa8
	if (cr0.eq) goto loc_821DBAA8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821DBAA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821dbbd0
	goto loc_821DBBD0;
loc_821DBAB0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r28,8(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x821dbae0
	if (!cr0.gt) goto loc_821DBAE0;
loc_821DBAD4:
	// lwz r28,4(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x821dbad4
	if (cr0.gt) goto loc_821DBAD4;
loc_821DBAE0:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// beq cr6,0x821dbbb4
	if (cr6.eq) goto loc_821DBBB4;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// beq cr6,0x821dbb58
	if (cr6.eq) goto loc_821DBB58;
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// beq cr6,0x821dbb1c
	if (cr6.eq) goto loc_821DBB1C;
	// cmpwi cr6,r25,8
	cr6.compare<int32_t>(r25.s32, 8, xer);
	// bne cr6,0x821dbbac
	if (!cr6.eq) goto loc_821DBBAC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82157de0
	sub_82157DE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// b 0x821dbaa8
	goto loc_821DBAA8;
loc_821DBB1C:
	// li r11,0
	r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821db288
	sub_821DB288(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dbbac
	if (cr0.eq) goto loc_821DBBAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821582a8
	sub_821582A8(ctx, base);
	// b 0x821dbaa8
	goto loc_821DBAA8;
loc_821DBB58:
	// li r11,0
	r11.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821db288
	sub_821DB288(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dbbac
	if (cr0.eq) goto loc_821DBBAC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821dbb90
	if (cr0.eq) goto loc_821DBB90;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821DBB90:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// beq cr6,0x821dbaa8
	if (cr6.eq) goto loc_821DBAA8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
	// b 0x821dbaa8
	goto loc_821DBAA8;
loc_821DBBAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dbbd0
	goto loc_821DBBD0;
loc_821DBBB4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821db288
	sub_821DB288(ctx, base);
loc_821DBBD0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DBA48"))) PPC_WEAK_FUNC(sub_821DBA48);
PPC_FUNC_IMPL(__imp__sub_821DBA48) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x821dbab0
	if (!cr6.eq) goto loc_821DBAB0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
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
	// beq 0x821dbaa8
	if (cr0.eq) goto loc_821DBAA8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_821DBAA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821dbbd0
	goto loc_821DBBD0;
loc_821DBAB0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r28,8(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x821dbae0
	if (!cr0.gt) goto loc_821DBAE0;
loc_821DBAD4:
	// lwz r28,4(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x821dbad4
	if (cr0.gt) goto loc_821DBAD4;
loc_821DBAE0:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// beq cr6,0x821dbbb4
	if (cr6.eq) goto loc_821DBBB4;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// beq cr6,0x821dbb58
	if (cr6.eq) goto loc_821DBB58;
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// beq cr6,0x821dbb1c
	if (cr6.eq) goto loc_821DBB1C;
	// cmpwi cr6,r25,8
	cr6.compare<int32_t>(r25.s32, 8, xer);
	// bne cr6,0x821dbbac
	if (!cr6.eq) goto loc_821DBBAC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82157de0
	sub_82157DE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
	// b 0x821dbaa8
	goto loc_821DBAA8;
loc_821DBB1C:
	// li r11,0
	r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821db288
	sub_821DB288(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dbbac
	if (cr0.eq) goto loc_821DBBAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821582a8
	sub_821582A8(ctx, base);
	// b 0x821dbaa8
	goto loc_821DBAA8;
loc_821DBB58:
	// li r11,0
	r11.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821db288
	sub_821DB288(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dbbac
	if (cr0.eq) goto loc_821DBBAC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821dbb90
	if (cr0.eq) goto loc_821DBB90;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_821DBB90:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// beq cr6,0x821dbaa8
	if (cr6.eq) goto loc_821DBAA8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82317480
	sub_82317480(ctx, base);
	// b 0x821dbaa8
	goto loc_821DBAA8;
loc_821DBBAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dbbd0
	goto loc_821DBBD0;
loc_821DBBB4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821db288
	sub_821DB288(ctx, base);
loc_821DBBD0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DBBD8"))) PPC_WEAK_FUNC(sub_821DBBD8);
PPC_FUNC_IMPL(__imp__sub_821DBBD8) {
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

__attribute__((alias("__imp__sub_821DBC00"))) PPC_WEAK_FUNC(sub_821DBC00);
PPC_FUNC_IMPL(__imp__sub_821DBC00) {
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
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x821db960
	sub_821DB960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x821b9a38
	sub_821B9A38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// bl 0x821b9b48
	sub_821B9B48(ctx, base);
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

__attribute__((alias("__imp__sub_821DBC54"))) PPC_WEAK_FUNC(sub_821DBC54);
PPC_FUNC_IMPL(__imp__sub_821DBC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DBC58"))) PPC_WEAK_FUNC(sub_821DBC58);
PPC_FUNC_IMPL(__imp__sub_821DBC58) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r31,280
	r27.s64 = r31.s64 + 280;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// addi r26,r31,288
	r26.s64 = r31.s64 + 288;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82128260
	sub_82128260(ctx, base);
	// lwz r31,240(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821dbd40
	if (cr0.eq) goto loc_821DBD40;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1204
	r29.s64 = r11.s64 + 1204;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r28,r11,1712
	r28.s64 = r11.s64 + 1712;
loc_821DBCB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821dbcec
	if (cr0.eq) goto loc_821DBCEC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821b98c8
	sub_821B98C8(ctx, base);
loc_821DBCEC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821dbd28
	if (cr0.eq) goto loc_821DBD28;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82152a80
	sub_82152A80(ctx, base);
loc_821DBD28:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dbcb0
	if (!cr0.eq) goto loc_821DBCB0;
loc_821DBD40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821DBD48"))) PPC_WEAK_FUNC(sub_821DBD48);
PPC_FUNC_IMPL(__imp__sub_821DBD48) {
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
	// lwz r16,-4544(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4544);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,11740(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11740);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11736
	r29.s64 = ctx.r10.s64 + 11736;
	// bne 0x821dbdb4
	if (!cr0.eq) goto loc_821DBDB4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11740(r30)
	PPC_STORE_U32(r30.u32 + 11740, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11740(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11740);
loc_821DBDB4:
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
	// beq 0x821dbe10
	if (cr0.eq) goto loc_821DBE10;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-68
	ctx.r3.s64 = r26.s64 + -68;
	// bl 0x821dba48
	sub_821DBA48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dbe08
	if (cr0.eq) goto loc_821DBE08;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821dbe00
	if (!cr0.eq) goto loc_821DBE00;
	// addi r3,r26,-300
	ctx.r3.s64 = r26.s64 + -300;
	// bl 0x821dbc58
	sub_821DBC58(ctx, base);
loc_821DBE00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBE08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBE10:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11732
	r29.s64 = ctx.r10.s64 + 11732;
	// bne 0x821dbe3c
	if (!cr0.eq) goto loc_821DBE3C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11740(r30)
	PPC_STORE_U32(r30.u32 + 11740, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-19856
	ctx.r4.s64 = r11.s64 + -19856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11740(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11740);
loc_821DBE3C:
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
	// beq 0x821dbe70
	if (cr0.eq) goto loc_821DBE70;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-48
	ctx.r3.s64 = r26.s64 + -48;
	// bl 0x821b88c8
	sub_821B88C8(ctx, base);
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBE70:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11728
	r29.s64 = ctx.r10.s64 + 11728;
	// bne 0x821dbe9c
	if (!cr0.eq) goto loc_821DBE9C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,11740(r30)
	PPC_STORE_U32(r30.u32 + 11740, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-4584
	ctx.r4.s64 = r11.s64 + -4584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11740(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11740);
loc_821DBE9C:
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
	// beq 0x821dbed0
	if (cr0.eq) goto loc_821DBED0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-36
	ctx.r3.s64 = r26.s64 + -36;
	// bl 0x821db1a8
	sub_821DB1A8(ctx, base);
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBED0:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11724
	r29.s64 = ctx.r10.s64 + 11724;
	// bne 0x821dbef8
	if (!cr0.eq) goto loc_821DBEF8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,11740(r30)
	PPC_STORE_U32(r30.u32 + 11740, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-4600
	ctx.r4.s64 = r11.s64 + -4600;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DBEF8:
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
	// beq 0x821dbf2c
	if (cr0.eq) goto loc_821DBF2C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-24
	ctx.r3.s64 = r26.s64 + -24;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBF2C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-244
	ctx.r3.s64 = r26.s64 + -244;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821dbe00
	if (!cr0.eq) goto loc_821DBE00;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-64
	ctx.r3.s64 = r26.s64 + -64;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821dbe00
	if (!cr0.eq) goto loc_821DBE00;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-280
	ctx.r3.s64 = r26.s64 + -280;
	// bl 0x821e7cf0
	sub_821E7CF0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_821DBF88:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DBD50"))) PPC_WEAK_FUNC(sub_821DBD50);
PPC_FUNC_IMPL(__imp__sub_821DBD50) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,11740(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11740);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11736
	r29.s64 = ctx.r10.s64 + 11736;
	// bne 0x821dbdb4
	if (!cr0.eq) goto loc_821DBDB4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11740(r30)
	PPC_STORE_U32(r30.u32 + 11740, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11740(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11740);
loc_821DBDB4:
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
	// beq 0x821dbe10
	if (cr0.eq) goto loc_821DBE10;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-68
	ctx.r3.s64 = r26.s64 + -68;
	// bl 0x821dba48
	sub_821DBA48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dbe08
	if (cr0.eq) goto loc_821DBE08;
	// andi. r11,r27,17
	r11.u64 = r27.u64 & 17;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821dbe00
	if (!cr0.eq) goto loc_821DBE00;
	// addi r3,r26,-300
	ctx.r3.s64 = r26.s64 + -300;
	// bl 0x821dbc58
	sub_821DBC58(ctx, base);
loc_821DBE00:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBE08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBE10:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11732
	r29.s64 = ctx.r10.s64 + 11732;
	// bne 0x821dbe3c
	if (!cr0.eq) goto loc_821DBE3C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11740(r30)
	PPC_STORE_U32(r30.u32 + 11740, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-19856
	ctx.r4.s64 = r11.s64 + -19856;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11740(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11740);
loc_821DBE3C:
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
	// beq 0x821dbe70
	if (cr0.eq) goto loc_821DBE70;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-48
	ctx.r3.s64 = r26.s64 + -48;
	// bl 0x821b88c8
	sub_821B88C8(ctx, base);
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBE70:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11728
	r29.s64 = ctx.r10.s64 + 11728;
	// bne 0x821dbe9c
	if (!cr0.eq) goto loc_821DBE9C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,11740(r30)
	PPC_STORE_U32(r30.u32 + 11740, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-4584
	ctx.r4.s64 = r11.s64 + -4584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11740(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11740);
loc_821DBE9C:
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
	// beq 0x821dbed0
	if (cr0.eq) goto loc_821DBED0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-36
	ctx.r3.s64 = r26.s64 + -36;
	// bl 0x821db1a8
	sub_821DB1A8(ctx, base);
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBED0:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,11724
	r29.s64 = ctx.r10.s64 + 11724;
	// bne 0x821dbef8
	if (!cr0.eq) goto loc_821DBEF8;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,11740(r30)
	PPC_STORE_U32(r30.u32 + 11740, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-4600
	ctx.r4.s64 = r11.s64 + -4600;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DBEF8:
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
	// beq 0x821dbf2c
	if (cr0.eq) goto loc_821DBF2C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r26,-24
	ctx.r3.s64 = r26.s64 + -24;
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x821dbf88
	goto loc_821DBF88;
loc_821DBF2C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-244
	ctx.r3.s64 = r26.s64 + -244;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821dbe00
	if (!cr0.eq) goto loc_821DBE00;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-64
	ctx.r3.s64 = r26.s64 + -64;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821dbe00
	if (!cr0.eq) goto loc_821DBE00;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r26,-280
	ctx.r3.s64 = r26.s64 + -280;
	// bl 0x821e7cf0
	sub_821E7CF0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_821DBF88:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DBF90"))) PPC_WEAK_FUNC(sub_821DBF90);
PPC_FUNC_IMPL(__imp__sub_821DBF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11740
	r11.s64 = r11.s64 + 11740;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11740
	ctx.r10.s64 = ctx.r10.s64 + 11740;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DBFB8"))) PPC_WEAK_FUNC(sub_821DBFB8);
PPC_FUNC_IMPL(__imp__sub_821DBFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11740
	r11.s64 = r11.s64 + 11740;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11740
	ctx.r10.s64 = ctx.r10.s64 + 11740;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DBFE0"))) PPC_WEAK_FUNC(sub_821DBFE0);
PPC_FUNC_IMPL(__imp__sub_821DBFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11740
	r11.s64 = r11.s64 + 11740;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11740
	ctx.r10.s64 = ctx.r10.s64 + 11740;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC008"))) PPC_WEAK_FUNC(sub_821DC008);
PPC_FUNC_IMPL(__imp__sub_821DC008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11740
	r11.s64 = r11.s64 + 11740;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11740
	ctx.r10.s64 = ctx.r10.s64 + 11740;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC030"))) PPC_WEAK_FUNC(sub_821DC030);
PPC_FUNC_IMPL(__imp__sub_821DC030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-4192(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4192);
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x821dc0c8
	if (cr6.eq) goto loc_821DC0C8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,-4244
	r11.s64 = r11.s64 + -4244;
	// addi r10,r10,-4256
	ctx.r10.s64 = ctx.r10.s64 + -4256;
	// addi r9,r9,-4268
	ctx.r9.s64 = ctx.r9.s64 + -4268;
	// addi r8,r8,-4276
	ctx.r8.s64 = ctx.r8.s64 + -4276;
	// addi r3,r30,300
	ctx.r3.s64 = r30.s64 + 300;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r9.u32);
	// stw r8,348(r30)
	PPC_STORE_U32(r30.u32 + 348, ctx.r8.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,344
	r11.s64 = r30.s64 + 344;
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
loc_821DC0C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r27,r30,52
	r27.s64 = r30.s64 + 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-4308
	r11.s64 = r11.s64 + -4308;
	// addi r10,r10,-4348
	ctx.r10.s64 = ctx.r10.s64 + -4348;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,-4356
	ctx.r9.s64 = ctx.r9.s64 + -4356;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r8,r8,-4420
	ctx.r8.s64 = ctx.r8.s64 + -4420;
	// addi r10,r11,-16220
	ctx.r10.s64 = r11.s64 + -16220;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r7,-4428
	ctx.r7.s64 = ctx.r7.s64 + -4428;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r11,-296
	ctx.r8.s64 = r11.s64 + -296;
	// stwx r8,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r8,r11,-340
	ctx.r8.s64 = r11.s64 + -340;
	// stwx r8,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,232(r30)
	PPC_STORE_U32(r30.u32 + 232, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r29,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r29.u32);
	// stw r29,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r9.u32);
	// stw r11,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,252
	r28.s64 = r30.s64 + 252;
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
	// bl 0x821b83c0
	sub_821B83C0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-20812
	r11.s64 = r11.s64 + -20812;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r11.u32);
	// stw r29,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r11,r30,280
	r11.s64 = r30.s64 + 280;
	// addi r7,r7,-4892
	ctx.r7.s64 = ctx.r7.s64 + -4892;
	// addi r10,r30,288
	ctx.r10.s64 = r30.s64 + 288;
	// std r29,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r29.u64);
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r7,264(r30)
	PPC_STORE_U32(r30.u32 + 264, ctx.r7.u32);
	// stfs f0,276(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821DC038"))) PPC_WEAK_FUNC(sub_821DC038);
PPC_FUNC_IMPL(__imp__sub_821DC038) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x821dc0c8
	if (cr6.eq) goto loc_821DC0C8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r11,r11,-4244
	r11.s64 = r11.s64 + -4244;
	// addi r10,r10,-4256
	ctx.r10.s64 = ctx.r10.s64 + -4256;
	// addi r9,r9,-4268
	ctx.r9.s64 = ctx.r9.s64 + -4268;
	// addi r8,r8,-4276
	ctx.r8.s64 = ctx.r8.s64 + -4276;
	// addi r3,r30,300
	ctx.r3.s64 = r30.s64 + 300;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r9.u32);
	// stw r8,348(r30)
	PPC_STORE_U32(r30.u32 + 348, ctx.r8.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,344
	r11.s64 = r30.s64 + 344;
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
loc_821DC0C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e74e8
	sub_821E74E8(ctx, base);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r27,r30,52
	r27.s64 = r30.s64 + 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-4308
	r11.s64 = r11.s64 + -4308;
	// addi r10,r10,-4348
	ctx.r10.s64 = ctx.r10.s64 + -4348;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,-4356
	ctx.r9.s64 = ctx.r9.s64 + -4356;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r8,r8,-4420
	ctx.r8.s64 = ctx.r8.s64 + -4420;
	// addi r10,r11,-16220
	ctx.r10.s64 = r11.s64 + -16220;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r7,-4428
	ctx.r7.s64 = ctx.r7.s64 + -4428;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r11,-296
	ctx.r8.s64 = r11.s64 + -296;
	// stwx r8,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r8,r11,-340
	ctx.r8.s64 = r11.s64 + -340;
	// stwx r8,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r8.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,232(r30)
	PPC_STORE_U32(r30.u32 + 232, ctx.r10.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r29,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r29.u32);
	// stw r29,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r9.u32);
	// stw r11,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,252
	r28.s64 = r30.s64 + 252;
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
	// bl 0x821b83c0
	sub_821B83C0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-20812
	r11.s64 = r11.s64 + -20812;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,268(r30)
	PPC_STORE_U32(r30.u32 + 268, r11.u32);
	// stw r29,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r29.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r8,r31,88
	ctx.r8.s64 = r31.s64 + 88;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// ld r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// addi r11,r30,280
	r11.s64 = r30.s64 + 280;
	// addi r7,r7,-4892
	ctx.r7.s64 = ctx.r7.s64 + -4892;
	// addi r10,r30,288
	ctx.r10.s64 = r30.s64 + 288;
	// std r29,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r29.u64);
	// ld r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// stw r7,264(r30)
	PPC_STORE_U32(r30.u32 + 264, ctx.r7.u32);
	// stfs f0,276(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821DC238"))) PPC_WEAK_FUNC(sub_821DC238);
PPC_FUNC_IMPL(__imp__sub_821DC238) {
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
	// beq 0x821dc26c
	if (cr0.eq) goto loc_821DC26C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,300
	ctx.r3.s64 = r11.s64 + 300;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_821DC26C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC27C"))) PPC_WEAK_FUNC(sub_821DC27C);
PPC_FUNC_IMPL(__imp__sub_821DC27C) {
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
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
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

__attribute__((alias("__imp__sub_821DC2A8"))) PPC_WEAK_FUNC(sub_821DC2A8);
PPC_FUNC_IMPL(__imp__sub_821DC2A8) {
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
	// addi r3,r11,232
	ctx.r3.s64 = r11.s64 + 232;
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

__attribute__((alias("__imp__sub_821DC2D4"))) PPC_WEAK_FUNC(sub_821DC2D4);
PPC_FUNC_IMPL(__imp__sub_821DC2D4) {
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
	// addi r3,r11,252
	ctx.r3.s64 = r11.s64 + 252;
	// bl 0x82126e80
	sub_82126E80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC300"))) PPC_WEAK_FUNC(sub_821DC300);
PPC_FUNC_IMPL(__imp__sub_821DC300) {
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
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
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

__attribute__((alias("__imp__sub_821DC328"))) PPC_WEAK_FUNC(sub_821DC328);
PPC_FUNC_IMPL(__imp__sub_821DC328) {
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
	// bl 0x8214faf0
	sub_8214FAF0(ctx, base);
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

__attribute__((alias("__imp__sub_821DC358"))) PPC_WEAK_FUNC(sub_821DC358);
PPC_FUNC_IMPL(__imp__sub_821DC358) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-244
	ctx.r3.s64 = ctx.r3.s64 + -244;
	// b 0x821b2890
	sub_821B2890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC360"))) PPC_WEAK_FUNC(sub_821DC360);
PPC_FUNC_IMPL(__imp__sub_821DC360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821dc358
	sub_821DC358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC36C"))) PPC_WEAK_FUNC(sub_821DC36C);
PPC_FUNC_IMPL(__imp__sub_821DC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC370"))) PPC_WEAK_FUNC(sub_821DC370);
PPC_FUNC_IMPL(__imp__sub_821DC370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821dcb00
	sub_821DCB00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC37C"))) PPC_WEAK_FUNC(sub_821DC37C);
PPC_FUNC_IMPL(__imp__sub_821DC37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC380"))) PPC_WEAK_FUNC(sub_821DC380);
PPC_FUNC_IMPL(__imp__sub_821DC380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821dc328
	sub_821DC328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC38C"))) PPC_WEAK_FUNC(sub_821DC38C);
PPC_FUNC_IMPL(__imp__sub_821DC38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC390"))) PPC_WEAK_FUNC(sub_821DC390);
PPC_FUNC_IMPL(__imp__sub_821DC390) {
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
	// lwz r16,-4120(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4120);
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
	// lwz r11,11748(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11748);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821dc414
	if (!cr0.eq) goto loc_821DC414;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11748, r11.u32);
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
	// bl 0x8214faf0
	sub_8214FAF0(ctx, base);
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
	// stw r3,11744(r27)
	PPC_STORE_U32(r27.u32 + 11744, ctx.r3.u32);
	// b 0x821dc418
	goto loc_821DC418;
loc_821DC414:
	// lwz r3,11744(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 11744);
loc_821DC418:
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
	// beq 0x821dc454
	if (cr0.eq) goto loc_821DC454;
	// lwz r11,-296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -296);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821dc4d0
	goto loc_821DC4D0;
loc_821DC454:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821dc4b4
	if (!cr0.eq) goto loc_821DC4B4;
	// addic. r11,r30,-300
	xer.ca = r30.u32 > 299;
	r11.s64 = r30.s64 + -300;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821dc478
	if (!cr0.eq) goto loc_821DC478;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dc488
	goto loc_821DC488;
loc_821DC478:
	// lwz r11,-296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -296);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
loc_821DC488:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -296);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-296
	ctx.r4.s64 = r11.s64 + -296;
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
loc_821DC4B4:
	// lwz r11,-296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -296);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821DC4D0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821DC398"))) PPC_WEAK_FUNC(sub_821DC398);
PPC_FUNC_IMPL(__imp__sub_821DC398) {
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
	// lwz r11,11748(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11748);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821dc414
	if (!cr0.eq) goto loc_821DC414;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11748, r11.u32);
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
	// bl 0x8214faf0
	sub_8214FAF0(ctx, base);
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
	// stw r3,11744(r27)
	PPC_STORE_U32(r27.u32 + 11744, ctx.r3.u32);
	// b 0x821dc418
	goto loc_821DC418;
loc_821DC414:
	// lwz r3,11744(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 11744);
loc_821DC418:
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
	// beq 0x821dc454
	if (cr0.eq) goto loc_821DC454;
	// lwz r11,-296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -296);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821dc4d0
	goto loc_821DC4D0;
loc_821DC454:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x821dc4b4
	if (!cr0.eq) goto loc_821DC4B4;
	// addic. r11,r30,-300
	xer.ca = r30.u32 > 299;
	r11.s64 = r30.s64 + -300;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821dc478
	if (!cr0.eq) goto loc_821DC478;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dc488
	goto loc_821DC488;
loc_821DC478:
	// lwz r11,-296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -296);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
loc_821DC488:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -296);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-296
	ctx.r4.s64 = r11.s64 + -296;
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
loc_821DC4B4:
	// lwz r11,-296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -296);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821DC4D0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821DC4DC"))) PPC_WEAK_FUNC(sub_821DC4DC);
PPC_FUNC_IMPL(__imp__sub_821DC4DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11748
	r11.s64 = r11.s64 + 11748;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11748
	ctx.r10.s64 = ctx.r10.s64 + 11748;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC504"))) PPC_WEAK_FUNC(sub_821DC504);
PPC_FUNC_IMPL(__imp__sub_821DC504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC508"))) PPC_WEAK_FUNC(sub_821DC508);
PPC_FUNC_IMPL(__imp__sub_821DC508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821dc398
	sub_821DC398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC514"))) PPC_WEAK_FUNC(sub_821DC514);
PPC_FUNC_IMPL(__imp__sub_821DC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC518"))) PPC_WEAK_FUNC(sub_821DC518);
PPC_FUNC_IMPL(__imp__sub_821DC518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821db330
	sub_821DB330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC524"))) PPC_WEAK_FUNC(sub_821DC524);
PPC_FUNC_IMPL(__imp__sub_821DC524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC528"))) PPC_WEAK_FUNC(sub_821DC528);
PPC_FUNC_IMPL(__imp__sub_821DC528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821dbd50
	sub_821DBD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DC534"))) PPC_WEAK_FUNC(sub_821DC534);
PPC_FUNC_IMPL(__imp__sub_821DC534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC538"))) PPC_WEAK_FUNC(sub_821DC538);
PPC_FUNC_IMPL(__imp__sub_821DC538) {
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
	// lwz r16,-4016(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4016);
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
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// bl 0x82128260
	sub_82128260(ctx, base);
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// addi r3,r30,-36
	ctx.r3.s64 = r30.s64 + -36;
	// bl 0x821dae68
	sub_821DAE68(ctx, base);
	// addi r3,r30,-48
	ctx.r3.s64 = r30.s64 + -48;
	// bl 0x82126828
	sub_82126828(ctx, base);
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x82158d48
	sub_82158D48(ctx, base);
	// addic. r11,r30,-300
	xer.ca = r30.u32 > 299;
	r11.s64 = r30.s64 + -300;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-248
	r11.s64 = r30.s64 + -248;
	// bne 0x821dc598
	if (!cr0.eq) goto loc_821DC598;
	// li r11,0
	r11.s64 = 0;
loc_821DC598:
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
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

__attribute__((alias("__imp__sub_821DC540"))) PPC_WEAK_FUNC(sub_821DC540);
PPC_FUNC_IMPL(__imp__sub_821DC540) {
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
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// bl 0x82128260
	sub_82128260(ctx, base);
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// addi r3,r30,-36
	ctx.r3.s64 = r30.s64 + -36;
	// bl 0x821dae68
	sub_821DAE68(ctx, base);
	// addi r3,r30,-48
	ctx.r3.s64 = r30.s64 + -48;
	// bl 0x82126828
	sub_82126828(ctx, base);
	// addi r3,r30,-68
	ctx.r3.s64 = r30.s64 + -68;
	// bl 0x82158d48
	sub_82158D48(ctx, base);
	// addic. r11,r30,-300
	xer.ca = r30.u32 > 299;
	r11.s64 = r30.s64 + -300;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r30,-248
	r11.s64 = r30.s64 + -248;
	// bne 0x821dc598
	if (!cr0.eq) goto loc_821DC598;
	// li r11,0
	r11.s64 = 0;
loc_821DC598:
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
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

__attribute__((alias("__imp__sub_821DC5B8"))) PPC_WEAK_FUNC(sub_821DC5B8);
PPC_FUNC_IMPL(__imp__sub_821DC5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addic. r11,r11,-300
	xer.ca = r11.u32 > 299;
	r11.s64 = r11.s64 + -300;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dc5e8
	if (cr0.eq) goto loc_821DC5E8;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,-300
	r11.s64 = r11.s64 + -300;
	// addi r11,r11,52
	r11.s64 = r11.s64 + 52;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x821dc5f0
	goto loc_821DC5F0;
loc_821DC5E8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_821DC5F0:
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

__attribute__((alias("__imp__sub_821DC60C"))) PPC_WEAK_FUNC(sub_821DC60C);
PPC_FUNC_IMPL(__imp__sub_821DC60C) {
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
	// addi r11,r11,-300
	r11.s64 = r11.s64 + -300;
	// addi r3,r11,232
	ctx.r3.s64 = r11.s64 + 232;
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

__attribute__((alias("__imp__sub_821DC63C"))) PPC_WEAK_FUNC(sub_821DC63C);
PPC_FUNC_IMPL(__imp__sub_821DC63C) {
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
	// addi r11,r11,-300
	r11.s64 = r11.s64 + -300;
	// addi r3,r11,252
	ctx.r3.s64 = r11.s64 + 252;
	// bl 0x82126e80
	sub_82126E80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC66C"))) PPC_WEAK_FUNC(sub_821DC66C);
PPC_FUNC_IMPL(__imp__sub_821DC66C) {
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
	// addi r11,r11,-300
	r11.s64 = r11.s64 + -300;
	// addi r3,r11,264
	ctx.r3.s64 = r11.s64 + 264;
	// bl 0x82257270
	sub_82257270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC69C"))) PPC_WEAK_FUNC(sub_821DC69C);
PPC_FUNC_IMPL(__imp__sub_821DC69C) {
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
	// addi r11,r11,-300
	r11.s64 = r11.s64 + -300;
	// addi r3,r11,280
	ctx.r3.s64 = r11.s64 + 280;
	// bl 0x82128440
	sub_82128440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DC6CC"))) PPC_WEAK_FUNC(sub_821DC6CC);
PPC_FUNC_IMPL(__imp__sub_821DC6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC6D0"))) PPC_WEAK_FUNC(sub_821DC6D0);
PPC_FUNC_IMPL(__imp__sub_821DC6D0) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,11200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11200);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x821dc79c
	if (cr6.gt) goto loc_821DC79C;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// ble cr6,0x821dc728
	if (!cr6.gt) goto loc_821DC728;
	// lwz r11,-296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -296);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
	// bl 0x82315350
	sub_82315350(ctx, base);
loc_821DC728:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-280
	ctx.r3.s64 = r31.s64 + -280;
	// bl 0x821e96c0
	sub_821E96C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-64
	ctx.r3.s64 = r31.s64 + -64;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-244
	ctx.r3.s64 = r31.s64 + -244;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// ble cr6,0x821dc778
	if (!cr6.gt) goto loc_821DC778;
	// addi r4,r31,-68
	ctx.r4.s64 = r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,-48
	r29.s64 = r31.s64 + -48;
	// bl 0x821be530
	sub_821BE530(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82150fa0
	sub_82150FA0(ctx, base);
	// addi r3,r31,-300
	ctx.r3.s64 = r31.s64 + -300;
	// bl 0x821dbc58
	sub_821DBC58(ctx, base);
loc_821DC778:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// ble cr6,0x821dc79c
	if (!cr6.gt) goto loc_821DC79C;
	// addi r4,r31,-36
	ctx.r4.s64 = r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821db088
	sub_821DB088(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,-24
	ctx.r4.s64 = r31.s64 + -24;
	// bl 0x82359400
	sub_82359400(ctx, base);
loc_821DC79C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DC7A4"))) PPC_WEAK_FUNC(sub_821DC7A4);
PPC_FUNC_IMPL(__imp__sub_821DC7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DC7A8"))) PPC_WEAK_FUNC(sub_821DC7A8);
PPC_FUNC_IMPL(__imp__sub_821DC7A8) {
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
	// lwz r11,-296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -296);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-296
	ctx.r3.s64 = r11.s64 + -296;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-280
	ctx.r3.s64 = r31.s64 + -280;
	// bl 0x821e76c0
	sub_821E76C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-244
	ctx.r3.s64 = r31.s64 + -244;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-64
	ctx.r3.s64 = r31.s64 + -64;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,2720
	ctx.r6.s64 = r11.s64 + 2720;
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
	// beq 0x821dc860
	if (cr0.eq) goto loc_821DC860;
	// addi r3,r31,-48
	ctx.r3.s64 = r31.s64 + -48;
	// lwz r4,260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// bl 0x82150008
	sub_82150008(ctx, base);
	// addi r3,r31,-36
	ctx.r3.s64 = r31.s64 + -36;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// bl 0x821daf58
	sub_821DAF58(ctx, base);
	// lfs f0,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 276);
	f0.f64 = double(temp.f32);
	// stfs f0,-24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -24, temp.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x821dc860
	if (!cr6.eq) goto loc_821DC860;
	// addi r4,r30,232
	ctx.r4.s64 = r30.s64 + 232;
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// bl 0x82158c68
	sub_82158C68(ctx, base);
loc_821DC860:
	// addi r3,r31,-300
	ctx.r3.s64 = r31.s64 + -300;
	// bl 0x821dbc58
	sub_821DBC58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DC870"))) PPC_WEAK_FUNC(sub_821DC870);
PPC_FUNC_IMPL(__imp__sub_821DC870) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821dc9e0
	if (cr6.eq) goto loc_821DC9E0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x821dc89c
	if (!cr6.eq) goto loc_821DC89C;
	// li r11,0
	r11.s64 = 0;
	// b 0x821dc8ac
	goto loc_821DC8AC;
loc_821DC89C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821DC8AC:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x821dc9e0
	if (cr6.eq) goto loc_821DC9E0;
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// mr. r11,r10
	r11.u64 = ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dc8d8
	if (cr0.eq) goto loc_821DC8D8;
loc_821DC8C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// beq cr6,0x821dc8dc
	if (cr6.eq) goto loc_821DC8DC;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dc8c0
	if (!cr0.eq) goto loc_821DC8C0;
loc_821DC8D8:
	// li r11,0
	r11.s64 = 0;
loc_821DC8DC:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dc9e0
	if (!cr0.eq) goto loc_821DC9E0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x821dc944
	if (cr6.eq) goto loc_821DC944;
	// mr. r11,r10
	r11.u64 = ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dc918
	if (cr0.eq) goto loc_821DC918;
loc_821DC900:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x821dc91c
	if (cr6.eq) goto loc_821DC91C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dc900
	if (!cr0.eq) goto loc_821DC900;
loc_821DC918:
	// li r11,0
	r11.s64 = 0;
loc_821DC91C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r30,232
	ctx.r4.s64 = r30.s64 + 232;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821582a8
	sub_821582A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbc58
	sub_821DBC58(ctx, base);
	// b 0x821dc9e0
	goto loc_821DC9E0;
loc_821DC944:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r30,232
	ctx.r4.s64 = r30.s64 + 232;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821582a8
	sub_821582A8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1712
	ctx.r6.s64 = r11.s64 + 1712;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,920
	r31.s64 = r11.s64 + 920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821dc9a0
	if (cr0.eq) goto loc_821DC9A0;
	// addi r4,r30,280
	ctx.r4.s64 = r30.s64 + 280;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x821b98c8
	sub_821B98C8(ctx, base);
loc_821DC9A0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1204
	ctx.r6.s64 = r11.s64 + 1204;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821dc9e0
	if (cr0.eq) goto loc_821DC9E0;
	// addi r4,r30,288
	ctx.r4.s64 = r30.s64 + 288;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82152a80
	sub_82152A80(ctx, base);
loc_821DC9E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DC9E8"))) PPC_WEAK_FUNC(sub_821DC9E8);
PPC_FUNC_IMPL(__imp__sub_821DC9E8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x821dca38
	if (cr6.eq) goto loc_821DCA38;
	// lwz r31,240(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// b 0x821dca24
	goto loc_821DCA24;
loc_821DCA10:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_821DCA24:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dca10
	if (!cr0.eq) goto loc_821DCA10;
loc_821DCA38:
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

__attribute__((alias("__imp__sub_821DCA50"))) PPC_WEAK_FUNC(sub_821DCA50);
PPC_FUNC_IMPL(__imp__sub_821DCA50) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r30,-64
	ctx.r3.s64 = r30.s64 + -64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x821b0888
	sub_821B0888(ctx, base);
	// lwz r11,-60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -60);
	// b 0x821dca88
	goto loc_821DCA88;
loc_821DCA78:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x821dca90
	if (cr6.eq) goto loc_821DCA90;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_821DCA88:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dca78
	if (!cr0.eq) goto loc_821DCA78;
loc_821DCA90:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821dcac4
	if (cr0.eq) goto loc_821DCAC4;
	// addi r30,r30,-300
	r30.s64 = r30.s64 + -300;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbc00
	sub_821DBC00(ctx, base);
loc_821DCAC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DCACC"))) PPC_WEAK_FUNC(sub_821DCACC);
PPC_FUNC_IMPL(__imp__sub_821DCACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DCAD0"))) PPC_WEAK_FUNC(sub_821DCAD0);
PPC_FUNC_IMPL(__imp__sub_821DCAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821dc7a8
	sub_821DC7A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DCADC"))) PPC_WEAK_FUNC(sub_821DCADC);
PPC_FUNC_IMPL(__imp__sub_821DCADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DCAE0"))) PPC_WEAK_FUNC(sub_821DCAE0);
PPC_FUNC_IMPL(__imp__sub_821DCAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821dca50
	sub_821DCA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DCAEC"))) PPC_WEAK_FUNC(sub_821DCAEC);
PPC_FUNC_IMPL(__imp__sub_821DCAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DCAF0"))) PPC_WEAK_FUNC(sub_821DCAF0);
PPC_FUNC_IMPL(__imp__sub_821DCAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x821dc6d0
	sub_821DC6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DCAFC"))) PPC_WEAK_FUNC(sub_821DCAFC);
PPC_FUNC_IMPL(__imp__sub_821DCAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DCB00"))) PPC_WEAK_FUNC(sub_821DCB00);
PPC_FUNC_IMPL(__imp__sub_821DCB00) {
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
	// addi r30,r3,-300
	r30.s64 = ctx.r3.s64 + -300;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,300
	r31.s64 = r30.s64 + 300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dc540
	sub_821DC540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dcb38
	if (cr0.eq) goto loc_821DCB38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821DCB38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DCB44"))) PPC_WEAK_FUNC(sub_821DCB44);
PPC_FUNC_IMPL(__imp__sub_821DCB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DCB48"))) PPC_WEAK_FUNC(sub_821DCB48);
PPC_FUNC_IMPL(__imp__sub_821DCB48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r27,288
	r30.s64 = r27.s64 + 288;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// beq 0x821dcbc4
	if (cr0.eq) goto loc_821DCBC4;
	// addi r29,r27,232
	r29.s64 = r27.s64 + 232;
loc_821DCB7C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dcb90
	if (!cr0.eq) goto loc_821DCB90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821dcba0
	goto loc_821DCBA0;
loc_821DCB90:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_821DCBA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821db960
	sub_821DB960(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bne 0x821dcb7c
	if (!cr0.eq) goto loc_821DCB7C;
loc_821DCBC4:
	// lis r11,-32228
	r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18736
	ctx.r4.s64 = r11.s64 + 18736;
	// bl 0x821babb0
	sub_821BABB0(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
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
	// beq 0x821dcc48
	if (cr0.eq) goto loc_821DCC48;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r27,232
	r28.s64 = r27.s64 + 232;
loc_821DCBF8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dcc0c
	if (!cr0.eq) goto loc_821DCC0C;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821dcc1c
	goto loc_821DCC1C;
loc_821DCC0C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
loc_821DCC1C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821582a8
	sub_821582A8(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
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
	// bne 0x821dcbf8
	if (!cr0.eq) goto loc_821DCBF8;
loc_821DCC48:
	// addi r28,r27,280
	r28.s64 = r27.s64 + 280;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821282b8
	sub_821282B8(ctx, base);
	// lwz r31,240(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 240);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821dccd0
	if (cr0.eq) goto loc_821DCCD0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,1712
	r29.s64 = r11.s64 + 1712;
loc_821DCC7C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821dccb8
	if (cr0.eq) goto loc_821DCCB8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821b98c8
	sub_821B98C8(ctx, base);
loc_821DCCB8:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821dcc7c
	if (!cr0.eq) goto loc_821DCC7C;
loc_821DCCD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821DCCD8"))) PPC_WEAK_FUNC(sub_821DCCD8);
PPC_FUNC_IMPL(__imp__sub_821DCCD8) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r6,r3,280
	ctx.r6.s64 = ctx.r3.s64 + 280;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x821baea0
	sub_821BAEA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DCD14"))) PPC_WEAK_FUNC(sub_821DCD14);
PPC_FUNC_IMPL(__imp__sub_821DCD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DCD18"))) PPC_WEAK_FUNC(sub_821DCD18);
PPC_FUNC_IMPL(__imp__sub_821DCD18) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r30,272
	r11.s64 = r30.s64 + 272;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x821bae18
	sub_821BAE18(ctx, base);
	// lwz r11,256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82152a80
	sub_82152A80(ctx, base);
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

__attribute__((alias("__imp__sub_821DCD98"))) PPC_WEAK_FUNC(sub_821DCD98);
PPC_FUNC_IMPL(__imp__sub_821DCD98) {
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
	// lwz r16,-3808(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3808);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
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
	// lwz r11,11768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11768);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,11764
	r28.s64 = ctx.r10.s64 + 11764;
	// bne 0x821dce08
	if (!cr0.eq) goto loc_821DCE08;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11768(r30)
	PPC_STORE_U32(r30.u32 + 11768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-3884
	ctx.r4.s64 = r11.s64 + -3884;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11768);
loc_821DCE08:
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
	// beq 0x821dce30
	if (cr0.eq) goto loc_821DCE30;
	// addi r3,r26,-300
	ctx.r3.s64 = r26.s64 + -300;
	// bl 0x821dcb48
	sub_821DCB48(ctx, base);
loc_821DCE28:
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// b 0x821dd06c
	goto loc_821DD06C;
loc_821DCE30:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,11760
	r28.s64 = ctx.r10.s64 + 11760;
	// bne 0x821dce5c
	if (!cr0.eq) goto loc_821DCE5C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11768(r30)
	PPC_STORE_U32(r30.u32 + 11768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-3896
	ctx.r4.s64 = r11.s64 + -3896;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11768);
loc_821DCE5C:
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
	// beq 0x821dce98
	if (cr0.eq) goto loc_821DCE98;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-300
	ctx.r3.s64 = r26.s64 + -300;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// b 0x821dce28
	goto loc_821DCE28;
loc_821DCE98:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,11756
	r28.s64 = ctx.r10.s64 + 11756;
	// bne 0x821dcec4
	if (!cr0.eq) goto loc_821DCEC4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,11768(r30)
	PPC_STORE_U32(r30.u32 + 11768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-3912
	ctx.r4.s64 = r11.s64 + -3912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11768);
loc_821DCEC4:
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
	// beq 0x821dcefc
	if (cr0.eq) goto loc_821DCEFC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-300
	ctx.r3.s64 = r26.s64 + -300;
	// bl 0x821dbc00
	sub_821DBC00(ctx, base);
	// b 0x821dce28
	goto loc_821DCE28;
loc_821DCEFC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,11752
	r28.s64 = ctx.r10.s64 + 11752;
	// bne 0x821dcf24
	if (!cr0.eq) goto loc_821DCF24;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,11768(r30)
	PPC_STORE_U32(r30.u32 + 11768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-3928
	ctx.r4.s64 = r11.s64 + -3928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DCF24:
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
	// beq 0x821dcf54
	if (cr0.eq) goto loc_821DCF54;
	// addi r30,r26,-300
	r30.s64 = r26.s64 + -300;
	// addi r3,r30,232
	ctx.r3.s64 = r30.s64 + 232;
	// bl 0x82158300
	sub_82158300(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbc58
	sub_821DBC58(ctx, base);
	// b 0x821dce28
	goto loc_821DCE28;
loc_821DCF54:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-280
	ctx.r4.s64 = r26.s64 + -280;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dcf98
	if (cr6.eq) goto loc_821DCF98;
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
	// beq 0x821dd070
	if (cr0.eq) goto loc_821DD070;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821DCF90:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821dd070
	goto loc_821DD070;
loc_821DCF98:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-244
	ctx.r4.s64 = r26.s64 + -244;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dcfd8
	if (cr6.eq) goto loc_821DCFD8;
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
	// beq 0x821dd070
	if (cr0.eq) goto loc_821DD070;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821dcf90
	goto loc_821DCF90;
loc_821DCFD8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-64
	ctx.r4.s64 = r26.s64 + -64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dd018
	if (cr6.eq) goto loc_821DD018;
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
	// beq 0x821dd070
	if (cr0.eq) goto loc_821DD070;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821dcf90
	goto loc_821DCF90;
loc_821DD018:
	// lwz r11,-296(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -296);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-296
	ctx.r4.s64 = r11.s64 + -296;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dd064
	if (cr6.eq) goto loc_821DD064;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dd070
	if (cr0.eq) goto loc_821DD070;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821dcf90
	goto loc_821DCF90;
loc_821DD064:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821DD06C:
	// stw r25,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r25.u32);
loc_821DD070:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DCDA0"))) PPC_WEAK_FUNC(sub_821DCDA0);
PPC_FUNC_IMPL(__imp__sub_821DCDA0) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
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
	// lwz r11,11768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11768);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,11764
	r28.s64 = ctx.r10.s64 + 11764;
	// bne 0x821dce08
	if (!cr0.eq) goto loc_821DCE08;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11768(r30)
	PPC_STORE_U32(r30.u32 + 11768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-3884
	ctx.r4.s64 = r11.s64 + -3884;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11768);
loc_821DCE08:
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
	// beq 0x821dce30
	if (cr0.eq) goto loc_821DCE30;
	// addi r3,r26,-300
	ctx.r3.s64 = r26.s64 + -300;
	// bl 0x821dcb48
	sub_821DCB48(ctx, base);
loc_821DCE28:
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// b 0x821dd06c
	goto loc_821DD06C;
loc_821DCE30:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,11760
	r28.s64 = ctx.r10.s64 + 11760;
	// bne 0x821dce5c
	if (!cr0.eq) goto loc_821DCE5C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11768(r30)
	PPC_STORE_U32(r30.u32 + 11768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-3896
	ctx.r4.s64 = r11.s64 + -3896;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11768);
loc_821DCE5C:
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
	// beq 0x821dce98
	if (cr0.eq) goto loc_821DCE98;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-300
	ctx.r3.s64 = r26.s64 + -300;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// b 0x821dce28
	goto loc_821DCE28;
loc_821DCE98:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,11756
	r28.s64 = ctx.r10.s64 + 11756;
	// bne 0x821dcec4
	if (!cr0.eq) goto loc_821DCEC4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,11768(r30)
	PPC_STORE_U32(r30.u32 + 11768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-3912
	ctx.r4.s64 = r11.s64 + -3912;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11768(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11768);
loc_821DCEC4:
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
	// beq 0x821dcefc
	if (cr0.eq) goto loc_821DCEFC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r26,-300
	ctx.r3.s64 = r26.s64 + -300;
	// bl 0x821dbc00
	sub_821DBC00(ctx, base);
	// b 0x821dce28
	goto loc_821DCE28;
loc_821DCEFC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r28,r10,11752
	r28.s64 = ctx.r10.s64 + 11752;
	// bne 0x821dcf24
	if (!cr0.eq) goto loc_821DCF24;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,11768(r30)
	PPC_STORE_U32(r30.u32 + 11768, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-3928
	ctx.r4.s64 = r11.s64 + -3928;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DCF24:
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
	// beq 0x821dcf54
	if (cr0.eq) goto loc_821DCF54;
	// addi r30,r26,-300
	r30.s64 = r26.s64 + -300;
	// addi r3,r30,232
	ctx.r3.s64 = r30.s64 + 232;
	// bl 0x82158300
	sub_82158300(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbc58
	sub_821DBC58(ctx, base);
	// b 0x821dce28
	goto loc_821DCE28;
loc_821DCF54:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-280
	ctx.r4.s64 = r26.s64 + -280;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821e9d00
	sub_821E9D00(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dcf98
	if (cr6.eq) goto loc_821DCF98;
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
	// beq 0x821dd070
	if (cr0.eq) goto loc_821DD070;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_821DCF90:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821dd070
	goto loc_821DD070;
loc_821DCF98:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-244
	ctx.r4.s64 = r26.s64 + -244;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dcfd8
	if (cr6.eq) goto loc_821DCFD8;
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
	// beq 0x821dd070
	if (cr0.eq) goto loc_821DD070;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x821dcf90
	goto loc_821DCF90;
loc_821DCFD8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r26,-64
	ctx.r4.s64 = r26.s64 + -64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dd018
	if (cr6.eq) goto loc_821DD018;
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
	// beq 0x821dd070
	if (cr0.eq) goto loc_821DD070;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x821dcf90
	goto loc_821DCF90;
loc_821DD018:
	// lwz r11,-296(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -296);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,-296
	ctx.r4.s64 = r11.s64 + -296;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821dd064
	if (cr6.eq) goto loc_821DD064;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dd070
	if (cr0.eq) goto loc_821DD070;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// b 0x821dcf90
	goto loc_821DCF90;
loc_821DD064:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821DD06C:
	// stw r25,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r25.u32);
loc_821DD070:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DD07C"))) PPC_WEAK_FUNC(sub_821DD07C);
PPC_FUNC_IMPL(__imp__sub_821DD07C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11768
	r11.s64 = r11.s64 + 11768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11768
	ctx.r10.s64 = ctx.r10.s64 + 11768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD0A4"))) PPC_WEAK_FUNC(sub_821DD0A4);
PPC_FUNC_IMPL(__imp__sub_821DD0A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11768
	r11.s64 = r11.s64 + 11768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11768
	ctx.r10.s64 = ctx.r10.s64 + 11768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD0CC"))) PPC_WEAK_FUNC(sub_821DD0CC);
PPC_FUNC_IMPL(__imp__sub_821DD0CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11768
	r11.s64 = r11.s64 + 11768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11768
	ctx.r10.s64 = ctx.r10.s64 + 11768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD0F4"))) PPC_WEAK_FUNC(sub_821DD0F4);
PPC_FUNC_IMPL(__imp__sub_821DD0F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11768
	r11.s64 = r11.s64 + 11768;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11768
	ctx.r10.s64 = ctx.r10.s64 + 11768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD11C"))) PPC_WEAK_FUNC(sub_821DD11C);
PPC_FUNC_IMPL(__imp__sub_821DD11C) {
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

__attribute__((alias("__imp__sub_821DD144"))) PPC_WEAK_FUNC(sub_821DD144);
PPC_FUNC_IMPL(__imp__sub_821DD144) {
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

__attribute__((alias("__imp__sub_821DD16C"))) PPC_WEAK_FUNC(sub_821DD16C);
PPC_FUNC_IMPL(__imp__sub_821DD16C) {
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

__attribute__((alias("__imp__sub_821DD194"))) PPC_WEAK_FUNC(sub_821DD194);
PPC_FUNC_IMPL(__imp__sub_821DD194) {
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

__attribute__((alias("__imp__sub_821DD1BC"))) PPC_WEAK_FUNC(sub_821DD1BC);
PPC_FUNC_IMPL(__imp__sub_821DD1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD1C0"))) PPC_WEAK_FUNC(sub_821DD1C0);
PPC_FUNC_IMPL(__imp__sub_821DD1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x821dcda0
	sub_821DCDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD1CC"))) PPC_WEAK_FUNC(sub_821DD1CC);
PPC_FUNC_IMPL(__imp__sub_821DD1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD1D0"))) PPC_WEAK_FUNC(sub_821DD1D0);
PPC_FUNC_IMPL(__imp__sub_821DD1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD26C"))) PPC_WEAK_FUNC(sub_821DD26C);
PPC_FUNC_IMPL(__imp__sub_821DD26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD270"))) PPC_WEAK_FUNC(sub_821DD270);
PPC_FUNC_IMPL(__imp__sub_821DD270) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x821dd1d0
	sub_821DD1D0(ctx, base);
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD2E8"))) PPC_WEAK_FUNC(sub_821DD2E8);
PPC_FUNC_IMPL(__imp__sub_821DD2E8) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r10,-21096
	ctx.r3.s64 = ctx.r10.s64 + -21096;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x823a1828
	sub_823A1828(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_821DD334"))) PPC_WEAK_FUNC(sub_821DD334);
PPC_FUNC_IMPL(__imp__sub_821DD334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD338"))) PPC_WEAK_FUNC(sub_821DD338);
PPC_FUNC_IMPL(__imp__sub_821DD338) {
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
	// beq 0x821dd378
	if (cr0.eq) goto loc_821DD378;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,11292
	ctx.r3.s64 = r11.s64 + 11292;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821dd380
	goto loc_821DD380;
loc_821DD378:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_821DD380:
	// mulli r3,r31,140
	ctx.r3.s64 = r31.s64 * 140;
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

__attribute__((alias("__imp__sub_821DD39C"))) PPC_WEAK_FUNC(sub_821DD39C);
PPC_FUNC_IMPL(__imp__sub_821DD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD3A0"))) PPC_WEAK_FUNC(sub_821DD3A0);
PPC_FUNC_IMPL(__imp__sub_821DD3A0) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f13,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// b 0x821dd408
	goto loc_821DD408;
loc_821DD3FC:
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r30,16(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_821DD408:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dd2e8
	sub_821DD2E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x821dd3fc
	if (!cr0.eq) goto loc_821DD3FC;
	// addi r4,r29,76
	ctx.r4.s64 = r29.s64 + 76;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DD430"))) PPC_WEAK_FUNC(sub_821DD430);
PPC_FUNC_IMPL(__imp__sub_821DD430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,140
	ctx.r10.s64 = 140;
	// lwz r8,128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// divw r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	// divw r7,r7,r10
	ctx.r7.s32 = ctx.r7.s32 / ctx.r10.s32;
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// divw r8,r8,r10
	ctx.r8.s32 = ctx.r8.s32 / ctx.r10.s32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8239ce50
	sub_8239CE50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD488"))) PPC_WEAK_FUNC(sub_821DD488);
PPC_FUNC_IMPL(__imp__sub_821DD488) {
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
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821dd56c
	if (cr6.eq) goto loc_821DD56C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3632
	ctx.r4.s64 = r11.s64 + -3632;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821dd56c
	if (!cr6.gt) goto loc_821DD56C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_821DD4DC:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// lwz r10,216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r10,216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x821dd4dc
	if (cr6.lt) goto loc_821DD4DC;
loc_821DD56C:
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

__attribute__((alias("__imp__sub_821DD580"))) PPC_WEAK_FUNC(sub_821DD580);
PPC_FUNC_IMPL(__imp__sub_821DD580) {
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
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r11,220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x821dd610
	if (cr6.eq) goto loc_821DD610;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// li r9,140
	ctx.r9.s64 = 140;
	// addi r4,r10,-3620
	ctx.r4.s64 = ctx.r10.s64 + -3620;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,40(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r30,r10,r9
	r30.s32 = ctx.r10.s32 / ctx.r9.s32;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x821dd600
	if (cr6.eq) goto loc_821DD600;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x821dd608
	goto loc_821DD608;
loc_821DD600:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_821DD608:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821DD610:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DD618"))) PPC_WEAK_FUNC(sub_821DD618);
PPC_FUNC_IMPL(__imp__sub_821DD618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,140
	ctx.r10.s64 = 140;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DD63C"))) PPC_WEAK_FUNC(sub_821DD63C);
PPC_FUNC_IMPL(__imp__sub_821DD63C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD640"))) PPC_WEAK_FUNC(sub_821DD640);
PPC_FUNC_IMPL(__imp__sub_821DD640) {
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
	// lwz r16,-3592(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3592);
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
	// bne cr6,0x821dd6b0
	if (!cr6.eq) goto loc_821DD6B0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821dd684
	if (cr0.eq) goto loc_821DD684;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821DD684:
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
	// beq 0x821dd6e8
	if (cr0.eq) goto loc_821DD6E8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821dd6e8
	goto loc_821DD6E8;
loc_821DD6B0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,2116
	r30.s64 = r11.s64 + 2116;
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
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
loc_821DD6E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DD648"))) PPC_WEAK_FUNC(sub_821DD648);
PPC_FUNC_IMPL(__imp__sub_821DD648) {
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
	// bne cr6,0x821dd6b0
	if (!cr6.eq) goto loc_821DD6B0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821dd684
	if (cr0.eq) goto loc_821DD684;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821DD684:
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
	// beq 0x821dd6e8
	if (cr0.eq) goto loc_821DD6E8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821dd6e8
	goto loc_821DD6E8;
loc_821DD6B0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,2116
	r30.s64 = r11.s64 + 2116;
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
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
loc_821DD6E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DD6F4"))) PPC_WEAK_FUNC(sub_821DD6F4);
PPC_FUNC_IMPL(__imp__sub_821DD6F4) {
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

__attribute__((alias("__imp__sub_821DD71C"))) PPC_WEAK_FUNC(sub_821DD71C);
PPC_FUNC_IMPL(__imp__sub_821DD71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD720"))) PPC_WEAK_FUNC(sub_821DD720);
PPC_FUNC_IMPL(__imp__sub_821DD720) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-3520(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3520);
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// addi r9,r9,-20968
	ctx.r9.s64 = ctx.r9.s64 + -20968;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stfs f0,36(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stfs f13,40(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f0,56(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f0,52(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfs f0,48(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// addi r1,r31,16
	ctx.r1.s64 = r31.s64 + 16;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD728"))) PPC_WEAK_FUNC(sub_821DD728);
PPC_FUNC_IMPL(__imp__sub_821DD728) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
	// addi r9,r9,-20968
	ctx.r9.s64 = ctx.r9.s64 + -20968;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stfs f0,36(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stfs f13,40(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f0,56(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f0,52(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfs f0,48(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// addi r1,r31,16
	ctx.r1.s64 = r31.s64 + 16;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DD7D0"))) PPC_WEAK_FUNC(sub_821DD7D0);
PPC_FUNC_IMPL(__imp__sub_821DD7D0) {
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

__attribute__((alias("__imp__sub_821DD7F8"))) PPC_WEAK_FUNC(sub_821DD7F8);
PPC_FUNC_IMPL(__imp__sub_821DD7F8) {
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
	// bl 0x8213dd68
	sub_8213DD68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r11,r11,-20968
	r11.s64 = r11.s64 + -20968;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
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

__attribute__((alias("__imp__sub_821DD860"))) PPC_WEAK_FUNC(sub_821DD860);
PPC_FUNC_IMPL(__imp__sub_821DD860) {
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
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd580
	sub_821DD580(ctx, base);
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

__attribute__((alias("__imp__sub_821DD898"))) PPC_WEAK_FUNC(sub_821DD898);
PPC_FUNC_IMPL(__imp__sub_821DD898) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821dd8cc
	if (cr0.eq) goto loc_821DD8CC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821DD8CC:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x821dd920
	if (!cr6.eq) goto loc_821DD920;
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
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821dd920
	if (!cr6.eq) goto loc_821DD920;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821DD920:
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

__attribute__((alias("__imp__sub_821DD934"))) PPC_WEAK_FUNC(sub_821DD934);
PPC_FUNC_IMPL(__imp__sub_821DD934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DD938"))) PPC_WEAK_FUNC(sub_821DD938);
PPC_FUNC_IMPL(__imp__sub_821DD938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f0{};
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
	// bl 0x8239bcdc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8239d5d0
	// stwu r1,-2432(r1)
	ea = -2432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x821dd964
	if (!cr6.eq) goto loc_821DD964;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// b 0x821ddd2c
	goto loc_821DDD2C;
loc_821DD964:
	// clrlwi. r21,r4,24
	r21.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// bne 0x821dd980
	if (!cr0.eq) goto loc_821DD980;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821dd980
	if (!cr6.eq) goto loc_821DD980;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dd488
	sub_821DD488(ctx, base);
loc_821DD980:
	// addi r30,r29,128
	r30.s64 = r29.s64 + 128;
	// li r23,140
	r23.s64 = 140;
	// li r22,0
	r22.s64 = 0;
	// mr r27,r22
	r27.u64 = r22.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821dda04
	if (cr0.eq) goto loc_821DDA04;
	// mr r31,r22
	r31.u64 = r22.u64;
	// addi r28,r1,208
	r28.s64 = ctx.r1.s64 + 208;
loc_821DD9AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821dda04
	if (cr6.eq) goto loc_821DDA04;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821dd3a0
	sub_821DD3A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r31,r31,140
	r31.s64 = r31.s64 + 140;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x821dd9ac
	if (cr6.lt) goto loc_821DD9AC;
loc_821DDA04:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r25,r22
	r25.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821ddcb4
	if (!cr6.gt) goto loc_821DDCB4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
	// lfs f27,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f27.f64 = double(temp.f32);
	// lfs f26,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f26.f64 = double(temp.f32);
loc_821DDA2C:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f26,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f26,84(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// stfs f26,80(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// stfs f26,104(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f26,100(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r31,r22
	r31.u64 = r22.u64;
	// stfs f26,96(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f26,120(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f26,116(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f26,112(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f26,136(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f26,132(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f26,128(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// divw. r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// mullw r11,r11,r25
	r11.s64 = int64_t(r11.s32) * int64_t(r25.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// beq 0x821ddad0
	if (cr0.eq) goto loc_821DDAD0;
	// addi r27,r1,208
	r27.s64 = ctx.r1.s64 + 208;
loc_821DDA94:
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f26
	cr6.compare(ctx.f1.f64, f26.f64);
	// beq cr6,0x821ddaac
	if (cr6.eq) goto loc_821DDAAC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821dd270
	sub_821DD270(ctx, base);
loc_821DDAAC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x821dda94
	if (cr6.lt) goto loc_821DDA94;
loc_821DDAD0:
	// lbz r11,144(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821ddaec
	if (!cr0.eq) goto loc_821DDAEC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
loc_821DDAEC:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821ddb00
	if (cr0.eq) goto loc_821DDB00;
	// add r3,r11,r24
	ctx.r3.u64 = r11.u64 + r24.u64;
	// b 0x821ddb10
	goto loc_821DDB10;
loc_821DDB00:
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r10,264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// lwz r10,216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// add r3,r10,r26
	ctx.r3.u64 = ctx.r10.u64 + r26.u64;
loc_821DDB10:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821ddb20
	if (cr6.eq) goto loc_821DDB20;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// b 0x821ddb30
	goto loc_821DDB30;
loc_821DDB20:
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
loc_821DDB30:
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// add r5,r11,r26
	ctx.r5.u64 = r11.u64 + r26.u64;
	// bl 0x8214f950
	sub_8214F950(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// bgt cr6,0x821ddb8c
	if (cr6.gt) goto loc_821DDB8C;
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bgt cr6,0x821ddb8c
	if (cr6.gt) goto loc_821DDB8C;
	// fneg f0,f11
	f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fadds f0,f10,f27
	f0.f64 = double(float(ctx.f10.f64 + f27.f64));
	// b 0x821ddbcc
	goto loc_821DDBCC;
loc_821DDB8C:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, f0.f64);
	// bge cr6,0x821ddbb8
	if (!cr6.lt) goto loc_821DDBB8;
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x821ddbb8
	if (!cr6.lt) goto loc_821DDBB8;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f13,f11
	f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fadds f13,f10,f27
	ctx.f13.f64 = double(float(ctx.f10.f64 + f27.f64));
	// b 0x821ddbcc
	goto loc_821DDBCC;
loc_821DDBB8:
	// lfs f10,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fneg f12,f10
	ctx.f12.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f0,f12,f11
	f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f12,f12,f10,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + f27.f64));
loc_821DDBCC:
	// lfs f4,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fmr f25,f0
	f25.f64 = f0.f64;
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f31,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f31.f64 = double(temp.f32);
	// fmuls f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f6,f31,f12
	ctx.f6.f64 = double(float(f31.f64 * ctx.f12.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f24,f11,f12
	f24.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f23,f10,f0
	f23.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f29.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// fmadds f8,f5,f12,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f7,f3,f12,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f6,f1,f13,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmuls f22,f9,f13
	f22.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lwz r11,216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// fmadds f8,f30,f0,f8
	ctx.f8.f64 = double(float(f30.f64 * f0.f64 + ctx.f8.f64));
	// fmadds f7,f29,f0,f7
	ctx.f7.f64 = double(float(f29.f64 * f0.f64 + ctx.f7.f64));
	// fmadds f6,f28,f0,f6
	ctx.f6.f64 = double(float(f28.f64 * f0.f64 + ctx.f6.f64));
	// fmsubs f0,f11,f13,f23
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - f23.f64));
	// fmsubs f13,f9,f25,f24
	ctx.f13.f64 = double(float(ctx.f9.f64 * f25.f64 - f24.f64));
	// fmsubs f12,f10,f12,f22
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - f22.f64));
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 * f0.f64));
	// fmuls f9,f2,f13
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmadds f11,f1,f13,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f3,f0,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * f0.f64 + ctx.f9.f64));
	// fmadds f10,f5,f0,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f13,f29,f12,f9
	ctx.f13.f64 = double(float(f29.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f0,f30,f12,f10
	f0.f64 = double(float(f30.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f12,f12,f28,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64 + ctx.f11.f64));
	// fmuls f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f10,f0,f6
	ctx.f10.f64 = double(float(f0.f64 * ctx.f6.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmsubs f0,f0,f7,f11
	f0.f64 = double(float(f0.f64 * ctx.f7.f64 - ctx.f11.f64));
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmsubs f0,f8,f12,f10
	f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmsubs f0,f13,f6,f9
	f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f9.f64));
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// bl 0x8214f728
	sub_8214F728(ctx, base);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,32
	r24.s64 = r24.s64 + 32;
	// addi r26,r26,64
	r26.s64 = r26.s64 + 64;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x821dda2c
	if (cr6.lt) goto loc_821DDA2C;
loc_821DDCB4:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821ddce0
	if (cr6.eq) goto loc_821DDCE0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x821ddce8
	if (!cr6.eq) goto loc_821DDCE8;
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821DDCE0:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x821ddcfc
	if (cr6.eq) goto loc_821DDCFC;
loc_821DDCE8:
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821ddcfc
	if (cr0.eq) goto loc_821DDCFC;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r22,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r22.u32);
loc_821DDCFC:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x821ddd2c
	if (!cr6.eq) goto loc_821DDD2C;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// li r4,165
	ctx.r4.s64 = 165;
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// stw r22,272(r11)
	PPC_STORE_U32(r11.u32 + 272, r22.u32);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821DDD2C:
	// addi r1,r1,2432
	ctx.r1.s64 = ctx.r1.s64 + 2432;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8239d61c
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_821DDD3C"))) PPC_WEAK_FUNC(sub_821DDD3C);
PPC_FUNC_IMPL(__imp__sub_821DDD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDD40"))) PPC_WEAK_FUNC(sub_821DDD40);
PPC_FUNC_IMPL(__imp__sub_821DDD40) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8213e3e8
	sub_8213E3E8(ctx, base);
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
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
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r30,r29,76
	r30.s64 = r29.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821DDDC8"))) PPC_WEAK_FUNC(sub_821DDDC8);
PPC_FUNC_IMPL(__imp__sub_821DDDC8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82150f18
	sub_82150F18(ctx, base);
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r30,r29,76
	r30.s64 = r29.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
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
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821DDE50"))) PPC_WEAK_FUNC(sub_821DDE50);
PPC_FUNC_IMPL(__imp__sub_821DDE50) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,11776(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11776);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x821276e0
	sub_821276E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// li r24,140
	r24.s64 = 140;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r28,r11,r24
	r28.s32 = r11.s32 / r24.s32;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821ddf48
	if (!cr6.gt) goto loc_821DDF48;
loc_821DDEE8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divw r11,r11,r24
	r11.s32 = r11.s32 / r24.s32;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r10
	r25.u64 = r11.u64 + ctx.r10.u64;
	// ble cr6,0x821ddf38
	if (!cr6.gt) goto loc_821DDF38;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_821DDF14:
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x821ddf14
	if (!cr0.eq) goto loc_821DDF14;
loc_821DDF38:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821ddee8
	if (cr6.lt) goto loc_821DDEE8;
loc_821DDF48:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x821ddf70
	if (!cr6.gt) goto loc_821DDF70;
	// li r27,0
	r27.s64 = 0;
loc_821DDF54:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r27,r11
	ctx.r4.u64 = r27.u64 + r11.u64;
	// bl 0x821ddd40
	sub_821DDD40(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,140
	r27.s64 = r27.s64 + 140;
	// bne 0x821ddf54
	if (!cr0.eq) goto loc_821DDF54;
loc_821DDF70:
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213d5e8
	sub_8213D5E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821DDFAC"))) PPC_WEAK_FUNC(sub_821DDFAC);
PPC_FUNC_IMPL(__imp__sub_821DDFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DDFB0"))) PPC_WEAK_FUNC(sub_821DDFB0);
PPC_FUNC_IMPL(__imp__sub_821DDFB0) {
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
	// lwz r16,-3472(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3472);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,11784(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,11780
	r29.s64 = ctx.r9.s64 + 11780;
	// bne 0x821de018
	if (!cr0.eq) goto loc_821DE018;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11784, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30544
	ctx.r4.s64 = r11.s64 + 30544;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DE018:
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
	// beq 0x821de04c
	if (cr0.eq) goto loc_821DE04C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,52
	ctx.r3.s64 = r28.s64 + 52;
	// bl 0x821dd648
	sub_821DD648(ctx, base);
	// b 0x821de050
	goto loc_821DE050;
loc_821DE04C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DE050:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821DDFB8"))) PPC_WEAK_FUNC(sub_821DDFB8);
PPC_FUNC_IMPL(__imp__sub_821DDFB8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// lwz r11,11784(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r29,r9,11780
	r29.s64 = ctx.r9.s64 + 11780;
	// bne 0x821de018
	if (!cr0.eq) goto loc_821DE018;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11784, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,30544
	ctx.r4.s64 = r11.s64 + 30544;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DE018:
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
	// beq 0x821de04c
	if (cr0.eq) goto loc_821DE04C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r28,52
	ctx.r3.s64 = r28.s64 + 52;
	// bl 0x821dd648
	sub_821DD648(ctx, base);
	// b 0x821de050
	goto loc_821DE050;
loc_821DE04C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DE050:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821DE058"))) PPC_WEAK_FUNC(sub_821DE058);
PPC_FUNC_IMPL(__imp__sub_821DE058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11784
	r11.s64 = r11.s64 + 11784;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11784
	ctx.r10.s64 = ctx.r10.s64 + 11784;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE080"))) PPC_WEAK_FUNC(sub_821DE080);
PPC_FUNC_IMPL(__imp__sub_821DE080) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8213da00
	sub_8213DA00(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
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

__attribute__((alias("__imp__sub_821DE0E0"))) PPC_WEAK_FUNC(sub_821DE0E0);
PPC_FUNC_IMPL(__imp__sub_821DE0E0) {
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
	// lwz r16,-3400(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3400);
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
	// beq cr6,0x821de110
	if (cr6.eq) goto loc_821DE110;
	// bl 0x821dd7f8
	sub_821DD7F8(ctx, base);
loc_821DE110:
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

__attribute__((alias("__imp__sub_821DE0E8"))) PPC_WEAK_FUNC(sub_821DE0E8);
PPC_FUNC_IMPL(__imp__sub_821DE0E8) {
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
	// beq cr6,0x821de110
	if (cr6.eq) goto loc_821DE110;
	// bl 0x821dd7f8
	sub_821DD7F8(ctx, base);
loc_821DE110:
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

__attribute__((alias("__imp__sub_821DE124"))) PPC_WEAK_FUNC(sub_821DE124);
PPC_FUNC_IMPL(__imp__sub_821DE124) {
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

__attribute__((alias("__imp__sub_821DE150"))) PPC_WEAK_FUNC(sub_821DE150);
PPC_FUNC_IMPL(__imp__sub_821DE150) {
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
	// lwz r16,-3344(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3344);
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
	// beq cr6,0x821de180
	if (cr6.eq) goto loc_821DE180;
	// bl 0x821dd7f8
	sub_821DD7F8(ctx, base);
loc_821DE180:
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

__attribute__((alias("__imp__sub_821DE158"))) PPC_WEAK_FUNC(sub_821DE158);
PPC_FUNC_IMPL(__imp__sub_821DE158) {
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
	// beq cr6,0x821de180
	if (cr6.eq) goto loc_821DE180;
	// bl 0x821dd7f8
	sub_821DD7F8(ctx, base);
loc_821DE180:
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

__attribute__((alias("__imp__sub_821DE194"))) PPC_WEAK_FUNC(sub_821DE194);
PPC_FUNC_IMPL(__imp__sub_821DE194) {
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

__attribute__((alias("__imp__sub_821DE1C0"))) PPC_WEAK_FUNC(sub_821DE1C0);
PPC_FUNC_IMPL(__imp__sub_821DE1C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82193200
	sub_82193200(ctx, base);
	// b 0x821de1f8
	goto loc_821DE1F8;
loc_821DE1E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd938
	sub_821DD938(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82193280
	sub_82193280(ctx, base);
loc_821DE1F8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x821de1e8
	if (!cr6.eq) goto loc_821DE1E8;
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

__attribute__((alias("__imp__sub_821DE218"))) PPC_WEAK_FUNC(sub_821DE218);
PPC_FUNC_IMPL(__imp__sub_821DE218) {
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
	// lwz r16,-3248(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3248);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r28,-32136
	r28.s64 = -2106064896;
	// lwz r11,11796(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 11796);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r27,r10,11792
	r27.s64 = ctx.r10.s64 + 11792;
	// bne 0x821de288
	if (!cr0.eq) goto loc_821DE288;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11796(r28)
	PPC_STORE_U32(r28.u32 + 11796, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-3284
	ctx.r4.s64 = r11.s64 + -3284;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11796(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 11796);
loc_821DE288:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821de2d0
	if (cr0.eq) goto loc_821DE2D0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bl 0x821dd938
	sub_821DD938(ctx, base);
loc_821DE2C8:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x821de388
	goto loc_821DE388;
loc_821DE2D0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r27,r10,11788
	r27.s64 = ctx.r10.s64 + 11788;
	// bne 0x821de2f8
	if (!cr0.eq) goto loc_821DE2F8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11796(r28)
	PPC_STORE_U32(r28.u32 + 11796, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-3296
	ctx.r4.s64 = r11.s64 + -3296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DE2F8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821de33c
	if (cr0.eq) goto loc_821DE33C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,28(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x821de1c0
	sub_821DE1C0(ctx, base);
	// b 0x821de2c8
	goto loc_821DE2C8;
loc_821DE33C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// beq cr6,0x821de380
	if (cr6.eq) goto loc_821DE380;
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
	// beq 0x821de38c
	if (cr0.eq) goto loc_821DE38C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821de38c
	goto loc_821DE38C;
loc_821DE380:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821DE388:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_821DE38C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DE220"))) PPC_WEAK_FUNC(sub_821DE220);
PPC_FUNC_IMPL(__imp__sub_821DE220) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r28,-32136
	r28.s64 = -2106064896;
	// lwz r11,11796(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 11796);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r27,r10,11792
	r27.s64 = ctx.r10.s64 + 11792;
	// bne 0x821de288
	if (!cr0.eq) goto loc_821DE288;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11796(r28)
	PPC_STORE_U32(r28.u32 + 11796, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-3284
	ctx.r4.s64 = r11.s64 + -3284;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,11796(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 11796);
loc_821DE288:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821de2d0
	if (cr0.eq) goto loc_821DE2D0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bl 0x821dd938
	sub_821DD938(ctx, base);
loc_821DE2C8:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// b 0x821de388
	goto loc_821DE388;
loc_821DE2D0:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r27,r10,11788
	r27.s64 = ctx.r10.s64 + 11788;
	// bne 0x821de2f8
	if (!cr0.eq) goto loc_821DE2F8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,11796(r28)
	PPC_STORE_U32(r28.u32 + 11796, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-3296
	ctx.r4.s64 = r11.s64 + -3296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DE2F8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821de33c
	if (cr0.eq) goto loc_821DE33C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,28(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
	// bl 0x821de1c0
	sub_821DE1C0(ctx, base);
	// b 0x821de2c8
	goto loc_821DE2C8;
loc_821DE33C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// beq cr6,0x821de380
	if (cr6.eq) goto loc_821DE380;
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
	// beq 0x821de38c
	if (cr0.eq) goto loc_821DE38C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821de38c
	goto loc_821DE38C;
loc_821DE380:
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_821DE388:
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_821DE38C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DE398"))) PPC_WEAK_FUNC(sub_821DE398);
PPC_FUNC_IMPL(__imp__sub_821DE398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11796
	r11.s64 = r11.s64 + 11796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11796
	ctx.r10.s64 = ctx.r10.s64 + 11796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE3C0"))) PPC_WEAK_FUNC(sub_821DE3C0);
PPC_FUNC_IMPL(__imp__sub_821DE3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11796
	r11.s64 = r11.s64 + 11796;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11796
	ctx.r10.s64 = ctx.r10.s64 + 11796;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE3E8"))) PPC_WEAK_FUNC(sub_821DE3E8);
PPC_FUNC_IMPL(__imp__sub_821DE3E8) {
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

__attribute__((alias("__imp__sub_821DE410"))) PPC_WEAK_FUNC(sub_821DE410);
PPC_FUNC_IMPL(__imp__sub_821DE410) {
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
	// b 0x821de448
	goto loc_821DE448;
loc_821DE430:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-140
	ctx.r3.s64 = r11.s64 + -140;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-140
	r11.s64 = r11.s64 + -140;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_821DE448:
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
	// bne 0x821de430
	if (!cr0.eq) goto loc_821DE430;
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

__attribute__((alias("__imp__sub_821DE480"))) PPC_WEAK_FUNC(sub_821DE480);
PPC_FUNC_IMPL(__imp__sub_821DE480) {
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
	// beq cr6,0x821de4b8
	if (cr6.eq) goto loc_821DE4B8;
loc_821DE4A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r31,r31,140
	r31.s64 = r31.s64 + 140;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x821de4a4
	if (!cr6.eq) goto loc_821DE4A4;
loc_821DE4B8:
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

__attribute__((alias("__imp__sub_821DE4D0"))) PPC_WEAK_FUNC(sub_821DE4D0);
PPC_FUNC_IMPL(__imp__sub_821DE4D0) {
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
	// bl 0x821de410
	sub_821DE410(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,140
	r11.s64 = 140;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
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

__attribute__((alias("__imp__sub_821DE534"))) PPC_WEAK_FUNC(sub_821DE534);
PPC_FUNC_IMPL(__imp__sub_821DE534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE538"))) PPC_WEAK_FUNC(sub_821DE538);
PPC_FUNC_IMPL(__imp__sub_821DE538) {
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
	// lwz r16,-3100(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3100);
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
loc_821DE56C:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x821de594
	if (cr6.eq) goto loc_821DE594;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821de158
	sub_821DE158(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,140
	r29.s64 = r29.s64 + 140;
	// addi r30,r30,140
	r30.s64 = r30.s64 + 140;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x821de56c
	goto loc_821DE56C;
loc_821DE594:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DE540"))) PPC_WEAK_FUNC(sub_821DE540);
PPC_FUNC_IMPL(__imp__sub_821DE540) {
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
loc_821DE56C:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x821de594
	if (cr6.eq) goto loc_821DE594;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821de158
	sub_821DE158(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,140
	r29.s64 = r29.s64 + 140;
	// addi r30,r30,140
	r30.s64 = r30.s64 + 140;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x821de56c
	goto loc_821DE56C;
loc_821DE594:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DE5A0"))) PPC_WEAK_FUNC(sub_821DE5A0);
PPC_FUNC_IMPL(__imp__sub_821DE5A0) {
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
	// lwz r16,-3100(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3100);
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
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
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
	// bl 0x821de410
	sub_821DE410(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,140
	r11.s64 = 140;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
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

__attribute__((alias("__imp__sub_821DE5A8"))) PPC_WEAK_FUNC(sub_821DE5A8);
PPC_FUNC_IMPL(__imp__sub_821DE5A8) {
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
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821DE5D0"))) PPC_WEAK_FUNC(sub_821DE5D0);
PPC_FUNC_IMPL(__imp__sub_821DE5D0) {
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
	// bl 0x821de410
	sub_821DE410(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,140
	r11.s64 = 140;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
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

__attribute__((alias("__imp__sub_821DE634"))) PPC_WEAK_FUNC(sub_821DE634);
PPC_FUNC_IMPL(__imp__sub_821DE634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE638"))) PPC_WEAK_FUNC(sub_821DE638);
PPC_FUNC_IMPL(__imp__sub_821DE638) {
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
	// lwz r16,-2996(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2996);
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
loc_821DE66C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821de694
	if (cr6.eq) goto loc_821DE694;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de158
	sub_821DE158(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,140
	r30.s64 = r30.s64 + 140;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x821de66c
	goto loc_821DE66C;
loc_821DE694:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DE640"))) PPC_WEAK_FUNC(sub_821DE640);
PPC_FUNC_IMPL(__imp__sub_821DE640) {
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
loc_821DE66C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x821de694
	if (cr6.eq) goto loc_821DE694;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de158
	sub_821DE158(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,140
	r30.s64 = r30.s64 + 140;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x821de66c
	goto loc_821DE66C;
loc_821DE694:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DE6A0"))) PPC_WEAK_FUNC(sub_821DE6A0);
PPC_FUNC_IMPL(__imp__sub_821DE6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,-2996(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2996);
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
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-2892(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2892);
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
loc_821DE704:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x821de72c
	if (cr6.eq) goto loc_821DE72C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821de158
	sub_821DE158(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,140
	r29.s64 = r29.s64 + 140;
	// addi r30,r30,140
	r30.s64 = r30.s64 + 140;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x821de704
	goto loc_821DE704;
loc_821DE72C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DE6A8"))) PPC_WEAK_FUNC(sub_821DE6A8);
PPC_FUNC_IMPL(__imp__sub_821DE6A8) {
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
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821DE6D8"))) PPC_WEAK_FUNC(sub_821DE6D8);
PPC_FUNC_IMPL(__imp__sub_821DE6D8) {
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
loc_821DE704:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x821de72c
	if (cr6.eq) goto loc_821DE72C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821de158
	sub_821DE158(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,140
	r29.s64 = r29.s64 + 140;
	// addi r30,r30,140
	r30.s64 = r30.s64 + 140;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x821de704
	goto loc_821DE704;
loc_821DE72C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DE738"))) PPC_WEAK_FUNC(sub_821DE738);
PPC_FUNC_IMPL(__imp__sub_821DE738) {
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
	// lwz r16,-2892(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2892);
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
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-2832(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2832);
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
	// bl 0x821de410
	sub_821DE410(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821de7d4
	if (cr0.eq) goto loc_821DE7D4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,140
	ctx.r10.s64 = 140;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821DE7D4:
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

__attribute__((alias("__imp__sub_821DE740"))) PPC_WEAK_FUNC(sub_821DE740);
PPC_FUNC_IMPL(__imp__sub_821DE740) {
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
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821DE770"))) PPC_WEAK_FUNC(sub_821DE770);
PPC_FUNC_IMPL(__imp__sub_821DE770) {
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
	// bl 0x821de410
	sub_821DE410(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x821de7d4
	if (cr0.eq) goto loc_821DE7D4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,140
	ctx.r10.s64 = 140;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_821DE7D4:
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

__attribute__((alias("__imp__sub_821DE7EC"))) PPC_WEAK_FUNC(sub_821DE7EC);
PPC_FUNC_IMPL(__imp__sub_821DE7EC) {
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
	// bl 0x821dd618
	sub_821DD618(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DE814"))) PPC_WEAK_FUNC(sub_821DE814);
PPC_FUNC_IMPL(__imp__sub_821DE814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE818"))) PPC_WEAK_FUNC(sub_821DE818);
PPC_FUNC_IMPL(__imp__sub_821DE818) {
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
	// li r11,140
	r11.s64 = 140;
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
	// ble 0x821de860
	if (!cr0.gt) goto loc_821DE860;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_821DE848:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,140
	r31.s64 = r31.s64 + 140;
	// bgt 0x821de848
	if (cr0.gt) goto loc_821DE848;
loc_821DE860:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821DE87C"))) PPC_WEAK_FUNC(sub_821DE87C);
PPC_FUNC_IMPL(__imp__sub_821DE87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DE880"))) PPC_WEAK_FUNC(sub_821DE880);
PPC_FUNC_IMPL(__imp__sub_821DE880) {
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
	// lwz r16,-2768(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2768);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
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
	// blt cr6,0x821de8c4
	if (cr6.lt) goto loc_821DE8C4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821de8c8
	if (cr6.lt) goto loc_821DE8C8;
loc_821DE8C4:
	// li r11,0
	r11.s64 = 0;
loc_821DE8C8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821de90c
	if (cr0.eq) goto loc_821DE90C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821dd7f8
	sub_821DD7F8(ctx, base);
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
	// bl 0x821de888
	sub_821DE888(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// b 0x821de9f4
	goto loc_821DE9F4;
loc_821DE90C:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,140
	r25.s64 = 140;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r27,r11,r25
	r27.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// ble cr6,0x821de9a0
	if (!cr6.gt) goto loc_821DE9A0;
	// mulli r26,r26,140
	r26.s64 = r26.s64 * 140;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821de6d8
	sub_821DE6D8(ctx, base);
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
	// ble 0x821de974
	if (!cr0.gt) goto loc_821DE974;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_821DE95C:
	// addi r30,r30,-140
	r30.s64 = r30.s64 + -140;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x821de95c
	if (cr0.gt) goto loc_821DE95C;
loc_821DE974:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x821de9f4
	if (cr6.eq) goto loc_821DE9F4;
loc_821DE984:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addi r30,r30,140
	r30.s64 = r30.s64 + 140;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x821de984
	if (!cr6.eq) goto loc_821DE984;
	// b 0x821de9f4
	goto loc_821DE9F4;
loc_821DE9A0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r4,r27,r26
	ctx.r4.s64 = r26.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de640
	sub_821DE640(ctx, base);
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
	// bl 0x821de6d8
	sub_821DE6D8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r27,140
	r11.s64 = r27.s64 * 140;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x821de9ec
	goto loc_821DE9EC;
loc_821DE9DC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addi r28,r28,140
	r28.s64 = r28.s64 + 140;
loc_821DE9EC:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x821de9dc
	if (!cr6.eq) goto loc_821DE9DC;
loc_821DE9F4:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821DE888"))) PPC_WEAK_FUNC(sub_821DE888);
PPC_FUNC_IMPL(__imp__sub_821DE888) {
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
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
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
	// blt cr6,0x821de8c4
	if (cr6.lt) goto loc_821DE8C4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x821de8c8
	if (cr6.lt) goto loc_821DE8C8;
loc_821DE8C4:
	// li r11,0
	r11.s64 = 0;
loc_821DE8C8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821de90c
	if (cr0.eq) goto loc_821DE90C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821dd7f8
	sub_821DD7F8(ctx, base);
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
	// bl 0x821de888
	sub_821DE888(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// b 0x821de9f4
	goto loc_821DE9F4;
loc_821DE90C:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,140
	r25.s64 = 140;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r27,r11,r25
	r27.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// ble cr6,0x821de9a0
	if (!cr6.gt) goto loc_821DE9A0;
	// mulli r26,r26,140
	r26.s64 = r26.s64 * 140;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821de6d8
	sub_821DE6D8(ctx, base);
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
	// ble 0x821de974
	if (!cr0.gt) goto loc_821DE974;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
loc_821DE95C:
	// addi r30,r30,-140
	r30.s64 = r30.s64 + -140;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x821de95c
	if (cr0.gt) goto loc_821DE95C;
loc_821DE974:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x821de9f4
	if (cr6.eq) goto loc_821DE9F4;
loc_821DE984:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addi r30,r30,140
	r30.s64 = r30.s64 + 140;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x821de984
	if (!cr6.eq) goto loc_821DE984;
	// b 0x821de9f4
	goto loc_821DE9F4;
loc_821DE9A0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r4,r27,r26
	ctx.r4.s64 = r26.s64 - r27.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de640
	sub_821DE640(ctx, base);
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
	// bl 0x821de6d8
	sub_821DE6D8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r27,140
	r11.s64 = r27.s64 * 140;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x821de9ec
	goto loc_821DE9EC;
loc_821DE9DC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addi r28,r28,140
	r28.s64 = r28.s64 + 140;
loc_821DE9EC:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x821de9dc
	if (!cr6.eq) goto loc_821DE9DC;
loc_821DE9F4:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_821DE9FC"))) PPC_WEAK_FUNC(sub_821DE9FC);
PPC_FUNC_IMPL(__imp__sub_821DE9FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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

__attribute__((alias("__imp__sub_821DEA24"))) PPC_WEAK_FUNC(sub_821DEA24);
PPC_FUNC_IMPL(__imp__sub_821DEA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEA28"))) PPC_WEAK_FUNC(sub_821DEA28);
PPC_FUNC_IMPL(__imp__sub_821DEA28) {
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
	// lwz r16,-2636(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2636);
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
	// bl 0x821dd338
	sub_821DD338(ctx, base);
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
	// bl 0x821de540
	sub_821DE540(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DEA30"))) PPC_WEAK_FUNC(sub_821DEA30);
PPC_FUNC_IMPL(__imp__sub_821DEA30) {
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
	// bl 0x821dd338
	sub_821DD338(ctx, base);
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
	// bl 0x821de540
	sub_821DE540(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DEA8C"))) PPC_WEAK_FUNC(sub_821DEA8C);
PPC_FUNC_IMPL(__imp__sub_821DEA8C) {
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
	// lwz r16,-2636(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2636);
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
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// b 0x821de770
	sub_821DE770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DEA94"))) PPC_WEAK_FUNC(sub_821DEA94);
PPC_FUNC_IMPL(__imp__sub_821DEA94) {
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
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821DEAC0"))) PPC_WEAK_FUNC(sub_821DEAC0);
PPC_FUNC_IMPL(__imp__sub_821DEAC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821de770
	sub_821DE770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DEAC4"))) PPC_WEAK_FUNC(sub_821DEAC4);
PPC_FUNC_IMPL(__imp__sub_821DEAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEAC8"))) PPC_WEAK_FUNC(sub_821DEAC8);
PPC_FUNC_IMPL(__imp__sub_821DEAC8) {
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
	// lwz r16,-2496(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2496);
	// mflr r12
	// bl 0x8239bcfc
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
	// addi r11,r11,-2580
	r11.s64 = r11.s64 + -2580;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821deb0c
	if (cr0.eq) goto loc_821DEB0C;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
loc_821DEB0C:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821deb20
	if (cr0.eq) goto loc_821DEB20;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
loc_821DEB20:
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// bl 0x821de770
	sub_821DE770(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DEAD0"))) PPC_WEAK_FUNC(sub_821DEAD0);
PPC_FUNC_IMPL(__imp__sub_821DEAD0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-2580
	r11.s64 = r11.s64 + -2580;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821deb0c
	if (cr0.eq) goto loc_821DEB0C;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
loc_821DEB0C:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821deb20
	if (cr0.eq) goto loc_821DEB20;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
loc_821DEB20:
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// bl 0x821de770
	sub_821DE770(ctx, base);
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x821268c0
	sub_821268C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DEB40"))) PPC_WEAK_FUNC(sub_821DEB40);
PPC_FUNC_IMPL(__imp__sub_821DEB40) {
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

__attribute__((alias("__imp__sub_821DEB68"))) PPC_WEAK_FUNC(sub_821DEB68);
PPC_FUNC_IMPL(__imp__sub_821DEB68) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
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

__attribute__((alias("__imp__sub_821DEB94"))) PPC_WEAK_FUNC(sub_821DEB94);
PPC_FUNC_IMPL(__imp__sub_821DEB94) {
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
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// bl 0x821deac0
	sub_821DEAC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEBC0"))) PPC_WEAK_FUNC(sub_821DEBC0);
PPC_FUNC_IMPL(__imp__sub_821DEBC0) {
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
	// lwz r16,-2392(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2392);
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
	// lwz r11,11804(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,11800
	r30.s64 = ctx.r9.s64 + 11800;
	// bne 0x821dec0c
	if (!cr0.eq) goto loc_821DEC0C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11804, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-2416
	ctx.r4.s64 = r11.s64 + -2416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DEC0C:
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

__attribute__((alias("__imp__sub_821DEBC8"))) PPC_WEAK_FUNC(sub_821DEBC8);
PPC_FUNC_IMPL(__imp__sub_821DEBC8) {
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
	// lwz r11,11804(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,11800
	r30.s64 = ctx.r9.s64 + 11800;
	// bne 0x821dec0c
	if (!cr0.eq) goto loc_821DEC0C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11804, r11.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-2416
	ctx.r4.s64 = r11.s64 + -2416;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_821DEC0C:
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

__attribute__((alias("__imp__sub_821DEC20"))) PPC_WEAK_FUNC(sub_821DEC20);
PPC_FUNC_IMPL(__imp__sub_821DEC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11804
	r11.s64 = r11.s64 + 11804;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11804
	ctx.r10.s64 = ctx.r10.s64 + 11804;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEC48"))) PPC_WEAK_FUNC(sub_821DEC48);
PPC_FUNC_IMPL(__imp__sub_821DEC48) {
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
	// bl 0x821debc8
	sub_821DEBC8(ctx, base);
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

__attribute__((alias("__imp__sub_821DEC78"))) PPC_WEAK_FUNC(sub_821DEC78);
PPC_FUNC_IMPL(__imp__sub_821DEC78) {
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
	// lwz r16,-2336(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2336);
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32136
	r28.s64 = -2106064896;
	// lwz r11,11812(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821decfc
	if (!cr0.eq) goto loc_821DECFC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11812, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821debc8
	sub_821DEBC8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// stw r3,11808(r28)
	PPC_STORE_U32(r28.u32 + 11808, ctx.r3.u32);
	// b 0x821ded00
	goto loc_821DED00;
loc_821DECFC:
	// lwz r3,11808(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 11808);
loc_821DED00:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ded30
	if (cr0.eq) goto loc_821DED30;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821ded78
	goto loc_821DED78;
loc_821DED30:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne 0x821ded6c
	if (!cr0.eq) goto loc_821DED6C;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821DED6C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821DED78:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821DEC80"))) PPC_WEAK_FUNC(sub_821DEC80);
PPC_FUNC_IMPL(__imp__sub_821DEC80) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r28,-32136
	r28.s64 = -2106064896;
	// lwz r11,11812(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x821decfc
	if (!cr0.eq) goto loc_821DECFC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,11812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11812, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821debc8
	sub_821DEBC8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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
	// stw r3,11808(r28)
	PPC_STORE_U32(r28.u32 + 11808, ctx.r3.u32);
	// b 0x821ded00
	goto loc_821DED00;
loc_821DECFC:
	// lwz r3,11808(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 11808);
loc_821DED00:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821ded30
	if (cr0.eq) goto loc_821DED30;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x821ded78
	goto loc_821DED78;
loc_821DED30:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne 0x821ded6c
	if (!cr0.eq) goto loc_821DED6C;
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821DED6C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_821DED78:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821DED84"))) PPC_WEAK_FUNC(sub_821DED84);
PPC_FUNC_IMPL(__imp__sub_821DED84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,11812
	r11.s64 = r11.s64 + 11812;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,11812
	ctx.r10.s64 = ctx.r10.s64 + 11812;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DEDAC"))) PPC_WEAK_FUNC(sub_821DEDAC);
PPC_FUNC_IMPL(__imp__sub_821DEDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DEDB0"))) PPC_WEAK_FUNC(sub_821DEDB0);
PPC_FUNC_IMPL(__imp__sub_821DEDB0) {
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
	// beq cr6,0x821deee4
	if (cr6.eq) goto loc_821DEEE4;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r30,140
	r30.s64 = 140;
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
	// ble cr6,0x821dee20
	if (!cr6.gt) goto loc_821DEE20;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x821dea30
	sub_821DEA30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821de4d0
	sub_821DE4D0(ctx, base);
	// mulli r11,r25,140
	r11.s64 = r25.s64 * 140;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x821deed4
	goto loc_821DEED4;
loc_821DEE20:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// blt cr6,0x821dee74
	if (cr6.lt) goto loc_821DEE74;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// subf r11,r29,r6
	r11.s64 = ctx.r6.s64 - r29.s64;
	// divw. r30,r11,r30
	r30.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x821dee64
	if (!cr0.gt) goto loc_821DEE64;
loc_821DEE48:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,140
	r29.s64 = r29.s64 + 140;
	// addi r28,r28,140
	r28.s64 = r28.s64 + 140;
	// bgt 0x821dee48
	if (cr0.gt) goto loc_821DEE48;
loc_821DEE64:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// b 0x821deed4
	goto loc_821DEED4;
loc_821DEE74:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mulli r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 * 140;
	// mr r27,r11
	r27.u64 = r11.u64;
	// subf r11,r28,r10
	r11.s64 = ctx.r10.s64 - r28.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// divw. r29,r11,r30
	r29.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x821deeac
	if (!cr0.gt) goto loc_821DEEAC;
loc_821DEE90:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821de080
	sub_821DE080(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,140
	r28.s64 = r28.s64 + 140;
	// addi r27,r27,140
	r27.s64 = r27.s64 + 140;
	// bgt 0x821dee90
	if (cr0.gt) goto loc_821DEE90;
loc_821DEEAC:
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
	// mulli r11,r11,140
	r11.s64 = r11.s64 * 140;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x821de540
	sub_821DE540(ctx, base);
loc_821DEED4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r25,140
	r11.s64 = r25.s64 * 140;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_821DEEE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DEEF0"))) PPC_WEAK_FUNC(sub_821DEEF0);
PPC_FUNC_IMPL(__imp__sub_821DEEF0) {
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
	// lwz r16,-2220(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2220);
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
	// li r10,140
	ctx.r10.s64 = 140;
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
	// blt cr6,0x821def50
	if (cr6.lt) goto loc_821DEF50;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_821DEF50:
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
	// bl 0x821dd338
	sub_821DD338(ctx, base);
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
	// bl 0x821de6d8
	sub_821DE6D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x821defb8
	if (!cr6.eq) goto loc_821DEFB8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821de0e8
	sub_821DE0E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,140
	r29.s64 = r29.s64 + 140;
	// b 0x821defd0
	goto loc_821DEFD0;
loc_821DEFB8:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821de640
	sub_821DE640(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821DEFD0:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821deff8
	if (!cr0.eq) goto loc_821DEFF8;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821de6d8
	sub_821DE6D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821DEFF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de5d0
	sub_821DE5D0(ctx, base);
	// mulli r11,r24,140
	r11.s64 = r24.s64 * 140;
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

__attribute__((alias("__imp__sub_821DEEF8"))) PPC_WEAK_FUNC(sub_821DEEF8);
PPC_FUNC_IMPL(__imp__sub_821DEEF8) {
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
	// li r10,140
	ctx.r10.s64 = 140;
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
	// blt cr6,0x821def50
	if (cr6.lt) goto loc_821DEF50;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_821DEF50:
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
	// bl 0x821dd338
	sub_821DD338(ctx, base);
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
	// bl 0x821de6d8
	sub_821DE6D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x821defb8
	if (!cr6.eq) goto loc_821DEFB8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821de0e8
	sub_821DE0E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,140
	r29.s64 = r29.s64 + 140;
	// b 0x821defd0
	goto loc_821DEFD0;
loc_821DEFB8:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821de640
	sub_821DE640(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821DEFD0:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821deff8
	if (!cr0.eq) goto loc_821DEFF8;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821de6d8
	sub_821DE6D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821DEFF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821de5d0
	sub_821DE5D0(ctx, base);
	// mulli r11,r24,140
	r11.s64 = r24.s64 * 140;
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

__attribute__((alias("__imp__sub_821DF01C"))) PPC_WEAK_FUNC(sub_821DF01C);
PPC_FUNC_IMPL(__imp__sub_821DF01C) {
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
	// lwz r16,-2220(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2220);
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
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
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
	// lwz r16,-2128(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2128);
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-2580
	ctx.r10.s64 = r11.s64 + -2580;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stw r30,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r30.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r30,128
	ctx.r10.s64 = r30.s64 + 128;
	// addi r9,r9,-18660
	ctx.r9.s64 = ctx.r9.s64 + -18660;
	// stw r9,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r30.u32);
	// stb r11,144(r30)
	PPC_STORE_U8(r30.u32 + 144, r11.u8);
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

__attribute__((alias("__imp__sub_821DF024"))) PPC_WEAK_FUNC(sub_821DF024);
PPC_FUNC_IMPL(__imp__sub_821DF024) {
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
	// bl 0x821de480
	sub_821DE480(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,140
	ctx.r3.s64 = r11.s64 * 140;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821DF068"))) PPC_WEAK_FUNC(sub_821DF068);
PPC_FUNC_IMPL(__imp__sub_821DF068) {
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
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-2580
	ctx.r10.s64 = r11.s64 + -2580;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stw r30,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r30.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r30,128
	ctx.r10.s64 = r30.s64 + 128;
	// addi r9,r9,-18660
	ctx.r9.s64 = ctx.r9.s64 + -18660;
	// stw r9,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r30.u32);
	// stb r11,144(r30)
	PPC_STORE_U8(r30.u32 + 144, r11.u8);
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

__attribute__((alias("__imp__sub_821DF0EC"))) PPC_WEAK_FUNC(sub_821DF0EC);
PPC_FUNC_IMPL(__imp__sub_821DF0EC) {
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

__attribute__((alias("__imp__sub_821DF114"))) PPC_WEAK_FUNC(sub_821DF114);
PPC_FUNC_IMPL(__imp__sub_821DF114) {
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

__attribute__((alias("__imp__sub_821DF13C"))) PPC_WEAK_FUNC(sub_821DF13C);
PPC_FUNC_IMPL(__imp__sub_821DF13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF140"))) PPC_WEAK_FUNC(sub_821DF140);
PPC_FUNC_IMPL(__imp__sub_821DF140) {
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
	// bl 0x821dead0
	sub_821DEAD0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821df170
	if (cr0.eq) goto loc_821DF170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821DF170:
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

__attribute__((alias("__imp__sub_821DF18C"))) PPC_WEAK_FUNC(sub_821DF18C);
PPC_FUNC_IMPL(__imp__sub_821DF18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF190"))) PPC_WEAK_FUNC(sub_821DF190);
PPC_FUNC_IMPL(__imp__sub_821DF190) {
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
	// beq cr6,0x821df1e4
	if (cr6.eq) goto loc_821DF1E4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,140
	ctx.r8.s64 = 140;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x821df1d0
	if (cr6.lt) goto loc_821DF1D0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821de888
	sub_821DE888(ctx, base);
	// b 0x821df1e4
	goto loc_821DF1E4;
loc_821DF1D0:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x821deef8
	sub_821DEEF8(ctx, base);
loc_821DF1E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF1F4"))) PPC_WEAK_FUNC(sub_821DF1F4);
PPC_FUNC_IMPL(__imp__sub_821DF1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF1F8"))) PPC_WEAK_FUNC(sub_821DF1F8);
PPC_FUNC_IMPL(__imp__sub_821DF1F8) {
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
	// li r8,140
	ctx.r8.s64 = 140;
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
	// bge cr6,0x821df248
	if (!cr6.lt) goto loc_821DF248;
	// mulli r11,r11,140
	r11.s64 = r11.s64 * 140;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x821df25c
	if (cr6.eq) goto loc_821DF25C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x821de818
	sub_821DE818(ctx, base);
	// b 0x821df25c
	goto loc_821DF25C;
loc_821DF248:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x821df190
	sub_821DF190(ctx, base);
loc_821DF25C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF26C"))) PPC_WEAK_FUNC(sub_821DF26C);
PPC_FUNC_IMPL(__imp__sub_821DF26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF270"))) PPC_WEAK_FUNC(sub_821DF270);
PPC_FUNC_IMPL(__imp__sub_821DF270) {
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
	// lwz r16,-2080(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2080);
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
	// bl 0x821dd728
	sub_821DD728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821df1f8
	sub_821DF1F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DF278"))) PPC_WEAK_FUNC(sub_821DF278);
PPC_FUNC_IMPL(__imp__sub_821DF278) {
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
	// bl 0x821dd728
	sub_821DD728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821df1f8
	sub_821DF1F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8213d6d0
	sub_8213D6D0(ctx, base);
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DF2BC"))) PPC_WEAK_FUNC(sub_821DF2BC);
PPC_FUNC_IMPL(__imp__sub_821DF2BC) {
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

__attribute__((alias("__imp__sub_821DF2E4"))) PPC_WEAK_FUNC(sub_821DF2E4);
PPC_FUNC_IMPL(__imp__sub_821DF2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF2E8"))) PPC_WEAK_FUNC(sub_821DF2E8);
PPC_FUNC_IMPL(__imp__sub_821DF2E8) {
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
	// beq cr6,0x821df330
	if (cr6.eq) goto loc_821DF330;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,140
	ctx.r9.s64 = 140;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = r11.s32 / ctx.r9.s32;
	// bl 0x821df278
	sub_821DF278(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dedb0
	sub_821DEDB0(ctx, base);
loc_821DF330:
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

__attribute__((alias("__imp__sub_821DF348"))) PPC_WEAK_FUNC(sub_821DF348);
PPC_FUNC_IMPL(__imp__sub_821DF348) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,8344
	ctx.r6.s64 = r11.s64 + 8344;
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
	// beq 0x821df458
	if (cr0.eq) goto loc_821DF458;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bl 0x82126cc8
	sub_82126CC8(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// addi r4,r30,128
	ctx.r4.s64 = r30.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821df2e8
	sub_821DF2E8(ctx, base);
	// lbz r11,144(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 144);
	// li r28,0
	r28.s64 = 0;
	// stb r11,144(r31)
	PPC_STORE_U8(r31.u32 + 144, r11.u8);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821df41c
	if (cr6.eq) goto loc_821DF41C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,140
	ctx.r10.s64 = 140;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r4,r11,-3620
	ctx.r4.s64 = r11.s64 + -3620;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_821DF41C:
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821df458
	if (cr6.eq) goto loc_821DF458;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r29,r10,5,0,26
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r11,-3632
	ctx.r4.s64 = r11.s64 + -3632;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_821DF458:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821DF460"))) PPC_WEAK_FUNC(sub_821DF460);
PPC_FUNC_IMPL(__imp__sub_821DF460) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,11772
	r29.s64 = r11.s64 + 11772;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x821df6d8
	if (cr6.gt) goto loc_821DF6D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82127810
	sub_82127810(ctx, base);
	// addi r28,r30,44
	r28.s64 = r30.s64 + 44;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r29,r30,128
	r29.s64 = r30.s64 + 128;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821df278
	sub_821DF278(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3620
	ctx.r4.s64 = r11.s64 + -3620;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821df580
	if (!cr6.gt) goto loc_821DF580;
loc_821DF518:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r9,140
	ctx.r9.s64 = 140;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r10
	r25.u64 = r11.u64 + ctx.r10.u64;
	// ble cr6,0x821df570
	if (!cr6.gt) goto loc_821DF570;
loc_821DF54C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821df54c
	if (cr6.lt) goto loc_821DF54C;
loc_821DF570:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x821df518
	if (cr6.lt) goto loc_821DF518;
loc_821DF580:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x821df5b8
	if (!cr6.gt) goto loc_821DF5B8;
	// li r28,0
	r28.s64 = 0;
loc_821DF594:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x821dddc8
	sub_821DDDC8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,140
	r28.s64 = r28.s64 + 140;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x821df594
	if (cr6.lt) goto loc_821DF594;
loc_821DF5B8:
	// addi r29,r30,64
	r29.s64 = r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213d668
	sub_8213D668(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x821df61c
	if (!cr6.eq) goto loc_821DF61C;
	// lfs f13,116(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x821df61c
	if (!cr6.eq) goto loc_821DF61C;
	// lfs f13,120(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x821df620
	if (cr6.eq) goto loc_821DF620;
loc_821DF61C:
	// li r11,0
	r11.s64 = 0;
loc_821DF620:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821df6d0
	if (cr0.eq) goto loc_821DF6D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x821df658
	if (!cr6.eq) goto loc_821DF658;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x821df658
	if (!cr6.eq) goto loc_821DF658;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x821df65c
	if (cr6.eq) goto loc_821DF65C;
loc_821DF658:
	// li r11,0
	r11.s64 = 0;
loc_821DF65C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821df6d0
	if (cr0.eq) goto loc_821DF6D0;
	// lfs f12,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x821df68c
	if (!cr6.eq) goto loc_821DF68C;
	// lfs f12,84(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x821df68c
	if (!cr6.eq) goto loc_821DF68C;
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x821df690
	if (cr6.eq) goto loc_821DF690;
loc_821DF68C:
	// li r11,0
	r11.s64 = 0;
loc_821DF690:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821df6d0
	if (cr0.eq) goto loc_821DF6D0;
	// lfs f12,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x821df6c0
	if (!cr6.eq) goto loc_821DF6C0;
	// lfs f12,100(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x821df6c0
	if (!cr6.eq) goto loc_821DF6C0;
	// lfs f0,104(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 104);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x821df6c4
	if (cr6.eq) goto loc_821DF6C4;
loc_821DF6C0:
	// li r11,0
	r11.s64 = 0;
loc_821DF6C4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x821df6d4
	if (!cr0.eq) goto loc_821DF6D4;
loc_821DF6D0:
	// li r11,0
	r11.s64 = 0;
loc_821DF6D4:
	// stb r11,144(r30)
	PPC_STORE_U8(r30.u32 + 144, r11.u8);
loc_821DF6D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821DF6E0"))) PPC_WEAK_FUNC(sub_821DF6E0);
PPC_FUNC_IMPL(__imp__sub_821DF6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-2012
	r11.s64 = r11.s64 + -2012;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF6F0"))) PPC_WEAK_FUNC(sub_821DF6F0);
PPC_FUNC_IMPL(__imp__sub_821DF6F0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2012
	r11.s64 = r11.s64 + -2012;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x821df71c
	if (cr0.eq) goto loc_821DF71C;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_821DF71C:
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

__attribute__((alias("__imp__sub_821DF734"))) PPC_WEAK_FUNC(sub_821DF734);
PPC_FUNC_IMPL(__imp__sub_821DF734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF738"))) PPC_WEAK_FUNC(sub_821DF738);
PPC_FUNC_IMPL(__imp__sub_821DF738) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r3,100
	ctx.r5.s64 = ctx.r3.s64 + 100;
	// addi r4,r3,68
	ctx.r4.s64 = ctx.r3.s64 + 68;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x821c4b68
	sub_821C4B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DF74C"))) PPC_WEAK_FUNC(sub_821DF74C);
PPC_FUNC_IMPL(__imp__sub_821DF74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF750"))) PPC_WEAK_FUNC(sub_821DF750);
PPC_FUNC_IMPL(__imp__sub_821DF750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821c62a8
	sub_821C62A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DF768"))) PPC_WEAK_FUNC(sub_821DF768);
PPC_FUNC_IMPL(__imp__sub_821DF768) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821c62a8
	sub_821C62A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF7B4"))) PPC_WEAK_FUNC(sub_821DF7B4);
PPC_FUNC_IMPL(__imp__sub_821DF7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF7B8"))) PPC_WEAK_FUNC(sub_821DF7B8);
PPC_FUNC_IMPL(__imp__sub_821DF7B8) {
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
	// lwz r16,-1944(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -1944);
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// addi r10,r11,-1964
	ctx.r10.s64 = r11.s64 + -1964;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DF7C0"))) PPC_WEAK_FUNC(sub_821DF7C0);
PPC_FUNC_IMPL(__imp__sub_821DF7C0) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// addi r10,r11,-1964
	ctx.r10.s64 = r11.s64 + -1964;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821DF848"))) PPC_WEAK_FUNC(sub_821DF848);
PPC_FUNC_IMPL(__imp__sub_821DF848) {
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
	// bl 0x821df6e0
	sub_821DF6E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821DF870"))) PPC_WEAK_FUNC(sub_821DF870);
PPC_FUNC_IMPL(__imp__sub_821DF870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r11,40
	ctx.r5.s64 = r11.s64 + 40;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// b 0x821c4ab0
	sub_821C4AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821DF884"))) PPC_WEAK_FUNC(sub_821DF884);
PPC_FUNC_IMPL(__imp__sub_821DF884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821DF888"))) PPC_WEAK_FUNC(sub_821DF888);
PPC_FUNC_IMPL(__imp__sub_821DF888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821DF898"))) PPC_WEAK_FUNC(sub_821DF898);
PPC_FUNC_IMPL(__imp__sub_821DF898) {
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
	// lwz r16,-1888(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -1888);
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
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-2012
	r11.s64 = r11.s64 + -2012;
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

