#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823545DC"))) PPC_WEAK_FUNC(sub_823545DC);
PPC_FUNC_IMPL(__imp__sub_823545DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823545E0"))) PPC_WEAK_FUNC(sub_823545E0);
PPC_FUNC_IMPL(__imp__sub_823545E0) {
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
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,-17840
	ctx.r4.s64 = r11.s64 + -17840;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r11,-17880
	ctx.r3.s64 = r11.s64 + -17880;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82353f30
	sub_82353F30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r19,r11,2936
	r19.s64 = r11.s64 + 2936;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,0(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r11
	r27.u64 = r11.u64;
	// add r18,r10,r11
	r18.u64 = ctx.r10.u64 + r11.u64;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// bge cr6,0x823547b4
	if (!cr6.lt) goto loc_823547B4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r17,r11,-17916
	r17.s64 = r11.s64 + -17916;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r15,r11,9120
	r15.s64 = r11.s64 + 9120;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r14,r11,-17940
	r14.s64 = r11.s64 + -17940;
loc_823546B8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8235472c
	if (cr6.eq) goto loc_8235472C;
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(r27.u32, r22.u32, xer);
	// bne cr6,0x8235472c
	if (!cr6.eq) goto loc_8235472C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354528
	sub_82354528(ctx, base);
	// lwz r20,0(r22)
	r20.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lis r11,1
	r11.s64 = 65536;
	// rlwinm r5,r20,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,34464
	r11.u64 = r11.u64 | 34464;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// bge cr6,0x82354708
	if (!cr6.lt) goto loc_82354708;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
loc_82354708:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82353f90
	sub_82353F90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lwz r22,8(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// b 0x823547a4
	goto loc_823547A4;
loc_8235472C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r11,r27
	r11.u64 = r27.u64;
	// b 0x82354740
	goto loc_82354740;
loc_82354738:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82354740:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82354738
	if (cr6.eq) goto loc_82354738;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi. r9,r16,24
	ctx.r9.u64 = r16.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r20,r10,24,8,31
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// bne 0x823547a4
	if (!cr0.eq) goto loc_823547A4;
	// addi r26,r11,4
	r26.s64 = r11.s64 + 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82358a98
	sub_82358A98(ctx, base);
	// rlwinm r25,r20,2,0,29
	r25.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// bne cr6,0x8235477c
	if (!cr6.eq) goto loc_8235477C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x823547a4
	goto loc_823547A4;
loc_8235477C:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354528
	sub_82354528(ctx, base);
	// mr r24,r26
	r24.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r23,r21
	r23.u64 = r21.u64;
loc_823547A4:
	// rlwinm r11,r20,2,0,29
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// blt cr6,0x823546b8
	if (cr6.lt) goto loc_823546B8;
loc_823547B4:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354528
	sub_82354528(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82353a10
	sub_82353A10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r11,-17996
	ctx.r3.s64 = r11.s64 + -17996;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82162308
	sub_82162308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18000
	ctx.r4.s64 = r11.s64 + -18000;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8235484C"))) PPC_WEAK_FUNC(sub_8235484C);
PPC_FUNC_IMPL(__imp__sub_8235484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354850"))) PPC_WEAK_FUNC(sub_82354850);
PPC_FUNC_IMPL(__imp__sub_82354850) {
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
	// bl 0x82353d38
	sub_82353D38(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r31,-1436(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82354884
	if (cr6.eq) goto loc_82354884;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354884:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r11,-2040
	r11.s64 = r11.s64 + -2040;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 592);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r30.u32);
	// stw r10,592(r11)
	PPC_STORE_U32(r11.u32 + 592, ctx.r10.u32);
	// beq cr6,0x823548b0
	if (cr6.eq) goto loc_823548B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_823548B0:
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

__attribute__((alias("__imp__sub_823548C8"))) PPC_WEAK_FUNC(sub_823548C8);
PPC_FUNC_IMPL(__imp__sub_823548C8) {
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
	// bl 0x82353d38
	sub_82353D38(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r31,-1436(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823548f4
	if (cr6.eq) goto loc_823548F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_823548F4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r10,-1448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -1448);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-1448(r11)
	PPC_STORE_U32(r11.u32 + -1448, ctx.r10.u32);
	// beq cr6,0x82354914
	if (cr6.eq) goto loc_82354914;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354914:
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

__attribute__((alias("__imp__sub_82354928"))) PPC_WEAK_FUNC(sub_82354928);
PPC_FUNC_IMPL(__imp__sub_82354928) {
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
	// lwz r16,-17784(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17784);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// beq cr6,0x82354968
	if (cr6.eq) goto loc_82354968;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354968:
	// bl 0x823539c8
	sub_823539C8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x823549b4
	if (!cr0.eq) goto loc_823549B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,15072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823549b0
	if (cr6.eq) goto loc_823549B0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82358888
	sub_82358888(ctx, base);
loc_823549B0:
	// b 0x82354a64
	goto loc_82354A64;
loc_823549B4:
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x823549cc
	if (!cr6.lt) goto loc_823549CC;
	// li r4,3
	ctx.r4.s64 = 3;
loc_823549CC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823549dc
	if (!cr6.eq) goto loc_823549DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82354a30
	goto loc_82354A30;
loc_823549DC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x82354a0c
	if (!cr6.gt) goto loc_82354A0C;
loc_823549F0:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823549fc
	if (cr0.eq) goto loc_823549FC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823549FC:
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x823549f0
	if (cr6.gt) goto loc_823549F0;
loc_82354A0C:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,-2
	xer.ca = r11.u32 > 1;
	r11.s64 = r11.s64 + -2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// bgt 0x82354a2c
	if (cr0.gt) goto loc_82354A2C;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
loc_82354A2C:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82354A30:
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823541c0
	sub_823541C0(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82358888
	sub_82358888(ctx, base);
loc_82354A64:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82354a74
	if (cr6.eq) goto loc_82354A74;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354A74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82354930"))) PPC_WEAK_FUNC(sub_82354930);
PPC_FUNC_IMPL(__imp__sub_82354930) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// beq cr6,0x82354968
	if (cr6.eq) goto loc_82354968;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354968:
	// bl 0x823539c8
	sub_823539C8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x823549b4
	if (!cr0.eq) goto loc_823549B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,15072(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823549b0
	if (cr6.eq) goto loc_823549B0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82358888
	sub_82358888(ctx, base);
loc_823549B0:
	// b 0x82354a64
	goto loc_82354A64;
loc_823549B4:
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x823549cc
	if (!cr6.lt) goto loc_823549CC;
	// li r4,3
	ctx.r4.s64 = 3;
loc_823549CC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823549dc
	if (!cr6.eq) goto loc_823549DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82354a30
	goto loc_82354A30;
loc_823549DC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// ble cr6,0x82354a0c
	if (!cr6.gt) goto loc_82354A0C;
loc_823549F0:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823549fc
	if (cr0.eq) goto loc_823549FC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823549FC:
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x823549f0
	if (cr6.gt) goto loc_823549F0;
loc_82354A0C:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,-2
	xer.ca = r11.u32 > 1;
	r11.s64 = r11.s64 + -2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// bgt 0x82354a2c
	if (cr0.gt) goto loc_82354A2C;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
loc_82354A2C:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82354A30:
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823541c0
	sub_823541C0(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82358888
	sub_82358888(ctx, base);
loc_82354A64:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82354a74
	if (cr6.eq) goto loc_82354A74;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354A74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82354A80"))) PPC_WEAK_FUNC(sub_82354A80);
PPC_FUNC_IMPL(__imp__sub_82354A80) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354AA8"))) PPC_WEAK_FUNC(sub_82354AA8);
PPC_FUNC_IMPL(__imp__sub_82354AA8) {
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
	// lwz r16,-17696(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17696);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,-1448(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1448);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82354ae4
	if (!cr6.eq) goto loc_82354AE4;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// b 0x82354b0c
	goto loc_82354B0C;
loc_82354AE4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353c40
	sub_82353C40(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353cc8
	sub_82353CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82354B0C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82354AB0"))) PPC_WEAK_FUNC(sub_82354AB0);
PPC_FUNC_IMPL(__imp__sub_82354AB0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,-1448(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1448);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82354ae4
	if (!cr6.eq) goto loc_82354AE4;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// b 0x82354b0c
	goto loc_82354B0C;
loc_82354AE4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353c40
	sub_82353C40(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82353cc8
	sub_82353CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82354B0C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82354B14"))) PPC_WEAK_FUNC(sub_82354B14);
PPC_FUNC_IMPL(__imp__sub_82354B14) {
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
	// bl 0x82353cc8
	sub_82353CC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354B3C"))) PPC_WEAK_FUNC(sub_82354B3C);
PPC_FUNC_IMPL(__imp__sub_82354B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354B40"))) PPC_WEAK_FUNC(sub_82354B40);
PPC_FUNC_IMPL(__imp__sub_82354B40) {
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
	// lwz r16,-17624(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17624);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// beq cr6,0x82354b78
	if (cr6.eq) goto loc_82354B78;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354B78:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82354b90
	if (!cr6.eq) goto loc_82354B90;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82354bf4
	if (cr6.eq) goto loc_82354BF4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x82354bf0
	goto loc_82354BF0;
loc_82354B90:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-1976
	r29.s64 = r11.s64 + -1976;
	// lwz r28,524(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 524);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82354bcc
	if (!cr6.gt) goto loc_82354BCC;
loc_82354BA8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823543e0
	sub_823543E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82354bcc
	if (!cr0.eq) goto loc_82354BCC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x82354ba8
	if (cr6.lt) goto loc_82354BA8;
loc_82354BCC:
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bne cr6,0x82354bdc
	if (!cr6.eq) goto loc_82354BDC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_82354BDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82358950
	sub_82358950(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82354bf4
	if (cr6.eq) goto loc_82354BF4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82354BF0:
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354BF4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82354B48"))) PPC_WEAK_FUNC(sub_82354B48);
PPC_FUNC_IMPL(__imp__sub_82354B48) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// beq cr6,0x82354b78
	if (cr6.eq) goto loc_82354B78;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354B78:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82354b90
	if (!cr6.eq) goto loc_82354B90;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82354bf4
	if (cr6.eq) goto loc_82354BF4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x82354bf0
	goto loc_82354BF0;
loc_82354B90:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-1976
	r29.s64 = r11.s64 + -1976;
	// lwz r28,524(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 524);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82354bcc
	if (!cr6.gt) goto loc_82354BCC;
loc_82354BA8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823543e0
	sub_823543E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82354bcc
	if (!cr0.eq) goto loc_82354BCC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x82354ba8
	if (cr6.lt) goto loc_82354BA8;
loc_82354BCC:
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bne cr6,0x82354bdc
	if (!cr6.eq) goto loc_82354BDC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_82354BDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82358950
	sub_82358950(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82354bf4
	if (cr6.eq) goto loc_82354BF4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82354BF0:
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354BF4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82354BFC"))) PPC_WEAK_FUNC(sub_82354BFC);
PPC_FUNC_IMPL(__imp__sub_82354BFC) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354C24"))) PPC_WEAK_FUNC(sub_82354C24);
PPC_FUNC_IMPL(__imp__sub_82354C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354C28"))) PPC_WEAK_FUNC(sub_82354C28);
PPC_FUNC_IMPL(__imp__sub_82354C28) {
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
	// lwz r16,-17552(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17552);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,-1436(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82354c5c
	if (cr6.eq) goto loc_82354C5C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354C5C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82354c68
	if (!cr6.eq) goto loc_82354C68;
	// b 0x82354cdc
	goto loc_82354CDC;
loc_82354C68:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-1976
	r11.s64 = r11.s64 + -1976;
	// lwz r7,524(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 524);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82354cdc
	if (!cr6.gt) goto loc_82354CDC;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
loc_82354C84:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82354cc0
	if (cr6.lt) goto loc_82354CC0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82354cc0
	if (!cr6.lt) goto loc_82354CC0;
	// lwz r11,-4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82354cc4
	goto loc_82354CC4;
loc_82354CC0:
	// li r30,0
	r30.s64 = 0;
loc_82354CC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82354cf8
	if (!cr6.eq) goto loc_82354CF8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x82354c84
	if (cr6.lt) goto loc_82354C84;
loc_82354CDC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82354cec
	if (cr6.eq) goto loc_82354CEC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354CEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354CF0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
loc_82354CF8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82354d08
	if (cr6.eq) goto loc_82354D08;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354D08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82354cf0
	goto loc_82354CF0;
}

__attribute__((alias("__imp__sub_82354C30"))) PPC_WEAK_FUNC(sub_82354C30);
PPC_FUNC_IMPL(__imp__sub_82354C30) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,-1436(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82354c5c
	if (cr6.eq) goto loc_82354C5C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354C5C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82354c68
	if (!cr6.eq) goto loc_82354C68;
	// b 0x82354cdc
	goto loc_82354CDC;
loc_82354C68:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-1976
	r11.s64 = r11.s64 + -1976;
	// lwz r7,524(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 524);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82354cdc
	if (!cr6.gt) goto loc_82354CDC;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
loc_82354C84:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82354cc0
	if (cr6.lt) goto loc_82354CC0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82354cc0
	if (!cr6.lt) goto loc_82354CC0;
	// lwz r11,-4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82354cc4
	goto loc_82354CC4;
loc_82354CC0:
	// li r30,0
	r30.s64 = 0;
loc_82354CC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82354cf8
	if (!cr6.eq) goto loc_82354CF8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x82354c84
	if (cr6.lt) goto loc_82354C84;
loc_82354CDC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82354cec
	if (cr6.eq) goto loc_82354CEC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354CEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354CF0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
loc_82354CF8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82354d08
	if (cr6.eq) goto loc_82354D08;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354D08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82354cf0
	goto loc_82354CF0;
}

__attribute__((alias("__imp__sub_82354D10"))) PPC_WEAK_FUNC(sub_82354D10);
PPC_FUNC_IMPL(__imp__sub_82354D10) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354D38"))) PPC_WEAK_FUNC(sub_82354D38);
PPC_FUNC_IMPL(__imp__sub_82354D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,-17488(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17488);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// beq cr6,0x82354d80
	if (cr6.eq) goto loc_82354D80;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354D80:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-1452(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1452);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82354df4
	if (cr6.eq) goto loc_82354DF4;
	// bl 0x82354c30
	sub_82354C30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// addi r11,r31,188
	r11.s64 = r31.s64 + 188;
	// blt cr6,0x82354dc4
	if (cr6.lt) goto loc_82354DC4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
loc_82354DC4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82354dec
	if (cr6.eq) goto loc_82354DEC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354DEC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82354e30
	goto loc_82354E30;
loc_82354DF4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a1098
	sub_823A1098(ctx, base);
	// addi r11,r30,3
	r11.s64 = r30.s64 + 3;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823589e8
	sub_823589E8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82354e2c
	if (cr6.eq) goto loc_82354E2C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354E2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82354E30:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82354D40"))) PPC_WEAK_FUNC(sub_82354D40);
PPC_FUNC_IMPL(__imp__sub_82354D40) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// beq cr6,0x82354d80
	if (cr6.eq) goto loc_82354D80;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354D80:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-1452(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1452);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82354df4
	if (cr6.eq) goto loc_82354DF4;
	// bl 0x82354c30
	sub_82354C30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// addi r11,r31,188
	r11.s64 = r31.s64 + 188;
	// blt cr6,0x82354dc4
	if (cr6.lt) goto loc_82354DC4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
loc_82354DC4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82354dec
	if (cr6.eq) goto loc_82354DEC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354DEC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82354e30
	goto loc_82354E30;
loc_82354DF4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a1098
	sub_823A1098(ctx, base);
	// addi r11,r30,3
	r11.s64 = r30.s64 + 3;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823589e8
	sub_823589E8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82354e2c
	if (cr6.eq) goto loc_82354E2C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354E2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82354E30:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82354E38"))) PPC_WEAK_FUNC(sub_82354E38);
PPC_FUNC_IMPL(__imp__sub_82354E38) {
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
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354E60"))) PPC_WEAK_FUNC(sub_82354E60);
PPC_FUNC_IMPL(__imp__sub_82354E60) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-17400(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17400);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq cr6,0x82354ea0
	if (cr6.eq) goto loc_82354EA0;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354EA0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1976
	r11.s64 = r11.s64 + -1976;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x823545e0
	sub_823545E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82354ecc
	if (cr6.eq) goto loc_82354ECC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354ECC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82354E68"))) PPC_WEAK_FUNC(sub_82354E68);
PPC_FUNC_IMPL(__imp__sub_82354E68) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq cr6,0x82354ea0
	if (cr6.eq) goto loc_82354EA0;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82354EA0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1976
	r11.s64 = r11.s64 + -1976;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x823545e0
	sub_823545E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82354ecc
	if (cr6.eq) goto loc_82354ECC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82354ECC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82354ED4"))) PPC_WEAK_FUNC(sub_82354ED4);
PPC_FUNC_IMPL(__imp__sub_82354ED4) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354EFC"))) PPC_WEAK_FUNC(sub_82354EFC);
PPC_FUNC_IMPL(__imp__sub_82354EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354F00"))) PPC_WEAK_FUNC(sub_82354F00);
PPC_FUNC_IMPL(__imp__sub_82354F00) {
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
	// bl 0x82353d38
	sub_82353D38(ctx, base);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,-18076
	ctx.r5.s64 = r11.s64 + -18076;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82356a28
	sub_82356A28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82354f70
	if (cr0.eq) goto loc_82354F70;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82354f74
	goto loc_82354F74;
loc_82354F70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354F74:
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

__attribute__((alias("__imp__sub_82354F8C"))) PPC_WEAK_FUNC(sub_82354F8C);
PPC_FUNC_IMPL(__imp__sub_82354F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354F90"))) PPC_WEAK_FUNC(sub_82354F90);
PPC_FUNC_IMPL(__imp__sub_82354F90) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82353d38
	sub_82353D38(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82354fc4
	if (cr6.eq) goto loc_82354FC4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823567c0
	sub_823567C0(ctx, base);
loc_82354FC4:
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

__attribute__((alias("__imp__sub_82354FD8"))) PPC_WEAK_FUNC(sub_82354FD8);
PPC_FUNC_IMPL(__imp__sub_82354FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,25820
	ctx.r4.s64 = r11.s64 + 25820;
	// b 0x82354930
	sub_82354930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354FE8"))) PPC_WEAK_FUNC(sub_82354FE8);
PPC_FUNC_IMPL(__imp__sub_82354FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-17336
	ctx.r4.s64 = r11.s64 + -17336;
	// b 0x82354930
	sub_82354930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82354FF8"))) PPC_WEAK_FUNC(sub_82354FF8);
PPC_FUNC_IMPL(__imp__sub_82354FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82355004
	if (!cr6.eq) goto loc_82355004;
	// blr 
	return;
loc_82355004:
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// ble cr6,0x82355014
	if (!cr6.gt) goto loc_82355014;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82354930
	sub_82354930(ctx, base);
	return;
loc_82355014:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82356a28
	sub_82356A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82355020"))) PPC_WEAK_FUNC(sub_82355020);
PPC_FUNC_IMPL(__imp__sub_82355020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// ble cr6,0x82355038
	if (!cr6.gt) goto loc_82355038;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82354b48
	sub_82354B48(ctx, base);
	return;
loc_82355038:
	// b 0x823567c0
	sub_823567C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235503C"))) PPC_WEAK_FUNC(sub_8235503C);
PPC_FUNC_IMPL(__imp__sub_8235503C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82355040"))) PPC_WEAK_FUNC(sub_82355040);
PPC_FUNC_IMPL(__imp__sub_82355040) {
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-17216(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17216);
	// mflr r12
	// bl 0x8239bcc0
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,25820
	ctx.r4.s64 = r11.s64 + 25820;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82355088
	if (cr0.eq) goto loc_82355088;
	// bl 0x826911f8
	sub_826911F8(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x8235508c
	goto loc_8235508C;
loc_82355088:
	// mr r14,r29
	r14.u64 = r29.u64;
loc_8235508C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r14,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r14.u32);
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// stw r14,-1436(r11)
	PPC_STORE_U32(r11.u32 + -1436, r14.u32);
	// beq cr6,0x823550a8
	if (cr6.eq) goto loc_823550A8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_823550A8:
	// bl 0x823b6748
	sub_823B6748(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// stb r29,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r29.u8);
	// addi r4,r11,-17240
	ctx.r4.s64 = r11.s64 + -17240;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// stw r3,-28968(r11)
	PPC_STORE_U32(r11.u32 + -28968, ctx.r3.u32);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-17260
	ctx.r4.s64 = r11.s64 + -17260;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r26,r10,-1976
	r26.s64 = ctx.r10.s64 + -1976;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r26,532
	ctx.r5.s64 = r26.s64 + 532;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,-17276
	ctx.r4.s64 = r11.s64 + -17276;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,82
	ctx.r5.s64 = r31.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,-17288
	ctx.r4.s64 = r11.s64 + -17288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,-17296
	ctx.r4.s64 = r11.s64 + -17296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// bl 0x82356560
	sub_82356560(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82355398
	if (!cr0.eq) goto loc_82355398;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addi r4,r11,-17304
	ctx.r4.s64 = r11.s64 + -17304;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r16,1
	r16.s64 = 1;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8235532c
	if (!cr6.gt) goto loc_8235532C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r25,8
	r25.s64 = 8;
	// addi r20,r11,-17316
	r20.s64 = r11.s64 + -17316;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r19,r11,-19100
	r19.s64 = r11.s64 + -19100;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r18,r11,24792
	r18.s64 = r11.s64 + 24792;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r17,r11,31016
	r17.s64 = r11.s64 + 31016;
loc_823551F4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r25,r11
	ctx.r3.u64 = r25.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stb r29,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r29.u8);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,81
	ctx.r5.s64 = r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r23,88(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r22,92(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r21,81(r31)
	r21.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823552e4
	if (!cr0.eq) goto loc_823552E4;
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// lis r30,16384
	r30.s64 = 1073741824;
loc_823552E4:
	// lwz r5,524(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 524);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// rlwinm r11,r5,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// srawi r7,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r7.s64 = r30.s32 >> 2;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// bl 0x82354100
	sub_82354100(ctx, base);
	// addi r30,r5,1
	r30.s64 = ctx.r5.s64 + 1;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// stw r30,524(r26)
	PPC_STORE_U32(r26.u32 + 524, r30.u32);
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(r16.s32, r11.s32, xer);
	// blt cr6,0x823551f4
	if (cr6.lt) goto loc_823551F4;
	// b 0x82355330
	goto loc_82355330;
loc_8235532C:
	// lwz r30,524(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 524);
loc_82355330:
	// lis r11,762
	r11.s64 = 49938432;
	// ori r29,r11,61568
	r29.u64 = r11.u64 | 61568;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82355354
	if (!cr0.eq) goto loc_82355354;
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// lis r29,16384
	r29.s64 = 1073741824;
loc_82355354:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,25072
	ctx.r4.s64 = r11.s64 + 25072;
	// rlwinm r11,r30,5,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r7,r29,2
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	ctx.r7.s64 = r29.s32 >> 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// bl 0x82354100
	sub_82354100(ctx, base);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r11,524(r26)
	PPC_STORE_U32(r26.u32 + 524, r11.u32);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82354850
	sub_82354850(ctx, base);
loc_82355398:
	// lbz r11,82(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823553d4
	if (cr0.eq) goto loc_823553D4;
	// bl 0x82358ef0
	sub_82358EF0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// addi r4,r11,-17328
	ctx.r4.s64 = r11.s64 + -17328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,-1439
	ctx.r5.s64 = ctx.r10.s64 + -1439;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
loc_823553D4:
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x823553e4
	if (cr6.eq) goto loc_823553E4;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_823553E4:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82355048"))) PPC_WEAK_FUNC(sub_82355048);
PPC_FUNC_IMPL(__imp__sub_82355048) {
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
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,25820
	ctx.r4.s64 = r11.s64 + 25820;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82355088
	if (cr0.eq) goto loc_82355088;
	// bl 0x826911f8
	sub_826911F8(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// b 0x8235508c
	goto loc_8235508C;
loc_82355088:
	// mr r14,r29
	r14.u64 = r29.u64;
loc_8235508C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r14,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r14.u32);
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// stw r14,-1436(r11)
	PPC_STORE_U32(r11.u32 + -1436, r14.u32);
	// beq cr6,0x823550a8
	if (cr6.eq) goto loc_823550A8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_823550A8:
	// bl 0x823b6748
	sub_823B6748(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// stb r29,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r29.u8);
	// addi r4,r11,-17240
	ctx.r4.s64 = r11.s64 + -17240;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// stw r3,-28968(r11)
	PPC_STORE_U32(r11.u32 + -28968, ctx.r3.u32);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-17260
	ctx.r4.s64 = r11.s64 + -17260;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r26,r10,-1976
	r26.s64 = ctx.r10.s64 + -1976;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r26,532
	ctx.r5.s64 = r26.s64 + 532;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,-17276
	ctx.r4.s64 = r11.s64 + -17276;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,82
	ctx.r5.s64 = r31.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,-17288
	ctx.r4.s64 = r11.s64 + -17288;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r4,r11,-17296
	ctx.r4.s64 = r11.s64 + -17296;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// bl 0x82356560
	sub_82356560(ctx, base);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82355398
	if (!cr0.eq) goto loc_82355398;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addi r4,r11,-17304
	ctx.r4.s64 = r11.s64 + -17304;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r16,1
	r16.s64 = 1;
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8235532c
	if (!cr6.gt) goto loc_8235532C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r25,8
	r25.s64 = 8;
	// addi r20,r11,-17316
	r20.s64 = r11.s64 + -17316;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r19,r11,-19100
	r19.s64 = r11.s64 + -19100;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r18,r11,24792
	r18.s64 = r11.s64 + 24792;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r17,r11,31016
	r17.s64 = r11.s64 + 31016;
loc_823551F4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r25,r11
	ctx.r3.u64 = r25.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// stb r29,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r29.u8);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,81
	ctx.r5.s64 = r31.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r23,88(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r22,92(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r21,81(r31)
	r21.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823552e4
	if (!cr0.eq) goto loc_823552E4;
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// lis r30,16384
	r30.s64 = 1073741824;
loc_823552E4:
	// lwz r5,524(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 524);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// rlwinm r11,r5,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// srawi r7,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r7.s64 = r30.s32 >> 2;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// bl 0x82354100
	sub_82354100(ctx, base);
	// addi r30,r5,1
	r30.s64 = ctx.r5.s64 + 1;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// stw r30,524(r26)
	PPC_STORE_U32(r26.u32 + 524, r30.u32);
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpw cr6,r16,r11
	cr6.compare<int32_t>(r16.s32, r11.s32, xer);
	// blt cr6,0x823551f4
	if (cr6.lt) goto loc_823551F4;
	// b 0x82355330
	goto loc_82355330;
loc_8235532C:
	// lwz r30,524(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 524);
loc_82355330:
	// lis r11,762
	r11.s64 = 49938432;
	// ori r29,r11,61568
	r29.u64 = r11.u64 | 61568;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82355354
	if (!cr0.eq) goto loc_82355354;
	// lis r3,16384
	ctx.r3.s64 = 1073741824;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// lis r29,16384
	r29.s64 = 1073741824;
loc_82355354:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,25072
	ctx.r4.s64 = r11.s64 + 25072;
	// rlwinm r11,r30,5,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r7,r29,2
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	ctx.r7.s64 = r29.s32 >> 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r11,r26
	ctx.r3.u64 = r11.u64 + r26.u64;
	// bl 0x82354100
	sub_82354100(ctx, base);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r11,524(r26)
	PPC_STORE_U32(r26.u32 + 524, r11.u32);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82354850
	sub_82354850(ctx, base);
loc_82355398:
	// lbz r11,82(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823553d4
	if (cr0.eq) goto loc_823553D4;
	// bl 0x82358ef0
	sub_82358EF0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// addi r4,r11,-17328
	ctx.r4.s64 = r11.s64 + -17328;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,-1439
	ctx.r5.s64 = ctx.r10.s64 + -1439;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x823197b0
	sub_823197B0(ctx, base);
loc_823553D4:
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x823553e4
	if (cr6.eq) goto loc_823553E4;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_823553E4:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823553EC"))) PPC_WEAK_FUNC(sub_823553EC);
PPC_FUNC_IMPL(__imp__sub_823553EC) {
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
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
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

__attribute__((alias("__imp__sub_82355414"))) PPC_WEAK_FUNC(sub_82355414);
PPC_FUNC_IMPL(__imp__sub_82355414) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235543C"))) PPC_WEAK_FUNC(sub_8235543C);
PPC_FUNC_IMPL(__imp__sub_8235543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355440"))) PPC_WEAK_FUNC(sub_82355440);
PPC_FUNC_IMPL(__imp__sub_82355440) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// beq cr6,0x82355484
	if (cr6.eq) goto loc_82355484;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// b 0x823554cc
	goto loc_823554CC;
loc_82355484:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x823554bc
	if (cr6.eq) goto loc_823554BC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82691148
	sub_82691148(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x823554b0
	if (!cr6.gt) goto loc_823554B0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823554B0:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x823554c4
	goto loc_823554C4;
loc_823554BC:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_823554C4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
loc_823554CC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82355500
	if (!cr6.gt) goto loc_82355500;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823554E0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stwx r8,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x823554e0
	if (cr6.lt) goto loc_823554E0;
loc_82355500:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

__attribute__((alias("__imp__sub_82355520"))) PPC_WEAK_FUNC(sub_82355520);
PPC_FUNC_IMPL(__imp__sub_82355520) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_82355568"))) PPC_WEAK_FUNC(sub_82355568);
PPC_FUNC_IMPL(__imp__sub_82355568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x823555ac
	if (!cr6.lt) goto loc_823555AC;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82355584:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8235559c
	if (cr6.eq) goto loc_8235559C;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x823555a8
	if (!cr6.eq) goto loc_823555A8;
loc_8235559C:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x82355584
	if (cr6.lt) goto loc_82355584;
loc_823555A8:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
loc_823555AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823555BC"))) PPC_WEAK_FUNC(sub_823555BC);
PPC_FUNC_IMPL(__imp__sub_823555BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823555C0"))) PPC_WEAK_FUNC(sub_823555C0);
PPC_FUNC_IMPL(__imp__sub_823555C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823555D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823555f8
	if (cr0.eq) goto loc_823555F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823555d4
	if (cr6.eq) goto loc_823555D4;
loc_823555F8:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8235568c
	if (cr0.eq) goto loc_8235568C;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82355614:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82355638
	if (cr0.eq) goto loc_82355638;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82355614
	if (cr6.eq) goto loc_82355614;
loc_82355638:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82355704
	if (!cr0.eq) goto loc_82355704;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82355650:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82355674
	if (cr0.eq) goto loc_82355674;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82355650
	if (cr6.eq) goto loc_82355650;
loc_82355674:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82355708
	if (cr0.eq) goto loc_82355708;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82355708
	goto loc_82355708;
loc_8235568C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82355690:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823556b4
	if (cr0.eq) goto loc_823556B4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82355690
	if (cr6.eq) goto loc_82355690;
loc_823556B4:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82355708
	if (!cr0.eq) goto loc_82355708;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_823556CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823556f0
	if (cr0.eq) goto loc_823556F0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823556cc
	if (cr6.eq) goto loc_823556CC;
loc_823556F0:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82355708
	if (!cr0.eq) goto loc_82355708;
loc_82355704:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82355708:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82355710"))) PPC_WEAK_FUNC(sub_82355710);
PPC_FUNC_IMPL(__imp__sub_82355710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82355720:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// beq 0x82355784
	if (cr0.eq) goto loc_82355784;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82355720
	if (cr6.eq) goto loc_82355720;
	// b 0x82355784
	goto loc_82355784;
loc_82355748:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82355760:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// beq 0x82355784
	if (cr0.eq) goto loc_82355784;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82355760
	if (cr6.eq) goto loc_82355760;
loc_82355784:
	// cntlzw r10,r6
	ctx.r10.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82355748
	if (!cr0.eq) goto loc_82355748;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235579C"))) PPC_WEAK_FUNC(sub_8235579C);
PPC_FUNC_IMPL(__imp__sub_8235579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823557A0"))) PPC_WEAK_FUNC(sub_823557A0);
PPC_FUNC_IMPL(__imp__sub_823557A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// b 0x82355800
	goto loc_82355800;
loc_823557AC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_823557BC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r31,0(r9)
	r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r31,r31,r8
	r31.s64 = ctx.r8.s64 - r31.s64;
	// beq 0x823557e0
	if (cr0.eq) goto loc_823557E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x823557bc
	if (cr6.eq) goto loc_823557BC;
loc_823557E0:
	// cntlzw r10,r31
	ctx.r10.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82355810
	if (cr0.eq) goto loc_82355810;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwx r7,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
loc_82355800:
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// bgt cr6,0x823557ac
	if (cr6.gt) goto loc_823557AC;
loc_82355810:
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82355820"))) PPC_WEAK_FUNC(sub_82355820);
PPC_FUNC_IMPL(__imp__sub_82355820) {
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r30,-1432(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + -1432);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82355854
	if (cr6.eq) goto loc_82355854;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235ac88
	sub_8235AC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82355854:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-1428
	ctx.r3.s64 = r11.s64 + -1428;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-1432(r31)
	PPC_STORE_U32(r31.u32 + -1432, r11.u32);
	// bl 0x82355520
	sub_82355520(ctx, base);
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

__attribute__((alias("__imp__sub_82355880"))) PPC_WEAK_FUNC(sub_82355880);
PPC_FUNC_IMPL(__imp__sub_82355880) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8235593c
	if (cr6.eq) goto loc_8235593C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82691050
	sub_82691050(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8235593c
	if (cr6.eq) goto loc_8235593C;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_823558D4:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x82355914
	if (cr6.eq) goto loc_82355914;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823558E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82355908
	if (cr0.eq) goto loc_82355908;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823558e4
	if (cr6.eq) goto loc_823558E4;
loc_82355908:
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82355958
	if (!cr0.eq) goto loc_82355958;
loc_82355914:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82355928
	if (!cr6.eq) goto loc_82355928;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82355928:
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bne cr6,0x823558d4
	if (!cr6.eq) goto loc_823558D4;
loc_8235593C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82355940:
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
loc_82355958:
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r8
	ctx.r3.u64 = r11.u64 + ctx.r8.u64;
	// b 0x82355940
	goto loc_82355940;
}

__attribute__((alias("__imp__sub_82355964"))) PPC_WEAK_FUNC(sub_82355964);
PPC_FUNC_IMPL(__imp__sub_82355964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355968"))) PPC_WEAK_FUNC(sub_82355968);
PPC_FUNC_IMPL(__imp__sub_82355968) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82355990
	if (cr6.eq) goto loc_82355990;
	// li r27,0
	r27.s64 = 0;
	// b 0x823559c0
	goto loc_823559C0;
loc_82355990:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691148
	sub_82691148(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x823559b4
	if (!cr6.gt) goto loc_823559B4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823559B4:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,1
	r27.s64 = 1;
loc_823559C0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x823559e4
	if (!cr6.gt) goto loc_823559E4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823559D0:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x823559d0
	if (!cr0.eq) goto loc_823559D0;
loc_823559E4:
	// li r11,0
	r11.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82355a54
	goto loc_82355A54;
loc_823559F4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82691050
	sub_82691050(ctx, base);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82355a38
	if (cr6.eq) goto loc_82355A38;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82355A18:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// bne cr6,0x82355a28
	if (!cr6.eq) goto loc_82355A28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82355A28:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82355a18
	if (!cr6.eq) goto loc_82355A18;
loc_82355A38:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
loc_82355A54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355568
	sub_82355568(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x823559f4
	if (!cr0.eq) goto loc_823559F4;
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82355a78
	if (cr0.eq) goto loc_82355A78;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82355A78:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stb r27,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82355A8C"))) PPC_WEAK_FUNC(sub_82355A8C);
PPC_FUNC_IMPL(__imp__sub_82355A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355A90"))) PPC_WEAK_FUNC(sub_82355A90);
PPC_FUNC_IMPL(__imp__sub_82355A90) {
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
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82355b18
	goto loc_82355B18;
loc_82355AB4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82355AC4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r31,0(r9)
	r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r31,r31,r8
	r31.s64 = ctx.r8.s64 - r31.s64;
	// beq 0x82355ae8
	if (cr0.eq) goto loc_82355AE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82355ac4
	if (cr6.eq) goto loc_82355AC4;
loc_82355AE8:
	// cntlzw r10,r31
	ctx.r10.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82355afc
	if (cr0.eq) goto loc_82355AFC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82355AFC:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
loc_82355B18:
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82355ab4
	if (cr6.lt) goto loc_82355AB4;
	// bne cr6,0x82355b3c
	if (!cr6.eq) goto loc_82355B3C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// lwz r11,-4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
loc_82355B3C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823557a0
	sub_823557A0(ctx, base);
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

__attribute__((alias("__imp__sub_82355B5C"))) PPC_WEAK_FUNC(sub_82355B5C);
PPC_FUNC_IMPL(__imp__sub_82355B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355B60"))) PPC_WEAK_FUNC(sub_82355B60);
PPC_FUNC_IMPL(__imp__sub_82355B60) {
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
	// lwz r16,-17128(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17128);
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
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82355ba4
	if (cr0.eq) goto loc_82355BA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8235b010
	sub_8235B010(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82355ba8
	goto loc_82355BA8;
loc_82355BA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82355BA8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-1428
	ctx.r3.s64 = r11.s64 + -1428;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,-1432(r11)
	PPC_STORE_U32(r11.u32 + -1432, ctx.r10.u32);
	// bl 0x82355968
	sub_82355968(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82355B68"))) PPC_WEAK_FUNC(sub_82355B68);
PPC_FUNC_IMPL(__imp__sub_82355B68) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82355ba4
	if (cr0.eq) goto loc_82355BA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8235b010
	sub_8235B010(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82355ba8
	goto loc_82355BA8;
loc_82355BA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82355BA8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-1428
	ctx.r3.s64 = r11.s64 + -1428;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,-1432(r11)
	PPC_STORE_U32(r11.u32 + -1432, ctx.r10.u32);
	// bl 0x82355968
	sub_82355968(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82355BCC"))) PPC_WEAK_FUNC(sub_82355BCC);
PPC_FUNC_IMPL(__imp__sub_82355BCC) {
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

__attribute__((alias("__imp__sub_82355BF4"))) PPC_WEAK_FUNC(sub_82355BF4);
PPC_FUNC_IMPL(__imp__sub_82355BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355BF8"))) PPC_WEAK_FUNC(sub_82355BF8);
PPC_FUNC_IMPL(__imp__sub_82355BF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_82355C0C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82355c28
	if (!cr6.eq) goto loc_82355C28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355968
	sub_82355968(ctx, base);
loc_82355C28:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82691050
	sub_82691050(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x82355cc4
	if (cr6.eq) goto loc_82355CC4;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_82355C54:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x82355cc4
	if (cr6.eq) goto loc_82355CC4;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82355C68:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82355c8c
	if (cr0.eq) goto loc_82355C8C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82355c68
	if (cr6.eq) goto loc_82355C68;
loc_82355C8C:
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82355cc4
	if (!cr0.eq) goto loc_82355CC4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82355cac
	if (!cr6.eq) goto loc_82355CAC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82355CAC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82355c54
	if (!cr6.eq) goto loc_82355C54;
loc_82355CC4:
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x82355d14
	if (!cr6.eq) goto loc_82355D14;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// ble cr6,0x82355d14
	if (!cr6.gt) goto loc_82355D14;
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82355d14
	if (cr0.eq) goto loc_82355D14;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355968
	sub_82355968(ctx, base);
	// b 0x82355c0c
	goto loc_82355C0C;
loc_82355D14:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82355D34"))) PPC_WEAK_FUNC(sub_82355D34);
PPC_FUNC_IMPL(__imp__sub_82355D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355D38"))) PPC_WEAK_FUNC(sub_82355D38);
PPC_FUNC_IMPL(__imp__sub_82355D38) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// srawi r29,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r29.s64 = r11.s32 >> 2;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x82355d9c
	if (cr6.lt) goto loc_82355D9C;
	// addi r11,r29,-2
	r11.s64 = r29.s64 + -2;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// b 0x82355d7c
	goto loc_82355D7C;
loc_82355D74:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
loc_82355D7C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355a90
	sub_82355A90(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82355d74
	if (!cr6.eq) goto loc_82355D74;
loc_82355D9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82355DA4"))) PPC_WEAK_FUNC(sub_82355DA4);
PPC_FUNC_IMPL(__imp__sub_82355DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355DA8"))) PPC_WEAK_FUNC(sub_82355DA8);
PPC_FUNC_IMPL(__imp__sub_82355DA8) {
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
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// beq cr6,0x82355e20
	if (cr6.eq) goto loc_82355E20;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82355e20
	if (cr6.eq) goto loc_82355E20;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r30,r11,-1428
	r30.s64 = r11.s64 + -1428;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355880
	sub_82355880(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82355df8
	if (cr0.eq) goto loc_82355DF8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82355e28
	goto loc_82355E28;
loc_82355DF8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-1432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1432);
	// bl 0x8235aee0
	sub_8235AEE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82355bf8
	sub_82355BF8(ctx, base);
	// b 0x82355e2c
	goto loc_82355E2C;
loc_82355E20:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
loc_82355E28:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82355E2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82355E38"))) PPC_WEAK_FUNC(sub_82355E38);
PPC_FUNC_IMPL(__imp__sub_82355E38) {
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
	// bl 0x82275878
	sub_82275878(ctx, base);
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

__attribute__((alias("__imp__sub_82355E78"))) PPC_WEAK_FUNC(sub_82355E78);
PPC_FUNC_IMPL(__imp__sub_82355E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_82355E78:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82355E80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82355ed8
	if (cr0.eq) goto loc_82355ED8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82355e80
	if (cr6.eq) goto loc_82355E80;
	// b 0x82355ed8
	goto loc_82355ED8;
loc_82355EA8:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82355EB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82355ed8
	if (cr0.eq) goto loc_82355ED8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82355eb4
	if (cr6.eq) goto loc_82355EB4;
loc_82355ED8:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82355ea8
	if (!cr0.eq) goto loc_82355EA8;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82355EF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82355f4c
	if (cr0.eq) goto loc_82355F4C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82355ef4
	if (cr6.eq) goto loc_82355EF4;
	// b 0x82355f4c
	goto loc_82355F4C;
loc_82355F1C:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82355F28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82355f4c
	if (cr0.eq) goto loc_82355F4C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82355f28
	if (cr6.eq) goto loc_82355F28;
loc_82355F4C:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82355f1c
	if (!cr0.eq) goto loc_82355F1C;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x82355e78
	goto loc_82355E78;
}

__attribute__((alias("__imp__sub_82355F7C"))) PPC_WEAK_FUNC(sub_82355F7C);
PPC_FUNC_IMPL(__imp__sub_82355F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82355F80"))) PPC_WEAK_FUNC(sub_82355F80);
PPC_FUNC_IMPL(__imp__sub_82355F80) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82355FA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82355fcc
	if (cr0.eq) goto loc_82355FCC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82355fa8
	if (cr6.eq) goto loc_82355FA8;
loc_82355FCC:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82355ffc
	if (cr0.eq) goto loc_82355FFC;
	// subf. r5,r31,r3
	ctx.r5.s64 = ctx.r3.s64 - r31.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x82355ff4
	if (!cr0.gt) goto loc_82355FF4;
	// subf r11,r5,r3
	r11.s64 = ctx.r3.s64 - ctx.r5.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_82355FF4:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82356008
	goto loc_82356008;
loc_82355FFC:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82355710
	sub_82355710(ctx, base);
loc_82356008:
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

__attribute__((alias("__imp__sub_82356020"))) PPC_WEAK_FUNC(sub_82356020);
PPC_FUNC_IMPL(__imp__sub_82356020) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82356068
	if (cr6.eq) goto loc_82356068;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// b 0x82356060
	goto loc_82356060;
loc_82356048:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82355f80
	sub_82355F80(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82356060:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82356048
	if (!cr6.eq) goto loc_82356048;
loc_82356068:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82356070"))) PPC_WEAK_FUNC(sub_82356070);
PPC_FUNC_IMPL(__imp__sub_82356070) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf r11,r31,r4
	r11.s64 = ctx.r4.s64 - r31.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x823560cc
	if (!cr6.gt) goto loc_823560CC;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
loc_82356098:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r5,r30,2
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// stwx r10,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r10.u32);
	// bl 0x82355a90
	sub_82355A90(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bgt cr6,0x82356098
	if (cr6.gt) goto loc_82356098;
loc_823560CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823560D4"))) PPC_WEAK_FUNC(sub_823560D4);
PPC_FUNC_IMPL(__imp__sub_823560D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823560D8"))) PPC_WEAK_FUNC(sub_823560D8);
PPC_FUNC_IMPL(__imp__sub_823560D8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// ble cr6,0x82356134
	if (!cr6.gt) goto loc_82356134;
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82356020
	sub_82356020(ctx, base);
	// b 0x82356128
	goto loc_82356128;
loc_82356114:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355710
	sub_82355710(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82356128:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82356114
	if (!cr6.eq) goto loc_82356114;
	// b 0x8235613c
	goto loc_8235613C;
loc_82356134:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82356020
	sub_82356020(ctx, base);
loc_8235613C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82356144"))) PPC_WEAK_FUNC(sub_82356144);
PPC_FUNC_IMPL(__imp__sub_82356144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356148"))) PPC_WEAK_FUNC(sub_82356148);
PPC_FUNC_IMPL(__imp__sub_82356148) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82355d38
	sub_82355D38(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x823561ec
	if (!cr6.lt) goto loc_823561EC;
loc_82356180:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82356190:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x823561b4
	if (cr0.eq) goto loc_823561B4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82356190
	if (cr6.eq) goto loc_82356190;
loc_823561B4:
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823561e0
	if (cr0.eq) goto loc_823561E0;
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// srawi r5,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r5.s64 = r11.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355a90
	sub_82355A90(ctx, base);
loc_823561E0:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x82356180
	if (cr6.lt) goto loc_82356180;
loc_823561EC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82356070
	sub_82356070(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82356204"))) PPC_WEAK_FUNC(sub_82356204);
PPC_FUNC_IMPL(__imp__sub_82356204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356208"))) PPC_WEAK_FUNC(sub_82356208);
PPC_FUNC_IMPL(__imp__sub_82356208) {
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
	// bge cr6,0x823562c0
	if (!cr6.lt) goto loc_823562C0;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82356254
	if (!cr6.gt) goto loc_82356254;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_82356254:
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
	// beq cr6,0x82356294
	if (cr6.eq) goto loc_82356294;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355e38
	sub_82355E38(ctx, base);
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
	// b 0x823562a4
	goto loc_823562A4;
loc_82356294:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82275878
	sub_82275878(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823562A4:
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
loc_823562C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823562C8"))) PPC_WEAK_FUNC(sub_823562C8);
PPC_FUNC_IMPL(__imp__sub_823562C8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// b 0x82356358
	goto loc_82356358;
loc_823562EC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82356368
	if (cr6.eq) goto loc_82356368;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x823555c0
	sub_823555C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355e78
	sub_82355E78(ctx, base);
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
	// bl 0x823562c8
	sub_823562C8(ctx, base);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82356358:
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bgt cr6,0x823562ec
	if (cr6.gt) goto loc_823562EC;
	// b 0x8235637c
	goto loc_8235637C;
loc_82356368:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82356148
	sub_82356148(ctx, base);
loc_8235637C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82356384"))) PPC_WEAK_FUNC(sub_82356384);
PPC_FUNC_IMPL(__imp__sub_82356384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356388"))) PPC_WEAK_FUNC(sub_82356388);
PPC_FUNC_IMPL(__imp__sub_82356388) {
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
	// beq cr6,0x823563f0
	if (cr6.eq) goto loc_823563F0;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// b 0x823563c0
	goto loc_823563C0;
loc_823563B8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
loc_823563C0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823563b8
	if (!cr6.eq) goto loc_823563B8;
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
	// bl 0x823562c8
	sub_823562C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823560d8
	sub_823560D8(ctx, base);
loc_823563F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823563F8"))) PPC_WEAK_FUNC(sub_823563F8);
PPC_FUNC_IMPL(__imp__sub_823563F8) {
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
	// lwz r16,-17056(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17056);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,-1432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -1432);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// bl 0x8235aa90
	sub_8235AA90(ctx, base);
	// lwz r3,-1432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -1432);
	// bl 0x8235aa30
	sub_8235AA30(ctx, base);
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823564c4
	if (!cr6.gt) goto loc_823564C4;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r29,r11,-1428
	r29.s64 = r11.s64 + -1428;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82356208
	sub_82356208(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82356478
	goto loc_82356478;
loc_82356468:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82275a28
	sub_82275A28(ctx, base);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
loc_82356478:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82355568
	sub_82355568(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82356468
	if (!cr0.eq) goto loc_82356468;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x82356388
	sub_82356388(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823564c4
	if (cr6.eq) goto loc_823564C4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823564C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r30.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82356400"))) PPC_WEAK_FUNC(sub_82356400);
PPC_FUNC_IMPL(__imp__sub_82356400) {
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
	// lis r29,-32127
	r29.s64 = -2105475072;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,-1432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -1432);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// bl 0x8235aa90
	sub_8235AA90(ctx, base);
	// lwz r3,-1432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -1432);
	// bl 0x8235aa30
	sub_8235AA30(ctx, base);
	// lha r11,8(r28)
	r11.s64 = int16_t(PPC_LOAD_U16(r28.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823564c4
	if (!cr6.gt) goto loc_823564C4;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r29,r11,-1428
	r29.s64 = r11.s64 + -1428;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82356208
	sub_82356208(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82356478
	goto loc_82356478;
loc_82356468:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82275a28
	sub_82275A28(ctx, base);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
loc_82356478:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82355568
	sub_82355568(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82356468
	if (!cr0.eq) goto loc_82356468;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// lbz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x82356388
	sub_82356388(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823564c4
	if (cr6.eq) goto loc_823564C4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_823564C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r30.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823564D8"))) PPC_WEAK_FUNC(sub_823564D8);
PPC_FUNC_IMPL(__imp__sub_823564D8) {
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

__attribute__((alias("__imp__sub_82356500"))) PPC_WEAK_FUNC(sub_82356500);
PPC_FUNC_IMPL(__imp__sub_82356500) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-1432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1432);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8235652c
	if (!cr6.eq) goto loc_8235652C;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// li r4,9973
	ctx.r4.s64 = 9973;
	// ori r3,r3,14248
	ctx.r3.u64 = ctx.r3.u64 | 14248;
	// bl 0x82355b68
	sub_82355B68(ctx, base);
loc_8235652C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16992
	ctx.r4.s64 = r11.s64 + -16992;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32203
	r11.s64 = -2110455808;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,25600
	ctx.r4.s64 = r11.s64 + 25600;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235655C"))) PPC_WEAK_FUNC(sub_8235655C);
PPC_FUNC_IMPL(__imp__sub_8235655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356560"))) PPC_WEAK_FUNC(sub_82356560);
PPC_FUNC_IMPL(__imp__sub_82356560) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-16956
	ctx.r4.s64 = r11.s64 + -16956;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,-28952
	ctx.r5.s64 = ctx.r10.s64 + -28952;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319700
	sub_82319700(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,1
	r11.s64 = 1;
	// stb r11,-1400(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1400, r11.u8);
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

__attribute__((alias("__imp__sub_823565C0"))) PPC_WEAK_FUNC(sub_823565C0);
PPC_FUNC_IMPL(__imp__sub_823565C0) {
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
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mullw r30,r11,r9
	r30.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bge cr6,0x82356640
	if (!cr6.lt) goto loc_82356640;
loc_82356624:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// blt cr6,0x82356624
	if (cr6.lt) goto loc_82356624;
loc_82356640:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82356660"))) PPC_WEAK_FUNC(sub_82356660);
PPC_FUNC_IMPL(__imp__sub_82356660) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r10,-1404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -1404);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r10,-1404(r11)
	PPC_STORE_U32(r11.u32 + -1404, ctx.r10.u32);
	// srawi r11,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	r11.s64 = ctx.r4.s32 >> 2;
	// lwz r10,-1392(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -1392);
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-1388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -1388);
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + r11.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82356708
	if (!cr6.gt) goto loc_82356708;
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x823566b4
	if (!cr0.gt) goto loc_823566B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82354850
	sub_82354850(ctx, base);
loc_823566B4:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-16944
	ctx.r4.s64 = r11.s64 + -16944;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r31,r11,-28948
	r31.s64 = r11.s64 + -28948;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,-1388(r30)
	PPC_STORE_U32(r30.u32 + -1388, ctx.r3.u32);
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x823566e4
	if (!cr0.gt) goto loc_823566E4;
	// bl 0x823548c8
	sub_823548C8(ctx, base);
loc_823566E4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stw r10,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-1388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -1388);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// stw r10,-1392(r29)
	PPC_STORE_U32(r29.u32 + -1392, ctx.r10.u32);
loc_82356708:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// stw r11,-1388(r30)
	PPC_STORE_U32(r30.u32 + -1388, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8235671C"))) PPC_WEAK_FUNC(sub_8235671C);
PPC_FUNC_IMPL(__imp__sub_8235671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356720"))) PPC_WEAK_FUNC(sub_82356720);
PPC_FUNC_IMPL(__imp__sub_82356720) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r29,r11,11900
	r29.s64 = r11.s64 + 11900;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r25
	r30.u64 = r25.u64;
	// subfic r27,r25,4
	xer.ca = r25.u32 <= 4;
	r27.s64 = 4 - r25.s64;
	// li r28,32
	r28.s64 = 32;
	// addi r26,r11,-16972
	r26.s64 = r11.s64 + -16972;
	// li r31,0
	r31.s64 = 0;
loc_82356750:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354930
	sub_82354930(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82356794
	if (cr0.eq) goto loc_82356794;
	// add r11,r27,r30
	r11.u64 = r27.u64 + r30.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// b 0x82356798
	goto loc_82356798;
loc_82356794:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82356798:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82356750
	if (!cr0.eq) goto loc_82356750;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823567B4"))) PPC_WEAK_FUNC(sub_823567B4);
PPC_FUNC_IMPL(__imp__sub_823567B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823567B8"))) PPC_WEAK_FUNC(sub_823567B8);
PPC_FUNC_IMPL(__imp__sub_823567B8) {
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
	// lwz r16,-16920(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16920);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x823567f4
	if (cr6.eq) goto loc_823567F4;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_823567F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358950
	sub_82358950(ctx, base);
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-1396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1396);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r30,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8235683c
	if (cr6.eq) goto loc_8235683C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_8235683C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823567C0"))) PPC_WEAK_FUNC(sub_823567C0);
PPC_FUNC_IMPL(__imp__sub_823567C0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x823567f4
	if (cr6.eq) goto loc_823567F4;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_823567F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82358950
	sub_82358950(ctx, base);
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-1396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1396);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r30,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8235683c
	if (cr6.eq) goto loc_8235683C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_8235683C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82356844"))) PPC_WEAK_FUNC(sub_82356844);
PPC_FUNC_IMPL(__imp__sub_82356844) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235686C"))) PPC_WEAK_FUNC(sub_8235686C);
PPC_FUNC_IMPL(__imp__sub_8235686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356870"))) PPC_WEAK_FUNC(sub_82356870);
PPC_FUNC_IMPL(__imp__sub_82356870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
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
	// bl 0x82357718
	sub_82357718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823573c0
	sub_823573C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823568D8"))) PPC_WEAK_FUNC(sub_823568D8);
PPC_FUNC_IMPL(__imp__sub_823568D8) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823568fc
	if (!cr6.eq) goto loc_823568FC;
	// bl 0x823565c0
	sub_823565C0(ctx, base);
loc_823568FC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// ble cr6,0x82356924
	if (!cr6.gt) goto loc_82356924;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82356924:
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

__attribute__((alias("__imp__sub_82356938"))) PPC_WEAK_FUNC(sub_82356938);
PPC_FUNC_IMPL(__imp__sub_82356938) {
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
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r11,-16724
	ctx.r3.s64 = r11.s64 + -16724;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,-1404(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -1404);
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16780
	ctx.r4.s64 = r11.s64 + -16780;
	// bl 0x82357718
	sub_82357718(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823571b0
	sub_823571B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r29,0
	r29.s64 = 0;
	// li r26,32
	r26.s64 = 32;
	// addi r28,r11,-16808
	r28.s64 = r11.s64 + -16808;
loc_823569A0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823569f0
	if (cr0.eq) goto loc_823569F0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r11,r5,r7
	r11.s64 = ctx.r7.s64 - ctx.r5.s64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x82356870
	sub_82356870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
loc_823569F0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x823569a0
	if (!cr0.eq) goto loc_823569A0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-16856
	ctx.r3.s64 = r11.s64 + -16856;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823578d8
	sub_823578D8(ctx, base);
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82356A20"))) PPC_WEAK_FUNC(sub_82356A20);
PPC_FUNC_IMPL(__imp__sub_82356A20) {
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
	// lwz r16,-16664(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16664);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x82356a5c
	if (cr6.eq) goto loc_82356A5C;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82356A5C:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-1396(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1396);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82356a94
	if (!cr6.eq) goto loc_82356A94;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82356a8c
	if (cr0.eq) goto loc_82356A8C;
	// bl 0x82356720
	sub_82356720(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82356a90
	goto loc_82356A90;
loc_82356A8C:
	// li r11,0
	r11.s64 = 0;
loc_82356A90:
	// stw r11,-1396(r29)
	PPC_STORE_U32(r29.u32 + -1396, r11.u32);
loc_82356A94:
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x823568d8
	sub_823568D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82358888
	sub_82358888(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82356ad8
	if (cr6.eq) goto loc_82356AD8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82356AD8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82356A28"))) PPC_WEAK_FUNC(sub_82356A28);
PPC_FUNC_IMPL(__imp__sub_82356A28) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x82356a5c
	if (cr6.eq) goto loc_82356A5C;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82356A5C:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r11,-1396(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -1396);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82356a94
	if (!cr6.eq) goto loc_82356A94;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82356a8c
	if (cr0.eq) goto loc_82356A8C;
	// bl 0x82356720
	sub_82356720(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82356a90
	goto loc_82356A90;
loc_82356A8C:
	// li r11,0
	r11.s64 = 0;
loc_82356A90:
	// stw r11,-1396(r29)
	PPC_STORE_U32(r29.u32 + -1396, r11.u32);
loc_82356A94:
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x823568d8
	sub_823568D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82358888
	sub_82358888(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82356ad8
	if (cr6.eq) goto loc_82356AD8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82356AD8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82356AE4"))) PPC_WEAK_FUNC(sub_82356AE4);
PPC_FUNC_IMPL(__imp__sub_82356AE4) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82356B0C"))) PPC_WEAK_FUNC(sub_82356B0C);
PPC_FUNC_IMPL(__imp__sub_82356B0C) {
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

__attribute__((alias("__imp__sub_82356B34"))) PPC_WEAK_FUNC(sub_82356B34);
PPC_FUNC_IMPL(__imp__sub_82356B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356B38"))) PPC_WEAK_FUNC(sub_82356B38);
PPC_FUNC_IMPL(__imp__sub_82356B38) {
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
	// lwz r16,-16576(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16576);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq cr6,0x82356b70
	if (cr6.eq) goto loc_82356B70;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82356B70:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-1396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1396);
	// bl 0x82356938
	sub_82356938(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82356b90
	if (cr6.eq) goto loc_82356B90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82356B90:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82356B40"))) PPC_WEAK_FUNC(sub_82356B40);
PPC_FUNC_IMPL(__imp__sub_82356B40) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq cr6,0x82356b70
	if (cr6.eq) goto loc_82356B70;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82356B70:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-1396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1396);
	// bl 0x82356938
	sub_82356938(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82356b90
	if (cr6.eq) goto loc_82356B90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82356B90:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82356B98"))) PPC_WEAK_FUNC(sub_82356B98);
PPC_FUNC_IMPL(__imp__sub_82356B98) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82356BC0"))) PPC_WEAK_FUNC(sub_82356BC0);
PPC_FUNC_IMPL(__imp__sub_82356BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823568d8
	sub_823568D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82356BC4"))) PPC_WEAK_FUNC(sub_82356BC4);
PPC_FUNC_IMPL(__imp__sub_82356BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356BC8"))) PPC_WEAK_FUNC(sub_82356BC8);
PPC_FUNC_IMPL(__imp__sub_82356BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// addi r11,r4,15
	r11.s64 = ctx.r4.s64 + 15;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// li r9,10240
	ctx.r9.s64 = 10240;
	// srawi r8,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r8.s64 = r11.s32 >> 2;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r8,r8,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,-16508
	ctx.r10.s64 = r11.s64 + -16508;
	// li r11,0
	r11.s64 = 0;
	// divw r9,r9,r4
	ctx.r9.s32 = ctx.r9.s32 / ctx.r4.s32;
	// twllei r4,0
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82356C1C"))) PPC_WEAK_FUNC(sub_82356C1C);
PPC_FUNC_IMPL(__imp__sub_82356C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356C20"))) PPC_WEAK_FUNC(sub_82356C20);
PPC_FUNC_IMPL(__imp__sub_82356C20) {
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
	// beq cr6,0x82356c60
	if (cr6.eq) goto loc_82356C60;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82356c50
	if (cr0.eq) goto loc_82356C50;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82356C50:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82356c74
	goto loc_82356C74;
loc_82356C60:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82280fe8
	sub_82280FE8(ctx, base);
loc_82356C74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82356C84"))) PPC_WEAK_FUNC(sub_82356C84);
PPC_FUNC_IMPL(__imp__sub_82356C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356C88"))) PPC_WEAK_FUNC(sub_82356C88);
PPC_FUNC_IMPL(__imp__sub_82356C88) {
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
	// bl 0x821f3d58
	sub_821F3D58(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82356cb8
	if (cr0.eq) goto loc_82356CB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82356CB8:
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

__attribute__((alias("__imp__sub_82356CD4"))) PPC_WEAK_FUNC(sub_82356CD4);
PPC_FUNC_IMPL(__imp__sub_82356CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356CD8"))) PPC_WEAK_FUNC(sub_82356CD8);
PPC_FUNC_IMPL(__imp__sub_82356CD8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82356c20
	sub_82356C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82356D30"))) PPC_WEAK_FUNC(sub_82356D30);
PPC_FUNC_IMPL(__imp__sub_82356D30) {
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
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82356d58
	goto loc_82356D58;
loc_82356D4C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82354b48
	sub_82354B48(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82356D58:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82356d4c
	if (!cr6.eq) goto loc_82356D4C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82281230
	sub_82281230(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82356D88"))) PPC_WEAK_FUNC(sub_82356D88);
PPC_FUNC_IMPL(__imp__sub_82356D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x82356d30
	sub_82356D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82356DA8"))) PPC_WEAK_FUNC(sub_82356DA8);
PPC_FUNC_IMPL(__imp__sub_82356DA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82356DAC"))) PPC_WEAK_FUNC(sub_82356DAC);
PPC_FUNC_IMPL(__imp__sub_82356DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356DB0"))) PPC_WEAK_FUNC(sub_82356DB0);
PPC_FUNC_IMPL(__imp__sub_82356DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82356de4
	if (cr0.eq) goto loc_82356DE4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9120
	ctx.r3.s64 = r11.s64 + 9120;
	// b 0x82356dfc
	goto loc_82356DFC;
loc_82356DE4:
	// li r11,0
	r11.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823195f8
	sub_823195F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82356DFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82356E0C"))) PPC_WEAK_FUNC(sub_82356E0C);
PPC_FUNC_IMPL(__imp__sub_82356E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356E10"))) PPC_WEAK_FUNC(sub_82356E10);
PPC_FUNC_IMPL(__imp__sub_82356E10) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-16500
	ctx.r4.s64 = r11.s64 + -16500;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-1332
	ctx.r3.s64 = ctx.r10.s64 + -1332;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82356db0
	sub_82356DB0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lbz r26,0(r3)
	r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r28,49
	r28.s64 = 49;
	// addi r30,r11,-1384
	r30.s64 = r11.s64 + -1384;
	// li r11,0
	r11.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r30,49
	r31.s64 = r30.s64 + 49;
	// li r25,10
	r25.s64 = 10;
	// stb r11,49(r30)
	PPC_STORE_U8(r30.u32 + 49, r11.u8);
loc_82356E6C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82356e7c
	if (cr6.eq) goto loc_82356E7C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82356ed8
	if (!cr6.gt) goto loc_82356ED8;
loc_82356E7C:
	// li r11,3
	r11.s64 = 3;
	// divw r11,r27,r11
	r11.s32 = r27.s32 / r11.s32;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// subf. r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82356ea4
	if (!cr0.eq) goto loc_82356EA4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82356ea4
	if (!cr6.gt) goto loc_82356EA4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
loc_82356EA4:
	// divw r11,r29,r25
	r11.s32 = r29.s32 / r25.s32;
	// li r5,10
	ctx.r5.s64 = 10;
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subf r3,r11,r29
	ctx.r3.s64 = r29.s64 - r11.s64;
	// bl 0x823a1968
	sub_823A1968(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// divw r29,r29,r25
	r29.s32 = r29.s32 / r25.s32;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82356e6c
	goto loc_82356E6C;
loc_82356ED8:
	// add r3,r28,r30
	ctx.r3.u64 = r28.u64 + r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82356EE4"))) PPC_WEAK_FUNC(sub_82356EE4);
PPC_FUNC_IMPL(__imp__sub_82356EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356EE8"))) PPC_WEAK_FUNC(sub_82356EE8);
PPC_FUNC_IMPL(__imp__sub_82356EE8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82356f14
	if (cr0.eq) goto loc_82356F14;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82356F14:
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

__attribute__((alias("__imp__sub_82356F28"))) PPC_WEAK_FUNC(sub_82356F28);
PPC_FUNC_IMPL(__imp__sub_82356F28) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16456(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16456);
	// mflr r12
	// bl 0x8239bcd8
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-16480
	ctx.r4.s64 = r11.s64 + -16480;
	// stw r20,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r20.u32);
	// stw r20,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r20.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822b4f60
	sub_822B4F60(ctx, base);
	// lwz r21,96(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// beq cr6,0x82356fb8
	if (cr6.eq) goto loc_82356FB8;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82356fb0
	if (cr0.eq) goto loc_82356FB0;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_82356FA4:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82356fa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82356FA4;
loc_82356FB0:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
loc_82356FB8:
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// mr r26,r20
	r26.u64 = r20.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// li r28,1
	r28.s64 = 1;
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82357038
	if (!cr6.gt) goto loc_82357038;
	// li r27,8
	r27.s64 = 8;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82356FE4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// bl 0x8231c520
	sub_8231C520(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lha r10,8(r30)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// lha r11,8(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// add r26,r11,r26
	r26.u64 = r11.u64 + r26.u64;
	// blt cr6,0x82356fe4
	if (cr6.lt) goto loc_82356FE4;
loc_82357038:
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
	// beq 0x82357064
	if (cr0.eq) goto loc_82357064;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x82357068
	goto loc_82357068;
loc_82357064:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82357068:
	// stw r3,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r22,1
	r22.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823570f4
	if (!cr6.gt) goto loc_823570F4;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_82357084:
	// lwz r24,0(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r27,r20
	r27.u64 = r20.u64;
	// lha r11,8(r24)
	r11.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823570d8
	if (!cr0.gt) goto loc_823570D8;
	// mr r28,r20
	r28.u64 = r20.u64;
	// rlwinm r29,r26,3,0,28
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
loc_823570A0:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r29,r9
	ctx.r3.u64 = r29.u64 + ctx.r9.u64;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r24)
	r11.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x823570a0
	if (cr6.lt) goto loc_823570A0;
loc_823570D8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82357084
	if (cr6.lt) goto loc_82357084;
loc_823570F4:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82357138
	if (!cr6.gt) goto loc_82357138;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319c40
	sub_82319C40(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x8231a528
	sub_8231A528(ctx, base);
loc_82357138:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82357158
	if (cr6.eq) goto loc_82357158;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82357158:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82356F30"))) PPC_WEAK_FUNC(sub_82356F30);
PPC_FUNC_IMPL(__imp__sub_82356F30) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,-16480
	ctx.r4.s64 = r11.s64 + -16480;
	// stw r20,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r20.u32);
	// stw r20,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r20.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822b4f60
	sub_822B4F60(ctx, base);
	// lwz r21,96(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// beq cr6,0x82356fb8
	if (cr6.eq) goto loc_82356FB8;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82356fb0
	if (cr0.eq) goto loc_82356FB0;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_82356FA4:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82356fa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82356FA4;
loc_82356FB0:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
loc_82356FB8:
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// mr r26,r20
	r26.u64 = r20.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// li r28,1
	r28.s64 = 1;
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82357038
	if (!cr6.gt) goto loc_82357038;
	// li r27,8
	r27.s64 = 8;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82356FE4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82275d68
	sub_82275D68(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82276480
	sub_82276480(ctx, base);
	// bl 0x8231c520
	sub_8231C520(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lha r10,8(r30)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// lha r11,8(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 8));
	// add r26,r11,r26
	r26.u64 = r11.u64 + r26.u64;
	// blt cr6,0x82356fe4
	if (cr6.lt) goto loc_82356FE4;
loc_82357038:
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
	// beq 0x82357064
	if (cr0.eq) goto loc_82357064;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319a70
	sub_82319A70(ctx, base);
	// b 0x82357068
	goto loc_82357068;
loc_82357064:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_82357068:
	// stw r3,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// mr r26,r20
	r26.u64 = r20.u64;
	// li r22,1
	r22.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823570f4
	if (!cr6.gt) goto loc_823570F4;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_82357084:
	// lwz r24,0(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r27,r20
	r27.u64 = r20.u64;
	// lha r11,8(r24)
	r11.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823570d8
	if (!cr0.gt) goto loc_823570D8;
	// mr r28,r20
	r28.u64 = r20.u64;
	// rlwinm r29,r26,3,0,28
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
loc_823570A0:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r29,r9
	ctx.r3.u64 = r29.u64 + ctx.r9.u64;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lha r11,8(r24)
	r11.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x823570a0
	if (cr6.lt) goto loc_823570A0;
loc_823570D8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82120818
	sub_82120818(ctx, base);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82357084
	if (cr6.lt) goto loc_82357084;
loc_823570F4:
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82357138
	if (!cr6.gt) goto loc_82357138;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319c40
	sub_82319C40(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x8231a528
	sub_8231A528(ctx, base);
loc_82357138:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82357158
	if (cr6.eq) goto loc_82357158;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82357158:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82357160"))) PPC_WEAK_FUNC(sub_82357160);
PPC_FUNC_IMPL(__imp__sub_82357160) {
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

__attribute__((alias("__imp__sub_82357188"))) PPC_WEAK_FUNC(sub_82357188);
PPC_FUNC_IMPL(__imp__sub_82357188) {
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

__attribute__((alias("__imp__sub_823571B0"))) PPC_WEAK_FUNC(sub_823571B0);
PPC_FUNC_IMPL(__imp__sub_823571B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,2056(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2056);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823571e8
	if (cr6.eq) goto loc_823571E8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
loc_823571D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x823571d0
	if (!cr0.eq) goto loc_823571D0;
loc_823571E8:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823571F0"))) PPC_WEAK_FUNC(sub_823571F0);
PPC_FUNC_IMPL(__imp__sub_823571F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,2060(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82357208
	if (cr0.eq) goto loc_82357208;
	// stw r11,2056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2056, r11.u32);
	// stw r8,2060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2060, ctx.r8.u32);
loc_82357208:
	// lwz r9,2056(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2056);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823572b0
	if (cr0.eq) goto loc_823572B0;
loc_8235721C:
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(r11.s32, 37, xer);
	// bne cr6,0x8235724c
	if (!cr6.eq) goto loc_8235724C;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r7,37
	cr6.compare<uint32_t>(ctx.r7.u32, 37, xer);
	// bne cr6,0x8235723c
	if (!cr6.eq) goto loc_8235723C;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// b 0x82357298
	goto loc_82357298;
loc_8235723C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823572b8
	if (!cr6.eq) goto loc_823572B8;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82357298
	goto loc_82357298;
loc_8235724C:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82357298
	if (!cr6.eq) goto loc_82357298;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82357298
	if (cr6.lt) goto loc_82357298;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x82357298
	if (cr6.gt) goto loc_82357298;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x8235728c
	if (cr6.eq) goto loc_8235728C;
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(r11.s32, 103, xer);
	// beq cr6,0x8235728c
	if (cr6.eq) goto loc_8235728C;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(r11.s32, 115, xer);
	// bne cr6,0x82357284
	if (!cr6.eq) goto loc_82357284;
	// li r11,1
	r11.s64 = 1;
	// b 0x82357290
	goto loc_82357290;
loc_82357284:
	// stw r8,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, ctx.r8.u32);
	// b 0x82357294
	goto loc_82357294;
loc_8235728C:
	// li r11,2
	r11.s64 = 2;
loc_82357290:
	// stw r11,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, r11.u32);
loc_82357294:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82357298:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8235721c
	if (!cr0.eq) goto loc_8235721C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823572b8
	if (!cr6.eq) goto loc_823572B8;
loc_823572B0:
	// li r11,3
	r11.s64 = 3;
	// stw r11,2064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2064, r11.u32);
loc_823572B8:
	// stw r9,2060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2060, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823572C0"))) PPC_WEAK_FUNC(sub_823572C0);
PPC_FUNC_IMPL(__imp__sub_823572C0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lbz r30,0(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r11,2048
	ctx.r3.s64 = r11.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823571f0
	sub_823571F0(ctx, base);
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

__attribute__((alias("__imp__sub_8235733C"))) PPC_WEAK_FUNC(sub_8235733C);
PPC_FUNC_IMPL(__imp__sub_8235733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357340"))) PPC_WEAK_FUNC(sub_82357340);
PPC_FUNC_IMPL(__imp__sub_82357340) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lbz r30,0(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r11,2048
	ctx.r3.s64 = r11.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823571f0
	sub_823571F0(ctx, base);
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

__attribute__((alias("__imp__sub_823573BC"))) PPC_WEAK_FUNC(sub_823573BC);
PPC_FUNC_IMPL(__imp__sub_823573BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823573C0"))) PPC_WEAK_FUNC(sub_823573C0);
PPC_FUNC_IMPL(__imp__sub_823573C0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lbz r30,0(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r11,2048
	ctx.r3.s64 = r11.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823571f0
	sub_823571F0(ctx, base);
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

__attribute__((alias("__imp__sub_8235743C"))) PPC_WEAK_FUNC(sub_8235743C);
PPC_FUNC_IMPL(__imp__sub_8235743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357440"))) PPC_WEAK_FUNC(sub_82357440);
PPC_FUNC_IMPL(__imp__sub_82357440) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,2064(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2064);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82357480
	if (!cr0.eq) goto loc_82357480;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82192718
	sub_82192718(ctx, base);
	// b 0x823574cc
	goto loc_823574CC;
loc_82357480:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823574b8
	if (!cr6.eq) goto loc_823574B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x823179b8
	sub_823179B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// addi r3,r11,2048
	ctx.r3.s64 = r11.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// b 0x823574e8
	goto loc_823574E8;
loc_823574B8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823574f0
	if (!cr6.eq) goto loc_823574F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82317998
	sub_82317998(ctx, base);
loc_823574CC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r3,r11,2048
	ctx.r3.s64 = r11.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
loc_823574E8:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823574f4
	goto loc_823574F4;
loc_823574F0:
	// li r11,0
	r11.s64 = 0;
loc_823574F4:
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823571f0
	sub_823571F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82357518"))) PPC_WEAK_FUNC(sub_82357518);
PPC_FUNC_IMPL(__imp__sub_82357518) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lbz r30,0(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r11,2048
	ctx.r3.s64 = r11.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823571f0
	sub_823571F0(ctx, base);
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

__attribute__((alias("__imp__sub_82357594"))) PPC_WEAK_FUNC(sub_82357594);
PPC_FUNC_IMPL(__imp__sub_82357594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357598"))) PPC_WEAK_FUNC(sub_82357598);
PPC_FUNC_IMPL(__imp__sub_82357598) {
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
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lbz r30,0(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r11,2048
	ctx.r3.s64 = r11.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823571f0
	sub_823571F0(ctx, base);
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

__attribute__((alias("__imp__sub_82357618"))) PPC_WEAK_FUNC(sub_82357618);
PPC_FUNC_IMPL(__imp__sub_82357618) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lbz r30,0(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// addi r3,r10,2048
	ctx.r3.s64 = ctx.r10.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823571f0
	sub_823571F0(ctx, base);
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

__attribute__((alias("__imp__sub_82357698"))) PPC_WEAK_FUNC(sub_82357698);
PPC_FUNC_IMPL(__imp__sub_82357698) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lbz r30,0(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,2056(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2056);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r11,2048
	ctx.r3.s64 = r11.s64 + 2048;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823571f0
	sub_823571F0(ctx, base);
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

__attribute__((alias("__imp__sub_82357714"))) PPC_WEAK_FUNC(sub_82357714);
PPC_FUNC_IMPL(__imp__sub_82357714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357718"))) PPC_WEAK_FUNC(sub_82357718);
PPC_FUNC_IMPL(__imp__sub_82357718) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-1320
	r30.s64 = r11.s64 + -1320;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16384);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,11,0,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,2060(r31)
	PPC_STORE_U32(r31.u32 + 2060, r11.u32);
	// bl 0x82353568
	sub_82353568(ctx, base);
	// lwz r11,16384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16384);
	// stw r29,2056(r31)
	PPC_STORE_U32(r31.u32 + 2056, r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// stw r11,16384(r30)
	PPC_STORE_U32(r30.u32 + 16384, r11.u32);
	// bne cr6,0x82357780
	if (!cr6.eq) goto loc_82357780;
	// li r11,0
	r11.s64 = 0;
	// stw r11,16384(r30)
	PPC_STORE_U32(r30.u32 + 16384, r11.u32);
loc_82357780:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823571f0
	sub_823571F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82357790"))) PPC_WEAK_FUNC(sub_82357790);
PPC_FUNC_IMPL(__imp__sub_82357790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-1692
	r11.s64 = r11.s64 + -1692;
	// addi r10,r10,-27412
	ctx.r10.s64 = ctx.r10.s64 + -27412;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823577B8"))) PPC_WEAK_FUNC(sub_823577B8);
PPC_FUNC_IMPL(__imp__sub_823577B8) {
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
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r6,r4
	ctx.r6.s64 = ctx.r4.s8;
	// addi r5,r11,-16376
	ctx.r5.s64 = r11.s64 + -16376;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357814"))) PPC_WEAK_FUNC(sub_82357814);
PPC_FUNC_IMPL(__imp__sub_82357814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357818"))) PPC_WEAK_FUNC(sub_82357818);
PPC_FUNC_IMPL(__imp__sub_82357818) {
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
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,14924
	ctx.r5.s64 = r11.s64 + 14924;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357874"))) PPC_WEAK_FUNC(sub_82357874);
PPC_FUNC_IMPL(__imp__sub_82357874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357878"))) PPC_WEAK_FUNC(sub_82357878);
PPC_FUNC_IMPL(__imp__sub_82357878) {
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
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823578D4"))) PPC_WEAK_FUNC(sub_823578D4);
PPC_FUNC_IMPL(__imp__sub_823578D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823578D8"))) PPC_WEAK_FUNC(sub_823578D8);
PPC_FUNC_IMPL(__imp__sub_823578D8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82357914"))) PPC_WEAK_FUNC(sub_82357914);
PPC_FUNC_IMPL(__imp__sub_82357914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357918"))) PPC_WEAK_FUNC(sub_82357918);
PPC_FUNC_IMPL(__imp__sub_82357918) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82357954"))) PPC_WEAK_FUNC(sub_82357954);
PPC_FUNC_IMPL(__imp__sub_82357954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357958"))) PPC_WEAK_FUNC(sub_82357958);
PPC_FUNC_IMPL(__imp__sub_82357958) {
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
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-16372
	ctx.r5.s64 = r11.s64 + -16372;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823579B4"))) PPC_WEAK_FUNC(sub_823579B4);
PPC_FUNC_IMPL(__imp__sub_823579B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823579B8"))) PPC_WEAK_FUNC(sub_823579B8);
PPC_FUNC_IMPL(__imp__sub_823579B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x823579fc
	if (cr6.eq) goto loc_823579FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,2836
	r29.s64 = r11.s64 + 2836;
loc_823579DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823579dc
	if (!cr0.eq) goto loc_823579DC;
loc_823579FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82357A04"))) PPC_WEAK_FUNC(sub_82357A04);
PPC_FUNC_IMPL(__imp__sub_82357A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357A08"))) PPC_WEAK_FUNC(sub_82357A08);
PPC_FUNC_IMPL(__imp__sub_82357A08) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-16312(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16312);
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82359130
	sub_82359130(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// addi r11,r11,-16364
	r11.s64 = r11.s64 + -16364;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82357a60
	if (!cr6.eq) goto loc_82357A60;
	// li r29,2
	r29.s64 = 2;
	// b 0x82357a78
	goto loc_82357A78;
loc_82357A60:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x82357a74
	if (!cr6.eq) goto loc_82357A74;
	// lis r29,1
	r29.s64 = 65536;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// b 0x82357a78
	goto loc_82357A78;
loc_82357A74:
	// li r29,769
	r29.s64 = 769;
loc_82357A78:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353618
	sub_82353618(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82357A10"))) PPC_WEAK_FUNC(sub_82357A10);
PPC_FUNC_IMPL(__imp__sub_82357A10) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82359130
	sub_82359130(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// addi r11,r11,-16364
	r11.s64 = r11.s64 + -16364;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82357a60
	if (!cr6.eq) goto loc_82357A60;
	// li r29,2
	r29.s64 = 2;
	// b 0x82357a78
	goto loc_82357A78;
loc_82357A60:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x82357a74
	if (!cr6.eq) goto loc_82357A74;
	// lis r29,1
	r29.s64 = 65536;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// b 0x82357a78
	goto loc_82357A78;
loc_82357A74:
	// li r29,769
	r29.s64 = 769;
loc_82357A78:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82353618
	sub_82353618(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82357AAC"))) PPC_WEAK_FUNC(sub_82357AAC);
PPC_FUNC_IMPL(__imp__sub_82357AAC) {
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
	// bl 0x82359150
	sub_82359150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357AD4"))) PPC_WEAK_FUNC(sub_82357AD4);
PPC_FUNC_IMPL(__imp__sub_82357AD4) {
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

__attribute__((alias("__imp__sub_82357B00"))) PPC_WEAK_FUNC(sub_82357B00);
PPC_FUNC_IMPL(__imp__sub_82357B00) {
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
	// lwz r16,-16232(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16232);
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-16364
	r11.s64 = r11.s64 + -16364;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82357b54
	if (cr0.eq) goto loc_82357B54;
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
loc_82357B54:
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359150
	sub_82359150(ctx, base);
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

__attribute__((alias("__imp__sub_82357B08"))) PPC_WEAK_FUNC(sub_82357B08);
PPC_FUNC_IMPL(__imp__sub_82357B08) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-16364
	r11.s64 = r11.s64 + -16364;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82357b54
	if (cr0.eq) goto loc_82357B54;
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
loc_82357B54:
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359150
	sub_82359150(ctx, base);
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

__attribute__((alias("__imp__sub_82357B7C"))) PPC_WEAK_FUNC(sub_82357B7C);
PPC_FUNC_IMPL(__imp__sub_82357B7C) {
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
	// bl 0x82359150
	sub_82359150(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357BA4"))) PPC_WEAK_FUNC(sub_82357BA4);
PPC_FUNC_IMPL(__imp__sub_82357BA4) {
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

__attribute__((alias("__imp__sub_82357BD0"))) PPC_WEAK_FUNC(sub_82357BD0);
PPC_FUNC_IMPL(__imp__sub_82357BD0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// beq cr6,0x82357c10
	if (cr6.eq) goto loc_82357C10;
	// li r11,1
	r11.s64 = 1;
	// stb r11,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r11.u8);
loc_82357C10:
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

__attribute__((alias("__imp__sub_82357C28"))) PPC_WEAK_FUNC(sub_82357C28);
PPC_FUNC_IMPL(__imp__sub_82357C28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// beq cr6,0x82357c68
	if (cr6.eq) goto loc_82357C68;
	// li r11,1
	r11.s64 = 1;
	// stb r11,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r11.u8);
loc_82357C68:
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

__attribute__((alias("__imp__sub_82357C80"))) PPC_WEAK_FUNC(sub_82357C80);
PPC_FUNC_IMPL(__imp__sub_82357C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82357C94"))) PPC_WEAK_FUNC(sub_82357C94);
PPC_FUNC_IMPL(__imp__sub_82357C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357C98"))) PPC_WEAK_FUNC(sub_82357C98);
PPC_FUNC_IMPL(__imp__sub_82357C98) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82357cf4
	if (!cr0.lt) goto loc_82357CF4;
	// stb r30,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r30.u8);
loc_82357CF4:
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

__attribute__((alias("__imp__sub_82357D0C"))) PPC_WEAK_FUNC(sub_82357D0C);
PPC_FUNC_IMPL(__imp__sub_82357D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357D10"))) PPC_WEAK_FUNC(sub_82357D10);
PPC_FUNC_IMPL(__imp__sub_82357D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82357D24"))) PPC_WEAK_FUNC(sub_82357D24);
PPC_FUNC_IMPL(__imp__sub_82357D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357D28"))) PPC_WEAK_FUNC(sub_82357D28);
PPC_FUNC_IMPL(__imp__sub_82357D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82357D3C"))) PPC_WEAK_FUNC(sub_82357D3C);
PPC_FUNC_IMPL(__imp__sub_82357D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357D40"))) PPC_WEAK_FUNC(sub_82357D40);
PPC_FUNC_IMPL(__imp__sub_82357D40) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357D48"))) PPC_WEAK_FUNC(sub_82357D48);
PPC_FUNC_IMPL(__imp__sub_82357D48) {
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
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82357d78
	if (cr0.eq) goto loc_82357D78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82357D78:
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

__attribute__((alias("__imp__sub_82357D94"))) PPC_WEAK_FUNC(sub_82357D94);
PPC_FUNC_IMPL(__imp__sub_82357D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357D98"))) PPC_WEAK_FUNC(sub_82357D98);
PPC_FUNC_IMPL(__imp__sub_82357D98) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16164
	r11.s64 = r11.s64 + -16164;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82357dc4
	if (cr0.eq) goto loc_82357DC4;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82357DC4:
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

__attribute__((alias("__imp__sub_82357DDC"))) PPC_WEAK_FUNC(sub_82357DDC);
PPC_FUNC_IMPL(__imp__sub_82357DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357DE0"))) PPC_WEAK_FUNC(sub_82357DE0);
PPC_FUNC_IMPL(__imp__sub_82357DE0) {
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
	// beq 0x82357e20
	if (cr0.eq) goto loc_82357E20;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-28804
	ctx.r3.s64 = r11.s64 + -28804;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82357e28
	goto loc_82357E28;
loc_82357E20:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82357E28:
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

__attribute__((alias("__imp__sub_82357E44"))) PPC_WEAK_FUNC(sub_82357E44);
PPC_FUNC_IMPL(__imp__sub_82357E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357E48"))) PPC_WEAK_FUNC(sub_82357E48);
PPC_FUNC_IMPL(__imp__sub_82357E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,18752
	r11.s64 = r11.s64 + 18752;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82357ea4
	goto loc_82357EA4;
loc_82357E5C:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x82357ea0
	if (!cr6.eq) goto loc_82357EA0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82357E74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82357e98
	if (cr0.eq) goto loc_82357E98;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82357e74
	if (cr6.eq) goto loc_82357E74;
loc_82357E98:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82357eac
	if (cr0.eq) goto loc_82357EAC;
loc_82357EA0:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_82357EA4:
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x82357e5c
	if (!cr6.eq) goto loc_82357E5C;
loc_82357EAC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357EB4"))) PPC_WEAK_FUNC(sub_82357EB4);
PPC_FUNC_IMPL(__imp__sub_82357EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357EB8"))) PPC_WEAK_FUNC(sub_82357EB8);
PPC_FUNC_IMPL(__imp__sub_82357EB8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-16164
	r11.s64 = r11.s64 + -16164;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82357ee4
	if (cr0.eq) goto loc_82357EE4;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82357EE4:
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

__attribute__((alias("__imp__sub_82357EFC"))) PPC_WEAK_FUNC(sub_82357EFC);
PPC_FUNC_IMPL(__imp__sub_82357EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357F00"))) PPC_WEAK_FUNC(sub_82357F00);
PPC_FUNC_IMPL(__imp__sub_82357F00) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82357de0
	sub_82357DE0(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82357f30
	if (cr0.eq) goto loc_82357F30;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82357F30:
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

__attribute__((alias("__imp__sub_82357F44"))) PPC_WEAK_FUNC(sub_82357F44);
PPC_FUNC_IMPL(__imp__sub_82357F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357F48"))) PPC_WEAK_FUNC(sub_82357F48);
PPC_FUNC_IMPL(__imp__sub_82357F48) {
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
	// beq cr6,0x82357f84
	if (cr6.eq) goto loc_82357F84;
	// subf. r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82357f84
	if (cr0.eq) goto loc_82357F84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_82357F84:
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

__attribute__((alias("__imp__sub_82357FAC"))) PPC_WEAK_FUNC(sub_82357FAC);
PPC_FUNC_IMPL(__imp__sub_82357FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357FB0"))) PPC_WEAK_FUNC(sub_82357FB0);
PPC_FUNC_IMPL(__imp__sub_82357FB0) {
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
	// bl 0x82357f00
	sub_82357F00(ctx, base);
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

__attribute__((alias("__imp__sub_82358014"))) PPC_WEAK_FUNC(sub_82358014);
PPC_FUNC_IMPL(__imp__sub_82358014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358018"))) PPC_WEAK_FUNC(sub_82358018);
PPC_FUNC_IMPL(__imp__sub_82358018) {
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
	// bl 0x82357e48
	sub_82357E48(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,18752
	ctx.r3.s64 = r11.s64 + 18752;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82358050
	if (!cr6.eq) goto loc_82358050;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82358068
	goto loc_82358068;
loc_82358050:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82357f48
	sub_82357F48(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_82358068:
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

__attribute__((alias("__imp__sub_8235807C"))) PPC_WEAK_FUNC(sub_8235807C);
PPC_FUNC_IMPL(__imp__sub_8235807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358080"))) PPC_WEAK_FUNC(sub_82358080);
PPC_FUNC_IMPL(__imp__sub_82358080) {
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
	// bl 0x82357e48
	sub_82357E48(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,18752
	r31.s64 = r11.s64 + 18752;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x823580b0
	if (!cr6.eq) goto loc_823580B0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x823580d8
	goto loc_823580D8;
loc_823580B0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357f48
	sub_82357F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82357f48
	sub_82357F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823580D8:
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

__attribute__((alias("__imp__sub_823580EC"))) PPC_WEAK_FUNC(sub_823580EC);
PPC_FUNC_IMPL(__imp__sub_823580EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823580F0"))) PPC_WEAK_FUNC(sub_823580F0);
PPC_FUNC_IMPL(__imp__sub_823580F0) {
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
	// bl 0x82357e48
	sub_82357E48(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,18752
	r31.s64 = r11.s64 + 18752;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x8235811c
	if (!cr6.eq) goto loc_8235811C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82358158
	goto loc_82358158;
loc_8235811C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357f48
	sub_82357F48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823a1758
	sub_823A1758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357f48
	sub_82357F48(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82358158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82358160"))) PPC_WEAK_FUNC(sub_82358160);
PPC_FUNC_IMPL(__imp__sub_82358160) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r31,r11,18752
	r31.s64 = r11.s64 + 18752;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8235817C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x823581ac
	goto loc_823581AC;
loc_82358184:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x823581a8
	if (!cr6.eq) goto loc_823581A8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357f48
	sub_82357F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8235817c
	goto loc_8235817C;
loc_823581A8:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_823581AC:
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82358184
	if (!cr6.eq) goto loc_82358184;
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

__attribute__((alias("__imp__sub_823581C8"))) PPC_WEAK_FUNC(sub_823581C8);
PPC_FUNC_IMPL(__imp__sub_823581C8) {
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
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r3,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_8235820C"))) PPC_WEAK_FUNC(sub_8235820C);
PPC_FUNC_IMPL(__imp__sub_8235820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358210"))) PPC_WEAK_FUNC(sub_82358210);
PPC_FUNC_IMPL(__imp__sub_82358210) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8235825c
	if (cr0.eq) goto loc_8235825C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r11,r11,-16148
	r11.s64 = r11.s64 + -16148;
	// stb r29,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r29.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82358260
	goto loc_82358260;
loc_8235825C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82358260:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82357fb0
	sub_82357FB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82358284"))) PPC_WEAK_FUNC(sub_82358284);
PPC_FUNC_IMPL(__imp__sub_82358284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358288"))) PPC_WEAK_FUNC(sub_82358288);
PPC_FUNC_IMPL(__imp__sub_82358288) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82358360
	if (!cr0.eq) goto loc_82358360;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-16136
	ctx.r4.s64 = r11.s64 + -16136;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82358210
	sub_82358210(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x823582f0
	goto loc_823582F0;
loc_823582D8:
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
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_823582F0:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823582d8
	if (!cr0.eq) goto loc_823582D8;
	// bl 0x82358160
	sub_82358160(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82358360
	if (cr0.eq) goto loc_82358360;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82358338
	goto loc_82358338;
loc_82358320:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82358338:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82358320
	if (!cr0.eq) goto loc_82358320;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,18840
	ctx.r3.s64 = r11.s64 + 18840;
	// bl 0x82272788
	sub_82272788(ctx, base);
loc_82358360:
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

__attribute__((alias("__imp__sub_82358378"))) PPC_WEAK_FUNC(sub_82358378);
PPC_FUNC_IMPL(__imp__sub_82358378) {
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
	// lwz r16,-16112(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16112);
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82358400
	if (cr0.eq) goto loc_82358400;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823583f4
	if (cr0.eq) goto loc_823583F4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_823583F4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82358404
	goto loc_82358404;
loc_82358400:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82358404:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82358380"))) PPC_WEAK_FUNC(sub_82358380);
PPC_FUNC_IMPL(__imp__sub_82358380) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82358400
	if (cr0.eq) goto loc_82358400;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82317a20
	sub_82317A20(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823583f4
	if (cr0.eq) goto loc_823583F4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_823583F4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82358404
	goto loc_82358404;
loc_82358400:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82358404:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82358414"))) PPC_WEAK_FUNC(sub_82358414);
PPC_FUNC_IMPL(__imp__sub_82358414) {
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

__attribute__((alias("__imp__sub_8235843C"))) PPC_WEAK_FUNC(sub_8235843C);
PPC_FUNC_IMPL(__imp__sub_8235843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358440"))) PPC_WEAK_FUNC(sub_82358440);
PPC_FUNC_IMPL(__imp__sub_82358440) {
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
	// lwz r16,-16040(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16040);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823584ac
	if (cr0.eq) goto loc_823584AC;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x823584f0
	goto loc_823584F0;
loc_823584AC:
	// li r11,5
	r11.s64 = 5;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823584e8
	if (cr0.eq) goto loc_823584E8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_823584E8:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823584F0:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82358448"))) PPC_WEAK_FUNC(sub_82358448);
PPC_FUNC_IMPL(__imp__sub_82358448) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358080
	sub_82358080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823584ac
	if (cr0.eq) goto loc_823584AC;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x823584f0
	goto loc_823584F0;
loc_823584AC:
	// li r11,5
	r11.s64 = 5;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823584e8
	if (cr0.eq) goto loc_823584E8;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_823584E8:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823584F0:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82358500"))) PPC_WEAK_FUNC(sub_82358500);
PPC_FUNC_IMPL(__imp__sub_82358500) {
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

__attribute__((alias("__imp__sub_82358528"))) PPC_WEAK_FUNC(sub_82358528);
PPC_FUNC_IMPL(__imp__sub_82358528) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82358018
	sub_82358018(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82358584"))) PPC_WEAK_FUNC(sub_82358584);
PPC_FUNC_IMPL(__imp__sub_82358584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358588"))) PPC_WEAK_FUNC(sub_82358588);
PPC_FUNC_IMPL(__imp__sub_82358588) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15952
	ctx.r4.s64 = r11.s64 + -15952;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32202
	r11.s64 = -2110390272;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31448
	ctx.r4.s64 = r11.s64 + -31448;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15964
	ctx.r4.s64 = r11.s64 + -15964;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32202
	r11.s64 = -2110390272;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31872
	ctx.r4.s64 = r11.s64 + -31872;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15976
	ctx.r4.s64 = r11.s64 + -15976;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32202
	r11.s64 = -2110390272;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-31672
	ctx.r4.s64 = r11.s64 + -31672;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358604"))) PPC_WEAK_FUNC(sub_82358604);
PPC_FUNC_IMPL(__imp__sub_82358604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358608"))) PPC_WEAK_FUNC(sub_82358608);
PPC_FUNC_IMPL(__imp__sub_82358608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-15928(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15928);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
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
	// beq 0x82358680
	if (cr0.eq) goto loc_82358680;
loc_82358644:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82358664
	if (cr0.eq) goto loc_82358664;
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
loc_82358664:
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
	// bne 0x82358644
	if (!cr0.eq) goto loc_82358644;
loc_82358680:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822714b0
	sub_822714B0(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82358610"))) PPC_WEAK_FUNC(sub_82358610);
PPC_FUNC_IMPL(__imp__sub_82358610) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r29.u32);
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
	// beq 0x82358680
	if (cr0.eq) goto loc_82358680;
loc_82358644:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82358664
	if (cr0.eq) goto loc_82358664;
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
loc_82358664:
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
	// bne 0x82358644
	if (!cr0.eq) goto loc_82358644;
loc_82358680:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822714b0
	sub_822714B0(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82358690"))) PPC_WEAK_FUNC(sub_82358690);
PPC_FUNC_IMPL(__imp__sub_82358690) {
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
	// bl 0x82271508
	sub_82271508(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823586B8"))) PPC_WEAK_FUNC(sub_823586B8);
PPC_FUNC_IMPL(__imp__sub_823586B8) {
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
	// lwz r16,-15840(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15840);
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
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-15856
	r11.s64 = r11.s64 + -15856;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82357a10
	sub_82357A10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823586C0"))) PPC_WEAK_FUNC(sub_823586C0);
PPC_FUNC_IMPL(__imp__sub_823586C0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82357790
	sub_82357790(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-15856
	r11.s64 = r11.s64 + -15856;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82357a10
	sub_82357A10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235870C"))) PPC_WEAK_FUNC(sub_8235870C);
PPC_FUNC_IMPL(__imp__sub_8235870C) {
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
	// bl 0x821e0250
	sub_821E0250(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358734"))) PPC_WEAK_FUNC(sub_82358734);
PPC_FUNC_IMPL(__imp__sub_82358734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358738"))) PPC_WEAK_FUNC(sub_82358738);
PPC_FUNC_IMPL(__imp__sub_82358738) {
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
	// lwz r16,-15784(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15784);
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
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-1692
	r11.s64 = r11.s64 + -1692;
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

__attribute__((alias("__imp__sub_82358740"))) PPC_WEAK_FUNC(sub_82358740);
PPC_FUNC_IMPL(__imp__sub_82358740) {
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82357b08
	sub_82357B08(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,-1692
	r11.s64 = r11.s64 + -1692;
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

__attribute__((alias("__imp__sub_8235878C"))) PPC_WEAK_FUNC(sub_8235878C);
PPC_FUNC_IMPL(__imp__sub_8235878C) {
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
	// bl 0x821e0250
	sub_821E0250(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823587B4"))) PPC_WEAK_FUNC(sub_823587B4);
PPC_FUNC_IMPL(__imp__sub_823587B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823587B8"))) PPC_WEAK_FUNC(sub_823587B8);
PPC_FUNC_IMPL(__imp__sub_823587B8) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82358824
	if (cr6.eq) goto loc_82358824;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// addi r29,r11,-15864
	r29.s64 = r11.s64 + -15864;
loc_823587E0:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x82358804
	if (!cr6.eq) goto loc_82358804;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x82358804
	if (cr6.eq) goto loc_82358804;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8235880c
	goto loc_8235880C;
loc_82358804:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8235880C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823592f0
	sub_823592F0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823587e0
	if (!cr6.eq) goto loc_823587E0;
loc_82358824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8235882C"))) PPC_WEAK_FUNC(sub_8235882C);
PPC_FUNC_IMPL(__imp__sub_8235882C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358830"))) PPC_WEAK_FUNC(sub_82358830);
PPC_FUNC_IMPL(__imp__sub_82358830) {
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
	// bl 0x82358740
	sub_82358740(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82358860
	if (cr0.eq) goto loc_82358860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82358860:
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

__attribute__((alias("__imp__sub_8235887C"))) PPC_WEAK_FUNC(sub_8235887C);
PPC_FUNC_IMPL(__imp__sub_8235887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358880"))) PPC_WEAK_FUNC(sub_82358880);
PPC_FUNC_IMPL(__imp__sub_82358880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,-15728(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15728);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,15072(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82358914
	if (cr6.eq) goto loc_82358914;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// beq cr6,0x823588dc
	if (cr6.eq) goto loc_823588DC;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_823588DC:
	// bl 0x82353998
	sub_82353998(ctx, base);
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x82360fe8
	sub_82360FE8(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82358914
	if (cr6.eq) goto loc_82358914;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358914:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82358888"))) PPC_WEAK_FUNC(sub_82358888);
PPC_FUNC_IMPL(__imp__sub_82358888) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,15072(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82358914
	if (cr6.eq) goto loc_82358914;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// beq cr6,0x823588dc
	if (cr6.eq) goto loc_823588DC;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_823588DC:
	// bl 0x82353998
	sub_82353998(ctx, base);
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x82360fe8
	sub_82360FE8(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82358914
	if (cr6.eq) goto loc_82358914;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358914:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8235891C"))) PPC_WEAK_FUNC(sub_8235891C);
PPC_FUNC_IMPL(__imp__sub_8235891C) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358944"))) PPC_WEAK_FUNC(sub_82358944);
PPC_FUNC_IMPL(__imp__sub_82358944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358948"))) PPC_WEAK_FUNC(sub_82358948);
PPC_FUNC_IMPL(__imp__sub_82358948) {
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
	// lwz r16,-15656(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15656);
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
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823589b0
	if (cr6.eq) goto loc_823589B0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-1436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82358998
	if (cr6.eq) goto loc_82358998;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
loc_82358998:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823607a0
	sub_823607A0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823589b0
	if (cr6.eq) goto loc_823589B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_823589B0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82358950"))) PPC_WEAK_FUNC(sub_82358950);
PPC_FUNC_IMPL(__imp__sub_82358950) {
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
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823589b0
	if (cr6.eq) goto loc_823589B0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-1436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82358998
	if (cr6.eq) goto loc_82358998;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
loc_82358998:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823607a0
	sub_823607A0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823589b0
	if (cr6.eq) goto loc_823589B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_823589B0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823589B8"))) PPC_WEAK_FUNC(sub_823589B8);
PPC_FUNC_IMPL(__imp__sub_823589B8) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823589E0"))) PPC_WEAK_FUNC(sub_823589E0);
PPC_FUNC_IMPL(__imp__sub_823589E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,-15584(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15584);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,15072(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82358a60
	if (cr6.eq) goto loc_82358A60;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r3,-1436(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1436);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82358a38
	if (cr6.eq) goto loc_82358A38;
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lwz r11,15072(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15072);
loc_82358A38:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82361138
	sub_82361138(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82358a60
	if (cr6.eq) goto loc_82358A60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358A60:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823589E8"))) PPC_WEAK_FUNC(sub_823589E8);
PPC_FUNC_IMPL(__imp__sub_823589E8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,15072(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82358a60
	if (cr6.eq) goto loc_82358A60;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r3,-1436(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1436);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82358a38
	if (cr6.eq) goto loc_82358A38;
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lwz r11,15072(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15072);
loc_82358A38:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82361138
	sub_82361138(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82358a60
	if (cr6.eq) goto loc_82358A60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358A60:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82358A68"))) PPC_WEAK_FUNC(sub_82358A68);
PPC_FUNC_IMPL(__imp__sub_82358A68) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358A90"))) PPC_WEAK_FUNC(sub_82358A90);
PPC_FUNC_IMPL(__imp__sub_82358A90) {
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
	// lwz r16,-15512(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15512);
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
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82358b04
	if (cr6.eq) goto loc_82358B04;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-1436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82358ae0
	if (cr6.eq) goto loc_82358AE0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
loc_82358AE0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82360df0
	sub_82360DF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82358afc
	if (cr6.eq) goto loc_82358AFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358AFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82358b08
	goto loc_82358B08;
loc_82358B04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82358B08:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82358A98"))) PPC_WEAK_FUNC(sub_82358A98);
PPC_FUNC_IMPL(__imp__sub_82358A98) {
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
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82358b04
	if (cr6.eq) goto loc_82358B04;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,-1436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82358ae0
	if (cr6.eq) goto loc_82358AE0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lwz r3,15072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 15072);
loc_82358AE0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82360df0
	sub_82360DF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82358afc
	if (cr6.eq) goto loc_82358AFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358AFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82358b08
	goto loc_82358B08;
loc_82358B04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82358B08:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82358B10"))) PPC_WEAK_FUNC(sub_82358B10);
PPC_FUNC_IMPL(__imp__sub_82358B10) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358B38"))) PPC_WEAK_FUNC(sub_82358B38);
PPC_FUNC_IMPL(__imp__sub_82358B38) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239d488
	sub_8239D488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82358B3C"))) PPC_WEAK_FUNC(sub_82358B3C);
PPC_FUNC_IMPL(__imp__sub_82358B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358B40"))) PPC_WEAK_FUNC(sub_82358B40);
PPC_FUNC_IMPL(__imp__sub_82358B40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239cdf0
	sub_8239CDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82358B44"))) PPC_WEAK_FUNC(sub_82358B44);
PPC_FUNC_IMPL(__imp__sub_82358B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358B48"))) PPC_WEAK_FUNC(sub_82358B48);
PPC_FUNC_IMPL(__imp__sub_82358B48) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,30672
	ctx.r4.s64 = r11.s64 + 30672;
	// lwz r30,15076(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 15076);
	// bl 0x8239e218
	sub_8239E218(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82358b80
	if (cr0.eq) goto loc_82358B80;
	// lwz r11,15076(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15076);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,15076(r31)
	PPC_STORE_U32(r31.u32 + 15076, r11.u32);
loc_82358B80:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r31,r11,-15448
	r31.s64 = r11.s64 + -15448;
loc_82358B88:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ec8e8
	sub_821EC8E8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82358B9C:
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
	// bne 0x82358b9c
	if (!cr0.eq) goto loc_82358B9C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x822767f8
	sub_822767F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82358be8
	if (cr0.eq) goto loc_82358BE8;
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
	// b 0x82358b88
	goto loc_82358B88;
loc_82358BE8:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18840
	ctx.r3.s64 = r11.s64 + 18840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82272530
	sub_82272530(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82358C04"))) PPC_WEAK_FUNC(sub_82358C04);
PPC_FUNC_IMPL(__imp__sub_82358C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358C08"))) PPC_WEAK_FUNC(sub_82358C08);
PPC_FUNC_IMPL(__imp__sub_82358C08) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-15400(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15400);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,15072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82358cb4
	if (cr6.eq) goto loc_82358CB4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x82358c50
	if (cr6.eq) goto loc_82358C50;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82358C50:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-15424
	ctx.r3.s64 = r11.s64 + -15424;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,15072(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 15072);
	// addi r30,r11,18840
	r30.s64 = r11.s64 + 18840;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823609f0
	sub_823609F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356b40
	sub_82356B40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272458
	sub_82272458(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-15436
	ctx.r3.s64 = r11.s64 + -15436;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,15072(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 15072);
	// bl 0x823615b0
	sub_823615B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272458
	sub_82272458(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82358cb4
	if (cr6.eq) goto loc_82358CB4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358CB4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82358C10"))) PPC_WEAK_FUNC(sub_82358C10);
PPC_FUNC_IMPL(__imp__sub_82358C10) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,15072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15072);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82358cb4
	if (cr6.eq) goto loc_82358CB4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq cr6,0x82358c50
	if (cr6.eq) goto loc_82358C50;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82358C50:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-15424
	ctx.r3.s64 = r11.s64 + -15424;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,15072(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 15072);
	// addi r30,r11,18840
	r30.s64 = r11.s64 + 18840;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823609f0
	sub_823609F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82356b40
	sub_82356B40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272458
	sub_82272458(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-15436
	ctx.r3.s64 = r11.s64 + -15436;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,15072(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 15072);
	// bl 0x823615b0
	sub_823615B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272458
	sub_82272458(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82358cb4
	if (cr6.eq) goto loc_82358CB4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358CB4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82358CBC"))) PPC_WEAK_FUNC(sub_82358CBC);
PPC_FUNC_IMPL(__imp__sub_82358CBC) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358CE4"))) PPC_WEAK_FUNC(sub_82358CE4);
PPC_FUNC_IMPL(__imp__sub_82358CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358CE8"))) PPC_WEAK_FUNC(sub_82358CE8);
PPC_FUNC_IMPL(__imp__sub_82358CE8) {
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
	// lwz r16,-15312(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -15312);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// beq cr6,0x82358d20
	if (cr6.eq) goto loc_82358D20;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82358D20:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-15336
	ctx.r3.s64 = r11.s64 + -15336;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r29,r11,18840
	r29.s64 = r11.s64 + 18840;
	// ble 0x82358d64
	if (!cr0.gt) goto loc_82358D64;
loc_82358D44:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354e68
	sub_82354E68(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x82358d44
	if (cr6.lt) goto loc_82358D44;
loc_82358D64:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82272458
	sub_82272458(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82358d7c
	if (cr6.eq) goto loc_82358D7C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358D7C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82358CF0"))) PPC_WEAK_FUNC(sub_82358CF0);
PPC_FUNC_IMPL(__imp__sub_82358CF0) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-1436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -1436);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// beq cr6,0x82358d20
	if (cr6.eq) goto loc_82358D20;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_82358D20:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,-15336
	ctx.r3.s64 = r11.s64 + -15336;
	// bl 0x82358b48
	sub_82358B48(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r29,r11,18840
	r29.s64 = r11.s64 + 18840;
	// ble 0x82358d64
	if (!cr0.gt) goto loc_82358D64;
loc_82358D44:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354e68
	sub_82354E68(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x82353d88
	sub_82353D88(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x82358d44
	if (cr6.lt) goto loc_82358D44;
loc_82358D64:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82272458
	sub_82272458(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82358d7c
	if (cr6.eq) goto loc_82358D7C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_82358D7C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82358D84"))) PPC_WEAK_FUNC(sub_82358D84);
PPC_FUNC_IMPL(__imp__sub_82358D84) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358DAC"))) PPC_WEAK_FUNC(sub_82358DAC);
PPC_FUNC_IMPL(__imp__sub_82358DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

